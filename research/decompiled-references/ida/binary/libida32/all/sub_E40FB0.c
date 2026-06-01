__int64 __fastcall sub_E40FB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rsi
  bool v8; // bl
  char v9; // r8
  __int64 *v10; // r13
  char v11; // al
  __int16 v12; // cx
  char v13; // r14
  unsigned __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BOOL4 v18; // ecx
  size_t v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  size_t v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _BOOL4 v26; // ecx
  size_t v27; // rax
  size_t v28; // rax
  __int64 v29; // r14
  const char *v30; // rsi
  size_t v31; // rax
  __int64 v32; // r12
  const char *v33; // rsi
  size_t v34; // rax
  const char *v35; // rsi
  unsigned __int64 v37; // rdi
  int v38; // eax
  unsigned __int64 v39; // r10
  _BOOL8 v40; // r11
  size_t v41; // rax
  size_t v42; // rax
  __int64 *v43; // r14
  __int64 v44; // rdx
  __int64 *v45; // rdx
  __int64 v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  __int64 *v49; // [rsp+0h] [rbp-148h] BYREF
  __int64 v50; // [rsp+8h] [rbp-140h]
  __int64 v51; // [rsp+10h] [rbp-138h]
  char v52; // [rsp+1Fh] [rbp-129h]
  __int128 v53; // [rsp+20h] [rbp-128h] BYREF
  __int64 v54; // [rsp+30h] [rbp-118h]
  __m128 v55; // [rsp+40h] [rbp-108h] BYREF
  int v56; // [rsp+50h] [rbp-F8h]
  __int16 v57; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v58; // [rsp+68h] [rbp-E0h]
  __int64 v59; // [rsp+78h] [rbp-D0h]
  __int16 v60; // [rsp+92h] [rbp-B6h]

  v4 = *(unsigned __int8 *)(a2 + 19);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = (*(_BYTE *)(a2 + 19) >> 1) & 0xF;
  v7 = BYTE4(v5) & 1;
  v8 = (v5 & 0x200000000LL) != 0;
  v9 = BYTE3(v5) >> 7;
  LODWORD(v50) = (unsigned __int8)v6;
  if ( (unsigned __int8)v6 != 2 )
  {
    if ( (v5 & 0x1000000) != 0 )
    {
      v51 = 0;
      v10 = nullptr;
      v11 = v4 & 0x40;
      goto LABEL_6;
    }
    v51 = 0;
    v10 = nullptr;
    goto LABEL_4;
  }
  v37 = (a2 + ((SBYTE3(v5) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v38 = (v5 >> 24) & 0x40;
  v39 = v37 + 8LL * (v38 != 0);
  if ( v38 )
  {
    v40 = (*(_BYTE *)(v37 + 1) & 4) != 0;
    v10 = (__int64 *)(v39 + 8 * v40);
  }
  else
  {
    v10 = (__int64 *)(v37 + 8LL * (v38 != 0));
    v40 = 0;
  }
  v51 = (__int64)(v39 + 8 * (v40 + (*(_WORD *)v37 & 0x3FF)) - (_QWORD)v10) >> 3;
  if ( (v5 & 0x1000000) == 0 )
  {
LABEL_4:
    if ( *(_BYTE *)(a2 + 16) != 26 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
    {
      v52 = BYTE4(v5) & 1;
      LOBYTE(v49) = BYTE3(v5) >> 7;
      sub_F3F310(a2, v7, v4, v5);
      LOBYTE(v4) = *(_BYTE *)(a2 + 19);
      v9 = (char)v49;
      v11 = v4 & 0x40;
      goto LABEL_6;
    }
  }
  v11 = v4 & 0x40;
LABEL_6:
  v12 = 0;
  v13 = (*(_BYTE *)(a2 + 18) >> 3) & 3;
  if ( v11 )
  {
    v14 = (a2 + (((char)v4 >> 5) & 4) + 8LL * *(unsigned __int16 *)(a2 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v14 + 1) & 4) != 0 )
      v12 = *(_WORD *)(v14 + 8) & 0x1FF;
  }
  LOBYTE(v60) = (4 * v8) | (2 * v7) & 0xFB | v9 & 0xFB | v60 & 0xF8;
  v60 = (8 * v12) | v60 & 0xF007;
  v15 = j__strlen("trailingReturn");
  sub_E35E50(a1, (__int64)"trailingReturn", v15, (v60 & 2) != 0);
  v18 = (*(_BYTE *)(a2 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F3F310(a2, "trailingReturn", v16, v17))
     && (*(_BYTE *)(a2 + 18) & 0x20) != 0;
  LODWORD(v49) = v18;
  v19 = j__strlen("const");
  sub_E35E50(a1, (__int64)"const", v19, (char)v49);
  if ( *(_BYTE *)(a2 + 16) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && sub_F3F310(a2, "const", v20, v21) )
  {
    v22 = *(_BYTE *)(a2 + 18) >> 7;
  }
  else
  {
    v22 = 0;
  }
  LODWORD(v49) = v22;
  v23 = j__strlen("volatile");
  sub_E35E50(a1, (__int64)"volatile", v23, (char)v49);
  v26 = (*(_BYTE *)(a2 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F3F310(a2, "volatile", v24, v25))
     && (*(_BYTE *)(a2 + 18) & 0x40) != 0;
  LODWORD(v49) = v26;
  v27 = j__strlen("restrict");
  sub_E35E50(a1, (__int64)"restrict", v27, (char)v49);
  v28 = j__strlen("variadic");
  sub_E35E50(a1, (__int64)"variadic", v28, v60 & 1);
  if ( v13 == 1 )
  {
    v29 = a1 + 1048;
    v30 = "&";
  }
  else
  {
    if ( v13 != 2 )
      goto LABEL_19;
    v29 = a1 + 1048;
    v30 = "&&";
  }
  sub_E35B80((__int64)&v57, v30);
  v31 = j__strlen("refQualifier");
  v55.m128_u64[0] = (unsigned __int64)&v57;
  v55.m128_u64[1] = v29;
  sub_E34890(v29, (__int64)"refQualifier", v31, (__int64)sub_E34840, &v55);
  sub_2207560(&v57);
LABEL_19:
  switch ( v6 )
  {
    case 1LL:
    case 2LL:
      v50 = a1 + 1048;
      sub_E35B80((__int64)&v57, "throw");
      v42 = j__strlen("exceptionSpec");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"exceptionSpec", v42, (__int64)sub_E34840, &v55);
      sub_2207560(&v57);
      v54 = 0;
      v53 = 0;
      v49 = &v10[v51];
      if ( v49 == v10 )
      {
        v46 = 0;
        v45 = nullptr;
      }
      else
      {
        v43 = v10;
        do
        {
          v44 = *v43++;
          sub_E3FD20((__int64)&v55, a1, v44, 1);
          v57 = 7;
          v58 = v55;
          v55 = 0u;
          LODWORD(v59) = v56;
          v56 = 0;
          sub_E3A3D0((__int64)&v53, (__int64)&v57);
          sub_2207560(&v57);
          sub_E395A0((__int64 *)&v55);
        }
        while ( v49 != v43 );
        v45 = *((__int64 **)&v53 + 1);
        v46 = v54;
      }
      v49 = v45;
      v57 = 8;
      v59 = v46;
      v54 = 0;
      v58 = _mm_loadh_ps((const double *)&v49);
      v53 = 0;
      v47 = j__strlen("exceptionTypes");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = v50;
      sub_E34890(v50, (__int64)"exceptionTypes", v47, (__int64)sub_E34840, &v55);
      sub_2207560(&v57);
      sub_E39780((char **)&v53);
      return sub_E36850(a1, a2);
    case 3LL:
      v32 = a1 + 1048;
      sub_E35B80((__int64)&v57, "throw");
      v41 = j__strlen("exceptionSpec");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"exceptionSpec", v41, (__int64)sub_E34840, &v55);
      sub_2207560(&v57);
      v58.m128_i8[0] = 1;
      v57 = 1;
      v34 = j__strlen("throwsAny");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = a1 + 1048;
      v35 = "throwsAny";
      goto LABEL_23;
    case 4LL:
      v32 = a1 + 1048;
      v33 = "nothrow";
      goto LABEL_22;
    case 5LL:
      v32 = a1 + 1048;
      v33 = "noexcept";
LABEL_22:
      sub_E35B80((__int64)&v57, v33);
      v34 = j__strlen("exceptionSpec");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = v32;
      v35 = "exceptionSpec";
      goto LABEL_23;
    case 7LL:
    case 8LL:
      v32 = a1 + 1048;
      sub_E35B80((__int64)&v57, "noexcept");
      v48 = j__strlen("exceptionSpec");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"exceptionSpec", v48, (__int64)sub_E34840, &v55);
      sub_2207560(&v57);
      v57 = 1;
      v58.m128_i8[0] = (_DWORD)v50 == 8;
      v34 = j__strlen("conditionEvaluatesTo");
      v55.m128_u64[0] = (unsigned __int64)&v57;
      v55.m128_u64[1] = a1 + 1048;
      v35 = "conditionEvaluatesTo";
LABEL_23:
      sub_E34890(v32, (__int64)v35, v34, (__int64)sub_E34840, &v55);
      sub_2207560(&v57);
      break;
    default:
      return sub_E36850(a1, a2);
  }
  return sub_E36850(a1, a2);
}

