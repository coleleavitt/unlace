_BOOL8 __fastcall sub_249C10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  int *v13; // rbx
  int *v14; // rax
  __int64 v15; // rdx
  int *v16; // rsi
  int *v17; // rax
  __m128i v18; // xmm0
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  int v21; // eax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm1
  int *v28; // r15
  __int64 v29; // rdi
  int *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r15
  __int64 *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // r13
  __int128 v44; // xmm0
  __int64 i; // rbx
  size_t v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rax
  size_t v49; // r14
  void *v50; // rax
  void *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // rdx
  const void **v56; // rbx
  size_t v57; // r13
  void *v58; // rax
  bool v59; // [rsp+28h] [rbp-248h]
  __int64 v60; // [rsp+28h] [rbp-248h]
  _QWORD *v61; // [rsp+28h] [rbp-248h]
  __int16 v62; // [rsp+3Eh] [rbp-232h] BYREF
  __int64 v63; // [rsp+40h] [rbp-230h] BYREF
  __int128 v64; // [rsp+48h] [rbp-228h]
  __int64 v65; // [rsp+60h] [rbp-210h] BYREF
  __int128 v66; // [rsp+68h] [rbp-208h]
  __int64 v67; // [rsp+80h] [rbp-1F0h] BYREF
  __m128i v68; // [rsp+88h] [rbp-1E8h] BYREF
  __int64 v69; // [rsp+98h] [rbp-1D8h] BYREF
  __m128i v70; // [rsp+A0h] [rbp-1D0h] BYREF
  __int64 (__fastcall **v71)(); // [rsp+B0h] [rbp-1C0h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-1B8h]
  __int128 v73; // [rsp+C0h] [rbp-1B0h]
  __int64 v74; // [rsp+D0h] [rbp-1A0h]
  __int64 v75; // [rsp+D8h] [rbp-198h]
  int v76; // [rsp+E0h] [rbp-190h]
  __m128i v77; // [rsp+E8h] [rbp-188h]
  int v78; // [rsp+F8h] [rbp-178h]
  _BYTE v79[96]; // [rsp+100h] [rbp-170h] BYREF
  int v80; // [rsp+160h] [rbp-110h] BYREF
  __int64 *v81; // [rsp+168h] [rbp-108h]
  __int64 (__fastcall **v82)(); // [rsp+170h] [rbp-100h] BYREF
  __int64 v83; // [rsp+178h] [rbp-F8h]
  __int128 v84; // [rsp+180h] [rbp-F0h]
  __int64 v85; // [rsp+190h] [rbp-E0h]
  __int64 v86; // [rsp+198h] [rbp-D8h]
  int v87; // [rsp+1A0h] [rbp-D0h]
  __m128i v88; // [rsp+1A8h] [rbp-C8h]
  int v89; // [rsp+1B8h] [rbp-B8h]
  _BYTE v90[96]; // [rsp+1C0h] [rbp-B0h] BYREF
  int v91; // [rsp+220h] [rbp-50h] BYREF
  __int64 *v92; // [rsp+228h] [rbp-48h]
  __int64 v93; // [rsp+230h] [rbp-40h]
  unsigned __int64 v94; // [rsp+238h] [rbp-38h]

  v94 = __readfsqword(0x28u);
  v59 = 0;
  if ( batch )
    return v59;
  v10 = *(_QWORD *)(a1 + 8);
  v67 = 0;
  v68 = 0;
  if ( !v10 )
    goto LABEL_4;
  v43 = 0;
  v68.m128i_i64[1] = v10;
  v44 = 0;
  v67 = qalloc_or_throw(48 * v10);
  for ( i = v67; ; i = v67 )
  {
    v47 = 48 * v43 + i;
    v48 = *(_QWORD *)a1 + 48 * v43;
    *(_QWORD *)v47 = 0;
    *(_OWORD *)(v47 + 8) = v44;
    v49 = *(_QWORD *)(v48 + 8);
    v60 = v48;
    if ( v49 )
    {
      v50 = (void *)qalloc_or_throw(v49);
      *(_QWORD *)(v47 + 16) = v49;
      *(_QWORD *)v47 = v50;
      memcpy(v50, *(const void **)v60, v49);
      *(_QWORD *)(v47 + 8) = v49;
      v44 = 0;
    }
    *(_QWORD *)(v47 + 24) = 0;
    *(_OWORD *)(v47 + 32) = v44;
    v46 = *(_QWORD *)(v60 + 32);
    if ( v46 )
      break;
    if ( v10 == ++v43 )
      goto LABEL_52;
LABEL_48:
    ;
  }
  v51 = (void *)qalloc_or_throw(*(_QWORD *)(v60 + 32));
  *(_QWORD *)(v47 + 24) = v51;
  ++v43;
  *(_QWORD *)(v47 + 40) = v46;
  memcpy(v51, *(const void **)(v60 + 24), v46);
  *(_QWORD *)(v47 + 32) = v46;
  v44 = 0;
  if ( v10 != v43 )
    goto LABEL_48;
