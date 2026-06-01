void __fastcall sub_12F34E0(__int64 a1, int a2, _BYTE *a3, size_t a4, _BYTE *a5, __int64 a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  __m128i si128; // xmm0
  _BYTE *v13; // rcx
  _BYTE *v14; // rax
  size_t v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r14d
  char v18; // r14
  _BYTE *v19; // rax
  bool v20; // r14
  _BYTE *v21; // rsi
  char *v22; // rdx
  __int64 *v23; // r13
  __int64 v24; // r14
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  unsigned __int64 v27; // r13
  __int64 v28; // r12
  size_t v29; // rax
  _QWORD *v30; // r12
  _BYTE *v31; // rdx
  __int64 v32; // rbx
  char *v33; // r14
  void *v34; // rdi
  __int64 v35; // r13
  void *v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rcx
  int v39; // esi
  bool v40; // al
  __int64 v41; // r15
  _QWORD *v42; // r13
  void *v43; // rdi
  __int64 v44; // r12
  void *v45; // rdi
  __int64 v46; // rax
  int v47; // edx
  void *v48; // rbx
  void (__fastcall *v49)(void *); // rax
  __m128i *v50; // r12
  __m128i *v51; // r13
  __m128i *v52; // rax
  __int64 *v53; // rsi
  __m128i *v54; // r13
  __m128i *v55; // r15
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // rdi
  void *v61; // rdi
  __m128i *v62; // rdi
  __m128i *v63; // rdi
  _QWORD *v64; // [rsp+8h] [rbp-2F0h]
  __int64 v65; // [rsp+8h] [rbp-2F0h]
  __int64 v66; // [rsp+8h] [rbp-2F0h]
  __int64 v67; // [rsp+8h] [rbp-2F0h]
  __int64 v68; // [rsp+8h] [rbp-2F0h]
  __int64 v69; // [rsp+8h] [rbp-2F0h]
  bool v71; // [rsp+18h] [rbp-2E0h]
  __int64 v73; // [rsp+50h] [rbp-2A8h]
  __int64 v74; // [rsp+58h] [rbp-2A0h]
  void *v75; // [rsp+68h] [rbp-290h] BYREF
  void *v76; // [rsp+70h] [rbp-288h] BYREF
  char *v77; // [rsp+78h] [rbp-280h]
  __int64 v78; // [rsp+80h] [rbp-278h] BYREF
  void *v79; // [rsp+90h] [rbp-268h] BYREF
  __int64 v80; // [rsp+98h] [rbp-260h]
  _BYTE v81[16]; // [rsp+A0h] [rbp-258h] BYREF
  void *v82; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-240h]
  __m128i v84; // [rsp+C0h] [rbp-238h] BYREF
  char v85; // [rsp+D0h] [rbp-228h]
  void *v86; // [rsp+E0h] [rbp-218h] BYREF
  signed __int64 v87; // [rsp+E8h] [rbp-210h]
  _BYTE v88[16]; // [rsp+F0h] [rbp-208h] BYREF
  __m128i v89; // [rsp+100h] [rbp-1F8h] BYREF
  __m128i v90; // [rsp+110h] [rbp-1E8h] BYREF
  __int64 v91; // [rsp+120h] [rbp-1D8h]
  int v92; // [rsp+128h] [rbp-1D0h]
  char v93; // [rsp+12Ch] [rbp-1CCh]
  __m128i v94; // [rsp+130h] [rbp-1C8h] BYREF
  _QWORD v95[2]; // [rsp+140h] [rbp-1B8h] BYREF
  __m128i v96; // [rsp+150h] [rbp-1A8h]
  __m128i v97; // [rsp+160h] [rbp-198h]
  __int64 v98; // [rsp+170h] [rbp-188h]
  int v99; // [rsp+178h] [rbp-180h]
  char v100; // [rsp+17Ch] [rbp-17Ch]
  _BYTE v101[24]; // [rsp+180h] [rbp-178h] BYREF
  _BYTE v102[136]; // [rsp+198h] [rbp-160h] BYREF
  void *ptr; // [rsp+220h] [rbp-D8h] BYREF
  __m128i v104; // [rsp+228h] [rbp-D0h]
  _BYTE v105[192]; // [rsp+238h] [rbp-C0h] BYREF

  v9 = a1;
  *(__m128i *)&v101[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v73 = (__int64)&a3[a4];
  *(_QWORD *)v101 = v102;
  sub_A1FE50(v101, a3, &a3[a4]);
  v10 = *(_QWORD *)v101;
  v11 = *(_QWORD *)&v101[8];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v13 = (_BYTE *)(*(_QWORD *)v101 + *(_QWORD *)&v101[8]);
  if ( *(_QWORD *)v101 + *(_QWORD *)&v101[8] != *(_QWORD *)v101 )
  {
    v14 = *(_BYTE **)v101;
    do
    {
      if ( (byte_2411740[2 * (unsigned __int8)*v14] & 0x68) == 0 )
        *v14 = 95;
      ++v14;
    }
    while ( v14 != v13 );
    v11 = *(_QWORD *)&v101[8];
    v10 = *(_QWORD *)v101;
  }
  v104 = si128;
  ptr = v105;
  v15 = j__strlen("pcm");
  v94.m128i_i64[0] = v10;
  v96.m128i_i16[0] = 261;
  v94.m128i_i64[1] = v11;
  v17 = sub_228FDE0(&v94, "pcm", v15, &ptr, 0);
  if ( v17 )
  {
    v65 = v16;
    sub_FC70B0((__int64)&v94, *(_QWORD *)(a1 + 32), a2, 740);
    sub_AEC220((unsigned __int8 **)&v94, ptr, v104.m128i_i64[0]);
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v65 + 32LL))(&v86, v65, v17);
    sub_AEC220((unsigned __int8 **)&v94, v86, v87);
    if ( v86 != v88 )
      operator delete(v86);
    sub_AEA040((__int64)&v94);
    goto LABEL_52;
  }
  v18 = 8;
  v96.m128i_i16[0] = 773;
  v94 = *(__m128i *)v101;
  v95[0] = ".map";
  sub_2253560(&v76, &v94);
  v19 = **(_BYTE ***)(a1 + 16);
  if ( (v19[47] & 0x20) == 0 )
  {
    v18 = 10;
    if ( (v19[60] & 0x10) == 0 )
    {
      v20 = (v19[1] & 8) != 0;
      if ( (v19[2] & 4) != 0 )
      {
        v21 = v76;
        v18 = v20 + 6;
        v22 = v77;
        if ( v76 )
          goto LABEL_13;
LABEL_28:
        v88[0] = 0;
        v86 = v88;
        v87 = 0;
        goto LABEL_14;
      }
      v18 = v20 + 4;
    }
  }
  v21 = v76;
  v22 = v77;
  if ( !v76 )
    goto LABEL_28;
