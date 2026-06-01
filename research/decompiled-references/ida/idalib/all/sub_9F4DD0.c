__int64 __fastcall sub_9F4DD0(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  _QWORD *v10; // r14
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  bool v17; // al
  __int16 v18; // ax
  __int64 v19; // rdi
  size_t v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rax
  int v23; // ebp
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 *v30; // rcx
  size_t v31; // rax
  size_t v32; // rax
  char v33; // bp
  __int64 v34; // rax
  unsigned int v35; // ebp
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 *v42; // rax
  __int64 v43; // r10
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // esi
  int v47; // edx
  int v48; // eax
  __int64 *v49; // rax
  __int64 v50; // rcx
  char *v52; // [rsp+10h] [rbp-C8h]
  unsigned __int8 v53; // [rsp+20h] [rbp-B8h]
  __int64 v54; // [rsp+20h] [rbp-B8h]
  unsigned int v55; // [rsp+2Ch] [rbp-ACh]
  __int64 v56; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v58; // [rsp+40h] [rbp-98h]
  __int64 v59[2]; // [rsp+50h] [rbp-88h] BYREF
  char v60; // [rsp+60h] [rbp-78h]
  void *v61[2]; // [rsp+70h] [rbp-68h] BYREF
  __m128i v62; // [rsp+80h] [rbp-58h] BYREF
  __int64 v63; // [rsp+90h] [rbp-48h]

  if ( (*(_WORD *)a1 & 0x1FFu) - 113 > 1 )
    return 0;
  v3 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(sub_B8C1B0(v3 + 72) + 16);
  if ( (v6 & 4) != 0 )
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7 )
    v7 -= 64LL;
  v8 = sub_B8EC80(v7);
  if ( !(_BYTE)v8 )
    return 0;
  v59[0] = *(_QWORD *)(v3 + 40);
  sub_B86A00(v61, v59);
  if ( !sub_9B4AA0((__int64)v61, "span") && a1[8] == 2 )
  {
    if ( v61[0] != &v62 )
      operator delete(v61[0]);
    v10 = a1 + 10;
    if ( (*(_WORD *)a1 & 0x1FF) == 0x72 )
      v10 = a1 + 12;
    v11 = sub_BFBAE0(*v10);
    v12 = sub_BFBAE0(v10[1]);
    v52 = (char *)v12;
    sub_C3EB00(&v56, v12, a2, 0);
    v15 = v58;
    if ( v58 )
    {
      v13 = v57;
      if ( v57 <= 0x40 )
      {
        v17 = v56 == 0;
      }
      else
      {
        v55 = v57;
        v53 = v58;
        v16 = sub_2206780(&v56);
        v13 = v55;
        v15 = v53;
        v17 = v55 == v16;
      }
      if ( v17 )
        goto LABEL_35;
    }
    v18 = *(_WORD *)v11 & 0x1FF;
    if ( v18 != 106 )
    {
      if ( v18 != 87 )
        goto LABEL_46;
      v19 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
        goto LABEL_25;
      v24 = sub_F68450(v19, v12, v15, v13, v14);
      if ( !(unsigned __int8)sub_F58240(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL)) || sub_AAE980(a2, v24) != 1 )
        goto LABEL_25;
      v25 = *(_QWORD *)(v11 + 16);
      if ( ((*(_WORD *)v25 + 423) & 0x1FFu) > 4 )
        goto LABEL_46;
      v26 = sub_BFBC70(*(_QWORD *)(v25 + 32));
      if ( !v26 || (*(_BYTE *)(v26 + 28) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(v26 + 29) & 1) == 0 )
        goto LABEL_46;
      v27 = sub_B8C3D0(v26);
      v28 = *(__int64 **)v27;
      v29 = *(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 8);
      if ( (unsigned __int64)v28 >= v29 )
      {
        if ( v28 != (__int64 *)v29 )
        {
          if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 128 )
          {
LABEL_66:
            v41 = *v28;
            if ( *(_WORD *)(*v28 + 36) != 128 )
            {
              v42 = v28 + 1;
              do
                v41 = *v42++;
              while ( *(_WORD *)(v41 + 36) != 128 );
            }
            v43 = 8 * (((*(_BYTE *)(v25 + 2) & 8) != 0) + 1LL) + 32;
            v44 = *(_QWORD *)(v25
                            + 8LL * ((*(_DWORD *)(v41 + 40) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v41 + 40) >> 30) & 1u))
                            + v43);
            v45 = *(_DWORD *)(v41 + 44);
            v46 = HIBYTE(v45);
            v47 = (v45 >> 30) & 1;
            v48 = v45 & 0x3FFFFFFF;
            if ( (v46 & 0x80u) == 0 )
            {
              v33 = sub_9EC910((__int64)v52, v44, a2);
LABEL_49:
              sub_98E4B0((__int64)&v56);
              if ( v33 )
                return 0;
LABEL_26:
              LODWORD(v61[0]) = sub_AFA7A0(a1);
              v20 = j__strlen("spanTwoParamConstructor");
              v21 = (__m128i *)sub_9F4990(a3, "spanTwoParamConstructor", v20);
              v61[1] = a1;
              *v21 = _mm_load_si128((const __m128i *)v61);
              v21[1] = _mm_load_si128(&v62);
              v21[2].m128i_i64[0] = v63;
              return v8;
            }
            if ( ((*(_WORD *)v52 + 394) & 0x1FFu) <= 1 )
            {
              v33 = sub_9ECAD0(
                      (__int64)v52,
                      *(_QWORD *)(v25 + 8LL * (v48 - 1 - (unsigned int)(unsigned __int8)v47) + v43),
                      2,
                      v44,
                      a2);
              goto LABEL_49;
            }
            goto LABEL_46;
          }
          v49 = (__int64 *)(v29 + 8);
          while ( v49 != v28 )
          {
            v50 = *v49++;
            if ( *(_WORD *)(v50 + 36) == 128 )
              goto LABEL_66;
          }
        }
      }
      else
      {
        v30 = v28;
        while ( *(_WORD *)(*v30 + 36) != 128 )
        {
          if ( (__int64 *)v29 == ++v30 )
            goto LABEL_46;
        }
        if ( (__int64 *)v29 != v30 )
          goto LABEL_66;
      }
