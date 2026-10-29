void __fastcall sub_170FA60(__int64 *a1, __int32 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 (*v10)(void); // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm4
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  const void **v24; // rax
  char *v25; // rsi
  _BOOL4 v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __m128i v32; // xmm0
  _QWORD *v33; // r14
  _QWORD *v34; // r15
  _QWORD *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 (*v39)(); // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r14
  __int64 *v46; // r15
  __int64 v47; // rbx
  char *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  __m128i v54; // xmm2
  __int64 v55; // rax
  __int64 v56; // [rsp-10h] [rbp-3D8h]
  __m128i si128; // [rsp+0h] [rbp-3C8h] BYREF
  __int64 v58; // [rsp+18h] [rbp-3B0h]
  __int64 *v59; // [rsp+20h] [rbp-3A8h]
  void **p_ptr; // [rsp+28h] [rbp-3A0h]
  void *ptr; // [rsp+30h] [rbp-398h] BYREF
  __int64 v62; // [rsp+38h] [rbp-390h]
  __int64 v63; // [rsp+40h] [rbp-388h] BYREF
  const void **v64; // [rsp+80h] [rbp-348h] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-340h]
  __m128i v66; // [rsp+90h] [rbp-338h]
  int v67; // [rsp+A0h] [rbp-328h]
  void *v68[2]; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-310h]
  char v70; // [rsp+C0h] [rbp-308h]
  __int64 v71; // [rsp+C8h] [rbp-300h]
  __int64 v72; // [rsp+D0h] [rbp-2F8h]
  __int64 v73; // [rsp+D8h] [rbp-2F0h]
  __m128i v74; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v75; // [rsp+F0h] [rbp-2D8h]
  __int64 v76; // [rsp+F8h] [rbp-2D0h]
  __int64 v77; // [rsp+100h] [rbp-2C8h]
  __int64 v78; // [rsp+108h] [rbp-2C0h]
  void *v79; // [rsp+110h] [rbp-2B8h]
  __int64 v80; // [rsp+118h] [rbp-2B0h]
  _BYTE v81[32]; // [rsp+120h] [rbp-2A8h] BYREF
  __int64 *v82; // [rsp+140h] [rbp-288h]
  __int64 v83; // [rsp+148h] [rbp-280h]
  int v84; // [rsp+150h] [rbp-278h]
  char v85; // [rsp+154h] [rbp-274h]
  __int64 v86; // [rsp+158h] [rbp-270h] BYREF
  void *v87; // [rsp+160h] [rbp-268h]
  __int64 v88; // [rsp+168h] [rbp-260h]
  _BYTE v89[48]; // [rsp+170h] [rbp-258h] BYREF
  char *v90; // [rsp+1A0h] [rbp-228h] BYREF
  char *v91; // [rsp+1A8h] [rbp-220h]
  char *v92; // [rsp+1B0h] [rbp-218h]
  __m128i v93[3]; // [rsp+258h] [rbp-170h] BYREF
  __int64 v94[2]; // [rsp+288h] [rbp-140h] BYREF
  __int64 v95; // [rsp+298h] [rbp-130h]
  int v96[62]; // [rsp+2D0h] [rbp-F8h] BYREF

  v59 = a1;
  v8 = (_QWORD *)a1[1];
  si128.m128i_i32[0] = a2;
  v74.m128i_i32[0] = 0;
  v74.m128i_i8[4] = 0;
  v74.m128i_i64[1] = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v82 = &v86;
  v9 = *v8;
  v81[24] = 0;
  v10 = *(__int64 (**)(void))(v9 + 48);
  v85 = 1;
  v83 = 8;
  v84 = 0;
  if ( (char *)v10 == (char *)sub_15A1860 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(v9 + 40);
    v12 = (__int64)(v8 + 3);
    if ( v11 == sub_15A1850 )
    {
LABEL_3:
      v13 = v8[6];
      goto LABEL_4;
    }
  }
  else
  {
    v12 = v10();
    v8 = (_QWORD *)v59[1];
    v11 = *(__int64 (__fastcall **)(__int64))(*v8 + 40LL);
    if ( v11 == sub_15A1850 )
      goto LABEL_3;
  }
  v58 = v12;
  v55 = ((__int64 (*)(void))v11)();
  v12 = v58;
  v13 = v55;
