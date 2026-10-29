void __fastcall sub_173BD60(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        char a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i si128; // xmm4
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64); // rdx
  __int64 (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  unsigned __int32 v32; // eax
  __int64 (__fastcall **v33)(); // r15
  __int64 (__fastcall **v34)(); // rbx
  __int64 (__fastcall **v35)(); // rdi
  __int64 v36; // r9
  void *v37; // r8
  _DWORD *v38; // r15
  _DWORD *v39; // r12
  char **v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 (*v43)(void); // rdx
  __int64 v44; // rcx
  __int64 (*v45)(void); // rax
  __int64 v46; // rax
  _QWORD *v47; // r14
  _QWORD *v48; // r15
  char *v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rdi
  unsigned int v53; // r8d
  _QWORD *v54; // rdi
  __int64 v55; // rax
  __int64 (*v56)(void); // rdx
  __int64 v57; // rcx
  __int64 (*v58)(void); // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v68; // [rsp+0h] [rbp-388h]
  __int64 *v71; // [rsp+10h] [rbp-378h]
  __int64 v72; // [rsp+10h] [rbp-378h]
  __int64 v73; // [rsp+18h] [rbp-370h]
  void *v74[2]; // [rsp+20h] [rbp-368h] BYREF
  __int64 v75; // [rsp+30h] [rbp-358h]
  __int64 (__fastcall **v76)(); // [rsp+40h] [rbp-348h] BYREF
  const char *v77; // [rsp+48h] [rbp-340h]
  __m128i v78; // [rsp+50h] [rbp-338h]
  int v79; // [rsp+60h] [rbp-328h]
  __int128 v80; // [rsp+68h] [rbp-320h] BYREF
  __int64 v81; // [rsp+78h] [rbp-310h]
  char v82; // [rsp+80h] [rbp-308h]
  __int64 v83; // [rsp+88h] [rbp-300h]
  __int64 v84; // [rsp+90h] [rbp-2F8h]
  __int64 v85; // [rsp+98h] [rbp-2F0h]
  unsigned int v86; // [rsp+A0h] [rbp-2E8h] BYREF
  char v87; // [rsp+A4h] [rbp-2E4h]
  __int64 v88; // [rsp+A8h] [rbp-2E0h]
  __int64 v89; // [rsp+B0h] [rbp-2D8h]
  __int64 v90; // [rsp+B8h] [rbp-2D0h]
  __int64 v91; // [rsp+C0h] [rbp-2C8h]
  __int64 v92; // [rsp+C8h] [rbp-2C0h]
  _BYTE v93[40]; // [rsp+D0h] [rbp-2B8h] BYREF
  char v94; // [rsp+F8h] [rbp-290h]
  __int64 *v95; // [rsp+100h] [rbp-288h]
  __int64 v96; // [rsp+108h] [rbp-280h]
  int v97; // [rsp+110h] [rbp-278h]
  char v98; // [rsp+114h] [rbp-274h]
  __int64 v99; // [rsp+118h] [rbp-270h] BYREF
  __int64 v100; // [rsp+160h] [rbp-228h] BYREF
  __int64 v101[2]; // [rsp+168h] [rbp-220h] BYREF
  int v102; // [rsp+17Ch] [rbp-20Ch]
  __m128i v103[12]; // [rsp+180h] [rbp-208h] BYREF
  unsigned __int64 v104; // [rsp+240h] [rbp-148h]
  __int64 v105; // [rsp+248h] [rbp-140h] BYREF
  __int64 v106; // [rsp+250h] [rbp-138h]
  int v107[62]; // [rsp+290h] [rbp-F8h] BYREF

  if ( (a3->m128i_i32[0] && a3->m128i_i32[1] || a3->m128i_i64[1]) && a1[1] )
  {
    v8 = a1;
    v95 = &v99;
    v88 = a7;
    v9 = a3->m128i_i64[0];
    v86 = 21;
    v100 = v9;
    v89 = 0;
    v90 = 0;
    v91 = 0;
    v94 = 0;
    v96 = 8;
    v97 = 0;
    v98 = 1;
    v87 = a5;
    sub_E90750((__int64)v101, &a3->m128i_i64[1]);
    v103[0] = _mm_loadu_si128(a3 + 2);
    v92 = v100;
    sub_E90750((__int64)v93, v101);
    si128 = _mm_load_si128(v103);
    v94 = 1;
    *(__m128i *)&v93[24] = si128;
    if ( v102 )
      free((void *)v101[1]);
    if ( a3->m128i_i32[0] && a3->m128i_i32[1] && !a3->m128i_i64[1] )
    {
      v54 = (_QWORD *)a1[1];
      v55 = *v54;
      v56 = *(__int64 (**)(void))(*v54 + 48LL);
      if ( (char *)v56 == (char *)sub_15A1860 )
      {
        v57 = (__int64)(v54 + 3);
      }
      else
      {
        v66 = v56();
        v54 = (_QWORD *)v8[1];
        v57 = v66;
        v55 = *v54;
      }
      v58 = *(__int64 (**)(void))(v55 + 40);
      if ( (char *)v58 == (char *)sub_15A1850 )
      {
        v59 = v54[6];
      }
      else
      {
        v68 = v57;
        v65 = v58();
        v57 = v68;
        v59 = v65;
      }
      sub_16FF270((__int64)&v100, *v8, v59, v57, &v86, v12, 0);
      if ( (a7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        v104 = *(_QWORD *)&byte_8[a7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)*(_QWORD *)&byte_8[a7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a7) & 7;
      if ( *(char *)(a2 + 8) >= 0 )
      {
        v60 = *(_QWORD *)(a2 + 360);
        if ( v60 )
        {
          *(_OWORD *)v74 = 0;
          v75 = 0;
          sub_16FE930(&v76, (__int64)&v100, v60, a6, (__int64 *)v74);
          sub_1705410((__int64)v74);
          sub_1A65F80(*v8, a2, 0, &v76, 0, 0);
          v76 = &off_2C4EFD0;
          sub_1705410((__int64)&v80);
          nullsub_1203(&v76);
        }
      }
      v61 = v8[1];
      if ( v61 )
        sub_1700D50(*v8, v61, v107, 0, 0);
      sub_1700A70((__int64)&v100);
      goto LABEL_83;
    }
    v14 = sub_16A2930(*a1, (__int64)a3, 1, v10, v11, v12);
    v19 = a3->m128i_i64[1];
    v20 = v14;
    if ( v19
      && !sub_E917A0(a3->m128i_i64[1], (__int64)a3, v15, v16, v17, v18)
      && (!v20 || (unsigned __int8)sub_169F990(*a1, (__int64)a3, v20)) )
    {
LABEL_83:
      sub_17038E0((__int64)&v86);
      return;
    }
    v21 = (_QWORD *)a1[1];
    v22 = *v21;
    v23 = (__int64)(v21 + 3);
    v24 = *(__int64 (__fastcall **)(__int64))(*v21 + 48LL);
    if ( v24 != sub_15A1860 )
    {
      v63 = ((__int64 (__fastcall *)(_QWORD *, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64), __int64))v24)(
              v21,
              sub_15A1860,
              v24,
              v23);
      v21 = (_QWORD *)v8[1];
      v23 = v63;
      v22 = *v21;
    }
    v25 = *(__int64 (**)(void))(v22 + 40);
    if ( (char *)v25 == (char *)sub_15A1850 )
    {
      v26 = v21[6];
    }
    else
    {
      v73 = v23;
      v62 = v25();
      v23 = v73;
      v26 = v62;
    }
    sub_16FF270((__int64)&v100, *v8, v26, v23, &v86, v18, 0);
    if ( (a7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v104 = *(_QWORD *)&byte_8[a7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
           | ((unsigned __int8)*(_QWORD *)&byte_8[a7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a7) & 7;
    sub_16FF160((__int64)&v105, (std::__detail::_List_node_base *)&v105);
    if ( v101[0] == v100 )
    {
      if ( !v19 )
        goto LABEL_53;
    }
    else
    {
      if ( !v19 )
        goto LABEL_53;
      if ( sub_E917A0(v19, (__int64)&v105, v27, v28, v29, v30) )
      {
        v76 = nullptr;
        v77 = "template";
        v78 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        v80 = 0;
        v79 = 0;
        v82 = v82 & 0x80 | 0x40;
        v81 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        sub_1706C30((__int64)&v100, (__int64)&v76);
        sub_1705410((__int64)&v80);
      }
    }
    if ( ((*(__int64 *)(v19 + 8) >> 1) & 3) == 2 )
    {
      v31 = *(_QWORD *)(v19 + 16);
      if ( v31 )
      {
        if ( *(_BYTE *)(v31 + 16) == 50 )
        {
          sub_1701760((__int64)&v76, (__int64 *)v31, (char *)a2);
          sub_173A6C0((__int64)v74, (__int64)&v76);
          v32 = v78.m128i_i32[0];
          if ( v78.m128i_i32[0] )
          {
            v33 = v76;
            v71 = v8;
            v34 = &v76[8 * (unsigned __int64)v78.m128i_u32[0]];
            do
            {
              if ( *v33 != (__int64 (__fastcall *)())-4096LL && *v33 != (__int64 (__fastcall *)())-8192LL )
              {
                if ( *((_BYTE *)v33 + 40) )
                {
                  v35 = (__int64 (__fastcall **)())v33[2];
                  if ( v35 != v33 + 4 )
                    free(v35);
                }
              }
              v33 += 8;
            }
            while ( v34 != v33 );
            v8 = v71;
            v32 = v78.m128i_i32[0];
          }
          operator delete(v76, (unsigned __int64)v32 << 6, 8);
          v37 = v74[0];
          if ( v74[1] != v74[0] )
          {
            v38 = v74[1];
            v39 = v74[0];
            do
            {
              if ( !v39[10] )
              {
                v41 = (_QWORD *)v8[1];
                v42 = *v41;
                v43 = *(__int64 (**)(void))(*v41 + 48LL);
                if ( (char *)v43 == (char *)sub_15A1860 )
                {
                  v44 = (__int64)(v41 + 3);
                }
                else
                {
                  v64 = v43();
                  v41 = (_QWORD *)v8[1];
                  v44 = v64;
                  v42 = *v41;
                }
                v45 = *(__int64 (**)(void))(v42 + 40);
                if ( (char *)v45 == (char *)sub_15A1850 )
                {
                  v40 = (char **)v41[6];
                }
                else
                {
                  v72 = v44;
                  v46 = v45();
                  v44 = v72;
                  v40 = (char **)v46;
                }
                v77 = (const char *)sub_1701C10((__int64)v39, *v8, v40, v44, (__int64)v37, v36);
                v79 = 0;
                v80 = 0;
                v78 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
                v76 = nullptr;
                v81 = 0;
                v82 = v82 & 0x80 | 0x40;
                v83 = 0;
                v84 = 0;
                v85 = 0;
                sub_1706C30((__int64)&v100, (__int64)&v76);
                sub_1705410((__int64)&v80);
              }
              v39 += 14;
            }
            while ( v38 != v39 );
            v47 = v74[1];
            v37 = v74[0];
            if ( v74[1] != v74[0] )
            {
              v48 = v74[0];
              do
              {
                if ( *((_BYTE *)v48 + 32) )
                {
                  v49 = (char *)v48[1];
                  if ( v49 != (char *)(v48 + 3) )
                    free(v49);
                }
                v48 += 7;
              }
              while ( v47 != v48 );
              v37 = v74[0];
            }
          }
          if ( v37 )
            operator delete(v37);
        }
      }
    }
LABEL_53:
    if ( v20 && a4 != 1 )
    {
      sub_170EFB0(*v8, v20, (__int64)&v100);
      sub_16FF8C0((__int64)&v105, v106);
      v50 = v8[1];
      if ( (*(_BYTE *)(v50 + 8) & 8) == 0 )
      {
LABEL_57:
        if ( (*(_BYTE *)(v20 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(v20 + 8) & 0x7F) == 0 )
        {
          v51 = v100;
          v52 = *v8;
          v53 = -1431655765 * ((v101[0] - v100) >> 5);
          if ( v101[0] == v100 )
            v51 = 0;
LABEL_61:
          sub_1700D50(v52, v50, v107, v51, v53);
LABEL_62:
          sub_1700A70((__int64)&v100);
          sub_17038E0((__int64)&v86);
          return;
        }
      }
    }
    else
    {
      sub_16FF8C0((__int64)&v105, v106);
      if ( !v20 )
        goto LABEL_64;
      v50 = v8[1];
      if ( (*(_BYTE *)(v50 + 8) & 8) == 0 )
        goto LABEL_57;
    }
    v75 = 0;
    *(_OWORD *)v74 = 0;
    sub_16FE930(&v76, (__int64)&v100, v20, a6, (__int64 *)v74);
    sub_1705410((__int64)v74);
    sub_1A65010(*v8, v20, 0, (unsigned int)&v76, 1, 1, (*(_DWORD *)(v8[1] + 8) & 0x20) != 0);
    v76 = &off_2C4EFD0;
    sub_1705410((__int64)&v80);
    nullsub_1203(&v76);
LABEL_64:
    v51 = v100;
    v50 = v8[1];
    v52 = *v8;
    v53 = -1431655765 * ((v101[0] - v100) >> 5);
    if ( v100 == v101[0] )
      v51 = 0;
    if ( !v50 )
      goto LABEL_62;
    goto LABEL_61;
  }
}
