unsigned __int64 __fastcall sub_1DBE010(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // r8
  unsigned int v8; // ecx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // r9
  unsigned int v17; // edi
  unsigned int v18; // eax
  int v19; // r10d
  __int64 v20; // rdi
  int i; // eax
  __int64 v22; // [rsp+0h] [rbp-58h]
  __m128 v23[4]; // [rsp+10h] [rbp-48h] BYREF

  v22 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
    v22 = sub_1DB81F0(a2, a2, a3, a4);
LABEL_3:
  v5 = v22;
  while ( 1 )
  {
    v6 = *(_BYTE *)(a1 + 8) & 1;
    if ( v6 )
    {
      v7 = a1 + 16;
      v8 = ((unsigned __int8)((unsigned int)v5 >> 9) ^ (unsigned __int8)((unsigned int)v5 >> 4)) & 3;
      v9 = (_QWORD *)(a1
                    + 16
                    + 16LL * (((unsigned __int8)((unsigned int)v5 >> 9) ^ (unsigned __int8)((unsigned int)v5 >> 4)) & 3));
      if ( v5 == *v9 )
        goto LABEL_6;
      v19 = 3;
      if ( *v9 != -4096 )
      {
LABEL_31:
        for ( i = 1; ; ++i )
        {
          v8 = v19 & (i + v8);
          v9 = (_QWORD *)(v7 + 16LL * v8);
          if ( v5 == *v9 )
            break;
          if ( *v9 == -4096 )
          {
            if ( v6 )
              goto LABEL_28;
            v16 = *(_QWORD *)(a1 + 16);
            v17 = *(_DWORD *)(a1 + 24);
            goto LABEL_24;
          }
        }
        if ( !v6 )
        {
          v7 = *(_QWORD *)(a1 + 16);
          v18 = *(_DWORD *)(a1 + 24);
          goto LABEL_19;
        }
        v7 = a1 + 16;
LABEL_6:
        v10 = 64;
LABEL_7:
        sub_1DBDFA0(v23, v9, (_QWORD *)(v7 + v10), a1 + 8, 1);
        v11 = v23[0].m128_u64[0];
        goto LABEL_8;
      }
LABEL_28:
      v7 = a1 + 16;
      v20 = 64;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 16);
      v17 = *(_DWORD *)(a1 + 24);
      v7 = v16;
      v18 = v17;
      if ( v17 )
      {
        v19 = v17 - 1;
        v8 = (v17 - 1) & (((unsigned int)v5 >> 4) ^ ((unsigned int)v5 >> 9));
        v9 = (_QWORD *)(v16 + 16LL * v8);
        if ( v5 == *v9 )
        {
LABEL_19:
          v10 = 16LL * v18;
          goto LABEL_7;
        }
        if ( *v9 != -4096 )
          goto LABEL_31;
LABEL_24:
        v7 = v16;
      }
      v20 = 16LL * v17;
    }
    sub_1DBDFA0(v23, (_QWORD *)(v7 + v20), (_QWORD *)(v7 + v20), a1 + 8, 1);
    v11 = v23[0].m128_u64[0];
LABEL_8:
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v12 = a1 + 16;
      v13 = 64;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = 16LL * *(unsigned int *)(a1 + 24);
    }
    sub_1DBDFA0(v23, (_QWORD *)(v12 + v13), (_QWORD *)(v12 + v13), a1 + 8, 1);
    if ( v23[0].m128_u64[0] != v11 )
      return v11 + 8;
    if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 58 <= 4 )
    {
      v14 = *(_QWORD *)(v5 + 96);
      if ( (v14 & 3) == 0 )
      {
        v5 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v5 )
          continue;
      }
    }
    if ( !*(_BYTE *)(a1 + 113) )
      return 0;
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      return 0;
    goto LABEL_3;
  }
}
