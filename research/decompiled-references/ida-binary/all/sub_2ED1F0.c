__int64 __fastcall sub_2ED1F0(
        __int64 a1,
        char *a2,
        _QWORD *a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 v13; // r13
  int v15; // eax
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  int v18; // ecx
  bool v19; // sf
  int v20; // eax
  unsigned int v21; // ecx
  const char *v22; // rdi
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 ph; // r13
  bool v27; // zf
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 eah; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __int64 v41; // rcx
  __int64 v42; // rax
  __m128i v43; // xmm0
  char v44; // al
  __int64 v45; // rax
  __m128i v46; // xmm0
  char v47; // al
  __int64 v48; // [rsp-10h] [rbp-188h]
  __int64 v49; // [rsp-8h] [rbp-180h]
  char v50; // [rsp+0h] [rbp-178h]
  unsigned int v51; // [rsp+4h] [rbp-174h]
  __int64 v52; // [rsp+8h] [rbp-170h]
  const char *v53; // [rsp+10h] [rbp-168h]
  __m128i v54; // [rsp+18h] [rbp-160h] BYREF
  __m128i *v55; // [rsp+28h] [rbp-150h]
  __int16 v56; // [rsp+34h] [rbp-144h] BYREF
  __int16 v57; // [rsp+36h] [rbp-142h] BYREF
  const char *v58; // [rsp+38h] [rbp-140h] BYREF
  __int64 v59; // [rsp+40h] [rbp-138h] BYREF
  __int64 v60; // [rsp+48h] [rbp-130h] BYREF
  __int64 v61; // [rsp+50h] [rbp-128h]
  unsigned __int64 v62; // [rsp+58h] [rbp-120h]
  __int64 v63; // [rsp+60h] [rbp-118h]
  __int64 v64; // [rsp+68h] [rbp-110h]
  __m128i v65; // [rsp+70h] [rbp-108h] BYREF
  __int128 v66; // [rsp+80h] [rbp-F8h]
  __int64 v67; // [rsp+90h] [rbp-E8h]
  __int64 v68; // [rsp+98h] [rbp-E0h]
  __int64 v69; // [rsp+A0h] [rbp-D8h]
  __int128 v70; // [rsp+A8h] [rbp-D0h]
  __int128 v71; // [rsp+B8h] [rbp-C0h]
  __int128 v72; // [rsp+C8h] [rbp-B0h]
  __int128 v73; // [rsp+D8h] [rbp-A0h]
  __int128 v74; // [rsp+E8h] [rbp-90h]
  __int128 v75; // [rsp+F8h] [rbp-80h]
  __int128 v76; // [rsp+108h] [rbp-70h]
  __int128 v77; // [rsp+118h] [rbp-60h]
  unsigned __int64 v78; // [rsp+128h] [rbp-50h]
  unsigned __int64 v79; // [rsp+138h] [rbp-40h]

  v13 = *(_QWORD *)a2;
  v79 = __readfsqword(0x28u);
  dword_8CD494 = a1;
  v60 = v13;
  v15 = *(_DWORD *)(get_ph(a1, a2) + 16);
  v57 = 1;
  v58 = nullptr;
  v18 = v15 + 14;
  v19 = v15 + 7 < 0;
  v20 = v15 + 7;
  v59 = 0;
  if ( !v19 )
    v18 = v20;
  v62 = v13;
  v63 = 0;
  v21 = v18 >> 3;
  if ( !v21 )
    v21 = 1;
  v56 = 0;
  dword_8CD494 = (v21 + dword_8CD494 - 1) / v21;
  v61 = (unsigned int)dword_8CD494;
  v64 = (unsigned int)dword_8CD494;
  if ( batch )
  {
    v22 = nullptr;
    v30 = sub_2ECCD0(0, 0, 0, 1u, v13, (unsigned int)dword_8CD494, v13, (unsigned int)dword_8CD494);
    if ( v30 == 3 )
    {
      eah = get_eah(0, v49, v31);
      v41 = 0x100000000LL;
      if ( *(_DWORD *)(eah + 24) == 8 )
        v41 = -1;
      v22 = "The file size 0x%a is too big and does not fit into the address space, truncating to 0x%a\n";
      v23 = v41 - v60;
      sub_169700(
        (int)"The file size 0x%a is too big and does not fit into the address space, truncating to 0x%a\n",
        v61,
        v23,
        v23,
        v37,
        v38,
        a5,
        a6,
        a7,
        a8,
        v39,
        v40,
        a11,
        a12,
        v50);
      v61 = v23;
      v64 = v23;
LABEL_8:
      v24 = v59;
      if ( !(v23 | v59) )
      {
LABEL_9:
        *(_QWORD *)a2 = v62;
        *a3 = v63;
        *a4 = v64;
        return 1;
      }
      v54.m128i_i64[0] = v60;
      v54.m128i_i64[1] = (__int64)v58;
      v52 = v60 + v23;
      v53 = &v58[v59];
      ph = get_ph(v22, v58);
      v27 = getinf(16) == -1;
      v28 = 1;
      if ( v27 )
        v28 = 65;
      v51 = v28;
      if ( !(unsigned __int8)getinf_flag(3, 4) )
      {
        v29 = *(_DWORD *)(ph + 8);
        if ( (v29 & 0x2000) == 0 || !(((unsigned __int64)v53 | v52) >> 32) )
        {
LABEL_14:
          LODWORD(ph) = (v29 >> 2) & 1;
LABEL_15:
          if ( v23 )
          {
            v67 = 0;
            v78 = 0xFFFFFFFF00000000LL;
            v65 = 0;
            v66 = 0;
            v70 = -1;
            v71 = -1;
            v72 = -1;
            v73 = -1;
            v74 = -1;
            v75 = -1;
            v76 = -1;
            v77 = -1;
            v68 = 0;
            v69 = 0;
            v55 = &v65;
            v45 = setup_selector(0);
            v46 = _mm_loadl_epi64(&v54);
            LOWORD(v68) = 1281;
            v69 = v45;
            BYTE3(v68) = ph;
            v65 = _mm_unpacklo_epi64(v46, (__m128i)(unsigned __int64)v52);
            v47 = add_segm_ex(&v65, "ROM", "CODE", v51);
            if ( v52 == -1 )
            {
              if ( v47 )
                set_segm_end(v54.m128i_i64[0], -1, 0);
            }
          }
          if ( v24 )
          {
            v67 = 0;
            v65 = 0;
            v66 = 0;
            v70 = -1;
            v71 = -1;
            v72 = -1;
            v73 = -1;
            v74 = -1;
            v75 = -1;
            v76 = -1;
            v77 = -1;
            v68 = 0;
            v69 = 0;
            v78 = 0xFFFFFFFF00000000LL;
            v42 = setup_selector(0);
            v43 = _mm_loadl_epi64((const __m128i *)&v54.m128i_u64[1]);
            v69 = v42;
            LOWORD(v68) = 1281;
            BYTE3(v68) = ph;
            v65 = _mm_unpacklo_epi64(v43, (__m128i)(unsigned __int64)v53);
            v44 = add_segm_ex(&v65, "RAM", 0, v51);
            if ( v53 == (const char *)-1LL )
            {
              if ( v44 )
                set_segm_end(v54.m128i_i64[1], -1, 0);
            }
          }
          set_default_dataseg(0);
          goto LABEL_9;
        }
        setinf_flag(3, 4, 1);
      }
      v29 = *(_DWORD *)(ph + 8);
      LOBYTE(ph) = 2;
      if ( (v29 & 0x10000000) != 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( (v30 & 0xFFFFFFF7) == 0 )
    {
LABEL_7:
      v23 = v61;
      goto LABEL_8;
    }
    sub_169700(
      (int)"%s\n",
      (__int64)off_8624C0[v30],
      (__int64)off_8624C0,
      v48,
      v32,
      v33,
      a5,
      a6,
      a7,
      a8,
      v34,
      v35,
      a11,
      a12,
      v50);
  }
  else
  {
    v22 = "Disassembly memory organization\n"
          "\n"
          "%/RAM\n"
          "  <Create RAM section:C1>>\n"
          "  <RAM start address:N2:500:30::>\n"
          "  <RAM size         :N3:500:30::>\n"
          "\n"
          "\n"
          "ROM\n"
          "  <Create ROM section:C4>>\n"
          "  <ROM start address:N5:500:30::>\n"
          "  <ROM size         :N6:500:30::>\n"
          "\n"
          "\n"
          "Input file\n"
          "  <Loading address:N7:500:30::>\n"
          "  <File offset    :N8:500:30::>\n"
          "  <Loading size   :N9:500:30::>\n"
          "\n"
          "Additional binary files can be loaded into the database using the\n"
          "\"File, Load file, Addtional binary file\" command.\n"
          "\n";
    if ( (int)sub_1697D0(
                (int)"Disassembly memory organization\n"
                     "\n"
                     "%/RAM\n"
                     "  <Create RAM section:C1>>\n"
                     "  <RAM start address:N2:500:30::>\n"
                     "  <RAM size         :N3:500:30::>\n"
                     "\n"
                     "\n"
                     "ROM\n"
                     "  <Create ROM section:C4>>\n"
                     "  <ROM start address:N5:500:30::>\n"
                     "  <ROM size         :N6:500:30::>\n"
                     "\n"
                     "\n"
                     "Input file\n"
                     "  <Loading address:N7:500:30::>\n"
                     "  <File offset    :N8:500:30::>\n"
                     "  <Loading size   :N9:500:30::>\n"
                     "\n"
                     "Additional binary files can be loaded into the database using the\n"
                     "\"File, Load file, Addtional binary file\" command.\n"
                     "\n",
                (__int64)sub_2ECF10,
                (__int64)&v56,
                (__int64)&v58,
                (__int64)&v59,
                (__int64)&v57,
                a5,
                a6,
                a7,
                a8,
                v16,
                v17,
                a11,
                a12,
                (char)&v60) > 0 )
      goto LABEL_7;
  }
  return 0;
}
