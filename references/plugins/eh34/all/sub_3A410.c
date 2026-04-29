__int64 __fastcall sub_3A410(__int64 a1, __m128i *a2, _QWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // rax
  __int64 v7; // r14
  int v8; // r8d
  int v9; // r9d
  char v10; // r14
  __int64 v11; // rbx
  void (__fastcall *hexdsp)(__int64, __int64 *, __int64); // rax
  __int64 v13; // r13
  void (__fastcall *v14)(__int64, __int64 *, __int64); // rax
  __int64 *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rax
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  void (__fastcall *v23)(__int64, __int64 *); // rax
  _QWORD *v24; // rbx
  void (__fastcall *v25)(__int64, __int64 *, __int64, _QWORD *); // rax
  __int64 v26; // r12
  void (__fastcall *v27)(__int64, __int64 *, __int64); // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  char v31; // dl
  unsigned __int64 v32; // r14
  __int64 v33; // rsi
  void (__fastcall *v34)(__int64, _QWORD *); // rax
  __int64 v35; // rbx
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i *v38; // rax
  _QWORD *v39; // rbx
  void *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 *v49; // rax
  __int64 v50; // rdi
  const char *v52; // rcx
  __int64 v53; // rdi
  void (__fastcall *v54)(__int64, char *, __int64, __int64 *, __int64 *); // rax
  __m128i v55; // [rsp+0h] [rbp-238h] BYREF
  __m128i *v56; // [rsp+10h] [rbp-228h]
  __int64 *v57; // [rsp+18h] [rbp-220h]
  __int64 *v58; // [rsp+20h] [rbp-218h]
  unsigned __int64 v59; // [rsp+28h] [rbp-210h]
  __int64 v60; // [rsp+30h] [rbp-208h] BYREF
  __int64 v61; // [rsp+38h] [rbp-200h] BYREF
  __int64 v62; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v64; // [rsp+50h] [rbp-1E8h] BYREF
  char v65[8]; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v66; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-1D0h]
  unsigned __int64 v68; // [rsp+70h] [rbp-1C8h]
  __int64 v69; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v70; // [rsp+88h] [rbp-1B0h]
  char v71; // [rsp+98h] [rbp-1A0h]
  __int64 v72; // [rsp+A0h] [rbp-198h] BYREF
  int v73; // [rsp+A8h] [rbp-190h] BYREF
  _QWORD *v74; // [rsp+B0h] [rbp-188h]
  int *v75; // [rsp+B8h] [rbp-180h]
  int *v76; // [rsp+C0h] [rbp-178h]
  __int64 v77; // [rsp+C8h] [rbp-170h]
  __m128 v78; // [rsp+D0h] [rbp-168h] BYREF
  __int64 (__fastcall **v79)(); // [rsp+E0h] [rbp-158h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-150h]
  __int64 v81; // [rsp+F0h] [rbp-148h]
  __int64 v82; // [rsp+110h] [rbp-128h]
  __int64 v83; // [rsp+118h] [rbp-120h]
  __int64 v84; // [rsp+128h] [rbp-110h]
  __int64 v85; // [rsp+130h] [rbp-108h]
  __int64 v86; // [rsp+140h] [rbp-F8h]
  __int64 v87; // [rsp+148h] [rbp-F0h]
  __int64 v88; // [rsp+158h] [rbp-E0h]
  __int64 v89; // [rsp+160h] [rbp-D8h]
  __int64 v90; // [rsp+178h] [rbp-C0h]
  __int64 v91; // [rsp+180h] [rbp-B8h]
  __int64 v92; // [rsp+190h] [rbp-A8h]
  __m128i v93; // [rsp+198h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+1A8h] [rbp-90h]
  __int128 v95; // [rsp+1B0h] [rbp-88h]
  void *s; // [rsp+1C0h] [rbp-78h]
  __int64 v97; // [rsp+1C8h] [rbp-70h]
  void *v98; // [rsp+1D0h] [rbp-68h]
  __int64 v99; // [rsp+1D8h] [rbp-60h]
  int v100; // [rsp+1E0h] [rbp-58h]
  __int64 v101; // [rsp+1E8h] [rbp-50h]
  _QWORD v102[9]; // [rsp+1F0h] [rbp-48h] BYREF

  v56 = a2;
  v102[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1985) != 0xFF )
  {
    v4 = *(_DWORD **)(a1 + 32);
    if ( *v4 || v4[1] || v4[2] || v4[3] || v4[4] || v4[5] || v4[6] || v4[7] || v4[8] || v4[9] )
    {
      v7 = a3[1];
      nullsub_42(v7, "c:\\temp\\structural.txt");
      v78 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 8) + 16LL));
      sub_39E40(&v79, a4);
      s = v102;
      v92 = 0;
      v94 = 0;
      v97 = 1;
      v98 = nullptr;
      v99 = 0;
      v100 = 1065353216;
      v101 = 0;
      v102[0] = 0;
      v93 = 0;
      v95 = 0;
      sub_5B800(&v69, &v78, v7);
      v10 = v71;
      if ( v71 )
      {
        v52 = s1;
        v53 = *(_QWORD *)a1 + 48LL;
        if ( v70 )
          LODWORD(v52) = v69;
        sub_6DA80(v53, (unsigned int)"pre_structural(%a): %s\n", *a3, (_DWORD)v52, v8, v9, v55.m128i_i8[0]);
      }
      else
      {
        if ( v99 )
        {
          v11 = a3[8];
          v73 = 0;
          v74 = nullptr;
          v55.m128i_i64[0] = v11;
          v75 = &v73;
          v76 = &v73;
          v77 = 0;
          hexdsp = (void (__fastcall *)(__int64, __int64 *, __int64))get_hexdsp(&v69, &v78);
          hexdsp(79, &v60, v11);
          v13 = v60;
          v14 = (void (__fastcall *)(__int64, __int64 *, __int64))get_hexdsp(79, &v60);
          v15 = &v61;
          v16 = 78;
          v14(78, &v61, v11);
          v17 = v61;
          v57 = &v62;
          if ( v13 != v61 )
          {
            do
            {
              v62 = v17;
              v18 = (__int64 (__fastcall *)(__int64, __int64 *))get_hexdsp(v16, v15);
              v19 = (const char *)v18(83, v57);
              sub_3A170(&v72, v19, v20, v21, v22);
              v63 = v17;
              v23 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(&v72, v19);
              v15 = &v63;
              v16 = 80;
              v23(80, &v63);
              v17 = v63;
            }
            while ( v13 != v63 );
          }
          v24 = v98;
          v58 = &v64;
          if ( v98 )
          {
            do
            {
              v57 = v24 + 1;
              v25 = (void (__fastcall *)(__int64, __int64 *, __int64, _QWORD *))get_hexdsp(v16, v15);
              v25(84, v58, v55.m128i_i64[0], v24 + 1);
              v26 = v64;
              v27 = (void (__fastcall *)(__int64, __int64 *, __int64))get_hexdsp(84, v58);
              v15 = &v66;
              v16 = 79;
              v27(79, &v66, v55.m128i_i64[0]);
              if ( v66 == v26 )
              {
                sub_580F0(&v66, (char *)v24 + 12);
                while ( 1 )
                {
                  sub_3A170(&v72, (const char *)&v66, v28, v29, v30);
                  v10 = v31;
                  if ( v31 )
                    break;
                  v32 = v67;
                  v28 = 2;
                  if ( v67 )
                  {
                    v28 = v67 + 1;
                    v32 = v67 - 1;
                  }
                  v33 = v66;
                  if ( v68 < v28 )
                  {
                    v59 = v28;
                    v66 = qvector_reserve(&v66, v66, v28, 1);
                    v28 = v59;
                    v33 = v66;
                  }
                  v67 = v28;
                  *(_BYTE *)(v33 + v32) = 95;
                  *(_BYTE *)(v66 + v32 + 1) = 0;
                }
                v54 = (void (__fastcall *)(__int64, char *, __int64, __int64 *, __int64 *))get_hexdsp(&v72, &v66);
                v15 = (__int64 *)v65;
                v54(85, v65, v55.m128i_i64[0], v57, &v66);
                v16 = v66;
                if ( v66 )
                {
                  v67 = 0;
                  qfree(v66);
                }
              }
              v24 = (_QWORD *)*v24;
            }
            while ( v24 );
            if ( v10 )
            {
              v34 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(v16, v15);
              v34(551, a3);
            }
          }
          sub_38CE0(v74);
        }
        v35 = v92;
        v92 = 0;
        v36 = _mm_loadu_si128(&v93);
        v93 = 0;
        v37 = v56[12].m128i_i64[1];
        if ( v37 )
        {
          v56[13].m128i_i64[0] = 0;
          v55 = v36;
          qfree(v37);
          v36 = _mm_load_si128(&v55);
        }
        v38 = v56;
        v56[12].m128i_i64[1] = v35;
        v38[13] = v36;
      }
      if ( v71 && v69 )
      {
        v70 = 0;
        qfree(v69);
      }
      v39 = v98;
      if ( v98 )
      {
        do
        {
          v40 = v39;
          v39 = (_QWORD *)*v39;
          operator delete(v40, 0x18u);
        }
        while ( v39 );
      }
      memset(s, 0, 8 * v97);
      v99 = 0;
      v98 = nullptr;
      if ( s != v102 )
        operator delete(s, 8 * v97);
      if ( v94 )
      {
        *(_QWORD *)&v95 = 0;
        qfree(v94);
      }
      if ( v92 )
      {
        v93.m128i_i64[0] = 0;
        qfree(v92);
      }
      v79 = off_8B6D8;
      if ( v90 )
      {
        v91 = 0;
        qfree(v90);
      }
      if ( v88 )
      {
        v89 = 0;
        qfree(v88);
      }
      if ( v86 )
      {
        v87 = 0;
        qfree(v86);
      }
      v41 = v84;
      if ( v84 )
      {
        v42 = v85;
        if ( v85 )
        {
          v43 = 0;
          do
          {
            v44 = (__int64 *)(v41 + 24 * v43);
            v45 = *v44;
            if ( *v44 )
            {
              v44[1] = 0;
              qfree(v45);
              v41 = v84;
            }
            ++v43;
          }
          while ( v42 != v43 );
        }
        v85 = 0;
        qfree(v41);
      }
      v46 = v82;
      if ( v82 )
      {
        v47 = v83;
        if ( v83 )
        {
          v48 = 0;
          do
          {
            v49 = (__int64 *)(v46 + 24 * v48);
            v50 = *v49;
            if ( *v49 )
            {
              v49[1] = 0;
              qfree(v50);
              v46 = v82;
            }
            ++v48;
          }
          while ( v47 != v48 );
        }
        v83 = 0;
        qfree(v46);
      }
      v79 = (__int64 (__fastcall **)())&unk_8C6B0;
      if ( v80 )
      {
        v81 = 0;
        qfree(v80);
      }
    }
  }
  return 0;
}
