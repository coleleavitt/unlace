__m128 *__fastcall sub_1A2F990(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r13
  __int64 v8; // rbx
  char v9; // r14
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int i; // eax
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int8 v27; // al
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rdx
  double v31[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 4616) + 640LL * *(unsigned int *)(a2 + 4624) - 520);
  if ( *(_DWORD *)(a2 + 12596) >= *(_DWORD *)(a2 + 11320) )
  {
    v9 = sub_B8E180(*(_QWORD *)(a2 + 544));
    if ( !v8 )
    {
LABEL_49:
      if ( !v9 )
        goto LABEL_18;
LABEL_30:
      if ( (*(_BYTE *)(v6 + 8) & 0x7F) == 7 )
      {
        while ( v6 != 40 )
        {
          v19 = *(_QWORD *)(sub_B8C1B0(v6) + 16);
          if ( (v19 & 4) == 0 )
          {
            v6 = v19 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_30;
          }
          v6 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 7 )
            goto LABEL_31;
        }
        v6 = 40;
      }
LABEL_31:
      v20 = sub_AB31E0(*(_QWORD *)(a2 + 248), v6, a3, a4, a5, a6);
      a1->m128_u64[0] = 0;
      a1->m128_u64[1] = v20;
      return a1;
    }
  }
  else
  {
    v9 = 1;
    if ( !v8 )
      goto LABEL_30;
  }
  v10 = *(_BYTE *)(v8 + 28) & 0x7F;
  if ( (unsigned int)v10 - 18 <= 0x3F )
  {
    v11 = *(_QWORD *)(v8 + 8) & 7LL;
    if ( *(char *)(v8 + 29) >= 0 )
    {
      if ( !v11 )
        goto LABEL_10;
      v12 = *(_QWORD *)(v8 - 8);
LABEL_7:
      if ( !v12 || (unsigned int)(*(_DWORD *)(sub_FEEE40(v12) + 36) - 2) > 3 )
        goto LABEL_9;
      v27 = sub_B81B70(v8);
      if ( v27 )
      {
        if ( v27 <= 3u )
        {
LABEL_9:
          v10 = *(_BYTE *)(v8 + 28) & 0x7F;
          goto LABEL_10;
        }
        if ( v27 <= 6u )
          goto LABEL_54;
      }
      BUG();
    }
    if ( v11 )
    {
      v12 = sub_B8C660(v8);
      goto LABEL_7;
    }
  }
LABEL_10:
  if ( v10 == 43 )
  {
    v13 = (__int64 *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    {
      v14 = *(_QWORD *)(sub_B8C1B0(*v13) + 16);
      if ( (v14 & 4) != 0 )
        goto LABEL_13;
    }
    else
    {
      v14 = *(_QWORD *)(sub_B8C1B0((__int64)v13) + 16);
      if ( (v14 & 4) != 0 )
      {
LABEL_13:
        v15 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_14:
        if ( !v15 || ((*(_BYTE *)(v15 + 8) + 70) & 0x7Fu) > 3 )
          goto LABEL_16;
LABEL_54:
        v28 = sub_AB35C0(*(_QWORD *)(a2 + 248), 0, v8, a4, a5, a6);
        *(_QWORD *)&v31[1] = v8;
        *(_QWORD *)&v31[0] = v28;
        *a1 = _mm_loadh_ps(v31);
        return a1;
      }
    }
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_14;
  }
  a4 = (unsigned int)v10 - 40;
  if ( (unsigned int)a4 > 6 )
  {
    a3 = (unsigned int)v10 - 49;
    if ( (unsigned int)a3 <= 2 || v10 == 84 )
      goto LABEL_54;
    goto LABEL_49;
  }
  v22 = *(_QWORD *)(v8 + 80);
  v23 = *(_QWORD *)(v22 + 72);
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v23 & 1) != 0 )
    goto LABEL_35;
  v29 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v23 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_35;
  v30 = v23 & 2;
  v25 = (unsigned __int64)v29;
  if ( (_DWORD)v30 )
  {
    v24 = sub_6E2500(v29, *(_QWORD *)(v8 + 80), v30, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v22 + 72) = v24 | 1;
LABEL_35:
    v32[0] = v24;
    v25 = sub_B7BB70(v32);
  }
  if ( (*(_BYTE *)(v25 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(v25 + 97) & 0x20) != 0 )
    goto LABEL_54;
  v26 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v26 = *(_QWORD *)v26;
  if ( ((*(_BYTE *)(v26 + 8) + 70) & 0x7Fu) <= 3 && v9
    || sub_B73BE0(v8)
    || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 41 <= 1 && (*(_BYTE *)(v8 + 140) & 7) != 2 )
  {
    goto LABEL_54;
  }
LABEL_16:
  if ( v9 && (*(_BYTE *)(v8 + 28) & 0x7F) != 0x2B )
    goto LABEL_30;
LABEL_18:
  v16 = *(_QWORD *)(a2 + 544);
LABEL_19:
  for ( i = *(_BYTE *)(v16 + 8) & 0x7F; (*(_BYTE *)(v16 + 8) & 0x7F) != 0; i = *(_BYTE *)(v16 + 8) & 0x7F )
  {
    if ( i == 24 )
      break;
    if ( (unsigned int)(i - 34) <= 5 && v16 != 72 && (*(_BYTE *)(v16 + 10) & 1) != 0 )
      goto LABEL_30;
    v18 = *(_QWORD *)(sub_B8C1B0(v16) + 16);
    v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v18 & 4) == 0 )
      goto LABEL_19;
    v16 = *(_QWORD *)(v16 + 8);
  }
  *a1 = 0;
  return a1;
}
