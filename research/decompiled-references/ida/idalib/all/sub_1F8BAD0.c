void __fastcall sub_1F8BAD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  char **v12; // rsi
  char *v13; // rdi
  unsigned __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int v17; // esi
  int v18; // r9d
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __m128 v20[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v19 = a2;
  if ( !v2 || !*(_BYTE *)(v2 + 9267) )
  {
    v6 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( v6[29] < 0 )
          goto LABEL_11;
        v9 = *(unsigned int *)(a1 + 440);
        v10 = *(_QWORD *)(a1 + 424);
        if ( !(_DWORD)v9 )
          break;
        v11 = (v9 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
        v12 = (char **)(v10 + 16LL * v11);
        v13 = *v12;
        if ( *v12 != v6 )
        {
          v17 = 1;
          if ( v13 == (char *)-4096LL )
            break;
          while ( 1 )
          {
            v18 = v17 + 1;
            v11 = (v9 - 1) & (v17 + v11);
            v12 = (char **)(v10 + 16LL * v11);
            if ( *v12 == v6 )
              break;
            if ( *v12 == (char *)-4096LL )
              goto LABEL_14;
            v17 = v18;
          }
        }
        sub_1F75940(v20, v12, (_QWORD *)(16 * v9 + v10), a1 + 424, 1);
        v14 = v20[0].m128_u64[0];
LABEL_8:
        v15 = (_QWORD *)(*(_QWORD *)(a1 + 424) + 16LL * *(unsigned int *)(a1 + 440));
        sub_1F75940(v20, v15, v15, a1 + 424, 1);
        if ( v14 == v20[0].m128_u64[0] || *(_QWORD *)(v14 + 8) > 0x13u )
          return;
LABEL_11:
        v6 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 48LL))(v6);
        if ( !v6 )
          goto LABEL_12;
      }
LABEL_14:
      sub_1F75940(
        v20,
        (_QWORD *)(v10 + 16LL * (unsigned int)v9),
        (_QWORD *)(v10 + 16LL * (unsigned int)v9),
        a1 + 424,
        1);
      v14 = v20[0].m128_u64[0];
      goto LABEL_8;
    }
LABEL_12:
    v16 = sub_1F8B440(a1 + 1288, &v19, v4, v5, v7, v8);
    sub_1F705B0(v16, 11, 0);
  }
}
