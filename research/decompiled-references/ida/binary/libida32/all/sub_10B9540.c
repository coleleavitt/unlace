const char *__fastcall sub_10B9540(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __m128i a8,
        char a9)
{
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int8 (__fastcall *v15)(__int64, _BYTE *); // rax
  __int64 v16; // r8
  char *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rbp
  __int64 v22; // rax
  size_t v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128i v41; // [rsp+8h] [rbp-400h]
  unsigned int v42; // [rsp+8h] [rbp-400h]
  __int64 v43; // [rsp+10h] [rbp-3F8h]
  void *v44; // [rsp+30h] [rbp-3D8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-3D0h]
  __m128i v46; // [rsp+40h] [rbp-3C8h] BYREF
  char v47; // [rsp+50h] [rbp-3B8h]
  __m128i v48; // [rsp+60h] [rbp-3A8h] BYREF
  __int16 v49; // [rsp+80h] [rbp-388h]
  __m128i v50[2]; // [rsp+90h] [rbp-378h] BYREF
  __int16 v51; // [rsp+B0h] [rbp-358h]
  __m128i v52[3]; // [rsp+C0h] [rbp-348h] BYREF
  __m128i v53; // [rsp+F0h] [rbp-318h] BYREF
  __int16 v54; // [rsp+110h] [rbp-2F8h]
  __m128i v55[3]; // [rsp+120h] [rbp-2E8h] BYREF
  __m128i v56; // [rsp+150h] [rbp-2B8h] BYREF
  _WORD v57[16]; // [rsp+160h] [rbp-2A8h] BYREF
  __m128i v58; // [rsp+180h] [rbp-288h] BYREF
  __int64 v59; // [rsp+190h] [rbp-278h] BYREF
  __m128i v60[2]; // [rsp+1B0h] [rbp-258h] BYREF
  __int16 v61; // [rsp+1D0h] [rbp-238h]
  __m128i v62; // [rsp+1E0h] [rbp-228h] BYREF
  char *v63; // [rsp+1F0h] [rbp-218h]
  __int16 v64; // [rsp+200h] [rbp-208h]
  __m128i v65; // [rsp+210h] [rbp-1F8h] BYREF
  __int64 v66; // [rsp+220h] [rbp-1E8h] BYREF
  __int16 v67; // [rsp+230h] [rbp-1D8h]
  __m128i v68[2]; // [rsp+240h] [rbp-1C8h] BYREF
  __int16 v69; // [rsp+260h] [rbp-1A8h]
  void *v70; // [rsp+290h] [rbp-178h] BYREF
  __m128i si128; // [rsp+298h] [rbp-170h]
  _BYTE v72[136]; // [rsp+2A8h] [rbp-160h] BYREF
  _BYTE ptr[24]; // [rsp+330h] [rbp-D8h] BYREF
  __int64 v74; // [rsp+348h] [rbp-C0h] BYREF
  __int16 v75; // [rsp+350h] [rbp-B8h]

  v12 = *(_QWORD *)(a2 + 80);
  v41.m128i_i64[0] = a5;
  v41.m128i_i64[1] = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v70 = v72;
  v13 = sub_10B8FF0(v12, 0x212u);
  if ( (*(_BYTE *)(a1 + 920) & 2) == 0 || !v13 )
  {
    v24 = j__strlen("CLANG_CRASH_DIAGNOSTICS_DIR");
    sub_226CD00(&v44, "CLANG_CRASH_DIAGNOSTICS_DIR", v24);
    if ( v47 )
      goto LABEL_6;
    if ( a8.m128i_i64[1] && a7 )
    {
      if ( a9 )
      {
        sub_10B78F0(ptr, (__int64 *)a1, a3, a4);
        si128.m128i_i64[0] = 0;
        sub_9FC110(&v70, *(_BYTE **)ptr, (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]));
        if ( *(_BYTE **)ptr != &ptr[16] )
          operator delete(*(void **)ptr);
        v48.m128i_i64[0] = (__int64)a3;
        v48.m128i_i64[1] = (__int64)a4;
        v60[0] = v41;
        v75 = 257;
        v56.m128i_i64[0] = (__int64)".";
        v69 = 257;
        v53 = a8;
        v67 = 257;
        v50[0].m128i_i64[0] = (__int64)"-";
        v51 = 259;
        v61 = 261;
        v57[8] = 259;
        v49 = 261;
        v54 = 261;
        sub_A1D840(v52, &v48, v50, v27, 257, 257);
        sub_A1D840(v55, v52, &v53, v28, v29, v30);
        sub_A1D840(&v58, v55, &v56, v31, v32, v33);
        sub_A1D840(&v62, &v58, v60, v34, v35, v36);
        sub_2266670(&v70, &v62, &v65, v68, ptr);
        goto LABEL_13;
      }
      v60[0].m128i_i64[1] = (__int64)a4;
      v69 = 261;
      v68[0] = a8;
      v61 = 261;
      v62.m128i_i64[0] = (__int64)"-";
      v64 = 259;
      v60[0].m128i_i64[0] = (__int64)a3;
      sub_A1D840(&v65, v60, &v62, 259, v25, v26);
      sub_A1D840((__m128i *)ptr, &v65, v68, v38, v39, v40);
      sub_222F820(&v56, ptr);
      sub_10B77A0(
        &v58,
        (__int64 *)a1,
        (unsigned __int8 *)v56.m128i_i64[0],
        (unsigned __int8 *)v56.m128i_i64[1],
        v41.m128i_i64[0],
        v41.m128i_i64[1]);
      si128.m128i_i64[0] = 0;
      sub_9FC110(&v70, v58.m128i_i64[0], (_BYTE *)(v58.m128i_i64[0] + v58.m128i_i64[1]));
      if ( (__int64 *)v58.m128i_i64[0] != &v59 )
        operator delete((void *)v58.m128i_i64[0]);
      v37 = (void *)v56.m128i_i64[0];
      if ( (_WORD *)v56.m128i_i64[0] == v57 )
        goto LABEL_13;
    }
    else
    {
      sub_10B77A0(ptr, (__int64 *)a1, a3, a4, v41.m128i_i64[0], v41.m128i_i64[1]);
      si128.m128i_i64[0] = 0;
      sub_9FC110(&v70, *(_BYTE **)ptr, (_BYTE *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]));
      v37 = *(void **)ptr;
      if ( *(_BYTE **)ptr == &ptr[16] )
      {
LABEL_13:
        v20 = *(_QWORD *)(a2 + 80);
        v75 = 261;
        *(_QWORD *)ptr = v70;
        *(_QWORD *)&ptr[8] = si128.m128i_i64[0];
        v21 = (const char *)sub_10B6980(v20, (__int64)ptr);
        v22 = *(unsigned int *)(a2 + 256);
        if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 260) )
        {
          sub_22134E0(a2 + 248, a2 + 264, v22 + 1, 8);
          v22 = *(unsigned int *)(a2 + 256);
        }
        *(_QWORD *)(*(_QWORD *)(a2 + 248) + 8 * v22) = v21;
        ++*(_DWORD *)(a2 + 256);
        goto LABEL_16;
      }
    }
    operator delete(v37);
    goto LABEL_13;
  }
  sub_10B5340(ptr, **(char ***)(v13 + 48));
  v44 = &v46;
  if ( *(_BYTE **)ptr == &ptr[16] )
  {
    v46 = _mm_load_si128((const __m128i *)&ptr[16]);
  }
  else
  {
    v44 = *(void **)ptr;
    v46.m128i_i64[0] = *(_QWORD *)&ptr[16];
  }
  v47 = 1;
  v45 = *(_QWORD *)&ptr[8];
