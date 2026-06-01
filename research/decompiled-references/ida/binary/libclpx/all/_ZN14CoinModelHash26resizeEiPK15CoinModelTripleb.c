__int64 __fastcall CoinModelHash2::resize(CoinModelHash2 *this, int a2, _DWORD *a3, char a4)
{
  __int64 result; // rax
  void *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // ebp
  _DWORD *v12; // rbx
  int v13; // edi
  int v14; // edx
  int *v15; // r15
  int v16; // ebx
  int v17; // r12d
  int v18; // ebp
  int v19; // eax
  __int64 v20; // rsi
  _DWORD *v21; // rax
  int *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r8d
  _DWORD *v26; // rsi

  result = *((unsigned int *)this + 3);
  if ( (int)result >= a2 )
  {
    if ( !a4 )
      return result;
  }
  else
  {
    *((_DWORD *)this + 3) = a2;
    v7 = *(void **)this;
    if ( v7 )
    {
      operator delete[](v7);
      a2 = *((_DWORD *)this + 3);
    }
    v8 = 4 * a2;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    *(_QWORD *)this = operator new[](8 * v8);
    result = *((unsigned int *)this + 3);
  }
  if ( 4 * (int)result > 0 )
  {
    v9 = *(_QWORD *)this;
    v10 = (unsigned int)(4 * result) >> 1;
    LODWORD(result) = 0;
    do
    {
      result = (unsigned int)(result + 1);
      v9 += 16;
      *(_OWORD *)(v9 - 16) = -1;
    }
    while ( (unsigned int)result < v10 );
  }
  v11 = 0;
  v12 = a3;
  v13 = *((_DWORD *)this + 2);
  if ( v13 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v12[1];
        if ( v14 >= 0 )
          break;
        ++v11;
        v12 += 4;
        if ( v11 >= v13 )
          goto LABEL_16;
      }
      result = *(_QWORD *)this + 8LL * (int)CoinModelHash2::hashValue(this, *v12 & 0x7FFFFFFF, v14);
      if ( *(_DWORD *)result == -1 )
        *(_DWORD *)result = v11;
      v13 = *((_DWORD *)this + 2);
      ++v11;
      v12 += 4;
    }
    while ( v11 < v13 );
LABEL_16:
    *((_DWORD *)this + 4) = -1;
    if ( v13 > 0 )
    {
      v15 = a3 + 1;
      v16 = 0;
      while ( 2 )
      {
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 >= 0 )
            break;
LABEL_18:
          ++v16;
          v15 += 4;
          if ( v16 >= v13 )
            return result;
        }
        v18 = *(v15 - 1) & 0x7FFFFFFF;
        v19 = CoinModelHash2::hashValue(this, v18, v17);
        v20 = *(_QWORD *)this;
        while ( 1 )
        {
          v22 = (int *)(v20 + 8LL * v19);
          result = *v22;
          if ( (_DWORD)result == v16 )
            break;
          v21 = &a3[4 * result];
          if ( (*v21 & 0x7FFFFFFF) == v18 && v21[1] == v17 )
          {
            printf("** duplicate entry %d %d\n", v18, v17);
            abort();
          }
          v19 = v22[1];
          if ( v19 == -1 )
          {
            v23 = *((int *)this + 4);
            v13 = *((_DWORD *)this + 2);
            LODWORD(result) = v23 + 1;
            v24 = v20 + 8 * v23 + 8;
            result = (int)result;
            do
            {
              v25 = result;
              if ( (int)result > v13 )
              {
                *((_DWORD *)this + 4) = result;
                puts("** too many entries");
                abort();
              }
              v26 = (_DWORD *)v24;
              ++result;
              v24 += 8;
            }
            while ( *v26 != -1 );
            *((_DWORD *)this + 4) = v25;
            v22[1] = v25;
            *v26 = v16;
            goto LABEL_18;
          }
        }
        v13 = *((_DWORD *)this + 2);
        ++v16;
        v15 += 4;
        if ( v16 < v13 )
          continue;
        break;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 4) = -1;
  }
  return result;
}

