__int64 __fastcall sub_16ABB70(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 a11)
{
  _QWORD *v12; // rbp
  unsigned int v13; // r13d
  unsigned __int64 v15; // r14
  void **v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  void **v19; // rbp
  void **v20; // rdi
  void **v21; // r12
  void **v22; // r13
  char v23; // dl
  char *v24; // r14
  char *v25; // rbp
  __m128i *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rbp
  _QWORD **v30; // rbp
  _QWORD **v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  void *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // [rsp+38h] [rbp-2E0h] BYREF
  int v43; // [rsp+40h] [rbp-2D8h]
  __int64 v44; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-2C8h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-2C0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-2B8h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-2B0h] BYREF
  void *v49; // [rsp+70h] [rbp-2A8h] BYREF
  signed __int64 v50; // [rsp+78h] [rbp-2A0h]
  _BYTE v51[16]; // [rsp+80h] [rbp-298h] BYREF
  void *v52[2]; // [rsp+90h] [rbp-288h] BYREF
  char v53; // [rsp+A0h] [rbp-278h] BYREF
  unsigned __int64 v54; // [rsp+B0h] [rbp-268h] BYREF
  int v55; // [rsp+B8h] [rbp-260h] BYREF
  void *v56; // [rsp+C0h] [rbp-258h]
  int *v57; // [rsp+C8h] [rbp-250h]
  int *v58; // [rsp+D0h] [rbp-248h]
  __int64 v59; // [rsp+D8h] [rbp-240h]
  void *v60; // [rsp+E0h] [rbp-238h] BYREF
  size_t v61; // [rsp+E8h] [rbp-230h]
  _OWORD v62[8]; // [rsp+F0h] [rbp-228h] BYREF
  __int64 v63; // [rsp+170h] [rbp-1A8h] BYREF
  void *v64[3]; // [rsp+178h] [rbp-1A0h] BYREF
  __int64 v65; // [rsp+190h] [rbp-188h]
  __int64 v66; // [rsp+198h] [rbp-180h] BYREF
  unsigned int v67; // [rsp+1A0h] [rbp-178h]
  void *v68[2]; // [rsp+218h] [rbp-100h] BYREF
  int v69; // [rsp+228h] [rbp-F0h]
  char v70; // [rsp+22Ch] [rbp-ECh]
  __int64 v71; // [rsp+230h] [rbp-E8h] BYREF
  __int64 v72; // [rsp+250h] [rbp-C8h]
  void *ptr; // [rsp+258h] [rbp-C0h]
  __int64 v74; // [rsp+260h] [rbp-B8h]
  _DWORD v75[26]; // [rsp+268h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+2D0h] [rbp-48h]
  __int16 v77; // [rsp+2D8h] [rbp-40h]
  char v78; // [rsp+2DAh] [rbp-3Eh]

  v12 = a1;
  v44 = a3;
  v42 = a5;
  v43 = a6;
  if ( (unsigned __int8)sub_1E63330(a1, (unsigned int)a5, a2, 1, 0) )
    return 0;
  if ( (unsigned __int8)sub_1E63330(a1, (unsigned int)v42, v44, 1, 0) )
    return 0;
  if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
    return 0;
  v15 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 || *(_BYTE *)(*(_QWORD *)v15 + 16LL) != 48 )
    return 0;
  v63 = 0;
  v64[2] = nullptr;
  v65 = 1;
  v64[1] = v64;
  v64[0] = v64;
  v16 = (void **)&v66;
  do
  {
    *v16 = nullptr;
    v16 += 2;
  }
  while ( v16 != v68 );
  v77 = 257;
  v68[0] = &v71;
  ptr = v75;
  v68[1] = &byte_4;
  v69 = 0;
  v70 = 1;
  v72 = 0;
  v74 = 0x400000000LL;
  v75[24] = 0;
  v76 = 0;
  v78 = 1;
  if ( (unsigned __int8)sub_183BEE0(a1, (unsigned int)v42, v44, a2, &v63) )
  {
    if ( !a4 && !sub_16A8D90(&v44, a2, a1[31], v17, v18) )
    {
      v13 = 3;
      *a9 = 3285;
      goto LABEL_20;
    }
    if ( sub_B65DB0((__int64)&v63, *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( !HIBYTE(v77) )
      {
        sub_B669E0((__int64)&v63);
        HIBYTE(v77) = 1;
        sub_183BEE0(a1, (unsigned int)v42, v44, a2, &v63);
      }
      v22 = (void **)v64[0];
      v50 = 0;
      v49 = v51;
      v57 = &v55;
      v58 = &v55;
      v51[0] = 0;
      v55 = 0;
      v56 = nullptr;
      v59 = 0;
      if ( v64[0] != v64 )
      {
        do
        {
          LODWORD(v60) = *((_DWORD *)v22[2] + 6 * *((unsigned int *)v22 + 6) - 2);
          sub_16A9660(&v54, (unsigned int *)&v60);
          if ( v23 )
          {
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v50) <= 4 )
              goto LABEL_68;
            sub_9EE560(&v49, "\n    ", 5u);
            v24 = (char *)v22[2];
            v25 = &v24[24 * *((unsigned int *)v22 + 6)];
            if ( v24 != v25 )
            {
              while ( 1 )
              {
                v60 = **(void ***)(*((_QWORD *)v25 - 3) + 16LL);
                v48 = sub_6D5440(&v60);
                sub_F78400((__int64)v52, (__int64 *)&v48);
                if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v52[1] <= 3 )
                  break;
                v26 = (__m128i *)sub_9EE560(v52, " -> ", 4u);
                v60 = v62;
                if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
                {
                  v62[0] = _mm_loadu_si128(v26 + 1);
                }
                else
                {
                  v60 = (void *)v26->m128i_i64[0];
                  *(_QWORD *)&v62[0] = v26[1].m128i_i64[0];
                }
                v61 = v26->m128i_u64[1];
                v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
                v26->m128i_i64[1] = 0;
                v26[1].m128i_i8[0] = 0;
                sub_9EE560(&v49, v60, v61);
                if ( v60 != v62 )
                  operator delete(v60);
                if ( v52[0] == &v53 )
                {
                  v25 -= 24;
                  if ( v24 == v25 )
                    goto LABEL_48;
                }
                else
                {
                  operator delete(v52[0]);
                  v25 -= 24;
                  if ( v24 == v25 )
                    goto LABEL_48;
                }
              }
LABEL_68:
              std::__throw_length_error("basic_string::append");
            }
LABEL_48:
            v52[0] = (void *)v44;
            sub_F78400((__int64)&v60, (__int64 *)v52);
            sub_9EE560(&v49, v60, v61);
            if ( v60 != v62 )
              operator delete(v60);
          }
          v22 = (void **)*v22;
        }
        while ( v22 != v64 );
        v12 = a1;
      }
      sub_168B9F0((__int64)&v60, v12 + 1, v42, 0xBAAu, 0);
      v45 = a2;
      v46 = sub_6D5440(&v45);
      v27 = sub_162B6D0((__int64)&v60, (__int64 *)&v46);
      v47 = v44;
      v48 = sub_6D5440(&v47);
      v28 = sub_162B6D0(v27, (__int64 *)&v48);
      v29 = v28;
      if ( *(_BYTE *)(v28 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v28 + 32), v49, v50);
      }
      else if ( *(_BYTE *)(v28 + 132) )
      {
        v39 = sub_168B9E0((_QWORD *)v28);
        v40 = *(void **)(v29 + 16);
        if ( v40 )
          v40 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v29 + 16));
        v52[0] = v40;
        v41 = sub_1587BC0(v39, (__int64 *)v52, v35, v36, v37, v38);
        sub_AEC220((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v29 + 128) + 8), v49, v50);
      }
      sub_16AAEC0(v29, (unsigned int *)&v42);
      sub_15F7200(&v60);
      v30 = (_QWORD **)v56;
      *a9 = 0;
      if ( v30 )
      {
        do
        {
          sub_9C4D30((__int64)&v54, v30[3]);
          v31 = (_QWORD **)v30[2];
          operator delete(v30);
          v30 = v31;
        }
        while ( v31 );
      }
      if ( v49 != v51 )
        operator delete(v49);
    }
    else
    {
      if ( v72 )
      {
        v54 = v72 & 0xFFFFFFFFFFFFFFF0LL;
        sub_168B9F0((__int64)&v60, a1 + 1, v42, 0x139Au, 0);
        v32 = sub_1605D30((__int64)&v60, &a7);
        v33 = sub_1605D30(v32, &a8);
        v34 = sub_1605D30(v33, (__int64 *)&v54);
        sub_16AAEC0(v34, (unsigned int *)&v42);
        sub_15F7200(&v60);
      }
      else if ( a4 || (unsigned int)sub_16643B0(a1, (unsigned int)v42, a2, v44, (__int64)v64[0] + 16, 3705, 0, 0) != 1 )
      {
        v13 = 1;
        sub_183BF30(a1, &v63, a11);
        *a10 = 6;
        goto LABEL_20;
      }
      *a9 = 0;
    }
    v13 = 3;
  }
  else
  {
    v13 = 0;
  }
LABEL_20:
  if ( ptr != v75 )
    free(ptr);
  if ( !v70 )
    free(v68[0]);
  if ( (v65 & 1) == 0 )
    operator delete(v66, 16LL * v67, 8);
  v19 = (void **)v64[0];
  if ( v64[0] != v64 )
  {
    while ( 1 )
    {
      v20 = (void **)v19[2];
      v21 = (void **)*v19;
      if ( v20 == v19 + 4 )
      {
        operator delete(v19);
        if ( v21 == v64 )
          return v13;
      }
      else
      {
        free(v20);
        operator delete(v19);
        if ( v21 == v64 )
          return v13;
      }
      v19 = v21;
    }
  }
  return v13;
}
