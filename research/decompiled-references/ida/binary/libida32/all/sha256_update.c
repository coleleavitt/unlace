unsigned __int64 __fastcall sha256_update(_DWORD *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned __int64 result; // rax
  unsigned int v7; // edx
  bool v8; // cf
  _DWORD *v9; // rbp
  unsigned int *v10; // r13
  _QWORD *v11; // rax
  unsigned int *v12; // rax
  unsigned int v13; // edx
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rsi
  char *v16; // rax
  char *v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r8
  char *v22; // rbp
  char *v23; // r14
  unsigned int v24; // r15d
  unsigned int v25; // r15d
  unsigned int v26; // edx
  __int64 v27; // rcx

  v3 = a3;
  result = *a1 & 0x3F;
  v7 = 64 - result;
  v8 = __CFADD__((_DWORD)v3, *a1);
  *a1 += v3;
  if ( v8 )
    ++a1[1];
  v9 = a1 + 10;
  if ( (unsigned int)v3 >= v7 )
  {
    v10 = a1 + 9;
    do
    {
      v11 = (_QWORD *)((char *)v9 + result);
      if ( v7 >= 8 )
      {
        *v11 = *(_QWORD *)a2;
        *(_QWORD *)((char *)v11 + v7 - 8) = *(_QWORD *)&a2[v7 - 8];
        v15 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v16 = (char *)v11 - v15;
        v17 = (char *)(a2 - v16);
        v18 = (v7 + (_DWORD)v16) & 0xFFFFFFF8;
        if ( v18 >= 8 )
        {
          v19 = v18 & 0xFFFFFFF8;
          v20 = 0;
          do
          {
            v21 = v20;
            v20 += 8;
            *(_QWORD *)(v15 + v21) = *(_QWORD *)&v17[v21];
          }
          while ( v20 < v19 );
        }
      }
      else if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)v11 = *(_DWORD *)a2;
        *(_DWORD *)((char *)v11 + v7 - 4) = *(_DWORD *)&a2[v7 - 4];
      }
      else if ( v7 )
      {
        *(_BYTE *)v11 = *a2;
        if ( (v7 & 2) != 0 )
          *(_WORD *)((char *)v11 + v7 - 2) = *(_WORD *)&a2[v7 - 2];
      }
      a2 += v7;
      v3 = (unsigned int)v3 - v7;
      v12 = a1 + 25;
      do
      {
        v13 = *v12--;
        v12[1] = _byteswap_ulong(v13);
      }
      while ( v10 != v12 );
      sub_829560((__int64)a1);
      result = 0;
      v7 = 64;
    }
    while ( (unsigned int)v3 > 0x3F );
    result = 0;
  }
  v14 = (_QWORD *)((char *)v9 + result);
  if ( (unsigned int)v3 >= 8 )
  {
    *v14 = *(_QWORD *)a2;
    *(_QWORD *)((char *)v14 + (unsigned int)v3 - 8) = *(_QWORD *)&a2[(unsigned int)v3 - 8];
    result = (unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (char *)v14 - result;
    v23 = (char *)(a2 - v22);
    v24 = ((_DWORD)v22 + v3) & 0xFFFFFFF8;
    if ( v24 >= 8 )
    {
      v25 = v24 & 0xFFFFFFF8;
      v26 = 0;
      do
      {
        v27 = v26;
        v26 += 8;
        *(_QWORD *)(result + v27) = *(_QWORD *)&v23[v27];
      }
      while ( v26 < v25 );
    }
  }
  else if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)v14 = *(_DWORD *)a2;
    result = *(unsigned int *)&a2[v3 - 4];
    *(_DWORD *)((char *)v14 + v3 - 4) = result;
  }
  else if ( (_DWORD)v3 )
  {
    result = (unsigned __int8)*a2;
    *(_BYTE *)v14 = result;
    if ( (v3 & 2) != 0 )
    {
      result = *(unsigned __int16 *)&a2[v3 - 2];
      *(_WORD *)((char *)v14 + v3 - 2) = result;
    }
  }
  return result;
}

