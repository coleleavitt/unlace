_QWORD *__fastcall sub_209C340(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *i; // rcx
  __int64 v7; // r10
  int v8; // r11d
  unsigned int v9; // r8d
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  int v12; // ecx
  int v13; // ebp
  _QWORD *v14; // r12
  int v15; // ecx

  v3 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v3 )
  {
    result = *(_QWORD **)(a1 + 8);
    v5 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = (_QWORD *)(a1 + 8);
    v5 = 16;
  }
  for ( i = &result[v5]; result != i; result += 2 )
    *result = -4096;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      result = *(_QWORD **)a2;
      if ( *(_QWORD *)a2 != -4096 && result != (_QWORD *)-8192LL )
        break;
      a2 += 16;
      if ( a3 == a2 )
        return result;
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v7 = a1 + 8;
      v8 = 7;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v15 )
      {
        *(_QWORD *)&dword_0 = *(_QWORD *)a2;
        BUG();
      }
      v8 = v15 - 1;
    }
LABEL_10:
    v9 = v8 & (((unsigned int)result >> 9) ^ ((unsigned int)result >> 4));
    v10 = (_QWORD *)(v7 + 16LL * v9);
    v11 = (_QWORD *)*v10;
    if ( result != (_QWORD *)*v10 )
    {
      v13 = 1;
      v14 = nullptr;
      if ( v11 != (_QWORD *)-4096LL )
      {
        while ( 1 )
        {
          if ( v11 == (_QWORD *)-8192LL && !v14 )
            v14 = v10;
          v9 = v8 & (v13 + v9);
          v10 = (_QWORD *)(v7 + 16LL * v9);
          v11 = (_QWORD *)*v10;
          if ( result == (_QWORD *)*v10 )
            break;
          if ( v11 == (_QWORD *)-4096LL )
          {
            if ( v14 )
              v10 = v14;
            break;
          }
          ++v13;
        }
      }
    }
    *v10 = result;
    v10[1] = *(_QWORD *)(a2 + 8);
    result = (_QWORD *)((2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u);
    *(_DWORD *)a1 = (_DWORD)result;
    while ( 1 )
    {
      a2 += 16;
      if ( a3 == a2 )
        break;
      result = *(_QWORD **)a2;
      if ( *(_QWORD *)a2 != -4096 && result != (_QWORD *)-8192LL )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v7 = a1 + 8;
          v8 = 7;
        }
        else
        {
          v12 = *(_DWORD *)(a1 + 16);
          v7 = *(_QWORD *)(a1 + 8);
          if ( !v12 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)a2;
            BUG();
          }
          v8 = v12 - 1;
        }
        goto LABEL_10;
      }
    }
  }
  return result;
}
