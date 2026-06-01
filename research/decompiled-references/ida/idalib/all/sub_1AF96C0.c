__int64 __fastcall sub_1AF96C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // r11d
  unsigned int v20; // r10d
  __int64 v21; // rsi
  int i; // ecx
  __int64 v24; // [rsp+8h] [rbp-60h]
  unsigned int v25; // [rsp+18h] [rbp-50h]
  __m128 v26[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a3;
  v5 = sub_1AEE450(a2);
  v24 = v5;
  if ( (_DWORD)v4 == -1 )
    return 0;
  v6 = 1688 * v4;
  v25 = ((unsigned int)v5 >> 4) ^ ((unsigned int)v5 >> 9);
  while ( 1 )
  {
    v14 = v6 + *(_QWORD *)(*(_QWORD *)(a1 + 336) + 6776LL * *(unsigned int *)(a1 + 344) - 6776);
    v15 = *(_BYTE *)(v14 + 728) & 1;
    if ( v15 )
    {
      v7 = v14 + 736;
      v8 = v14 + 736;
      v9 = (_QWORD *)(v14 + 736 + 24LL * (v25 & 7));
      if ( v24 == *v9 )
      {
LABEL_4:
        v10 = 192;
      }
      else
      {
        if ( *v9 == -4096 )
        {
LABEL_29:
          v8 = v7;
          v21 = 192;
          goto LABEL_18;
        }
        v20 = v25 & 7;
        v19 = 7;
LABEL_20:
        for ( i = 1; ; ++i )
        {
          v20 = v19 & (i + v20);
          v9 = (_QWORD *)(v8 + 24LL * v20);
          if ( v24 == *v9 )
            break;
          if ( *v9 == -4096 )
          {
            if ( !v15 )
            {
              v16 = *(_QWORD *)(v14 + 736);
              v17 = *(unsigned int *)(v14 + 744);
              goto LABEL_16;
            }
            v7 = v14 + 736;
            goto LABEL_29;
          }
        }
        if ( v15 )
        {
          v8 = v14 + 736;
          goto LABEL_4;
        }
        v8 = *(_QWORD *)(v14 + 736);
        v18 = *(unsigned int *)(v14 + 744);
LABEL_13:
        v10 = 24 * v18;
      }
      sub_1AF9650(v26, v9, (_QWORD *)(v10 + v8), v14 + 728, 1);
      v11 = v26[0].m128_u64[0];
      goto LABEL_6;
    }
    v16 = *(_QWORD *)(v14 + 736);
    v17 = *(unsigned int *)(v14 + 744);
    v8 = v16;
    v18 = (unsigned int)v17;
    if ( (_DWORD)v17 )
    {
      v19 = v17 - 1;
      v20 = (v17 - 1) & v25;
      v9 = (_QWORD *)(v16 + 24LL * v20);
      if ( v24 == *v9 )
        goto LABEL_13;
      if ( *v9 != -4096 )
        goto LABEL_20;
LABEL_16:
      v8 = v16;
    }
    v21 = 24 * v17;
LABEL_18:
    sub_1AF9650(v26, (_QWORD *)(v8 + v21), (_QWORD *)(v8 + v21), v14 + 728, 1);
    v11 = v26[0].m128_u64[0];
LABEL_6:
    if ( (*(_BYTE *)(v14 + 728) & 1) != 0 )
    {
      v12 = v14 + 736;
      v13 = 192;
    }
    else
    {
      v12 = *(_QWORD *)(v14 + 736);
      v13 = 24LL * *(unsigned int *)(v14 + 744);
    }
    sub_1AF9650(v26, (_QWORD *)(v13 + v12), (_QWORD *)(v13 + v12), v14 + 728, 1);
    if ( v11 != v26[0].m128_u64[0] )
      return *(_QWORD *)(v11 + 8);
    v6 -= 1688;
    if ( v6 == -1688 )
      return 0;
  }
}
