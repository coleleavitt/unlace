__int64 __fastcall sub_7BAD30(__int64 a1, __int64 a2, void *a3, unsigned int **a4)
{
  char **v4; // rbx
  __int64 v5; // rdx
  char **exception; // r13
  __int64 v7; // rdx
  unsigned int *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r14
  _QWORD *v17; // rbp
  unsigned int v18; // edx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  unsigned int *v25; // rcx
  _QWORD *v26; // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r15d
  unsigned int v33; // ebx
  size_t v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int *v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned int v42; // r15d
  size_t v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdi
  _DWORD *v46; // rsi
  __int64 v47; // r8
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  int v55; // r8d
  int v56; // r9d
  unsigned int v57; // eax
  int v58; // r9d
  int v59; // eax
  int v60; // r9d
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rbp
  __int64 v66; // rbx
  int v67; // [rsp+0h] [rbp-D8h]
  int v68; // [rsp+0h] [rbp-D8h]
  int v69; // [rsp+8h] [rbp-D0h]
  int v70; // [rsp+8h] [rbp-D0h]
  int v71; // [rsp+8h] [rbp-D0h]
  void *v73; // [rsp+10h] [rbp-C8h]
  void *v74; // [rsp+10h] [rbp-C8h]
  int v75; // [rsp+18h] [rbp-C0h]
  int v76[2]; // [rsp+18h] [rbp-C0h]
  int v77; // [rsp+20h] [rbp-B8h]
  int v78; // [rsp+20h] [rbp-B8h]
  unsigned int v79; // [rsp+24h] [rbp-B4h]
  unsigned int v80; // [rsp+24h] [rbp-B4h]
  unsigned int *v81; // [rsp+28h] [rbp-B0h]
  int v82; // [rsp+28h] [rbp-B0h]
  _QWORD *v83; // [rsp+30h] [rbp-A8h]
  int v84; // [rsp+30h] [rbp-A8h]
  _QWORD *v85; // [rsp+38h] [rbp-A0h]
  int v86; // [rsp+38h] [rbp-A0h]
  int v87; // [rsp+40h] [rbp-98h]
  int v88; // [rsp+40h] [rbp-98h]
  int v89; // [rsp+48h] [rbp-90h]
  int v90; // [rsp+48h] [rbp-90h]
  unsigned int v91; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v92; // [rsp+50h] [rbp-88h] BYREF
  __int64 v93; // [rsp+58h] [rbp-80h] BYREF
  int v94[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v95; // [rsp+68h] [rbp-70h]
  int v96[2]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v97; // [rsp+78h] [rbp-60h]
  __int64 v98[11]; // [rsp+80h] [rbp-58h] BYREF

  v9 = *a4;
  v10 = (unsigned __int64)a4[1];
  v69 = a1;
  if ( *a4 && *(v9 - 1) > 1 )
  {
    v11 = *v9;
    v12 = v9[1];
    v95 = (__int64)a4[1];
    v97 = v10;
    v79 = v11;
    v75 = v12;
    v14 = (_QWORD *)(sub_186B270(0x18u) + 8);
    v15 = *a4;
    v16 = 0;
    *(v14 - 1) = 2;
    v17 = v14;
    while ( 1 )
    {
      *v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v79), _mm_cvtsi32_si128(v75)).m128i_u64[0];
      ++*((_DWORD *)v17 - 1);
      if ( !v15 )
        break;
      ++v16;
      v18 = *((_DWORD *)v15 - 1) >> 1;
      if ( (unsigned int)v16 >= v18 )
      {
LABEL_8:
        v22 = v18;
        if ( v18 >= *((_DWORD *)v15 - 1) )
        {
          v15 = nullptr;
        }
        else
        {
          v23 = (unsigned int *)&v15[v18];
          v80 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(*v23));
          v75 = _mm_cvtsi128_si32(_mm_cvtsi32_si128(v23[1]));
          v24 = (_QWORD *)sub_186B270(0x18u);
          *v24 = 2;
          v25 = *a4;
          v26 = v24 + 1;
          v27 = _mm_cvtsi32_si128(v75);
          v28 = _mm_cvtsi32_si128(v80);
          v15 = v26;
          while ( 1 )
          {
            ++v22;
            *v26 = _mm_unpacklo_epi32(v28, v27).m128i_u64[0];
            ++*((_DWORD *)v15 - 1);
            if ( !v25 || v22 >= *(v25 - 1) )
              break;
            v29 = &v25[2 * v22];
            v28 = _mm_cvtsi32_si128(*v29);
            v27 = _mm_cvtsi32_si128(v29[1]);
            v30 = *((unsigned int *)v15 - 1);
            if ( (_DWORD)v30 == *((_DWORD *)v15 - 2) )
            {
              v42 = (unsigned int)(3 * v30 + 1) >> 1;
              v43 = 8 * v42 + 8;
              if ( 8 * (int)v30 + 8 >= (unsigned int)v43 || (unsigned int)v30 >= v42 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_113C8C(v98, "Overflow encountered when expanding vector", v7);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v98);
                sub_233E40((__int64)v98);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v44 = sub_186B270(v43);
              v45 = *((unsigned int *)v15 - 1);
              v46 = (_DWORD *)v44;
              v47 = v44 + 8;
              v48 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v27));
              v49 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v28));
              *(_DWORD *)(v44 + 4) = v45;
              v50 = 0;
              v51 = 8 * v45;
              if ( v51 )
              {
                do
                {
                  *(_QWORD *)&v46[v50 / 4 + 2] = v15[v50 / 8];
                  v50 += 8LL;
                }
                while ( v51 != v50 );
              }
              v85 = (_QWORD *)v47;
              LODWORD(v83) = (_DWORD)v46;
              v75 = (_DWORD)v15 - 8;
              LODWORD(v81) = _mm_cvtsi128_si32(v49);
              sub_186B220(v15 - 1);
              v27 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v48));
              v28 = _mm_cvtsi32_si128((unsigned int)v81);
              v52 = (unsigned int)v46[1];
              v25 = *a4;
              *v46 = v42;
              v15 = v85;
              v26 = &v85[v52];
            }
            else
            {
              v26 = &v15[v30];
            }
          }
        }
        break;
      }
      while ( 1 )
      {
        v19 = &v15[v16];
        v20 = *v19;
        v79 = *(_DWORD *)v19;
        v75 = *((_DWORD *)v19 + 1);
        v21 = *((unsigned int *)v17 - 1);
        if ( (_DWORD)v21 == *((_DWORD *)v17 - 2) )
          break;
        v17[v21] = v20;
        ++v16;
        ++*((_DWORD *)v17 - 1);
        v18 = *((_DWORD *)v15 - 1) >> 1;
        if ( (unsigned int)v16 >= v18 )
          goto LABEL_8;
      }
      v33 = (unsigned int)(3 * v21 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * (int)v21 + 8 >= (unsigned int)v34 || (unsigned int)v21 >= v33 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v98, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v98);
        sub_233E40((__int64)v98);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = sub_186B270(v34);
      v36 = *((unsigned int *)v17 - 1);
      v37 = (unsigned int *)v35;
      v38 = v35 + 8;
      *(_DWORD *)(v35 + 4) = v36;
      v39 = 0;
      v40 = 8 * v36;
      if ( v40 )
      {
        do
        {
          *(_QWORD *)&v37[v39 / 4 + 2] = v17[v39 / 8];
          v39 += 8LL;
        }
        while ( v40 != v39 );
      }
      v83 = (_QWORD *)v38;
      v81 = v37;
      sub_186B220(v17 - 1);
      v41 = v81[1];
      *v81 = v33;
      v17 = v83;
      v15 = *a4;
      v14 = &v83[v41];
    }
    v31 = 2 * sub_11CA540(a2, 0, 1);
    v53 = sub_186B270(0x10u);
    *(_DWORD *)(v53 + 8) = v31 ^ 1;
    v54 = v53 + 8;
    v94[0] = (int)v17;
    *(_QWORD *)v53 = 0x100000002LL;
    v57 = sub_7BAD30(
            v69,
            a2,
            (int)a3,
            (int)v94,
            v55,
            v56,
            v67,
            v69,
            a3,
            v75,
            v77,
            (int)v81,
            (int)v83,
            (int)v85,
            v87,
            v89,
            v92,
            v93,
            v94[0],
            v95);
    if ( v57 != -2 )
    {
      v93 = v54;
      v91 = v57;
      sub_7B4F60(&v93, &v91);
      v54 = v93;
    }
    *(_QWORD *)v96 = v15;
    v59 = sub_7BAD30(
            v70,
            a2,
            (int)v73,
            (int)v96,
            (int)v96,
            v58,
            v68,
            v70,
            v73,
            (int)v96,
            v78,
            v82,
            v84,
            v86,
            v88,
            v90,
            v92,
            v93,
            v94[0],
            v95);
    v61 = *(_QWORD *)v76;
    if ( v59 != -2 )
    {
      v93 = v54;
      LODWORD(v92) = v59;
      sub_7B4F60(&v93, (unsigned int *)&v92);
      v61 = *(_QWORD *)v76;
      v54 = v93;
    }
    v62 = sub_7BAA40(v71, a2, v74, (__int64)v94, v61, v60);
    v65 = *(_QWORD *)v94;
    v66 = *(_QWORD *)v96;
    if ( v62 != -2 )
    {
      v93 = v54;
      HIDWORD(v92) = v62;
      sub_7B4F60(&v93, (unsigned int *)&v92 + 1);
      v54 = v93;
    }
    v98[1] = 0;
    v98[0] = 0xFFFFFFFF00000001LL;
    if ( v54 )
    {
      sub_11C4C20(a2, *(unsigned int *)(v54 - 4), v54, v98, v63, v64);
      sub_186B220((void *)(v54 - 8));
    }
    else
    {
      sub_11C4C20(a2, 0, 0, v98, v63, v64);
    }
    if ( v66 )
      sub_186B220((void *)(v66 - 8));
    if ( v65 )
      sub_186B220((void *)(v65 - 8));
    return v31;
  }
  v31 = -2;
  if ( *v9 < v10 )
    return v31;
  return sub_7B4970(a1, a2, (__int64)a3, v9[1]);
}

