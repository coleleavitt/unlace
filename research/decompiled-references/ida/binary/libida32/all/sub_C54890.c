__int64 __fastcall sub_C54890(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned int v11; // eax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  char *v33[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( *(char *)(v3 + 28) < 0 )
    return 0;
  v5 = *(_QWORD *)(sub_B68470(v3 + 72) + 16);
  if ( (v5 & 4) != 0 )
    v9 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    BUG();
  if ( *(char *)(v9 - 36) < 0 )
    return 0;
  v10 = *(_QWORD *)a2;
  v11 = sub_BDCD00(a2, a2, v6, v7, v8);
  v12 = v10 >> 16;
  if ( sub_BF5260(*(_QWORD *)a1, v11, v3, (v12 & 0x80u) != 0LL) )
  {
    if ( (v12 & 0x80u) != 0LL )
      return sub_C36860((__int64 *)a1, a2, a3, v14, v15);
    else
      return sub_C02A80(a3, *(_QWORD *)(a1 + 16));
  }
  v33[0] = nullptr;
  v18 = sub_B5BA10((_QWORD *)v3, v33, v13, v14, v15, v16);
  v22 = sub_BDCD00(a2, (__int64)v33, v19, v20, v21);
  if ( !(unsigned __int8)sub_BF9920(*(_QWORD *)a1, v22, v3, v33[0], v18, v23) )
    return 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
  {
    if ( (v12 & 0x80u) == 0LL )
      goto LABEL_22;
    goto LABEL_9;
  }
  if ( (v12 & 0x80u) != 0LL )
  {
LABEL_9:
    if ( !(unsigned __int8)sub_C36860((__int64 *)a1, a2, a3, v24, v25) )
      return 0;
LABEL_22:
    v31 = *(unsigned int *)(a2 + 32);
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
    {
LABEL_23:
      v32 = a2 + 48;
      return sub_C35CF0(
               a2,
               *(const __m128i **)(a1 + 8),
               v32,
               v31,
               (__int64)v33[0],
               *(__m128i **)a1,
               *(_QWORD *)(a1 + 16));
    }
LABEL_27:
    v32 = a2 + 40;
    return sub_C35CF0(a2, *(const __m128i **)(a1 + 8), v32, v31, (__int64)v33[0], *(__m128i **)a1, *(_QWORD *)(a1 + 16));
  }
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
  {
    v27 = *(unsigned __int16 **)(a2 + 40);
    v28 = *v27;
    LOWORD(v28) = v28 & 0x1FF;
    if ( (_WORD)v28 == 48 )
      goto LABEL_18;
    v31 = *(unsigned int *)(a2 + 32);
    goto LABEL_27;
  }
  v27 = *(unsigned __int16 **)(a2 + 48);
  v28 = *v27;
  LOWORD(v28) = v28 & 0x1FF;
  if ( (_WORD)v28 != 48 )
  {
    v31 = *(unsigned int *)(a2 + 32);
    goto LABEL_23;
  }
LABEL_18:
  v29 = *((_QWORD *)v27 + 2);
  v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v29 & 4) != 0 )
    v30 = *(_QWORD *)(v30 + 40);
  return sub_C52EC0((_QWORD *)a1, v30, v28, v24, v25, v26);
}