LABEL_13:
  v86 = v88;
  sub_12E9400(&v86, v21, (__int64)&v22[(_QWORD)v21]);
LABEL_14:
  LOBYTE(v91) = 0;
  LOBYTE(v92) = v18;
  BYTE1(v92) = 9;
  v93 = 0;
  if ( a5 )
  {
    v79 = v81;
    sub_12E9400(&v79, a5, (__int64)&a5[a6]);
  }
  else
  {
    v81[0] = 0;
    v79 = v81;
    v80 = 0;
  }
  v85 = 0;
  v23 = (__int64 *)ptr;
  v24 = v104.m128i_i64[0];
  v94.m128i_i64[0] = (__int64)v95;
  sub_12E94C0(&v94, v86, (__int64)v86 + v87);
  v25 = _mm_load_si128(&v89);
  v26 = _mm_load_si128(&v90);
  v98 = v91;
  v96 = v25;
  v99 = v92;
  v97 = v26;
  v100 = v93;
  sub_12F1EE0((__m128 **)&v75, a1, a2, a3, a4, &v94, 0, nullptr, v23, v24, (__int64)&v82);
  if ( (_QWORD *)v94.m128i_i64[0] != v95 )
    operator delete((void *)v94.m128i_i64[0]);
  if ( v85 )
  {
    if ( v84.m128i_i64[1] )
      sub_4343A0((volatile signed __int32 *)v84.m128i_i64[1]);
    v61 = v82;
    if ( v82 && !_InterlockedSub((volatile signed __int32 *)v82 + 2, 1u) )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v61 + 8LL))(v61);
  }
  v27 = sub_FDBF00(*((_QWORD *)v75 + 8), v76, v77, v80, 0);
  v28 = *((_QWORD *)v75 + 9);
  v29 = j__strlen(&byte_22F0C30);
  sub_2230330(&v94, v79, v80, &byte_22F0C30, v29, 1);
  sub_10249A0(v28, v27, v94.m128i_i64);
  if ( v94.m128i_i64[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94.m128i_i64[0] + 8LL))(v94.m128i_i64[0]);
  v30 = v75;
  v64 = (_QWORD *)(v9 + 256);
  v31 = v75;
  if ( *((_QWORD *)v75 + 34) )
  {
    v74 = v9;
    v32 = *((_QWORD *)v75 + 34);
    v33 = (char *)v75 + 256;
    while ( 1 )
    {
      sub_12DC6A0((__int64)v33, *(_QWORD **)(v32 + 24));
      v34 = *(void **)(v32 + 64);
      v35 = *(_QWORD *)(v32 + 16);
      if ( v34 != (void *)(v32 + 80) )
        operator delete(v34);
      v36 = *(void **)(v32 + 32);
      if ( v36 == (void *)(v32 + 48) )
      {
        operator delete((void *)v32);
        if ( !v35 )
        {
LABEL_30:
          v9 = v74;
          v31 = v75;
          break;
        }
      }
      else
      {
        operator delete(v36);
        operator delete((void *)v32);
        if ( !v35 )
          goto LABEL_30;
      }
      v32 = v35;
    }
  }
  v37 = v9 + 264;
  v30[34] = 0;
  v30[35] = v30 + 33;
  v30[36] = v30 + 33;
  v38 = *(_QWORD *)(v9 + 272);
  v30[37] = 0;
  if ( v38 )
  {
    v39 = *(_DWORD *)(v9 + 264);
    v30[34] = v38;
    *((_DWORD *)v30 + 66) = v39;
    v30[35] = *(_QWORD *)(v9 + 280);
    v30[36] = *(_QWORD *)(v9 + 288);
    *(_QWORD *)(v38 + 8) = v30 + 33;
    v30[37] = *(_QWORD *)(v9 + 296);
    *(_QWORD *)(v9 + 272) = 0;
    *(_QWORD *)(v9 + 280) = v37;
    *(_QWORD *)(v9 + 288) = v37;
    *(_QWORD *)(v9 + 296) = 0;
  }
  v31[304] = 0;
  v40 = sub_12ED580(v9, a2, a3, a4, ptr, v104.m128i_i64[0], (__int64)v31);
  v41 = *(_QWORD *)(v9 + 272);
  v42 = v75;
  v71 = v40;
  if ( v41 )
  {
    while ( 1 )
    {
      sub_12DC6A0((__int64)v64, *(_QWORD **)(v41 + 24));
      v43 = *(void **)(v41 + 64);
      v44 = *(_QWORD *)(v41 + 16);
      if ( v43 != (void *)(v41 + 80) )
        operator delete(v43);
      v45 = *(void **)(v41 + 32);
      if ( v45 == (void *)(v41 + 48) )
      {
        operator delete((void *)v41);
        if ( !v44 )
          break;
      }
      else
      {
        operator delete(v45);
        operator delete((void *)v41);
        if ( !v44 )
          break;
      }
      v41 = v44;
    }
  }
  *(_QWORD *)(v9 + 272) = 0;
  *(_QWORD *)(v9 + 280) = v37;
  *(_QWORD *)(v9 + 288) = v37;
  v46 = v42[34];
  *(_QWORD *)(v9 + 296) = 0;
  if ( v46 )
  {
    v47 = *((_DWORD *)v42 + 66);
    *(_QWORD *)(v9 + 272) = v46;
    *(_DWORD *)(v9 + 264) = v47;
    *(_QWORD *)(v9 + 280) = v42[35];
    *(_QWORD *)(v9 + 288) = v42[36];
    *(_QWORD *)(v46 + 8) = v37;
    *(_QWORD *)(v9 + 296) = v42[37];
    v42[34] = 0;
    v42[35] = v42 + 33;
    v42[36] = v42 + 33;
    v42[37] = 0;
  }
  if ( v71 )
  {
    v50 = (__m128i *)(v9 + 264);
    v94.m128i_i64[0] = (__int64)v95;
    sub_12E9400(&v94, ptr, (__int64)ptr + v104.m128i_i64[0]);
    v82 = &v84;
    sub_12E9400(&v82, a3, v73);
    v51 = *(__m128i **)(v9 + 272);
    if ( !v51 )
      goto LABEL_62;
    do
    {
      while ( sub_9C4B50((__int64)v51[2].m128i_i64, (__int64)&v82) >= 0 )
      {
        v50 = v51;
        v51 = (__m128i *)v51[1].m128i_i64[0];
        if ( !v51 )
          goto LABEL_71;
      }
      v51 = (__m128i *)v51[1].m128i_i64[1];
    }
    while ( v51 );
LABEL_71:
    if ( v50 == (__m128i *)v37 || sub_9C4B50((__int64)&v82, (__int64)v50[2].m128i_i64) < 0 )
    {
LABEL_62:
      v52 = (__m128i *)operator new(0x60u);
      v53 = (__int64 *)v50;
      v54 = v52 + 3;
      v50 = v52;
      v52[2].m128i_i64[0] = (__int64)v52[3].m128i_i64;
      if ( v82 == &v84 )
      {
        v52[3] = _mm_load_si128(&v84);
      }
      else
      {
        v52[2].m128i_i64[0] = (__int64)v82;
        v52[3].m128i_i64[0] = v84.m128i_i64[0];
      }
      v55 = v52 + 5;
      v56 = v83;
      v50[4].m128i_i64[1] = 0;
      v50[4].m128i_i64[0] = (__int64)v50[5].m128i_i64;
      v50[2].m128i_i64[1] = v56;
      v50[5].m128i_i8[0] = 0;
      v84.m128i_i8[0] = 0;
      v82 = &v84;
      v83 = 0;
      v57 = sub_12EF180(v64, v53, (const void **)&v50[2]);
      if ( v58 )
      {
        if ( v57 || v37 == v58 )
        {
          v60 = 1;
        }
        else
        {
          v66 = v58;
          v59 = sub_9C4B50((__int64)v50[2].m128i_i64, v58 + 32);
          v58 = v66;
          v60 = v59 >> 31;
        }
        std::_Rb_tree_insert_and_rebalance(v60, v50, v58, v9 + 264);
        ++*(_QWORD *)(v9 + 296);
      }
      else
      {
        v62 = (__m128i *)v50[4].m128i_i64[0];
        if ( v55 != v62 )
        {
          v67 = v57;
          operator delete(v62);
          v57 = v67;
        }
        v63 = (__m128i *)v50[2].m128i_i64[0];
        if ( v54 != v63 )
        {
          v68 = v57;
          operator delete(v63);
          v57 = v68;
        }
        v69 = v57;
        operator delete(v50);
        v50 = (__m128i *)v69;
      }
    }
    sub_A0AAD0((__int64)v50[4].m128i_i64, &v94);
    if ( v82 != &v84 )
      operator delete(v82);
    if ( (_QWORD *)v94.m128i_i64[0] != v95 )
      operator delete((void *)v94.m128i_i64[0]);
    sub_2296DB0(ptr, v104.m128i_i64[0], 0);
  }
  v48 = v75;
  if ( v75 )
  {
    v49 = *(void (__fastcall **)(void *))(*(_QWORD *)v75 + 8LL);
    if ( v49 == sub_12EC440 )
    {
      sub_12EBC20((__int64)v75);
      operator delete(v48, 0x178u);
    }
    else
    {
      v49(v75);
    }
  }
  if ( v79 != v81 )
    operator delete(v79);
  if ( v86 != v88 )
    operator delete(v86);
  if ( v76 != &v78 )
    operator delete(v76);
LABEL_52:
  if ( ptr != v105 )
    free(ptr);
  if ( *(_BYTE **)v101 != v102 )
    free(*(void **)v101);
}
