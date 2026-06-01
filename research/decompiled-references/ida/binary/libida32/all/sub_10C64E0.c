__int64 __fastcall sub_10C64E0(
        __m128i *a1,
        unsigned __int64 a2,
        __m128i *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7)
{
  __m128i *v7; // r14
  __m128i *v8; // rax
  __m128i *v9; // r8
  const __m128i *v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rax
  int v18; // edi
  char *v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  const char *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  char *v26; // rsi
  __int64 v27; // r12
  __m128i *v28; // rax
  __m128i *v29; // r8
  unsigned int v30; // r15d
  __int64 v31; // rax
  _QWORD *v32; // rax
  __m128i *v33; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbp
  const char *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  const char *v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // r13
  int v53; // r8d
  int v54; // r9d
  unsigned int v55; // eax
  __m128 v56; // xmm0
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // r8
  int v62; // r13d
  const char *v63; // rsi
  __int64 *v64; // r14
  __int64 *v65; // rbx
  __int64 v66; // r12
  __int64 v67; // r15
  int v68; // r8d
  int v69; // r9d
  unsigned int v70; // eax
  __int64 (__fastcall ***v71)(); // [rsp+0h] [rbp-1D8h] BYREF
  __m128i *v72; // [rsp+8h] [rbp-1D0h]
  __m128i *v73; // [rsp+10h] [rbp-1C8h] BYREF
  int v74; // [rsp+1Ch] [rbp-1BCh]
  void **v75; // [rsp+20h] [rbp-1B8h]
  const __m128i *v76; // [rsp+28h] [rbp-1B0h]
  void *v77; // [rsp+30h] [rbp-1A8h]
  __m128i *v78; // [rsp+38h] [rbp-1A0h]
  int v79; // [rsp+4Ch] [rbp-18Ch] BYREF
  void *v80[2]; // [rsp+50h] [rbp-188h] BYREF
  char v81; // [rsp+60h] [rbp-178h] BYREF
  void *v82[2]; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v83[16]; // [rsp+80h] [rbp-158h] BYREF
  __m128i v84; // [rsp+90h] [rbp-148h] BYREF
  _QWORD v85[4]; // [rsp+C0h] [rbp-118h] BYREF
  __int16 v86; // [rsp+E0h] [rbp-F8h]
  void *v87; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-E0h]
  __int64 (__fastcall **v89)(); // [rsp+120h] [rbp-B8h] BYREF
  int v90; // [rsp+128h] [rbp-B0h]
  __int128 v91; // [rsp+130h] [rbp-A8h]
  _BYTE *v92; // [rsp+140h] [rbp-98h]
  char v93; // [rsp+148h] [rbp-90h]
  int v94; // [rsp+14Ch] [rbp-8Ch]
  void **v95; // [rsp+150h] [rbp-88h]
  __m128i v96; // [rsp+160h] [rbp-78h] BYREF
  __m128 v97; // [rsp+170h] [rbp-68h]
  __m128 v98; // [rsp+180h] [rbp-58h]
  void **v99; // [rsp+190h] [rbp-48h]

  v7 = (__m128i *)&a3->m128i_u64[1];
  v8 = (__m128i *)a3[1].m128i_i64[0];
  if ( v8 )
  {
    v9 = (__m128i *)&a3->m128i_u64[1];
    do
    {
      while ( v8[2].m128i_i64[0] >= a2 )
      {
        v9 = v8;
        v8 = (__m128i *)v8[1].m128i_i64[0];
        if ( !v8 )
          goto LABEL_6;
      }
      v8 = (__m128i *)v8[1].m128i_i64[1];
    }
    while ( v8 );
LABEL_6:
    if ( v7 != v9 && v9[2].m128i_i64[0] <= a2 )
      return v9[2].m128i_u32[2];
  }
  v80[0] = &v81;
  v12 = (const __m128i *)a2;
  v74 = a4;
  v75 = v80;
  v95 = v80;
  v89 = &off_2BC1EC8;
  v71 = &v89;
  v80[1] = nullptr;
  v81 = 0;
  v90 = 0;
  v93 = 0;
  v94 = 1;
  v92 = nullptr;
  v91 = 0;
  sub_2257B70(&v89, 0, 0, 0);
  v17 = "   ";
  if ( a4 != 1 )
  {
    if ( v74 != 2 )
    {
      v98.m128_i16[0] = 257;
      goto LABEL_11;
    }
    v17 = "|  ";
  }
  v96.m128i_i64[0] = (__int64)v17;
  v98.m128_i16[0] = 259;