LABEL_52:
  v68.m128i_i64[0] = v10;
LABEL_4:
  v11 = *(_QWORD *)(a1 + 32);
  v69 = 0;
  v70 = 0;
  if ( v11 )
  {
    v52 = qalloc_or_throw(24 * v11);
    v69 = v52;
    v53 = 0;
    v70.m128i_i64[1] = v11;
    while ( 1 )
    {
      a4 = 0;
      v54 = 24 * v53 + v52;
      v55 = *(_QWORD *)(a1 + 24) + 24 * v53;
      *(_QWORD *)v54 = 0;
      v56 = (const void **)v55;
      *(_OWORD *)(v54 + 8) = 0;
      v57 = *(_QWORD *)(v55 + 8);
      v61 = (_QWORD *)v54;
      if ( v57 )
      {
        v58 = (void *)qalloc_or_throw(v57);
        ++v53;
        *v61 = v58;
        v61[2] = v57;
        memcpy(v58, *v56, v57);
        v61[1] = v57;
        if ( v11 == v53 )
        {
LABEL_58:
          v70.m128i_i64[0] = v11;
          break;
        }
      }
      else if ( v11 == ++v53 )
      {
        goto LABEL_58;
      }
      v52 = v69;
    }
  }
  v12 = a1 + 48;
  v85 = 0;
  v83 = 0x706FF000004LL;
  v13 = &v91;
  v84 = -1;
  v82 = (__int64 (__fastcall **)())&stru_86F6A0;
  v86 = 0;
  v14 = (int *)v90;
  v87 = 2;
  v89 = -1;
  v88 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_8602D0), (__m128i)(unsigned __int64)&off_85FCD0);
  do
  {
    *(_QWORD *)v14 = 0;
    v14 += 6;
    *((_OWORD *)v14 - 1) = 0;
  }
  while ( &v91 != v14 );
  v15 = HIDWORD(v83);
  v91 = 0;
  v16 = (int *)(((HIDWORD(v83) >> 19) & 0x3F) - 1);
  if ( ((HIDWORD(v83) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v83) == 0xFF )
    {
      BYTE3(v83) = ((HIDWORD(v83) >> 19) & 0x3F) - 1;
      HIDWORD(v83) &= 0xFE07FFFF;
      goto LABEL_10;
    }
LABEL_61:
    if ( !under_debugger )
      interr(3449, v16, v15, v12, 0.0);
    goto LABEL_63;
  }
