__int64 *__fastcall sub_2197C60(
        __int64 *a1,
        std::__detail::_List_node_base *a2,
        unsigned __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  std::__detail::_List_node_base *v6; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __m128i *v11; // rax
  __m128i v12; // xmm0
  _BYTE *v14; // rcx
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __m128i *v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // [rsp+0h] [rbp-438h] BYREF
  _BYTE *v48; // [rsp+18h] [rbp-420h]
  __int64 v49; // [rsp+20h] [rbp-418h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-410h] BYREF
  __m128i v51[2]; // [rsp+30h] [rbp-408h] BYREF
  __int16 v52; // [rsp+50h] [rbp-3E8h]
  __m128i v53[2]; // [rsp+60h] [rbp-3D8h] BYREF
  __int16 v54; // [rsp+80h] [rbp-3B8h]
  __m128i v55[3]; // [rsp+90h] [rbp-3A8h] BYREF
  __m128i v56[2]; // [rsp+C0h] [rbp-378h] BYREF
  __int16 v57; // [rsp+E0h] [rbp-358h]
  __m128i v58[3]; // [rsp+F0h] [rbp-348h] BYREF
  __m128i v59[2]; // [rsp+120h] [rbp-318h] BYREF
  __int16 v60; // [rsp+140h] [rbp-2F8h]
  __m128i v61[3]; // [rsp+150h] [rbp-2E8h] BYREF
  __m128i v62[2]; // [rsp+180h] [rbp-2B8h] BYREF
  __int16 v63; // [rsp+1A0h] [rbp-298h]
  __m128i v64[3]; // [rsp+1B0h] [rbp-288h] BYREF
  __m128i v65[2]; // [rsp+1E0h] [rbp-258h] BYREF
  __int16 v66; // [rsp+200h] [rbp-238h]
  __m128i v67[3]; // [rsp+210h] [rbp-228h] BYREF
  __m128i v68[2]; // [rsp+240h] [rbp-1F8h] BYREF
  __int16 v69; // [rsp+260h] [rbp-1D8h]
  __m128i v70[3]; // [rsp+270h] [rbp-1C8h] BYREF
  __m128i v71[2]; // [rsp+2A0h] [rbp-198h] BYREF
  __int16 v72; // [rsp+2C0h] [rbp-178h]
  __m128i v73[3]; // [rsp+2D0h] [rbp-168h] BYREF
  __m128i v74[2]; // [rsp+300h] [rbp-138h] BYREF
  __int16 v75; // [rsp+320h] [rbp-118h]
  __m128i v76[3]; // [rsp+330h] [rbp-108h] BYREF
  __m128i v77[2]; // [rsp+360h] [rbp-D8h] BYREF
  __int16 v78; // [rsp+380h] [rbp-B8h]
  __m128i v79[3]; // [rsp+390h] [rbp-A8h] BYREF
  __m128i v80[2]; // [rsp+3C0h] [rbp-78h] BYREF
  __int16 v81; // [rsp+3E0h] [rbp-58h]
  __m128i v82[4]; // [rsp+3F0h] [rbp-48h] BYREF

  v50 = a3;
  v49 = a4;
  if ( !a4 )
  {
LABEL_11:
    *a1 = 0;
    return a1;
  }
  v6 = *(std::__detail::_List_node_base **)a2;
  v8 = a4 + a3;
  if ( v6 == a2 )
  {
LABEL_21:
    v47.m128i_i64[0] = a4;
    v48 = a5;
    v47 = (__m128i)_mm_loadh_ps((const double *)v47.m128i_i64);
    v45 = (__m128i *)operator new(0x28u);
    v46 = _mm_load_si128(&v47);
    v45[2].m128i_i64[0] = (__int64)v48;
    v45[1] = v46;
    std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v45, a2);
    ++*((_QWORD *)a2 + 2);
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    v9 = *((_QWORD *)v6 + 2);
    v10 = v9 + *((_QWORD *)v6 + 3);
    if ( v9 > a3 )
    {
      if ( v9 < v8 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a3 < v10 )
      goto LABEL_13;
    if ( v9 < v8 )
      break;
    if ( v9 != a3 )
      goto LABEL_8;
LABEL_19:
    if ( v8 >= v10 )
      goto LABEL_13;
    v6 = *(std::__detail::_List_node_base **)v6;
    if ( v6 == a2 )
      goto LABEL_21;
LABEL_9:
    if ( *((_QWORD *)v6 + 2) >= v8 )
    {
      v47.m128i_i64[0] = a4;
      v48 = a5;
      v47 = (__m128i)_mm_loadh_ps((const double *)v47.m128i_i64);
      v11 = (__m128i *)operator new(0x28u);
      v12 = _mm_load_si128(&v47);
      v11[2].m128i_i64[0] = (__int64)v48;
      v11[1] = v12;
      std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v11, v6);
      ++*((_QWORD *)a2 + 2);
      goto LABEL_11;
    }
  }
  if ( v8 >= v10 && v9 < a3 )
  {
LABEL_8:
    v6 = *(std::__detail::_List_node_base **)v6;
    if ( v6 == a2 )
      goto LABEL_21;
    goto LABEL_9;
  }
LABEL_13:
  v78 = 259;
  v14 = *((_BYTE **)v6 + 4);
  v80[0].m128i_i64[0] = (__int64)v6 + 24;
  v74[0].m128i_i64[0] = (__int64)v6 + 16;
  v81 = 267;
  v77[0].m128i_i64[0] = (__int64)" with a size of ";
  v75 = 267;
  v71[0].m128i_i64[0] = (__int64)" at offset ";
  v72 = 259;
  v69 = 257;
  if ( *v14 )
  {
    v68[0].m128i_i64[0] = (__int64)v14;
    LOBYTE(v69) = 3;
  }
  v59[0].m128i_i64[0] = (__int64)" with a size of ";
  v15 = *a5 == 0;
  v65[0].m128i_i64[0] = (__int64)", overlaps ";
  v63 = 267;
  v66 = 259;
  v62[0].m128i_i64[0] = (__int64)&v49;
  v60 = 259;
  v57 = 267;
  v56[0].m128i_i64[0] = (__int64)&v50;
  v53[0].m128i_i64[0] = (__int64)" at offset ";
  v54 = 259;
  v52 = 257;
  if ( !v15 )
  {
    v51[0].m128i_i64[0] = (__int64)a5;
    LOBYTE(v52) = 3;
  }
  sub_A41580(v55, v51, v53, (__int64)&v49, (__int64)a5, 267);
  sub_A41580(v58, v55, v56, v16, v17, v18);
  sub_A41580(v61, v58, v59, v19, v20, v21);
  sub_A41580(v64, v61, v62, v22, v23, v24);
  sub_A41580(v67, v64, v65, v25, v26, v27);
  sub_A41580(v70, v67, v68, v28, v29, v30);
  sub_A41580(v73, v70, v71, v31, v32, v33);
  sub_A41580(v76, v73, v74, v34, v35, v36);
  sub_A41580(v79, v76, v77, v37, v38, v39);
  sub_A41580(v82, v79, v80, v40, v41, v42);
  sub_21967F0(a1, v82[0].m128i_i64, v43, v44);
  return a1;
}