LABEL_4:
  v14 = a4;
  v15 = v59;
  sub_16FF270((__int64)&v90, *v59, v13, v12, (unsigned int *)&v74, a6, 0);
  sub_17038E0((__int64)&v74);
  v16 = operator new(0x28u);
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_DWORD *)(v16 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v16, (std::__detail::_List_node_base *)v94);
  v20 = _mm_loadu_si128(v93);
  ++v95;
  v79 = v81;
  v80 = 0x400000000LL;
  v87 = v89;
  v74 = v20;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v88 = 0x200000000LL;
  if ( a4 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)v59) + 21) & 2) != 0 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(*v59 + 240) + 112LL);
      v39 = *(__int64 (**)())(*(_QWORD *)v38 + 16LL);
      if ( v39 != sub_12DAB10 )
      {
        v40 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD))v39)(
                v38,
                si128.m128i_u32[0],
                a3,
                a4,
                1,
                0)
            & 0xFFFFFFFFFFFFFFF8LL;
        if ( v40 )
        {
          v45 = *(__int64 **)(v40 + 264);
          v46 = *(__int64 **)(v40 + 256);
          if ( v45 != v46 )
          {
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9A0);
            do
            {
              v47 = *v46;
              LOWORD(v67) = 260;
              v64 = (const void **)v47;
              v48 = sub_15A4EB0((char **)v74.m128i_i64[0], &v64, v41, v42, v43, v44);
              sub_15A2F70((__int64)&v74, (__int64)v48);
              LOBYTE(v47) = (*(_BYTE *)(v47 + 904) & 4) == 0;
              ++v46;
              v53 = sub_15A5CA0((__int64)&v74, (__int64)v48, v49, v50, v51, v52);
              v54 = _mm_load_si128(&si128);
              v65 = v53;
              v66 = v54;
              *(_OWORD *)v68 = 0;
              v64 = nullptr;
              v70 = v70 & 0x80 | 0x40;
              v67 = 2 * (unsigned __int8)v47;
              v69 = 0;
              v71 = 0;
              v72 = 0;
              v73 = 0;
              sub_1706C30((__int64)&v90, (__int64)&v64);
              sub_1705410((__int64)v68);
            }
            while ( v45 != v46 );
          }
        }
      }
    }
  }
  else
  {
    p_ptr = &ptr;
    ptr = &v63;
    v62 = 0x800000000LL;
    sub_13C9060(*(std::_V2 **)(*(_QWORD *)(*v15 + 240) + 104LL), (__int64 *)&ptr, v17, v56, v18, v19);
    if ( (_DWORD)v62 )
    {
      v58 = 8LL * (unsigned int)(v62 - 1) + 8;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9A0);
      do
      {
        while ( 1 )
        {
          v24 = *(const void ***)((char *)ptr + v14);
          LOWORD(v67) = 260;
          v64 = v24;
          v25 = sub_15A4EB0((char **)v74.m128i_i64[0], &v64, 260, v21, v22, v23);
          sub_15A2F70((__int64)&v74, (__int64)v25);
          v26 = (*(_BYTE *)(*(_QWORD *)((char *)ptr + v14) + 904LL) & 4) == 0;
          v31 = sub_15A5CA0((__int64)&v74, (__int64)v25, v27, v28, v29, v30);
          v32 = _mm_load_si128(&si128);
          v65 = v31;
          v66 = v32;
          v67 = 2 * v26;
          v64 = nullptr;
          *(_OWORD *)v68 = 0;
          v69 = 0;
          v70 = v70 & 0x80 | 0x40;
          v71 = 0;
          v72 = 0;
          v73 = 0;
          if ( v91 == v92 )
          {
            sub_1706840((__int64)&v90, v91, (__int64)&v64);
          }
          else
          {
            sub_17048E0((__int64)v91, (__int64)&v64);
            v91 += 96;
          }
          v33 = v68[1];
          v34 = v68[0];
          if ( v68[1] != v68[0] )
          {
            do
            {
              while ( 1 )
              {
                v35 = (_QWORD *)v34[3];
                v21 = (__int64)(v34 + 5);
                if ( v35 == v34 + 5 )
                  break;
                operator delete(v35);
                v34 += 8;
                if ( v34 == v33 )
                  goto LABEL_12;
              }
              v34 += 8;
            }
            while ( v33 != v34 );
LABEL_12:
            v34 = v68[0];
          }
          if ( !v34 )
            break;
          v14 += 8;
          operator delete(v34);
          if ( v58 == v14 )
            goto LABEL_15;
        }
        v14 += 8;
      }
      while ( v58 != v14 );
    }
LABEL_15:
    if ( ptr != p_ptr + 2 )
      free(ptr);
  }
  sub_16FF8C0((__int64)v94, v94[1]);
  v36 = 0;
  v37 = v59[1];
  if ( v90 != v91 )
    v36 = (__int64)v90;
  if ( v37 )
    sub_1700D50(*v59, v37, v96, v36, -1431655765 * ((v91 - v90) >> 5));
  if ( v87 != v89 )
    free(v87);
  if ( v79 != v81 )
    free(v79);
  sub_1700A70((__int64)&v90);
}
