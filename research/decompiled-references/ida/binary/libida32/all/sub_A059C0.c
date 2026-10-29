_DWORD *__fastcall sub_A059C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned int v10; // eax
  _DWORD *result; // rax
  __int64 v12; // r12
  _DWORD *i; // rdx
  __int64 v14; // r14
  _QWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  _DWORD *j; // rdx
  _QWORD *v19; // [rsp+18h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_DWORD *)sub_220C370(216LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v12 = v9 + 216 * v8;
    for ( i = &result[54 * *(unsigned int *)(a1 + 16)]; i != result; *(result - 52) = -1 )
    {
      *result = -1;
      result += 54;
      *((_BYTE *)result - 212) = -1;
    }
    v14 = v9;
    if ( v12 == v9 )
      return (_DWORD *)operator delete();
    while ( 1 )
    {
      if ( *(_DWORD *)v14 == -1 )
      {
        if ( *(_BYTE *)(v14 + 4) != 0xFF || *(_DWORD *)(v14 + 8) != -1 )
          goto LABEL_10;
      }
      else if ( *(_DWORD *)v14 != -2 || *(_BYTE *)(v14 + 4) != 0xFE || *(_DWORD *)(v14 + 8) != -2 )
      {
LABEL_10:
        sub_9FE290((__int64 *)a1, v14, &v19);
        v15 = v19;
        *v19 = *(_QWORD *)v14;
        *((_DWORD *)v15 + 2) = *(_DWORD *)(v14 + 8);
        v16 = *(_DWORD *)(v14 + 16);
        v15[4] = 0x100000000LL;
        *((_DWORD *)v15 + 4) = v16;
        v15[3] = v15 + 5;
        if ( *(_DWORD *)(v14 + 32) )
          sub_9F0D60(v15 + 3, (__int64 *)(v14 + 24));
        ++*(_DWORD *)(a1 + 8);
        sub_9FCFE0((char **)(v14 + 24));
      }
      v14 += 216;
      if ( v12 == v14 )
        return (_DWORD *)operator delete();
    }
  }
  v17 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  for ( j = &result[54 * v17]; j != result; *(result - 52) = -1 )
  {
    *result = -1;
    result += 54;
    *((_BYTE *)result - 212) = -1;
  }
  return result;
}