LABEL_11:
  v72 = &v96;
  sub_A1D840(&v84, &a7, &v96, v14, v15, v16);
  v18 = *(_DWORD *)(a2 + 8);
  v79 = 1;
  v19 = sub_10ADFB0(v18);
  v20 = sub_971800((__int64)v71, v19);
  sub_971800(v20, ", ");
  v21 = *(_DWORD *)(a2 + 8);
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      v48 = v92;
      if ( (unsigned __int64)v92 >= *((_QWORD *)&v91 + 1) )
      {
        v49 = sub_2257CD0(v71, 34);
      }
      else
      {
        v49 = (__int64)v71;
        ++v92;
        *v48 = 34;
      }
      v50 = sub_9717A0(v49, *(const void **)(a2 + 88), *(_QWORD *)(a2 + 96));
      v51 = *(_BYTE **)(v50 + 32);
      if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
      {
        v50 = sub_2257CD0(v50, 34);
      }
      else
      {
        *(_QWORD *)(v50 + 32) = v51 + 1;
        *v51 = 34;
      }
      v52 = sub_971800(v50, ", {");
      v55 = sub_10C64E0((_DWORD)a1, **(_QWORD **)(a2 + 16), (_DWORD)a3, v79, v53, v54, v84.m128i_i8[0]);
      v23 = "}";
      v24 = sub_2257BD0(v52, v55);
    }
    else
    {
      if ( v21 == 2 )
      {
        LOBYTE(v85[0]) = 1;
        v73 = a1;
        v56 = _mm_loadh_ps((const double *)&v71);
        v76 = (const __m128i *)v85;
        v96 = (__m128i)v56;
        v73 = a3;
        v97 = _mm_loadh_ps((const double *)&v73);
        v73 = (__m128i *)&v79;
        v87 = sub_10C6CD0;
        v88 = (__int64)v72;
        v98 = _mm_loadh_ps((const double *)&v73);
        v73 = (__m128i *)&v87;
        sub_10AE420(a2, (__int64)&v87);
        goto LABEL_14;
      }
      v60 = *(unsigned int *)(a2 + 24);
      v23 = "{}";
      if ( v12[1].m128i_i32[2] )
      {
        v61 = (__int64 *)v12[1].m128i_i64[0];
        v73 = v7;
        v62 = (int)a1;
        v63 = "{";
        v76 = v12;
        v64 = v61;
        v65 = &v61[v60];
        do
        {
          v66 = *v64++;
          v67 = sub_971800((__int64)v71, v63);
          v70 = sub_10C64E0(v62, v66, (_DWORD)a3, v79, v68, v69, v84.m128i_i8[0]);
          sub_2257BD0(v67, v70);
          v79 = 2;
          v63 = ", ";
        }
        while ( v65 != v64 );
        v7 = v73;
        v12 = v76;
        v23 = "}";
      }
      v24 = (__int64)v71;
    }
  }
  else
  {
    v22 = sub_971800((__int64)v71, "\"");
    v23 = "\"";
    v24 = sub_971800(v22, **(const char ***)(v12[5].m128i_i64[1] + 48));
  }
  sub_971800(v24, v23);
  v76 = (const __m128i *)v85;
  v73 = (__m128i *)&v87;
