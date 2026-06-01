__int64 __fastcall sub_1156B0(int a1, unsigned __int64 *a2, _QWORD *a3, __int64 *a4, double a5, double a6)
{
  unsigned __int64 v7; // r13
  int v9; // eax
  int v10; // ecx
  bool v11; // sf
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 ph; // r13
  int v18; // eax
  char v19; // r13
  int v20; // eax
  __int64 eah; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i v24; // xmm0
  char v25; // al
  __int64 v26; // rax
  __m128i v27; // xmm0
  char v28; // al
  __int64 v29; // [rsp+8h] [rbp-170h]
  unsigned __int64 v30; // [rsp+10h] [rbp-168h]
  __m128i v31; // [rsp+18h] [rbp-160h] BYREF
  __m128i *v32; // [rsp+28h] [rbp-150h]
  __int16 v33; // [rsp+34h] [rbp-144h] BYREF
  __int16 v34; // [rsp+36h] [rbp-142h] BYREF
  __int64 v35; // [rsp+38h] [rbp-140h] BYREF
  __int64 v36; // [rsp+40h] [rbp-138h] BYREF
  __int64 v37; // [rsp+48h] [rbp-130h] BYREF
  __int64 v38; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-120h] BYREF
  __int64 v40; // [rsp+60h] [rbp-118h] BYREF
  __int64 v41; // [rsp+68h] [rbp-110h] BYREF
  __m128i v42; // [rsp+70h] [rbp-108h] BYREF
  __int128 v43; // [rsp+80h] [rbp-F8h]
  __int64 v44; // [rsp+90h] [rbp-E8h]
  __int64 v45; // [rsp+98h] [rbp-E0h]
  __int64 v46; // [rsp+A0h] [rbp-D8h]
  __int128 v47; // [rsp+A8h] [rbp-D0h]
  __int128 v48; // [rsp+B8h] [rbp-C0h]
  __int128 v49; // [rsp+C8h] [rbp-B0h]
  __int128 v50; // [rsp+D8h] [rbp-A0h]
  __int128 v51; // [rsp+E8h] [rbp-90h]
  __int128 v52; // [rsp+F8h] [rbp-80h]
  __int128 v53; // [rsp+108h] [rbp-70h]
  __int128 v54; // [rsp+118h] [rbp-60h]
  unsigned __int64 v55; // [rsp+128h] [rbp-50h]
  unsigned __int64 v56; // [rsp+138h] [rbp-40h]

  v7 = *a2;
  v56 = __readfsqword(0x28u);
  dword_252E50 = a1;
  v37 = v7;
  v9 = *(_DWORD *)(get_ph() + 16);
  v34 = 1;
  v35 = 0;
  v10 = v9 + 14;
  v11 = v9 + 7 < 0;
  v12 = v9 + 7;
  v36 = 0;
  if ( !v11 )
    v10 = v12;
  v39 = v7;
  v40 = 0;
  v13 = v10 >> 3;
  if ( !v13 )
    v13 = 1;
  v33 = 0;
  dword_252E50 = (v13 + dword_252E50 - 1) / v13;
  v38 = (unsigned int)dword_252E50;
  v41 = (unsigned int)dword_252E50;
  if ( batch )
  {
    v20 = sub_115110(0, 0, 0, 1u, v7, (unsigned int)dword_252E50, v7, (unsigned int)dword_252E50);
    if ( v20 == 3 )
    {
      eah = get_eah();
      v22 = 0x100000000LL;
      if ( *(_DWORD *)(eah + 24) == 8 )
        v22 = -1;
      v14 = v22 - v37;
      sub_8F740(
        (__int64)"The file size 0x%a is too big and does not fit into the address space, truncating to 0x%a\n",
        a5,
        a6);
      v38 = v14;
      v41 = v14;
LABEL_8:
      v15 = v36;
      if ( !(v14 | v36) )
      {
LABEL_9:
        *a2 = v39;
        *a3 = v40;
        *a4 = v41;
        return 1;
      }
      v31.m128i_i64[0] = v37;
      v31.m128i_i64[1] = v35;
      v29 = v37 + v14;
      v30 = v36 + v35;
      ph = get_ph();
      getinf();
      if ( !(unsigned __int8)getinf_flag() )
      {
        v18 = *(_DWORD *)(ph + 8);
        if ( (v18 & 0x2000) == 0 || !((v30 | v29) >> 32) )
        {
LABEL_12:
          v19 = (v18 & 4) != 0;
LABEL_13:
          if ( v14 )
          {
            v44 = 0;
            v55 = 0xFFFFFFFF00000000LL;
            v42 = 0;
            v43 = 0;
            v47 = -1;
            v48 = -1;
            v49 = -1;
            v50 = -1;
            v51 = -1;
            v52 = -1;
            v53 = -1;
            v54 = -1;
            v45 = 0;
            v46 = 0;
            v32 = &v42;
            v26 = setup_selector();
            v27 = _mm_loadl_epi64(&v31);
            LOWORD(v45) = 1281;
            v46 = v26;
            BYTE3(v45) = v19;
            v42 = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)v29);
            v28 = add_segm_ex();
            if ( v29 == -1 )
            {
              if ( v28 )
                set_segm_end();
            }
          }
          if ( v15 )
          {
            v44 = 0;
            v42 = 0;
            v43 = 0;
            v47 = -1;
            v48 = -1;
            v49 = -1;
            v50 = -1;
            v51 = -1;
            v52 = -1;
            v53 = -1;
            v54 = -1;
            v45 = 0;
            v46 = 0;
            v55 = 0xFFFFFFFF00000000LL;
            v23 = setup_selector();
            v24 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
            v46 = v23;
            LOWORD(v45) = 1281;
            BYTE3(v45) = v19;
            v42 = _mm_unpacklo_epi64(v24, (__m128i)v30);
            v25 = add_segm_ex();
            if ( v30 == -1 )
            {
              if ( v25 )
                set_segm_end();
            }
          }
          set_default_dataseg();
          goto LABEL_9;
        }
        setinf_flag();
      }
      v18 = *(_DWORD *)(ph + 8);
      v19 = 2;
      if ( (v18 & 0x10000000) != 0 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( (v20 & 0xFFFFFFF7) == 0 )
    {
LABEL_7:
      v14 = v38;
      goto LABEL_8;
    }
    sub_8F740((__int64)"%s\n", off_231CE0[v20]);
  }
  else if ( (int)sub_8F810(
                   (__int64)"Disassembly memory organization\n"
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
                   sub_1153D0,
                   &v33,
                   &v35,
                   &v36,
                   &v34,
                   &v37,
                   &v38,
                   &v39,
                   &v40,
                   &v41) > 0 )
  {
    goto LABEL_7;
  }
  return 0;
}

