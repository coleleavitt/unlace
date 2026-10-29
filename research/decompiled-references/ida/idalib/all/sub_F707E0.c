__int64 __fastcall sub_F707E0(
        const __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 (*a4)(),
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int8 v13; // al
  __int64 v14; // rax
  signed __int64 v15; // r15
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  signed __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 i; // rax
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // rsi
  unsigned __int64 v36; // rsi
  __int8 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned int *v40; // rbx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned int *v54; // rsi
  size_t v55; // rdx
  const char *v56; // rsi
  __int64 v57; // rax
  unsigned int *v58; // rax
  __int64 v59; // [rsp-10h] [rbp-58h]
  __m128i si128; // [rsp+0h] [rbp-48h] BYREF

  result = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( (*(_BYTE *)(a2 + 8) & 0x7F) == 0 )
    return result;
  v7 = (__int64)a4;
  if ( (unsigned __int8)result <= 0x12u )
  {
    if ( ((1LL << result) & 0x40182) != 0 )
      return result;
    v12 = a1->m128i_i64[1];
    if ( !v12 )
      goto LABEL_36;
  }
  else
  {
    v11 = ((_BYTE)result + 94) & 0x7F;
    if ( (unsigned __int8)v11 <= 5u )
      return result;
    v12 = a1->m128i_i64[1];
    if ( !v12 )
      goto LABEL_6;
  }
  a4 = sub_BF6950;
  v11 = *(_QWORD *)(*(_QWORD *)v12 + 8LL);
  if ( (__int64 (*)())v11 != sub_BF6950 )
  {
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64))v11)(v12, a2);
    if ( (_BYTE)result )
      return result;
    LOBYTE(result) = *(_BYTE *)(a2 + 8) & 0x7F;
  }
LABEL_6:
  if ( (_BYTE)result == 24 )
  {
    if ( a2 == 48 )
      goto LABEL_30;
    v13 = a1->m128i_i8[1];
    if ( (v13 & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(a2 - 8);
      if ( (v11 & 7) != 0 || (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_30;
    }
    if ( (v13 & 0x60) != 0 )
    {
      v14 = *(_QWORD *)(a2 + 8);
      if ( (v14 & 0x2000) != 0 && v7 && (v14 & 0x2000) != 0 )
      {
        v15 = sub_B94670(a2, v7, v11, (__int64)a4, a5, a6);
        v16 = *(_QWORD *)(sub_B8C1B0(a2) + 16);
        v17 = (v16 & 4) != 0 ? *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL) : v16 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = sub_B8E650(v17);
        v23 = sub_B94670(v18, v7, v19, v20, v21, v22);
        if ( v15 )
        {
          v24 = (v15 >> 2) & 1;
          if ( ((v15 >> 2) & 1) != 0 )
          {
            v25 = 2;
            v26 = v15 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              do
              {
                v27 = *(_QWORD *)(v26 + 8);
                v24 = v25 - 1;
                if ( !v27 )
                  break;
                v24 = v25;
                if ( (v27 & 4) == 0 )
                  break;
                ++v25;
                v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
              }
              while ( v26 );
            }
          }
          else
          {
            v24 = 1;
          }
        }
        else
        {
          v24 = 0;
        }
        if ( v23 )
        {
          v28 = (v23 >> 2) & 1;
          if ( ((v23 >> 2) & 1) != 0 )
          {
            v29 = 2;
            for ( i = v23 & 0xFFFFFFFFFFFFFFF8LL; i; i = v31 & 0xFFFFFFFFFFFFFFF8LL )
            {
              v31 = *(_QWORD *)(i + 8);
              v28 = v29 - 1;
              if ( !v31 )
                break;
              v28 = v29;
              if ( (v31 & 4) == 0 )
                break;
              ++v29;
            }
          }
          else
          {
            v28 = 1;
          }
        }
        else
        {
          v28 = 0;
        }
        if ( v28 == v24 )
          goto LABEL_30;
      }
    }
    v44 = *(_QWORD *)(a2 - 8);
    v45 = *(_QWORD *)(sub_B8C1B0(a2) + 16);
    if ( (v45 & 4) != 0 )
      v46 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v46 = v45 & 0xFFFFFFFFFFFFFFF8LL;
    sub_F707E0(a1, v46, a3, v44);
    v47 = *(_QWORD *)(a2 - 8);
    if ( (v47 & 7) != 0 || (v47 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return sub_995540(a3, "(anonymous namespace)::");
    v56 = sub_995750(a2 - 48);
LABEL_63:
    v57 = sub_9954E0(a3, v56, v55);
    return sub_995540(v57, "::");
  }
LABEL_36:
  if ( (unsigned int)(unsigned __int8)result - 60 > 1 )
  {
    if ( (unsigned int)(unsigned __int8)result - 58 <= 4 && a2 != 64 )
    {
      v48 = *(_QWORD *)(a2 - 24);
      v49 = *(_QWORD *)(sub_B8C1B0(a2) + 16);
      if ( (v49 & 4) != 0 )
        v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      sub_F707E0(a1, v50, a3, v48);
      v51 = *(_QWORD *)(a2 + 56);
      if ( (v51 & 4) != 0 || (v52 = v51 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        result = *(_QWORD *)(a2 - 24);
        if ( (result & 7) != 0 )
          return result;
        result &= 0xFFFFFFFFFFFFFFF8LL;
        if ( !result )
          return result;
        v58 = *(unsigned int **)(result + 16);
        v55 = *v58;
        v56 = (const char *)(v58 + 4);
      }
      else
      {
        v53 = *(_QWORD *)(v52 + 40);
        if ( (v53 & 7) != 0 )
          BUG();
        v54 = *(unsigned int **)((v53 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v55 = *v54;
        v56 = (const char *)(v54 + 4);
      }
      goto LABEL_63;
    }
LABEL_30:
    v32 = *(_QWORD *)(sub_B8C1B0(a2) + 16);
    if ( (v32 & 4) != 0 )
      v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    return sub_F707E0(a1, v33, a3, v7);
  }
  if ( a2 == 64 )
    goto LABEL_30;
  v34 = *(_QWORD *)(a2 - 24);
  v35 = *(_QWORD *)(sub_B8C1B0(a2) + 16);
  if ( (v35 & 4) != 0 )
    v36 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
  sub_F707E0(a1, v36, a3, v34);
  v37 = a1->m128i_i8[2];
  if ( (v37 & 0x10) == 0 )
    a1->m128i_i8[2] = v37 & 0xF7;
  v38 = *(_QWORD *)(a2 - 24);
  if ( (v38 & 7) != 0 )
    BUG();
  sub_9954E0(
    a3,
    (const void *)(*(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL),
    **(unsigned int **)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 16));
  v39 = a2 - 64;
  v40 = *(unsigned int **)(a2 + 104);
  v41 = sub_BBF290(v39);
  v42 = *v40;
  v43 = *(_QWORD *)(v41 + 56);
  si128 = _mm_load_si128(a1);
  si128.m128i_i8[1] &= ~8u;
  sub_F6F5F0(a3, (const __m128i *)(v40 + 2), v42, &si128, v43, 0, 0);
  sub_995540(a3, "::");
  a1->m128i_i8[2] = a1->m128i_i8[2] & 0xF7 | v37 & 8;
  return v59;
}
