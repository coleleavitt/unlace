__int64 __fastcall sub_1AFA3A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v9; // r10
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // r8d
  int v13; // r11d
  unsigned int v14; // ecx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // edx
  __m128 v24[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = sub_1AEE450(a2);
  v3 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v3
    || (v4 = *(_QWORD *)(a1 + 336) + 6776 * v3 - 6776, *(_QWORD *)(v4 + 6768) != *(_QWORD *)(a1 + 328))
    || (v5 = *(unsigned int *)(v4 + 8), v6 = *(unsigned int *)(a1 + 27504), (unsigned int)v5 <= (unsigned int)v6)
    || (v7 = v5 - v6) == 0 )
  {
    BUG();
  }
  v8 = *(_QWORD *)v4 + 1688 * (v7 - 1);
  v9 = *(_BYTE *)(v8 + 728) & 1;
  if ( !v9 )
  {
    v10 = *(unsigned int *)(v8 + 744);
    v11 = *(_QWORD *)(v8 + 736);
    v12 = v10;
    if ( (_DWORD)v10 )
    {
      v13 = v10 - 1;
      v14 = (v10 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
      v15 = (__int64 *)(v11 + 24LL * v14);
      if ( v2 == *v15 )
      {
LABEL_8:
        v16 = 24LL * v12;
        goto LABEL_9;
      }
      if ( *v15 != -4096 )
        goto LABEL_21;
    }
LABEL_19:
    v22 = 24 * v10;
LABEL_15:
    sub_1AF9650(v24, (_QWORD *)(v11 + v22), (_QWORD *)(v11 + v22), v8 + 728, 1);
    v17 = v24[0].m128_u64[0];
    if ( (*(_BYTE *)(v8 + 728) & 1) != 0 )
      goto LABEL_10;
    goto LABEL_16;
  }
  v11 = v8 + 736;
  v14 = ((unsigned __int8)((unsigned int)v2 >> 4) ^ (unsigned __int8)((unsigned int)v2 >> 9)) & 7;
  v15 = (__int64 *)(v8
                  + 736
                  + 24LL * (((unsigned __int8)((unsigned int)v2 >> 4) ^ (unsigned __int8)((unsigned int)v2 >> 9)) & 7));
  v16 = 192;
  v21 = *v15;
  if ( v2 == *v15 )
    goto LABEL_9;
  v22 = 192;
  v13 = 7;
  if ( v21 == -4096 )
    goto LABEL_15;
LABEL_21:
  v23 = 1;
  while ( 1 )
  {
    v14 = v13 & (v23 + v14);
    v15 = (__int64 *)(v11 + 24LL * v14);
    if ( v2 == *v15 )
      break;
    ++v23;
    if ( *v15 == -4096 )
    {
      if ( !v9 )
      {
        v10 = *(unsigned int *)(v8 + 744);
        goto LABEL_19;
      }
      v22 = 192;
      goto LABEL_15;
    }
  }
  if ( !v9 )
  {
    v12 = *(_DWORD *)(v8 + 744);
    goto LABEL_8;
  }
  v16 = 192;
LABEL_9:
  sub_1AF9650(v24, v15, (_QWORD *)(v11 + v16), v8 + 728, 1);
  v17 = v24[0].m128_u64[0];
  if ( (*(_BYTE *)(v8 + 728) & 1) != 0 )
  {
LABEL_10:
    v18 = v8 + 736;
    v19 = 192;
    goto LABEL_11;
  }
LABEL_16:
  v18 = *(_QWORD *)(v8 + 736);
  v19 = 24LL * *(unsigned int *)(v8 + 744);
LABEL_11:
  sub_1AF9650(v24, (_QWORD *)(v19 + v18), (_QWORD *)(v19 + v18), v8 + 728, 1);
  if ( v24[0].m128_u64[0] == v17 )
    return 0;
  else
    return *(_QWORD *)(v17 + 8);
}