LABEL_46:
      v31 = j__strlen("begin");
      if ( !(unsigned __int8)sub_9ECED0((_WORD *)v11, "begin", v31)
        || (v32 = j__strlen("end"), !(unsigned __int8)sub_9ECED0(v52, "end", v32)) )
      {
        v33 = sub_9ED270(v11, v52, a2);
        goto LABEL_49;
      }
      v37 = sub_C94680(v52);
      v38 = sub_BFBAE0(v37);
      v39 = sub_C94680(v11);
      v40 = sub_BFBAE0(v39);
      if ( (*(_WORD *)v40 & 0x1FF) == 0x47 && (*(_WORD *)v38 & 0x1FF) == 0x47 )
      {
        v33 = *(_QWORD *)(v40 + 16) == *(_QWORD *)(v38 + 16);
        goto LABEL_49;
      }
LABEL_25:
      sub_98E4B0((__int64)&v56);
      goto LABEL_26;
    }
    if ( (*(_QWORD *)v11 & 0x100000LL) != 0 && *(_QWORD *)(v11 + 56) )
    {
      v54 = *(_QWORD *)(v11 + 56);
      v22 = sub_BFB900(v54);
      if ( (*(_WORD *)v22 & 0x1FF) == 0x47
        && (*(_WORD *)v12 & 0x1FF) == 0x47
        && *(_QWORD *)(v22 + 16) == *(_QWORD *)(v12 + 16) )
      {
        goto LABEL_35;
      }
      sub_C3EB00(v59, v54, a2, 0);
      if ( v60 )
      {
        sub_C3EB00(v61, v12, a2, 0);
        if ( v62.m128i_i8[0] )
        {
          v23 = sub_98E2D0(v59, (__int64 *)v61);
          sub_98E4B0((__int64)v61);
          sub_98E4B0((__int64)v59);
          if ( v23 )
            goto LABEL_25;
          goto LABEL_35;
        }
        sub_98E4B0((__int64)v61);
      }
      sub_98E4B0((__int64)v59);
      goto LABEL_25;
    }
    v34 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v34 + 16) == 13 && ((*(_WORD *)(v34 + 18) >> 3) & 0x1FFu) > 0x1F1 )
      goto LABEL_46;
    if ( !(_BYTE)v15 )
      goto LABEL_25;
    v35 = v57;
    if ( !(v57 <= 0x40 ? v56 == 1 : v35 - 1 == (unsigned int)sub_2206780(&v56)) )
      goto LABEL_25;
LABEL_35:
    v8 = 0;
    sub_98E4B0((__int64)&v56);
    return v8;
  }
  if ( v61[0] != &v62 )
  {
    operator delete(v61[0]);
    return 0;
  }
  return 0;
}
