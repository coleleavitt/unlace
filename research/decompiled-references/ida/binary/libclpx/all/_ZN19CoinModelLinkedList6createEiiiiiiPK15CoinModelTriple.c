unsigned __int64 __fastcall CoinModelLinkedList::create(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v9; // r15d
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rdi
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rcx
  signed int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  __int64 v31; // r10
  __int64 v32; // rsi
  int v33; // r8d
  int i; // edx
  int v35; // eax
  int *v36; // rcx
  __int64 v37; // rax
  int *v38; // r9
  __int64 v39; // r14
  __int64 v40; // rdi
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-48h]

  *((_DWORD *)a1 + 12) = a6;
  if ( a2 < a4 )
    a2 = a4;
  if ( *((_DWORD *)a1 + 9) >= a2 )
    a2 = *((_DWORD *)a1 + 9);
  if ( a3 < a7 )
    a3 = a7;
  if ( *((_DWORD *)a1 + 11) >= a3 )
    a3 = *((_DWORD *)a1 + 11);
  if ( (unsigned __int64)a3 > 0x1FFFFFFFFFFFFFFELL
    || (v9 = a3,
        v11 = a2,
        v43 = 4LL * a3,
        *a1 = operator new[](v43),
        v12 = operator new[](v43),
        *((_DWORD *)a1 + 11) = v9,
        a1[1] = v12,
        v13 = a2 + 1,
        v13 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v14 = 4 * v13;
  a1[2] = operator new[](v14);
  result = operator new[](v14);
  a1[3] = result;
  *((_DWORD *)a1 + 10) = a7;
  *((_DWORD *)a1 + 9) = a2;
  v16 = a1[2];
  if ( a4 > 0 )
  {
    if ( (result >= v16 + 16 || v16 >= result + 16) && (unsigned int)a4 > 0xE )
    {
      v17 = 0;
      v18 = -(int)(v16 >> 2) & 3;
      if ( v18 )
      {
        *(_DWORD *)v16 = -1;
        v17 = 1;
        *(_DWORD *)result = -1;
        if ( v18 != 1 )
        {
          *(_DWORD *)(v16 + 4) = -1;
          v17 = 2;
          *(_DWORD *)(result + 4) = -1;
          if ( v18 != 2 )
          {
            *(_DWORD *)(v16 + 8) = -1;
            v17 = 3;
            *(_DWORD *)(result + 8) = -1;
          }
        }
      }
      v19 = a4 - v18;
      v20 = 0;
      v21 = 4LL * v18;
      v22 = 0;
      v23 = v16 + v21;
      v24 = result + v21;
      do
      {
        ++v22;
        *(_OWORD *)(v23 + v20) = -1;
        *(_OWORD *)(v24 + v20) = -1;
        v20 += 16;
      }
      while ( v19 >> 2 > v22 );
      v25 = (v19 & 0xFFFFFFFC) + v17;
      if ( v19 != (v19 & 0xFFFFFFFC) )
      {
        *(_DWORD *)(v16 + 4LL * v25) = -1;
        *(_DWORD *)(result + 4LL * v25) = -1;
        v26 = v25 + 1;
        if ( a4 > v25 + 1 )
        {
          *(_DWORD *)(v16 + 4LL * v26) = -1;
          *(_DWORD *)(result + 4LL * v26) = -1;
          v27 = v25 + 2;
          if ( a4 > v25 + 2 )
          {
            *(_DWORD *)(v16 + 4LL * v27) = -1;
            *(_DWORD *)(result + 4LL * v27) = -1;
            v28 = v25 + 3;
            if ( a4 > v25 + 3 )
            {
              *(_DWORD *)(v16 + 4LL * v28) = -1;
              *(_DWORD *)(result + 4LL * v28) = -1;
              v29 = v25 + 4;
              if ( a4 > v25 + 4 )
              {
                v30 = v25 + 5;
                *(_DWORD *)(v16 + 4LL * v29) = -1;
                *(_DWORD *)(result + 4LL * v29) = -1;
                if ( a4 > v30 )
                {
                  *(_DWORD *)(v16 + 4LL * v30) = -1;
                  *(_DWORD *)(result + 4LL * v30) = -1;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v42 = 0;
      do
      {
        *(_DWORD *)(v16 + v42) = -1;
        *(_DWORD *)(result + v42) = -1;
        v42 += 4;
      }
      while ( v42 != 4LL * (unsigned int)(a4 - 1) + 4 );
    }
    v11 = *((int *)a1 + 9);
  }
  *(_DWORD *)(v16 + 4 * v11) = -1;
  *(_DWORD *)(result + 4LL * *((int *)a1 + 9)) = -1;
  if ( a7 > 0 )
  {
    v31 = *a1;
    v32 = 0;
    v33 = -1;
    for ( i = 0; i != a7; ++i )
    {
      v35 = *(_DWORD *)(a8 + 4 * v32 + 4);
      v36 = (int *)(v31 + v32);
      if ( v35 < 0 )
      {
        if ( v33 == -1 )
        {
          result = *((int *)a1 + 9);
          *(_DWORD *)(v16 + 4 * result) = i;
          *v36 = -1;
        }
        else
        {
          result = a1[1];
          *(_DWORD *)(result + 4LL * v33) = i;
          *v36 = v33;
        }
        v33 = i;
      }
      else
      {
        if ( !*((_DWORD *)a1 + 12) )
          v35 = *(_DWORD *)(a8 + 4 * v32) & 0x7FFFFFFF;
        v37 = 4LL * v35;
        v38 = (int *)(v16 + v37);
        result = a1[3] + v37;
        if ( *v38 < 0 )
        {
          *v38 = i;
          *v36 = -1;
        }
        else
        {
          v39 = *(int *)result;
          *(_DWORD *)(a1[1] + 4 * v39) = i;
          *v36 = v39;
        }
        *(_DWORD *)result = i;
      }
      v32 += 4;
    }
    if ( v33 != -1 )
    {
      *(_DWORD *)(a1[1] + 4LL * v33) = -1;
      result = a1[3];
      *(_DWORD *)(result + 4LL * *((int *)a1 + 9)) = v33;
    }
  }
  if ( a4 > 0 )
  {
    result = a1[3];
    v40 = result + 4LL * (unsigned int)(a4 - 1) + 4;
    do
    {
      v41 = *(_DWORD *)result;
      if ( *(int *)result >= 0 )
      {
        *(_DWORD *)(a1[1] + 4LL * v41) = -1;
        *(_DWORD *)result = v41;
      }
      result += 4LL;
    }
    while ( result != v40 );
  }
  *((_DWORD *)a1 + 8) = a4;
  return result;
}