LABEL_14:
  v25 = (__int64)v72;
  v26 = nullptr;
  v83[0] = 0;
  v82[0] = v83;
  v82[1] = nullptr;
  v96.m128i_i32[2] = 0;
  v98.m128_i8[8] = 0;
  v98.m128_i32[3] = 1;
  v98.m128_u64[0] = 0;
  v97 = 0;
  v96.m128i_i64[0] = (__int64)&off_2BC1EC8;
  v99 = v82;
  sub_2257B70(v72, 0, 0, 0);
  if ( v12->m128i_i32[2] != 2 )
  {
    v26 = (char *)v12;
    sub_10B01C0(v73, (__int64)v12);
    if ( v88 )
    {
      v57 = (__int64)v72;
      v58 = sub_971800((__int64)v72, ", (");
      sub_22581D0(v58, v87, v88);
      if ( v12[4].m128i_i64[1] )
      {
        v59 = sub_971800(v57, ", ");
        sub_971800(v59, (const char *)v12[4].m128i_i64[1]);
      }
      v26 = ")";
      sub_971800((__int64)v72, ")");
    }
    v25 = (__int64)v87;
    if ( v87 != &v73[1] )
      operator delete(v87);
  }
  v27 = a3[2].m128i_i64[1];
  v28 = (__m128i *)a3[1].m128i_i64[0];
  v29 = v7;
  v30 = v27;
  if ( !v28 )
    goto LABEL_25;
  do
  {
    while ( v28[2].m128i_i64[0] >= (unsigned __int64)v12 )
    {
      v29 = v28;
      v28 = (__m128i *)v28[1].m128i_i64[0];
      if ( !v28 )
        goto LABEL_23;
    }
    v28 = (__m128i *)v28[1].m128i_i64[1];
  }
  while ( v28 );
LABEL_23:
  if ( v7 == v29 || v29[2].m128i_i64[0] > (unsigned __int64)v12 )
  {
LABEL_25:
    v78 = v29;
    v31 = operator new(0x30u);
    v26 = (char *)v78;
    *(_QWORD *)(v31 + 32) = v12;
    *(_DWORD *)(v31 + 40) = 0;
    v77 = (void *)v31;
    v32 = sub_10C63F0(a3, v26, (unsigned __int64 *)(v31 + 32));
    if ( v33 )
    {
      v25 = v7 == v33 || v32 || *((_QWORD *)v77 + 4) < v33[2].m128i_i64[0];
      v26 = (char *)v77;
      std::_Rb_tree_insert_and_rebalance();
      ++a3[2].m128i_i64[1];
      v29 = (__m128i *)v77;
    }
    else
    {
      v25 = (__int64)v77;
      v77 = v32;
      operator delete((void *)v25);
      v29 = (__m128i *)v77;
    }
  }
  v29[2].m128i_i32[2] = v27;
  v36 = sub_2259990(v25, v26);
  if ( v74 == 1 )
  {
    v47 = "+- ";
LABEL_43:
    v85[0] = v47;
    v86 = 259;
    goto LABEL_36;
  }
  if ( v74 == 2 )
  {
    v47 = "|- ";
    goto LABEL_43;
  }
  v35 = 257;
  v86 = 257;
LABEL_36:
  v39 = v73;
  sub_A1D840(v73, &a7, v76, v35, v37, v38);
  sub_2230440(v39, v36);
  v40 = sub_2257BD0(v36, (unsigned int)v27);
  v41 = sub_971800(v40, ": ");
  v42 = sub_22581D0(v41, *v95, v95[1]);
  v43 = sub_971800(v42, ", ");
  v44 = (const char *)sub_12A8B80(v12->m128i_u32[3]);
  v45 = sub_971800(v43, v44);
  v46 = sub_22581D0(v45, *v99, v99[1]);
  sub_971800(v46, "\n");
  v96.m128i_i64[0] = (__int64)&off_2BC1EC8;
  sub_2257A60(v72);
  if ( v82[0] != v83 )
    operator delete(v82[0]);
  v89 = &off_2BC1EC8;
  sub_2257A60(v71);
  if ( v80[0] != v75 + 2 )
    operator delete(v80[0]);
  return v30;
}

