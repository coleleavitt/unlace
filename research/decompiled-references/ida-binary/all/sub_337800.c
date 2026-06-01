__int64 __fastcall sub_337800(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  size_t v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  const char *v13; // r15
  unsigned int v14; // eax
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r8
  char *v18; // rsi
  const char *v19; // r9
  const char *v20; // r8
  const char *v21; // rcx
  const char *v22; // rdx
  size_t v23; // rax
  const char *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  double v27; // xmm0_8
  const char *v28; // rbx
  size_t v29; // rax
  const char *v30; // rdx
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // edi
  char v37; // al
  char v38; // dl
  __int16 v39; // ax
  unsigned int v40; // ebx
  int v42; // eax
  __int64 v43; // rax
  __int64 custom_refinfo; // rax
  const char *v45; // [rsp-10h] [rbp-D0h]
  const char *v46; // [rsp+0h] [rbp-C0h]
  unsigned __int8 v47; // [rsp+17h] [rbp-A9h]
  unsigned __int16 v49; // [rsp+2Ch] [rbp-94h] BYREF
  __int16 v50; // [rsp+2Eh] [rbp-92h] BYREF
  __int64 v51; // [rsp+30h] [rbp-90h] BYREF
  __int128 v52; // [rsp+38h] [rbp-88h]
  const char *v53; // [rsp+50h] [rbp-70h] BYREF
  __int128 v54; // [rsp+58h] [rbp-68h]
  char *v55; // [rsp+70h] [rbp-50h] BYREF
  __int128 v56; // [rsp+78h] [rbp-48h]
  unsigned __int64 v57; // [rsp+88h] [rbp-38h]

  v46 = a2;
  v57 = __readfsqword(0x28u);
  v52 = 0;
  v51 = 0;
  get_refinfo_descs(&v51);
  v14 = *(_DWORD *)(a1 + 24);
  v53 = nullptr;
  v49 = -1;
  v54 = 0;
  v47 = v14 & 0x4F;
  if ( (_QWORD)v52 )
  {
    v12 = 0;
    v11 = 0;
    v15 = 0;
    v10 = 0;
    while ( 1 )
    {
      LODWORD(v13) = 3 * v10;
      v55 = nullptr;
      v56 = 0;
      v23 = 24 * v10 + v51;
      if ( (*(_BYTE *)v23 & 0x40) != 0 )
      {
        if ( (unsigned __int64)(int)v12 <= 9 )
        {
          sub_169A50((__int64 *)&v55, (__int64)"~%c~. ", (unsigned int)aZyxwvutrqp[(int)v12]);
          v16 = 24 * v10;
          v12 = (unsigned int)(v12 + 1);
          goto LABEL_5;
        }
      }
      else if ( (unsigned __int64)(int)v11 <= 9 )
      {
        sub_169A50((__int64 *)&v55, (__int64)"~%c~. ", (unsigned int)a1234567890[(int)v11]);
        v16 = 24 * v10;
        v11 = (unsigned int)(v11 + 1);
LABEL_5:
        v17 = v51 + v16;
        v18 = "\n";
        v19 = *(const char **)(v17 + 16);
        v20 = *(const char **)(v17 + 8);
        if ( (_QWORD)v52 - 1LL == v10 )
          v18 = ">";
        if ( (_QWORD)v56 )
          v21 = v55;
        else
          v21 = &s1;
        goto LABEL_9;
      }
      if ( (_QWORD)v52 - 1LL == v10 )
      {
        v20 = *(const char **)(v23 + 8);
        v19 = *(const char **)(v23 + 16);
        v18 = ">";
      }
      else
      {
        v19 = *(const char **)(v23 + 16);
        v20 = *(const char **)(v23 + 8);
        v18 = "\n";
      }
      v21 = &s1;
LABEL_9:
      v22 = (const char *)&unk_5C2F25;
      if ( !v15 )
        v22 = "##Type##";
      v45 = v18;
      a2 = "  <%s%s%s - %s:R>%s";
      sub_16FAA0((__int64 *)&v53, (__int64)"  <%s%s%s - %s:R>%s", v22, v21, v20, v19, v45);
      if ( *(_DWORD *)(v51 + 24 * v10) == v47 )
        v49 = v15;
      if ( v55 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v55, "  <%s%s%s - %s:R>%s");
      }
      v10 = ++v15;
      if ( v15 >= (unsigned __int64)v52 )
      {
        v14 = *(_DWORD *)(a1 + 24);
        break;
      }
    }
  }
  v50 = (v14 >> 7) & 1;
  if ( (v14 & 0x20) != 0 )
    v50 |= 2u;
  if ( (v14 & 0x10) != 0 )
    v50 |= 4u;
  if ( (v14 & 0x100) != 0 )
    v50 |= 8u;
  if ( (v14 & 0x200) != 0 )
    v50 |= 0x10u;
  if ( (v14 & 0x400) != 0 )
    v50 |= 0x20u;
  if ( (v14 & 0x800) != 0 )
    v50 |= 0x40u;
  if ( (v14 & 0x1000) != 0 )
    v50 |= 0x80u;
  if ( (v14 & 0x2000) != 0 )
    v50 |= 0x100u;
  v24 = (const char *)itext(1105, a2, (v14 >> 7) & 1);
  v27 = 0.0;
  v55 = nullptr;
  v28 = v24;
  v56 = 0;
  if ( !v24
    || (v11 = (__int64)&v55,
        v29 = strlen(v24),
        v12 = v29 + 1,
        v10 = v29,
        a2 = v28,
        v55 = (char *)qvector_reserve(&v55, 0, v29 + 1, 1),
        *(_QWORD *)&v56 = v12,
        memmove(v55, v28, v10),
        v55[v10] = 0,
        (unsigned __int64)v56 <= 1) )
  {
    if ( under_debugger )
      BUG();
    v36 = 40409;
    v37 = interr(40409, a2, v25, v26, 0.0);
    goto LABEL_86;
  }
  v30 = &s1;
  if ( (_QWORD)v54 )
    v30 = v53;
  sub_32EC20((__int64)&v55, "<type radio buttons>", v30);
  v12 = (__int64)&v50;
  v11 = (__int64)&v49;
  v13 = &s1;
  v10 = a1 + 16;
  v28 = (const char *)(a1 + 8);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = (int)v13;
        if ( (_QWORD)v56 )
          v33 = (int)v55;
        a2 = (const char *)v11;
        if ( !(unsigned int)sub_1697D0(
                              v33,
                              v11,
                              (__int64)v28,
                              v12,
                              a1,
                              v10,
                              (__m128)0LL,
                              a4,
                              a5,
                              a6,
                              v31,
                              v32,
                              a9,
                              a10,
                              (char)v46) )
        {
          v40 = 0;
          goto LABEL_72;
        }
        if ( v49 < (unsigned __int64)v52 )
          break;
        sub_17CE30(1685);
      }
      v36 = *(_DWORD *)(v51 + 24LL * v49);
      v37 = v36;
      v38 = v36 & 0x40;
      if ( *(_QWORD *)a1 != -1 )
        break;