LABEL_6:
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 96LL);
  *(_QWORD *)ptr = &v44;
  v75 = 260;
  if ( !v15(v14, ptr) )
  {
    v75 = 260;
    *(_QWORD *)ptr = &v44;
    sub_2267F70(ptr, 1, 504);
  }
  *(_QWORD *)ptr = &v74;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  sub_9FC110(ptr, v44, (_BYTE *)v44 + v45);
  v69 = 257;
  v67 = 257;
  v60[0].m128i_i64[0] = (__int64)a3;
  v60[0].m128i_i64[1] = (__int64)a4;
  v64 = 257;
  v61 = 261;
  sub_2266670(ptr, v60, &v62, &v65, v68);
  v17 = "-%%%%%%.";
  v65.m128i_i64[0] = v41.m128i_i64[0];
  if ( !v41.m128i_i64[1] )
    v17 = "-%%%%%%";
  v65.m128i_i64[1] = v41.m128i_i64[1];
  v67 = 261;
  v64 = 773;
  v62 = *(__m128i *)ptr;
  v63 = v17;
  sub_A1D840(v68, &v62, &v65, 773, v16, (__int64)&v62);
  v18 = sub_226BEA0(v68, &v70, 438);
  if ( !v18 )
  {
    if ( *(__int64 **)ptr != &v74 )
      free(*(void **)ptr);
    goto LABEL_13;
  }
  v43 = v19;
  v42 = v18;
  sub_FA3370((__int64)v68, *(_QWORD *)a1, 0, 78);
  (*(void (__fastcall **)(__m128i *, __int64, _QWORD))(*(_QWORD *)v43 + 32LL))(&v65, v43, v42);
  sub_AC84E0((unsigned __int8 **)v68, v65.m128i_i64[0], v65.m128i_i64[1]);
  if ( (__int64 *)v65.m128i_i64[0] != &v66 )
    operator delete((void *)v65.m128i_i64[0]);
  sub_AC6300((__int64)v68);
  if ( *(__int64 **)ptr != &v74 )
    free(*(void **)ptr);
  v21 = &byte_22CD811;
LABEL_16:
  if ( v47 && v44 != &v46 )
    operator delete(v44);
  if ( v70 != v72 )
    free(v70);
  return v21;
}

