_QWORD *__fastcall sub_2055310(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  __int64 i; // r13
  __int64 v18; // r15
  bool v19; // cc
  __int64 v20; // rdx
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r15
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  _QWORD *j; // rdx
  _QWORD v29[2]; // [rsp+10h] [rbp-58h] BYREF
  int v30; // [rsp+20h] [rbp-48h]

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
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 32 * v8;
    LODWORD(v29[0]) = -1;
    BYTE4(v29[0]) = 1;
    v14 = v9 + v13;
    v15 = v29[0];
    *(_QWORD *)(a1 + 8) = 0;
    v16 = &result[4 * v12];
    v30 = 0;
    for ( v29[1] = -1; v16 != result; *(result - 3) = -1 )
    {
      *result = v15;
      result += 4;
      *((_DWORD *)result - 4) = 0;
    }
    if ( v14 != v9 )
    {
      for ( i = v9; v14 != i; i += 32 )
      {
        while ( *(_DWORD *)i == -1 )
        {
          if ( !*(_BYTE *)(i + 4) || *(_DWORD *)(i + 16) || *(_QWORD *)(i + 8) != -1 )
            goto LABEL_10;
          i += 32;
          if ( v14 == i )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
        if ( *(_DWORD *)i != -2 || *(_BYTE *)(i + 4) || *(_DWORD *)(i + 16) || *(_QWORD *)(i + 8) != -2 )
        {
LABEL_10:
          sub_2052960((__int64 *)a1, (int *)i, v29);
          v18 = v29[0];
          *(_DWORD *)v29[0] = *(_DWORD *)i;
          v19 = *(_DWORD *)(v18 + 16) <= 0x40u;
          *(_BYTE *)(v18 + 4) = *(_BYTE *)(i + 4);
          v20 = v18;
          if ( !v19 )
          {
            v21 = *(void **)(v18 + 8);
            if ( v21 )
            {
              operator delete[](v21);
              v20 = v29[0];
            }
          }
          *(_QWORD *)(v18 + 8) = *(_QWORD *)(i + 8);
          v22 = *(_QWORD *)(i + 24);
          *(_DWORD *)(v18 + 16) = *(_DWORD *)(i + 16);
          *(_QWORD *)(i + 24) = 0;
          *(_DWORD *)(i + 16) = 0;
          *(_QWORD *)(v20 + 24) = v22;
          v23 = *(_QWORD *)(i + 24);
          ++*(_DWORD *)(a1 + 8);
          if ( v23 )
          {
            if ( *(_DWORD *)(v23 + 32) > 0x40u )
            {
              v24 = *(void **)(v23 + 24);
              if ( v24 )
                operator delete[](v24);
            }
            sub_20CC0C0(v23);
            sub_20C9BF0(v23);
          }
          if ( *(_DWORD *)(i + 16) > 0x40u )
          {
            v25 = *(void **)(i + 8);
            if ( v25 )
              operator delete[](v25);
          }
        }
      }
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v26 = *(unsigned int *)(a1 + 16);
    LODWORD(v29[0]) = -1;
    BYTE4(v29[0]) = 1;
    v27 = v29[0];
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[4 * v26]; j != result; *(result - 3) = -1 )
    {
      *result = v27;
      result += 4;
      *((_DWORD *)result - 4) = 0;
    }
  }
  return result;
}