LABEL_10:
  v93 = a1 + 48;
  v82 = pathmap_chooser_t___vtable;
  v16 = &v80;
  v92 = &v67;
  v64 = 0;
  v72 = 0x706FF000004LL;
  v73 = -1;
  v17 = (int *)v79;
  v63 = 0;
  v71 = (__int64 (__fastcall **)())&stru_86F6A0;
  v74 = 0;
  v75 = 0;
  v76 = 1;
  v78 = -1;
  v77 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_8602D8), (__m128i)(unsigned __int64)&off_85FCC8);
  do
  {
    *(_QWORD *)v17 = 0;
    v17 += 6;
    *((_OWORD *)v17 - 1) = 0;
  }
  while ( &v80 != v17 );
  v80 = 0;
  if ( ((HIDWORD(v72) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v72) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr(3449, &v80, HIDWORD(v72), ((HIDWORD(v72) >> 19) & 0x3F) - 1, 0.0);
        goto LABEL_61;
      }
LABEL_63:
      BUG();
    }
    BYTE3(v72) = ((HIDWORD(v72) >> 19) & 0x3F) - 1;
    HIDWORD(v72) &= 0xFE07FFFF;
  }
  v18.m128i_i64[0] = 0;
  v71 = undesired_chooser_t___vtable;
  v81 = &v69;
  v65 = 0;
  v66 = 0;
  v62 = (unsigned int)reg_int_op("ShowSourcePaths", 0, 1, 0) != 0;
  v21 = sub_1697D0(
          (int)"BUTTON YES Apply\n"
               "BUTTON CANCEL Cancel\n"
               "STARTITEM 0\n"
               "Source paths...\n"
               "\n"
               "%/%*<S~h~ow this dialog when a source file can't be found:C3>2>\n"
               "<#Whenever a source file is requested, IDA will try and map it to a local path using these mappings#Sourc"
               "e path mappings:E10::74::>\n"
               "<->\n"
               "<#IDA won't open those files automatically, due to the user having manually closed them before#Undesired "
               "files:E30::74::>\n",
          (__int64)sub_23A910,
          (__int64)&v67,
          (__int64)&v62,
          (__int64)&v82,
          (__int64)&v63,
          (__m128)0LL,
          a3,
          a4,
          (__m128)(unsigned __int64)&off_85FCD0,
          v19,
          v20,
          a8,
          a9,
          (char)&v71);
  v59 = v21 > 0;
  if ( v21 > 0 )
  {
    v22 = v67;
    v23 = _mm_loadu_si128(&v68);
    v24 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v67 = *(_QWORD *)a1;
    v25 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = v22;
    v26 = v69;
    v68 = v24;
    v27 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    *(__m128i *)(a1 + 8) = v23;
    v18 = _mm_load_si128(&v70);
    v69 = v25;
    *(_QWORD *)(a1 + 24) = v26;
    v70 = v27;
    *(__m128i *)(a1 + 32) = v18;
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    *(double *)v18.m128i_i64 = qfree(v65, (const char *)&v65);
  }
  v71 = (__int64 (__fastcall **)())&stru_86F6A0;
  v28 = &v80;
  do
  {
    v29 = *((_QWORD *)v28 - 3);
    v30 = v28 - 6;
    v28 -= 6;
    if ( v29 )
    {
      *((_QWORD *)v30 + 1) = 0;
      *(double *)v18.m128i_i64 = qfree(v29, (const char *)&v65, *(double *)v18.m128i_i64);
    }
  }
  while ( v28 != (int *)v79 );
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    *(double *)v18.m128i_i64 = qfree(v63, (const char *)&v65, *(double *)v18.m128i_i64);
  }
  v82 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v31 = *((_QWORD *)v13 - 3);
    v13 -= 6;
    if ( v31 )
    {
      *((_QWORD *)v13 + 1) = 0;
      *(double *)v18.m128i_i64 = qfree(v31, (const char *)&v65, *(double *)v18.m128i_i64);
    }
  }
  while ( v13 != (int *)v90 );
  v32 = v69;
  if ( v69 )
  {
    if ( v70.m128i_i64[0] )
    {
      v33 = 0;
      v34 = v70.m128i_i64[0];
      do
      {
        v35 = (__int64 *)(v32 + 24 * v33);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          *(double *)v18.m128i_i64 = qfree(v36, (const char *)&v65, *(double *)v18.m128i_i64);
          v32 = v69;
        }
        ++v33;
      }
      while ( v34 != v33 );
    }
    v70.m128i_i64[0] = 0;
    *(double *)v18.m128i_i64 = qfree(v32, (const char *)&v65, *(double *)v18.m128i_i64);
  }
  v37 = v67;
  if ( v67 )
  {
    v38 = v68.m128i_i64[0];
    if ( v68.m128i_i64[0] )
    {
      v39 = 0;
      do
      {
        v40 = (__int64 *)(v37 + 48 * v39);
        v41 = v40[3];
        if ( v41 )
        {
          v40[4] = 0;
          *(double *)v18.m128i_i64 = qfree(v41, (const char *)&v65, *(double *)v18.m128i_i64);
        }
        v42 = *v40;
        if ( *v40 )
        {
          v40[1] = 0;
          *(double *)v18.m128i_i64 = qfree(v42, (const char *)&v65, *(double *)v18.m128i_i64);
        }
        v37 = v67;
        ++v39;
      }
      while ( v38 != v39 );
    }
    v68.m128i_i64[0] = 0;
    qfree(v37, (const char *)&v65, *(double *)v18.m128i_i64);
  }
  return v59;
}
