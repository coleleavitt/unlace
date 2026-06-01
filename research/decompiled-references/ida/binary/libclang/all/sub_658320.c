void __fastcall sub_658320(__int64 *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128 v15; // xmm4
  __int64 v16; // rax
  __m128 v17; // xmm0
  unsigned __int64 v18; // xmm3_8
  __int64 v19; // r10
  __int64 v20; // r9
  __m128 v21; // xmm1
  bool v22; // al
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // r12
  int v26; // eax
  char v27; // dl
  __int64 v28; // rbp
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  char v39; // al
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rdx
  void (__fastcall ***v45)(_QWORD); // rdi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i v49; // [rsp+0h] [rbp-4A8h]
  __m128i v50; // [rsp+10h] [rbp-498h]
  __m128i v51; // [rsp+38h] [rbp-470h]
  const char *v52; // [rsp+B8h] [rbp-3F0h]
  __int64 v53; // [rsp+B8h] [rbp-3F0h]
  __int64 v54; // [rsp+C0h] [rbp-3E8h]
  __int64 *v55; // [rsp+C8h] [rbp-3E0h]
  unsigned __int8 v56; // [rsp+C8h] [rbp-3E0h]
  const char *v57; // [rsp+D0h] [rbp-3D8h]
  unsigned __int8 v58; // [rsp+E0h] [rbp-3C8h]
  __int64 v59; // [rsp+E8h] [rbp-3C0h]
  __int64 v60; // [rsp+F0h] [rbp-3B8h]
  __m128i v61; // [rsp+110h] [rbp-398h] BYREF
  __int64 v62; // [rsp+120h] [rbp-388h]
  __m128i v63; // [rsp+130h] [rbp-378h] BYREF
  __int64 v64; // [rsp+140h] [rbp-368h]
  __m128 v65; // [rsp+150h] [rbp-358h] BYREF
  __int64 v66; // [rsp+160h] [rbp-348h]
  __int64 v67[4]; // [rsp+170h] [rbp-338h] BYREF
  __int64 v68; // [rsp+190h] [rbp-318h] BYREF
  char v69; // [rsp+1A0h] [rbp-308h]
  __int64 v70[4]; // [rsp+1B0h] [rbp-2F8h] BYREF
  __int64 v71[4]; // [rsp+1D0h] [rbp-2D8h] BYREF
  void *v72[2]; // [rsp+1F0h] [rbp-2B8h] BYREF
  __int64 v73; // [rsp+200h] [rbp-2A8h] BYREF
  __int64 v74[2]; // [rsp+210h] [rbp-298h] BYREF
  char v75; // [rsp+220h] [rbp-288h] BYREF
  __m128i v76; // [rsp+230h] [rbp-278h] BYREF
  __m128i v77; // [rsp+240h] [rbp-268h] BYREF
  __m128i v78; // [rsp+250h] [rbp-258h] BYREF
  __int64 v79; // [rsp+260h] [rbp-248h]
  void *ptr[2]; // [rsp+270h] [rbp-238h] BYREF
  __int64 v81; // [rsp+280h] [rbp-228h]
  _BYTE v82[32]; // [rsp+288h] [rbp-220h] BYREF
  __m128i v83; // [rsp+2A8h] [rbp-200h] BYREF
  __m128i v84; // [rsp+2B8h] [rbp-1F0h] BYREF
  __m128i v85; // [rsp+2C8h] [rbp-1E0h] BYREF
  __int16 v86; // [rsp+2D8h] [rbp-1D0h]
  char v87; // [rsp+2DAh] [rbp-1CEh]
  void *v88; // [rsp+2E0h] [rbp-1C8h] BYREF
  __m128i si128; // [rsp+2E8h] [rbp-1C0h]
  _BYTE v90[136]; // [rsp+2F8h] [rbp-1B0h] BYREF
  _BYTE v91[24]; // [rsp+380h] [rbp-128h] BYREF
  _BYTE v92[32]; // [rsp+398h] [rbp-110h] BYREF
  __m128i v93; // [rsp+3B8h] [rbp-F0h]
  __m128i v94; // [rsp+3C8h] [rbp-E0h]
  __m128i v95; // [rsp+3D8h] [rbp-D0h] BYREF
  __int16 v96; // [rsp+3E8h] [rbp-C0h]
  char v97; // [rsp+3EAh] [rbp-BEh]

  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( (v7 & 7) != 0
      || (v8 = v7 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || (v9 = *(_DWORD **)(v8 + 16), v10 = (unsigned int)*v9, v52 = (const char *)(v9 + 4), !*v9) )
    {
      v28 = *(_QWORD *)(a2 + 120);
      if ( (v28 & 4) != 0 )
      {
        v52 = nullptr;
        v10 = 0;
      }
      else
      {
        v52 = nullptr;
        v10 = v28 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 )
        {
          v29 = *(_QWORD *)(v10 + 40);
          v10 = 0;
          v52 = &byte_3B9466E;
          if ( (v29 & 7) == 0 )
          {
            v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
            v10 = v30;
            if ( v30 )
            {
              v31 = *(unsigned int **)(v30 + 16);
              v10 = *v31;
              v52 = (const char *)(v31 + 4);
            }
          }
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    v88 = v90;
    sub_11240B0(a2, &v88);
    sub_CAE550(&v61, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
    v64 = 0;
    v63 = 0;
    v11 = sub_63DC30(a1, a2);
    if ( v11 )
    {
      v12 = sub_6BB140(*a1, a2);
      sub_AA92F0(ptr, v11, *(_QWORD *)(*a1 + 2152), v12);
      v13 = _mm_load_si128((const __m128i *)ptr);
      memset(v91, 0, sizeof(v91));
      v64 = v81;
      v81 = 0;
      v63 = v13;
      *(_OWORD *)ptr = 0;
      sub_646A80((__int64 *)v91);
      sub_646A80((__int64 *)ptr);
    }
    sub_FD3350(&v65, a2);
    sub_FCD270(v67, a2);
    sub_643500((__int64 *)v72, a2);
    if ( sub_7A47A0(a2) )
    {
      v14 = sub_7A47A0(a2);
      sub_FD5520(&v76, v14);
      v16 = v77.m128i_i64[0];
      v17 = (__m128)_mm_load_si128(&v76);
      v77.m128i_i64[0] = 0;
      v18 = _mm_movehl_ps(a6, v17).m128_u64[0];
      v19 = v17.m128_u64[0];
      v81 = v16;
      v20 = v18;
      *(__m128 *)ptr = v17;
      v76 = 0;
      if ( v18 != v17.m128_u64[0] )
      {
        v21 = (__m128)_mm_load_si128((const __m128i *)&v65);
        if ( v21.m128_u64[0] == _mm_movehl_ps(v15, v21).m128_u64[0] )
        {
          v48 = v66;
          v66 = v16;
          v65 = v17;
          *(_QWORD *)&v91[16] = v48;
          v81 = 0;
          *(__m128 *)v91 = v21;
          *(_OWORD *)ptr = 0;
          sub_6441A0((__int64 *)v91);
        }
        else
        {
          if ( *(_DWORD *)(v21.m128_u64[0] + 32) == 10 && *(_DWORD *)(v18 - 48) == 10 )
          {
            std::string::reserve();
            std::string::_M_replace();
            v19 = v17.m128_u64[0];
            v20 = v18 - 80;
            if ( v65.m128_u64[0] != v21.m128_u64[0]
              && *(_DWORD *)(v21.m128_u64[0] - 48) == 10
              && *(_DWORD *)(v17.m128_u64[0] + 32) == 10 )
            {
              std::string::reserve();
              if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v21.m128_u64[0] - 72)) < *(_QWORD *)(v17.m128_u64[0] + 8) )
                std::__throw_length_error("basic_string::append");
              std::string::_M_append();
              v20 = v18 - 80;
              v19 = v17.m128_u64[0] + 80;
            }
          }
          sub_641BC0((__int64 *)&v65, (char *)v21.m128_u64[0], v19, v20);
        }
      }
      sub_6441A0((__int64 *)ptr);
      sub_6441A0(v76.m128i_i64);
      v55 = (__int64 *)a1[1];
      v22 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        v23 = sub_CAE830(*(_QWORD *)(*a1 + 2152));
        v22 = v23 != 3 && v23 != 0;
      }
      LOBYTE(v74[0]) = v22;
      v24 = (_QWORD *)sub_7A47A0(a2);
      sub_648F60((__int64)v91, v24);
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v76, (__int64)a1, a2);
      v25 = sub_657BA0(
              v55,
              (__int64)v88,
              si128.m128i_i64[0],
              (__int64)v52,
              v10,
              &v76,
              &v61,
              (__int64)ptr,
              v63.m128i_i64,
              (__int64 *)&v65,
              v67,
              (__int64)v91,
              (__int64)v72,
              (unsigned __int8 *)v74);
      if ( ptr[0] != v82 )
        free(ptr[0]);
      sub_6469C0((__int64)&v95.m128i_i64[1]);
      sub_646940((__int64)v91);
    }
    else
    {
      v54 = a1[1];
      v32 = *(_QWORD *)(a2 + 40);
      if ( (v32 & 7) != 0 || (v33 = v32 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (v56 = 0, !**(_DWORD **)(v33 + 16)) )
      {
        v56 = (*(__int64 *)(a2 + 120) >> 2) & 1;
        if ( v56
          || (v34 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 0
          || (v35 = *(_QWORD *)(v34 + 40), (v35 & 7) != 0)
          || (v36 = v35 & 0xFFFFFFFFFFFFFFF8LL) == 0
          || !**(_DWORD **)(v36 + 16) )
        {
          v39 = *(_BYTE *)(a2 + 74);
          v56 = 0;
          if ( (v39 & 4) != 0 )
            v56 = (v39 & 8) == 0;
        }
      }
      v58 = sub_63DE20(*a1, *(_DWORD *)(a2 + 24));
      sub_766420(ptr, a2);
      sub_63E5A0((__int64)&v76, (__int64)a1, a2);
      v57 = v52;
      v37 = sub_FC8E80(v54, v88, si128.m128i_i64[0]);
      v60 = v38;
      *(_QWORD *)&v91[8] = v38;
      v59 = v37;
      *(_QWORD *)v91 = v37;
      *(_QWORD *)&v91[16] = 0;
      sub_64F120((__int64)&v68, v54 + 160, (__m128i *)v91, (__int64 *)&v91[16]);
      v53 = v68;
      if ( *(_QWORD *)&v91[16] )
        (***(void (__fastcall ****)(_QWORD))&v91[16])(*(_QWORD *)&v91[16]);
      if ( v69 )
      {
        v25 = sub_63DDF0(v54, 472, 4);
        v74[0] = (__int64)&v75;
        sub_63E170(v74, (_BYTE *)v72[0], (__int64)v72[0] + (unsigned __int64)v72[1]);
        sub_644390((__int64)v71, v67);
        sub_644390((__int64)v70, (__int64 *)&v65);
        *(_QWORD *)v91 = v92;
        *(__m128i *)&v91[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
        if ( ptr[1] )
          sub_63DE60((__int64)v91, (unsigned __int8 **)ptr);
        v40 = _mm_loadu_si128(&v83);
        v96 = v86;
        v93 = v40;
        v41 = _mm_loadu_si128(&v84);
        v97 = v87;
        v94 = v41;
        v95 = _mm_loadu_si128(&v85);
        v42 = sub_FC8E80(v54, v57, v10);
        v51 = _mm_load_si128(&v61);
        v49 = _mm_load_si128(&v76);
        v50 = _mm_load_si128(&v77);
        v43 = _mm_load_si128(&v78);
        sub_645BA0(
          v25,
          v59,
          v60,
          v42,
          v44,
          (__int64)v91,
          v49.m128i_i64[0],
          v49.m128i_i64[1],
          v50.m128i_i64[0],
          v50.m128i_i64[1],
          v43.m128i_i64[0],
          v43.m128i_i64[1],
          v79,
          v51.m128i_i64[0],
          v51.m128i_i64[1],
          v62,
          v63.m128i_i64,
          v70,
          v71,
          9u,
          (__int64)v74,
          v58,
          v56);
        if ( *(_BYTE **)v91 != v92 )
          free(*(void **)v91);
        sub_6441A0(v70);
        sub_6441A0(v71);
        std::string::_M_dispose();
        v45 = *(void (__fastcall ****)(_QWORD))(v53 + 16);
        *(_QWORD *)(v53 + 16) = v25;
        if ( v45 )
          (**v45)(v45);
        v46 = *(_QWORD *)(v25 + 88);
        if ( v46 && (unsigned int)(*(_DWORD *)(v46 + 356) - 2) <= 0x13 && (v47 = sub_FC8C50()) != 0 )
          sub_FC8D50(v47, v25);
        else
          sub_64B900(v54 + 184, v25);
      }
      else
      {
        v25 = *(_QWORD *)(v53 + 16);
        if ( (unsigned int)(*(_DWORD *)(v25 + 356) - 9) >= 4 )
          v25 = 0;
      }
      if ( ptr[0] != v82 )
        free(ptr[0]);
    }
    v26 = 5;
    v27 = *(_BYTE *)(a2 + 73) >> 5;
    if ( v27 != 2 )
      v26 = v27 == 0 ? 4 : 9;
    *(_DWORD *)(v25 + 352) = v26;
    sub_640BE0((__int64)v91, (__int64)a1, a2);
    sub_63E210(v25 + 400, (__int64)v91);
    if ( *(_BYTE **)v91 != &v91[16] )
      free(*(void **)v91);
    if ( v72[0] != &v73 )
      operator delete(v72[0], v73 + 1);
    sub_6441A0(v67);
    sub_6441A0((__int64 *)&v65);
    sub_646A80(v63.m128i_i64);
    if ( v88 != v90 )
      free(v88);
  }
}

