__int64 __fastcall sub_1DB9A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7)
{
  unsigned int *v12; // rax
  __int64 v13; // rdx
  unsigned int *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  const __m128i *v20; // r15
  unsigned __int64 v21; // rdx
  __m128i *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int16 v37; // dx
  int v38; // eax
  unsigned __int64 v39; // rax
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-60h]
  unsigned __int64 v46; // [rsp+8h] [rbp-60h]
  _QWORD v47[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a5 )
  {
    if ( (unsigned int)sub_B77DB0(a2) == 2 )
      return 0;
    if ( (unsigned int)sub_B77D20(a2) == 2 )
      goto LABEL_32;
  }
  v12 = (unsigned int *)sub_B77B50(a2);
  if ( !v12 )
  {
    v41 = sub_B77A30(a2);
    if ( !v41 || !a6 )
    {
      if ( (*(_WORD *)(a2 + 30) & 0x980) == 0 )
        goto LABEL_54;
      goto LABEL_43;
    }
    v35 = *(_QWORD *)(a1 + 11312);
    v36 = v35 + ((unsigned __int64)*(unsigned int *)(a1 + 11320) << 6);
    if ( v35 != v36 )
    {
      while ( *(_DWORD *)(v36 - 64) != 15 || *(_QWORD *)(v36 - 48) != v41 )
      {
        v36 -= 64;
        if ( v35 == v36 )
          goto LABEL_42;
      }
      sub_1CB3AC0(a3, v41, *(_QWORD *)(v36 - 32), *(unsigned int *)(v36 - 24), 0);
    }
LABEL_42:
    v37 = *(_WORD *)(a2 + 30) & 0x3FFF;
    if ( (*(_WORD *)(a2 + 30) & 0x980) == 0 )
    {
      v44 = *(_QWORD *)(a2 + 16);
      v31 = (__int64 *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
      v32 = (v44 >> 2) & 1;
      goto LABEL_56;
    }
LABEL_43:
    v38 = *(_BYTE *)(sub_B8DFE0(a2) + 8) & 0x7F;
    if ( v38 && v38 != 24 )
      goto LABEL_54;
    goto LABEL_45;
  }
  v13 = *v12;
  v14 = v12 + 2;
  v15 = 0;
  if ( a2 )
  {
    v45 = v13;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    v13 = v45;
    v15 = v16 & 0xFFFFFFFFFFFFFFFBLL;
  }
  v17 = *(_QWORD *)a3;
  v18 = *(unsigned int *)(a3 + 12);
  v47[0] = v15;
  v19 = *(unsigned int *)(a3 + 8);
  v47[2] = v13;
  v47[1] = v14;
  v20 = (const __m128i *)v47;
  v21 = v19 + 1;
  v22 = (__m128i *)(v17 + 24 * v19);
  if ( v21 > v18 )
  {
    v43 = a3 + 16;
    if ( v17 > (unsigned __int64)v47 || v22 <= (__m128i *)v47 )
    {
      sub_2237220(a3, v43, v21, 24);
      v22 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
    }
    else
    {
      v46 = v17;
      sub_2237220(a3, v43, v21, 24);
      v20 = (const __m128i *)((char *)v47 + *(_QWORD *)a3 - v46);
      v22 = (__m128i *)(*(_QWORD *)a3 + 24LL * *(unsigned int *)(a3 + 8));
    }
  }
  *v22 = _mm_loadu_si128(v20);
  v22[1].m128i_i64[0] = v20[1].m128i_i64[0];
  ++*(_DWORD *)(a3 + 8);
  if ( a5
    && ((unsigned int)sub_B77D20(a2) == 2
     || (*(_WORD *)(a2 + 30) & 0x180) != 0 && (*(_WORD *)(sub_B77AF0(a2) + 30) & 0x180) == 0) )
  {
LABEL_32:
    v31 = (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      return sub_B8C1B0(*v31);
    return sub_B8C1B0((__int64)v31);
  }
  if ( !a7 )
  {
    v34 = (_QWORD *)sub_B77AF0(a2);
    if ( (*(_BYTE *)sub_BC3640(v34) & 4) != 0 )
      return 0;
  }
  if ( a6 )
    goto LABEL_42;
  if ( !a2 )
    BUG();
  if ( (*(_BYTE *)(a2 + 80) & 0x7Fu) - 35 <= 3 )
  {
    v23 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    v24 = (v23 & 4) != 0 ? *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL) : v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v24 )
    {
      v25 = v24 - 64;
      if ( v25 )
      {
        if ( sub_B96EF0(v25) )
        {
          v26 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
          v27 = (v26 & 4) != 0 ? *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL) : v26 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v27
            && v27 != 64
            && (v28 = *(_QWORD *)(v27 + 64)) != 0
            && (*(_BYTE *)(v28 + 10) & 0x20) != 0
            && (unsigned int)sub_B77890(a2) == 42
            || (unsigned __int8)sub_B98950(a2) )
          {
            if ( (unsigned __int8)sub_B77A80(a2) )
              return 0;
          }
        }
      }
    }
  }
  if ( (*(_WORD *)(a2 + 30) & 0x980) == 0 || (v29 = *(_BYTE *)(sub_B8DFE0(a2) + 8) & 0x7F) != 0 && v29 != 24 )
  {
    v30 = *(_QWORD *)(a2 + 16);
    v31 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
    v32 = (v30 >> 2) & 1;
    goto LABEL_28;
  }
LABEL_45:
  if ( !a4 )
    goto LABEL_49;
  v39 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
  {
    v40 = *(_BYTE *)(*(_QWORD *)(v39 + 8) + 8LL) & 0x7F;
    if ( v40 )
    {
LABEL_48:
      if ( v40 != 24 )
      {
LABEL_49:
        v31 = (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
          return sub_B8C1B0((__int64)v31);
        return sub_B8C1B0(v31[1]);
      }
    }
  }
  else
  {
    v40 = *(_BYTE *)(v39 + 8) & 0x7F;
    if ( v40 )
      goto LABEL_48;
  }
LABEL_54:
  v42 = *(_QWORD *)(a2 + 16);
  v31 = (__int64 *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
  v32 = (v42 >> 2) & 1;
  if ( !a6 )
    goto LABEL_28;
  v37 = *(_WORD *)(a2 + 30) & 0x3FFF;
LABEL_56:
  if ( (v37 & 0x180) == 0 )
  {
LABEL_28:
    if ( v32 )
      return sub_B8C1B0(*v31);
    return sub_B8C1B0((__int64)v31);
  }
  if ( !v32 )
    return sub_B8C1B0((__int64)v31);
  return sub_B8C1B0(v31[1]);
}
