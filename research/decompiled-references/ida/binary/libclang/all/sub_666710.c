__int64 __fastcall sub_666710(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 result; // rax
  char *v11; // rbp
  __int64 v12; // r14
  char *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rdi
  int v24; // esi
  void *v25; // rax
  void *v26; // rdx
  char *v27; // r13
  __int64 *v28; // r12
  void *v29; // rax
  void *v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r12
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 *v38; // rsi
  __int64 *v39; // rdi
  void (__fastcall ***v40)(_QWORD); // rdi
  __int64 v41; // rdi
  __int64 v42; // rax
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __m128i v48; // [rsp+0h] [rbp-5D8h]
  __m128i v49; // [rsp+10h] [rbp-5C8h]
  __m128i v50; // [rsp+38h] [rbp-5A0h]
  _QWORD *v51; // [rsp+C0h] [rbp-518h]
  __int64 v52; // [rsp+D0h] [rbp-508h]
  __int64 v53; // [rsp+D8h] [rbp-500h]
  __int64 v54; // [rsp+E0h] [rbp-4F8h]
  __int64 *v55; // [rsp+E0h] [rbp-4F8h]
  __int64 v56; // [rsp+E8h] [rbp-4F0h]
  char v57; // [rsp+FEh] [rbp-4DAh]
  unsigned __int8 v58; // [rsp+FFh] [rbp-4D9h]
  char v59; // [rsp+FFh] [rbp-4D9h]
  __int64 v60; // [rsp+100h] [rbp-4D8h]
  __int64 v61; // [rsp+108h] [rbp-4D0h]
  __int64 v62; // [rsp+110h] [rbp-4C8h]
  __int64 v63; // [rsp+120h] [rbp-4B8h]
  __int64 v64; // [rsp+128h] [rbp-4B0h]
  __m128i v65; // [rsp+140h] [rbp-498h] BYREF
  __int64 v66; // [rsp+150h] [rbp-488h]
  __m128 v67; // [rsp+160h] [rbp-478h] BYREF
  __int64 v68; // [rsp+170h] [rbp-468h]
  __int64 v69[4]; // [rsp+180h] [rbp-458h] BYREF
  __m128i v70; // [rsp+1A0h] [rbp-438h] BYREF
  __int64 v71; // [rsp+1B0h] [rbp-428h]
  _QWORD v72[2]; // [rsp+1C0h] [rbp-418h] BYREF
  char v73; // [rsp+1D0h] [rbp-408h]
  __int64 v74[4]; // [rsp+1E0h] [rbp-3F8h] BYREF
  __m128i v75; // [rsp+200h] [rbp-3D8h] BYREF
  __int64 v76; // [rsp+210h] [rbp-3C8h]
  __m128i v77; // [rsp+220h] [rbp-3B8h] BYREF
  __int64 v78; // [rsp+230h] [rbp-3A8h]
  __int64 v79[4]; // [rsp+240h] [rbp-398h] BYREF
  __int64 v80[4]; // [rsp+260h] [rbp-378h] BYREF
  __int64 v81; // [rsp+280h] [rbp-358h] BYREF
  __int64 v82; // [rsp+288h] [rbp-350h]
  __int64 v83[3]; // [rsp+2A0h] [rbp-338h] BYREF
  __int64 v84[3]; // [rsp+2B8h] [rbp-320h] BYREF
  char *v85[3]; // [rsp+2D0h] [rbp-308h] BYREF
  __int64 v86[3]; // [rsp+2E8h] [rbp-2F0h] BYREF
  __int64 v87[3]; // [rsp+300h] [rbp-2D8h] BYREF
  __int64 v88[3]; // [rsp+318h] [rbp-2C0h] BYREF
  __m128i v89; // [rsp+330h] [rbp-2A8h] BYREF
  __m128i v90; // [rsp+340h] [rbp-298h] BYREF
  __m128i v91; // [rsp+350h] [rbp-288h] BYREF
  __int64 v92; // [rsp+360h] [rbp-278h]
  __m128i v93; // [rsp+370h] [rbp-268h] BYREF
  __m128i v94; // [rsp+380h] [rbp-258h] BYREF
  __m128i v95; // [rsp+390h] [rbp-248h] BYREF
  __int64 v96; // [rsp+3A0h] [rbp-238h]
  void *ptr[3]; // [rsp+3B0h] [rbp-228h] BYREF
  char v98; // [rsp+3C8h] [rbp-210h] BYREF
  void *v99[2]; // [rsp+420h] [rbp-1B8h] BYREF
  __int64 v100; // [rsp+430h] [rbp-1A8h]
  _BYTE v101[88]; // [rsp+438h] [rbp-1A0h] BYREF
  void *v102[2]; // [rsp+490h] [rbp-148h] BYREF
  void (__fastcall ***v103)(_QWORD); // [rsp+4A0h] [rbp-138h] BYREF
  _BYTE v104[88]; // [rsp+4A8h] [rbp-130h] BYREF
  void *v105; // [rsp+500h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+508h] [rbp-D0h]
  _BYTE v107[16]; // [rsp+518h] [rbp-C0h] BYREF
  char v108; // [rsp+528h] [rbp-B0h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 33 > 3 )
    goto LABEL_14;
  v8 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v8 & 4) != 0 )
    v9 = (_QWORD *)*v9;
  if ( v9 )
    v9 -= 8;
  result = sub_7A47A0(v9);
  if ( result )
    return result;
  v11 = (char *)&v105;
  v12 = sub_6B4CD0(*a1);
  LODWORD(v102[0]) = sub_720580(a2);
  v102[1] = (void *)a2;
  sub_803F90(&v105, v12, v102);
  if ( v108 )
  {
    v13 = &v108;
LABEL_10:
    while ( 1 )
    {
      v14 = *(unsigned int *)v11;
      LODWORD(v102[0]) = 142;
      result = sub_7204C0(v102, v14);
      if ( (_BYTE)result )
      {
        if ( *((_QWORD *)v11 + 1) )
          return result;
      }
      v11 += 40;
      if ( v13 == v11 )
        goto LABEL_13;
    }
  }
  v11 = (char *)v105;
  v13 = (char *)v105 + 40 * si128.m128i_i64[0];
  if ( v105 != v13 )
    goto LABEL_10;