LABEL_86:
      if ( v38 )
      {
        custom_refinfo = get_custom_refinfo((unsigned __int8)v36);
        if ( custom_refinfo && (*(_BYTE *)(custom_refinfo + 24) & 1) != 0 )
          goto LABEL_83;
      }
      else if ( (unsigned __int8)v36 <= 2u )
      {
        if ( (_BYTE)v36 )
          goto LABEL_53;
      }
      else if ( (unsigned __int8)(v37 - 9) <= 1u )
      {
        goto LABEL_53;
      }
      sub_17CE30(1106);
    }
    if ( v38 )
      break;
    if ( (unsigned __int8)v36 > 2u )
    {
      if ( (unsigned __int8)(v36 - 9) > 1u )
        goto LABEL_53;
    }
    else if ( !(_BYTE)v36 )
    {
      goto LABEL_53;
    }
LABEL_80:
    a2 = (_BYTE *)(elf_gnu_hash_bucket + 251);
    v42 = sub_300700(1, 1107);
    if ( v42 >= 0 )
    {
      if ( v42 )
        *(_QWORD *)a1 = -1;
LABEL_83:
      v36 = *(_DWORD *)(v51 + 24LL * v49);
      goto LABEL_53;
    }
  }
  v43 = get_custom_refinfo((unsigned __int8)v36);
  if ( !v43 )
    goto LABEL_83;
  if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
    goto LABEL_80;
  v36 = *(_DWORD *)(v51 + 24LL * v49);
LABEL_53:
  v39 = v50;
  v34 = v36;
  v35 = a1;
  LOBYTE(v34) = v36 | 0x80;
  if ( (v50 & 1) == 0 )
    v34 = v36;
  *(_DWORD *)(a1 + 24) = v34;
  if ( (v39 & 2) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x20u;
  if ( (v39 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x10u;
    *(_QWORD *)(a1 + 8) = getinf(93);
    v39 = v50;
  }
  if ( (v39 & 8) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x100u;
  if ( (v39 & 0x10) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  if ( (v39 & 0x20) != 0 )
  {
    v35 = a1;
    *(_DWORD *)(a1 + 24) |= 0x400u;
  }
  if ( (v39 & 0x40) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x800u;
  if ( (v39 & 0x80u) != 0 )
  {
    v35 = (__int64)v46;
    *(_DWORD *)(a1 + 24) |= 0x1000u;
    *(_QWORD *)(a1 + 8) = v46;
  }
  if ( (v39 & 0x100) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x2000u;
  v40 = 1;
LABEL_72:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    v27 = qfree(v55, a2, v34, v35);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    v27 = qfree(v53, a2, v34, v35, v27);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, a2, v34, v35, v27);
  }
  return v40;
}
