void __fastcall sub_226CC60(__int64 a1, __int64 a2)
{
  char *v3; // r13
  __m128i *v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __m128i *v8; // rbx
  __int64 v9; // rdi
  char v10; // r15
  char v11; // r13
  unsigned __int64 v12; // rax
  char v13; // r12
  __int64 v14; // rdi
  char v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  char v21; // r13
  __int64 v22; // rax
  char *v23; // rbx
  int v24; // eax
  char *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rax
  const void *v30; // r12
  size_t v31; // rbp
  int v32; // r14d
  char *v33; // rax
  bool v34; // zf
  char v35; // r14
  __int64 v36; // rdi
  _BYTE *v37; // rax
  unsigned int v38; // r14d
  __int64 v39; // rax
  _WORD *v40; // rcx
  __int64 v41; // rax
  _BYTE *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r13
  unsigned int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  size_t v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  const char *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  const char *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  char v63; // [rsp+10h] [rbp-258h]
  char v64; // [rsp+18h] [rbp-250h]
  char v65; // [rsp+20h] [rbp-248h]
  unsigned __int64 v66; // [rsp+28h] [rbp-240h]
  char *v67; // [rsp+30h] [rbp-238h]
  __int64 v68; // [rsp+30h] [rbp-238h]
  __int64 v69; // [rsp+38h] [rbp-230h]
  char v70; // [rsp+38h] [rbp-230h]
  __int64 v71; // [rsp+40h] [rbp-228h]
  _BYTE v72[16]; // [rsp+50h] [rbp-218h] BYREF
  void *s1; // [rsp+60h] [rbp-208h]
  size_t n; // [rsp+68h] [rbp-200h]
  _BYTE v75[48]; // [rsp+80h] [rbp-1E8h] BYREF
  _BYTE v76[16]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *s2; // [rsp+C0h] [rbp-1A8h]
  __int64 v78; // [rsp+C8h] [rbp-1A0h]
  _BYTE v79[48]; // [rsp+E0h] [rbp-188h] BYREF
  __int64 v80; // [rsp+110h] [rbp-158h] BYREF
  void *ptr; // [rsp+118h] [rbp-150h]
  __int64 v82; // [rsp+120h] [rbp-148h]
  _BYTE v83[320]; // [rsp+128h] [rbp-140h] BYREF

  v3 = *(char **)(a1 + 8);
  v4 = *(__m128i **)a1;
  v5 = (__int64)&v3[-*(_QWORD *)a1];
  v6 = 0x8E38E38E38E38E39LL * (v5 >> 3);
  if ( v3 != *(char **)a1 )
  {
    _BitScanReverse64(&v7, 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3));
    sub_226BFE0(*(__m128i **)a1, *(__m128i **)(a1 + 8), 2LL * (int)(63 - (v7 ^ 0x3F)));
    if ( v5 <= 1152 )
    {
      sub_225CC70((__int64)v4, v3);
    }
    else
    {
      v8 = v4 + 72;
      sub_225CC70((__int64)v4, v4[72].m128i_i8);
      if ( v3 != (char *)&v4[72] )
      {
        do
        {
          v9 = (__int64)v8;
          v8 = (__m128i *)((char *)v8 + 72);
          sub_225CAE0(v9);
        }
        while ( v3 != (char *)v8 );
      }
    }
    v4 = *(__m128i **)a1;
    v6 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  }
  v10 = *(_BYTE *)(a1 + 25);
  v11 = *(_BYTE *)(a1 + 29);
  ptr = v83;
  v82 = 0x1000000000LL;
  v12 = *(_QWORD *)(a1 + 40);
  v80 = a2;
  v66 = v12;
  v65 = *(_BYTE *)(a1 + 28);
  v64 = *(_BYTE *)(a1 + 24);
  LOBYTE(v12) = *(_BYTE *)(a1 + 26);
  v13 = *(_BYTE *)(a1 + 27);
  v63 = v12;
  sub_995540(a2, "{\n  'version': 0,\n");
  if ( v10 )
  {
    v58 = sub_995540(v80, "  'case-sensitive': '");
    v59 = "true";
    if ( !v64 )
      v59 = "false";
    v60 = sub_995540(v58, v59);
    sub_995540(v60, "',\n");
  }
  v14 = v80;
  if ( v11 )
  {
    v55 = sub_995540(v80, "  'use-external-names': '");
    v56 = "true";
    if ( !v65 )
      v56 = "false";
    v57 = sub_995540(v55, v56);
    sub_995540(v57, "',\n");
    v14 = v80;
  }
  v15 = v13;
  if ( v13 )
  {
    v15 = v63;
    v52 = "true";
    v53 = sub_995540(v14, "  'overlay-relative': '");
    if ( !v63 )
      v52 = "false";
    v54 = sub_995540(v53, v52);
    sub_995540(v54, "',\n");
    v14 = v80;
  }
  sub_995540(v14, "  'roots': [\n");
  if ( v6 )
  {
    v16 = v4->m128i_i64[0];
    v17 = v4->m128i_u64[1];
    if ( !v4[4].m128i_i8[0] )
      v16 = sub_228A4B0(v4->m128i_i64[0], v4->m128i_i64[1], 0);
    sub_225A960(&v80, v16, v17);
    v18 = v4[2].m128i_i64[0];
    v19 = v4[2].m128i_u64[1];
    if ( v15 )
    {
      v20 = v66;
      if ( v66 > v19 )
      {
        v20 = v4[2].m128i_i64[1];
        v19 = 0;
      }
      else
      {
        v19 -= v66;
      }
      v18 += v20;
    }
    v21 = v4[4].m128i_i8[0];
    if ( !v21 )
    {
      v61 = sub_228AA60(v4->m128i_i64[0], v4->m128i_i64[1], 0);
      sub_225A7F0(&v80, v61, v62, v18, v19);
    }
    v22 = (__int64)&v4->m128i_i64[9 * v6];
    v23 = &v4[4].m128i_i8[8];
    v71 = v22;
    if ( &v4[4].m128i_u64[1] != (unsigned __int64 *)v22 )
    {
      do
      {
        v30 = *(const void **)v23;
        v31 = *((_QWORD *)v23 + 1);
        if ( !v23[64] )
        {
          v30 = (const void *)sub_228A4B0(*(_QWORD *)v23, *((_QWORD *)v23 + 1), 0);
          v31 = v49;
        }
        v26 = (unsigned int)v82;
        v25 = (char *)ptr;
        v32 = v82;
        v33 = (char *)ptr + 16 * (unsigned int)v82 - 16;
        if ( *((_QWORD *)v33 + 1) == v31 )
        {
          v69 = (unsigned int)v82;
          v67 = (char *)ptr;
          if ( !v31 || (v24 = memcmp(v30, *(const void **)v33, v31), v25 = v67, v26 = v69, !v24) )
          {
            if ( !v21 )
              sub_995540(v80, ",\n");
            goto LABEL_26;
          }
        }
        v34 = v32 == 0;
        v35 = 0;
        if ( v34 )
        {
LABEL_61:
          if ( v21 == 1 && !v35 )
            goto LABEL_63;
        }
        else
        {
          v70 = v21;
          while ( 2 )
          {
            v43 = 16 * v26;
            v44 = *(_QWORD *)&v25[v43 - 8];
            v68 = *(_QWORD *)&v25[v43 - 16];
            sub_22892D0(v72, v68, v44, 0);
            sub_2289320(v75, v68, v44);
            sub_22892D0(v76, v30, v31, 0);
            sub_2289320(v79, v30, v31);
            while ( !(unsigned __int8)sub_22895C0(v72, v75) && !(unsigned __int8)sub_22895C0(v76, v79) )
            {
              if ( n != v78 || n && memcmp(s1, s2, n) )
                goto LABEL_38;
              sub_2289340(v72);
              sub_2289340(v76);
            }
            if ( (unsigned __int8)sub_22895C0(v72, v75) )
            {
              v21 = v70;
              goto LABEL_61;
            }
LABEL_38:
            v36 = v80;
            v37 = *(_BYTE **)(v80 + 32);
            if ( *(_BYTE **)(v80 + 24) == v37 )
            {
              sub_227BF10(v80, "\n", 1);
            }
            else
            {
              *v37 = 10;
              ++*(_QWORD *)(v36 + 32);
            }
            v38 = 4 * v82;
            v39 = sub_227D090(v80, (unsigned int)(4 * v82 + 2));
            v40 = *(_WORD **)(v39 + 32);
            if ( *(_QWORD *)(v39 + 24) - (_QWORD)v40 > 1u )
            {
              *v40 = 2653;
              *(_QWORD *)(v39 + 32) += 2LL;
            }
            else
            {
              sub_227BF10(v39, "]\n", 2);
            }
            v41 = sub_227D090(v80, v38);
            v42 = *(_BYTE **)(v41 + 32);
            if ( *(_BYTE **)(v41 + 24) == v42 )
            {
              sub_227BF10(v41, "}", 1);
            }
            else
            {
              *v42 = 125;
              ++*(_QWORD *)(v41 + 32);
            }
            v26 = (unsigned int)(v82 - 1);
            LODWORD(v82) = v26;
            if ( (_DWORD)v26 )
            {
              v25 = (char *)ptr;
              v35 = 1;
              continue;
            }
            break;
          }
        }
        sub_995540(v80, ",\n");
LABEL_63:
        v21 = 1;
        sub_225A960(&v80, (__int64)v30, v31);
LABEL_26:
        v27 = *((_QWORD *)v23 + 4);
        v28 = *((_QWORD *)v23 + 5);
        if ( v15 )
        {
          v29 = 0;
          if ( v66 <= v28 )
          {
            v28 = v66;
            v29 = *((_QWORD *)v23 + 5) - v66;
          }
          v27 += v28;
          v28 = v29;
        }
        if ( !v23[64] )
        {
          v21 = 0;
          v50 = sub_228AA60(*(_QWORD *)v23, *((_QWORD *)v23 + 1), 0);
          sub_225A7F0(&v80, v50, v51, v27, v28);
        }
        v23 += 72;
      }
      while ( (char *)v71 != v23 );
    }
    for ( ; (_DWORD)v82; LODWORD(v82) = v82 - 1 )
    {
      sub_995540(v80, "\n");
      v45 = 4 * v82;
      v46 = sub_227D090(v80, (unsigned int)(4 * v82 + 2));
      sub_995540(v46, "]\n");
      v47 = sub_227D090(v80, v45);
      sub_995540(v47, "}");
    }
    sub_995540(v80, "\n");
  }
  v48 = sub_995540(v80, "  ]\n");
  sub_995540(v48, "}\n");
  if ( ptr != v83 )
    free(ptr);
}
