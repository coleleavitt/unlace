__int64 __fastcall sub_1A471B0(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rsi
  int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rdi
  int v24; // edi
  __int64 v25; // r8
  int i; // esi
  int v27; // r8d
  __int64 v28; // rsi
  __int64 v29[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = sub_A85080(a1[31], (__int64)a2);
  v8 = (__int64 *)(v3 + 8 * v4);
  if ( (__int64 *)v3 == v8 )
    return 0;
  v9 = (__int64 *)v3;
  while ( 1 )
  {
    v10 = *v9;
    v29[0] = v10;
    if ( v10 )
    {
      v5 = *(unsigned int *)(v10 + 416);
      v4 = a1[1391];
      if ( v5 < (a1[1392] - v4) >> 2 )
      {
        v4 = *(unsigned int *)(v4 + 4 * v5);
        if ( (_DWORD)v4 )
          return 1;
      }
    }
    v11 = sub_1A416F0((__int64)a1, a2, v4, v5, v6, v7);
    if ( *(_DWORD *)(v11 + 8) )
    {
      v12 = *(_DWORD *)(v11 + 16);
      v13 = *(_QWORD *)v11;
      if ( v12 )
      {
        v14 = v12 - 1;
        v15 = (v12 - 1) & ((LODWORD(v29[0]) >> 9) ^ (LODWORD(v29[0]) >> 4));
        v16 = *(_QWORD *)(v13 + 8LL * v15);
        if ( v29[0] == v16 )
          return 1;
        if ( v16 != -4096 )
        {
          for ( i = 1; ; i = v27 )
          {
            v27 = i + 1;
            v15 = v14 & (i + v15);
            v28 = *(_QWORD *)(v13 + 8LL * v15);
            if ( v29[0] == v28 )
              break;
            if ( v28 == -4096 )
              goto LABEL_11;
          }
          return 1;
        }
      }
LABEL_11:
      if ( ((*(_DWORD *)(v29[0] + 36) - 6) & 0xFFFFFFFD) == 0 )
      {
        v18 = sub_FEEE40(v29[0]);
        v19 = *(_DWORD *)(v11 + 16);
        v20 = *(_QWORD *)v11;
        if ( v19 )
        {
          v21 = v19 - 1;
          v22 = (v19 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
          v23 = *(_QWORD *)(v20 + 8LL * v22);
          if ( v18 == v23 )
            return 1;
          if ( v23 != -4096 )
          {
            v24 = 1;
            do
            {
              v22 = v21 & (v24 + v22);
              v25 = *(_QWORD *)(v20 + 8LL * v22);
              if ( v18 == v25 )
                return 1;
              ++v24;
            }
            while ( v25 != -4096 );
          }
        }
      }
      a2 = v29;
      if ( sub_1A3FC10(v11, v29) )
        return 1;
    }
    if ( v8 == ++v9 )
      return 0;
  }
}