LABEL_13:
  result = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34;
  if ( (((*(_BYTE *)(a2 + 28) & 0x7F) - 34) & 0xFD) != 0 )
  {
LABEL_14:
    result = sub_780BD0(a2);
    if ( (unsigned int)result <= 2 )
    {
      if ( (_DWORD)result )
        return result;
    }
    else if ( (_DWORD)result == 4 )
    {
      return result;
    }
    sub_791DD0(&v81, a2 + 40);
    v105 = v107;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    sub_11240B0(a2, &v105);
    sub_CAE550(&v65, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
    v57 = sub_790090(a2);
    v68 = 0;
    v67 = 0;
    v15 = sub_63DC30(a1, a2);
    if ( v15 )
    {
      v16 = sub_6BB140(*a1, a2);
      sub_AA92F0(v99, v15, *(_QWORD *)(*a1 + 2152), v16);
      a4 = _mm_load_si128((const __m128i *)v99);
      *(_OWORD *)v102 = 0;
      v68 = v100;
      v103 = nullptr;
      v100 = 0;
      v67 = (__m128)a4;
      *(_OWORD *)v99 = 0;
      sub_646A80((__int64 *)v102);
      sub_646A80((__int64 *)v99);
    }
    sub_FCD270(v69, a2);
    sub_64B950((__int64)v83, a2, 0.0, *(double *)a4.m128i_i64, a5, a6);
    v21 = sub_780F50(a2, a2, v17, v18, v19, v20);
    v22 = a1[1];
    v23 = *a1;
    v24 = *(_DWORD *)(a2 + 24);
    if ( v21 )
    {
      v58 = sub_63DE20(v23, v24);
      sub_FD7260(&v70, a2);
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v89, (__int64)a1, a2);
      v54 = v81;
      v56 = v82;
      v25 = (void *)sub_FC8E80(v22, v105, si128.m128i_i64[0]);
      v103 = nullptr;
      v102[1] = v26;
      v27 = (char *)v26;
      v102[0] = v25;
      v28 = (__int64 *)v25;
      sub_64F120((__int64)v72, v22 + 160, (__m128i *)v102, (__int64 *)&v103);
      v62 = v72[0];
      if ( v103 )
        (**v103)(v103);
      if ( !v73 )
        goto LABEL_22;
      v51 = (_QWORD *)sub_63DDF0(v22, 416, 4);
      sub_646AF0(v85, v83);
      sub_644390((__int64)v86, v84);
      sub_644390((__int64)v74, v69);
      v43 = _mm_load_si128(&v70);
      v76 = v71;
      v75 = v43;
      v70 = 0;
      v71 = 0;
      sub_6435F0((__int64)v99, (__int64)ptr);
      v63 = sub_FC8E80(v22, v54, v56);
      v93 = _mm_load_si128(&v89);
      v44 = _mm_load_si128(&v90);
      v96 = v92;
      v94 = v44;
      v45 = _mm_load_si128(&v91);
      v78 = v66;
      v95 = v45;
      v77 = _mm_load_si128(&v65);
      v64 = v46;
      sub_646AF0(v87, (__int64 *)v85);
      sub_644390((__int64)v88, v86);
      sub_644390((__int64)v80, v74);
      sub_644390((__int64)v79, v75.m128i_i64);
      sub_6435F0((__int64)v102, (__int64)v99);
      v38 = &qword_18 + 1;
      v50 = _mm_load_si128(&v77);
      v48 = _mm_load_si128(&v93);
      v49 = _mm_load_si128(&v94);
      v47 = _mm_load_si128(&v95);
      sub_646E10(
        (__int64)v51,
        0x19u,
        v28,
        v27,
        v63,
        v64,
        v48.m128i_i64[0],
        v48.m128i_i64[1],
        v49.m128i_i64[0],
        v49.m128i_i64[1],
        v47.m128i_i64[0],
        v47.m128i_i64[1],
        v96,
        v50.m128i_i64[0],
        v50.m128i_i64[1],
        v78,
        (__int64)v102,
        v57,
        (__int64 *)&v67,
        v79,
        v80,
        v87,
        v58);
      if ( v102[0] != v104 )
        free(v102[0]);
      sub_6441A0(v79);
      sub_6441A0(v80);
      sub_6441A0(v88);
      sub_647CF0(v87);
      *v51 = &off_49F4B50;
      if ( v99[0] != v101 )
        free(v99[0]);
      sub_6441A0(v75.m128i_i64);
      sub_6441A0(v74);
      sub_6441A0(v86);
      v39 = (__int64 *)v85;
    }
    else
    {
      v59 = sub_63DE20(v23, v24);
      sub_FD1DC0(&v70, a2);
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v89, (__int64)a1, a2);
      v52 = v81;
      v53 = v82;
      v29 = (void *)sub_FC8E80(v22, v105, si128.m128i_i64[0]);
      v103 = nullptr;
      v102[1] = v30;
      v31 = (__int64)v30;
      v102[0] = v29;
      v32 = (__int64)v29;
      sub_64F120((__int64)v72, v22 + 160, (__m128i *)v102, (__int64 *)&v103);
      v62 = v72[0];
      if ( v103 )
        (**v103)(v103);
      if ( !v73 )
        goto LABEL_22;
      v51 = (_QWORD *)sub_63DDF0(v22, 416, 4);
      sub_646AF0(v87, v83);
      sub_644390((__int64)v88, v84);
      sub_644390((__int64)v74, v69);
      v33 = _mm_load_si128(&v70);
      v76 = v71;
      v75 = v33;
      v70 = 0;
      v71 = 0;
      sub_6435F0((__int64)v99, (__int64)ptr);
      v60 = sub_FC8E80(v22, v52, v53);
      v93 = _mm_load_si128(&v89);
      v34 = _mm_load_si128(&v90);
      v96 = v92;
      v94 = v34;
      v35 = _mm_load_si128(&v91);
      v78 = v66;
      v95 = v35;
      v77 = _mm_load_si128(&v65);
      v61 = v36;
      sub_63E610((__int64)v85);
      v55 = (__int64 *)v37;
      sub_644390(v37, v74);
      sub_644390((__int64)v79, v75.m128i_i64);
      sub_6435F0((__int64)v102, (__int64)v99);
      sub_644570(
        (__int64)v51,
        0x17u,
        v32,
        v31,
        v60,
        v61,
        (__int128)_mm_load_si128(&v93),
        (__int128)_mm_load_si128(&v94),
        (__int128)_mm_load_si128(&v95),
        v96,
        (__int128)_mm_load_si128(&v77),
        v78,
        (__int64)v102,
        v57,
        (__int64 *)&v67,
        v79,
        v55,
        v59,
        v85);
      if ( v102[0] != v104 )
        free(v102[0]);
      sub_6441A0(v79);
      sub_6441A0(v55);
      std::string::_M_dispose();
      *v51 = &off_4992FC8;
      sub_646AF0(v51 + 46, v87);
      v38 = v88;
      sub_644390((__int64)(v51 + 49), v88);
      if ( v99[0] != v101 )
        free(v99[0]);
      sub_6441A0(v75.m128i_i64);
      sub_6441A0(v74);
      sub_6441A0(v88);
      v39 = v87;
    }
    sub_647CF0(v39);
    v40 = *(void (__fastcall ****)(_QWORD))(v62 + 16);
    *(_QWORD *)(v62 + 16) = v51;
    if ( v40 )
      (**v40)(v40);
    v41 = v51[11];
    if ( v41 && (unsigned int)(*(_DWORD *)(v41 + 356) - 2) <= 0x13 && (v42 = sub_FC8C50(v41, v38)) != 0 )
      sub_FC8D50(v42, v51);
    else
      sub_64B900(v22 + 184, (__int64)v51);
LABEL_22:
    if ( ptr[0] != &v98 )
      free(ptr[0]);
    sub_6441A0(v70.m128i_i64);
    sub_6441A0(v84);
    sub_647CF0(v83);
    sub_6441A0(v69);
    sub_646A80((__int64 *)&v67);
    if ( v105 != v107 )
      free(v105);
    return std::string::_M_dispose();
  }
  return result;
}

