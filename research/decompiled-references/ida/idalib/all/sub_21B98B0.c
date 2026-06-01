__int64 __fastcall sub_21B98B0(
        __int64 *a1,
        const __m128i *a2,
        __int64 (__fastcall ***a3)(_QWORD),
        __int64 a4,
        __int64 a5,
        int *a6)
{
  const char *v11; // rax
  size_t v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 (__fastcall **v15)(_QWORD); // rax
  __int64 v16; // rax
  __m128i v17; // xmm4
  __int64 v18; // rbx
  __int64 v19; // rbp
  unsigned int v21; // edx
  __int64 (__fastcall **v22)(__int64 (__fastcall ***)(_QWORD), _QWORD); // rax
  __int64 v23; // rbx
  int v24; // ebp
  __int64 v25; // r12
  __int64 v26; // rax
  __m128i v27; // xmm0
  unsigned int v28; // edx
  __int64 (__fastcall **v29)(__int64 (__fastcall ***)(_QWORD), _QWORD); // rax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r12
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rax
  unsigned int v38; // r15d
  __int64 (__fastcall *v39)(_QWORD); // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ebx
  __m128i v44; // xmm2
  __int64 v45; // rbp
  _BYTE *v46; // r10
  char *v47; // rbx
  char v48; // r15
  char *v49; // rax
  size_t v50; // r12
  void *v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 (__fastcall **v55)(_QWORD); // rax
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // r14d
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned int *v62; // r10
  int v63; // eax
  unsigned __int64 v64; // rcx
  char *v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // esi
  __int64 v70; // rbp
  __int64 v71; // rbx
  __int64 v72; // [rsp-8h] [rbp-70h]
  __int64 v73; // [rsp-8h] [rbp-70h]
  void *src[2]; // [rsp+0h] [rbp-68h]
  void *srcb[2]; // [rsp+0h] [rbp-68h]
  void *srcc[2]; // [rsp+0h] [rbp-68h]
  __int64 srcd; // [rsp+0h] [rbp-68h]
  __int64 srce; // [rsp+0h] [rbp-68h]
  __int64 srcf; // [rsp+0h] [rbp-68h]
  const void *srcg; // [rsp+0h] [rbp-68h]
  void *srch[2]; // [rsp+0h] [rbp-68h]
  unsigned int *srca; // [rsp+0h] [rbp-68h]
  __int64 srci; // [rsp+0h] [rbp-68h]
  int srcj; // [rsp+0h] [rbp-68h]
  int v85; // [rsp+18h] [rbp-50h]
  __int64 v86; // [rsp+18h] [rbp-50h]
  __int64 v87; // [rsp+18h] [rbp-50h]
  int v88; // [rsp+18h] [rbp-50h]
  int v89; // [rsp+18h] [rbp-50h]
  _BYTE *v90; // [rsp+18h] [rbp-50h]
  int v91; // [rsp+18h] [rbp-50h]
  char *v92; // [rsp+18h] [rbp-50h]
  __int64 v93; // [rsp+18h] [rbp-50h]
  __int64 v94; // [rsp+20h] [rbp-48h]
  size_t v95; // [rsp+20h] [rbp-48h]
  __int64 v96; // [rsp+20h] [rbp-48h]
  unsigned int *v97; // [rsp+20h] [rbp-48h]
  __int64 v98; // [rsp+28h] [rbp-40h]

  v11 = (const char *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a6);
  v12 = 0;
  if ( v11 )
    v12 = strlen(v11);
  v13 = a2->m128i_i64[0];
  switch ( *(_BYTE *)(a2->m128i_i64[0] + 44) )
  {
    case 3:
      if ( a5 != v12 )
        goto LABEL_13;
      v93 = a2->m128i_i64[0];
      srcj = (*a6)++;
      v70 = a2->m128i_i64[1];
      v71 = operator new(0x58u);
      sub_21B58D0(v71, v93, v70, a4, a5, srcj, 0);
      *a1 = v71;
      return (__int64)a1;
    case 4:
      v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a6);
      v27 = _mm_loadu_si128(a2);
      v18 = v26 + a5;
      v85 = (*a6)++;
      *(__m128i *)src = v27;
      goto LABEL_6;
    case 5:
    case 0xC:
      v21 = *a6 + 2;
      v22 = (__int64 (__fastcall **)(__int64 (__fastcall ***)(_QWORD), _QWORD))*a3;
      *a6 = v21;
      if ( v21 > ((unsigned int (__fastcall *)(_QWORD))v22[1])(a3)
        || !((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)(*a6 - 1)) )
      {
        goto LABEL_13;
      }
      v86 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)(*a6 - 1));
      v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)(*a6 - 2)) + a5;
      *(__m128i *)srcb = _mm_loadu_si128(a2);
      v24 = *a6 - 2;
      v25 = operator new(0x58u);
      sub_21B5960(v25, (__int64)srcb[0], (__int64)srcb[1], a4, a5, v24, v23, v86, 0);
      *a1 = v25;
      return (__int64)a1;
    case 6:
      if ( a5 == v12 )
      {
        v28 = *a6 + 2;
        v29 = (__int64 (__fastcall **)(__int64 (__fastcall ***)(_QWORD), _QWORD))*a3;
        *a6 = v28;
        if ( v28 <= ((unsigned int (__fastcall *)(_QWORD))v29[1])(a3) )
          goto LABEL_17;
      }
      goto LABEL_13;
    case 7:
      if ( a5 != v12 )
        goto LABEL_13;
      v31 = a2->m128i_i64[1];
      v94 = a2->m128i_i64[0];
      v88 = (*a6)++;
      srcd = v31;
      v32 = operator new(0x58u);
      sub_21B58D0(v32, v94, srcd, a4, a5, v88, 0);
      return ((__int64 (__fastcall *)(__int64))sub_21B9B7F)(v32);
    case 8:
      v98 = a2->m128i_i64[0];
      v95 = v12;
      v89 = *a6;
      srce = a2->m128i_i64[1];
      v33 = operator new(0x58u);
      v34 = v98;
      sub_21B58D0(v33, v98, srce, a4, a5, v89, 0);
      v35 = v72;
      if ( a5 != v95 )
      {
        v34 = (unsigned int)*a6;
        v36 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), unsigned __int64))**a3)(a3, v34) + a5;
        v37 = *(unsigned int *)(v33 + 56);
        if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(v33 + 60) )
        {
          v34 = v33 + 64;
          sub_2237220(v33 + 48, v33 + 64, v37 + 1, 8);
          v37 = *(unsigned int *)(v33 + 56);
        }
        v35 = *(_QWORD *)(v33 + 48);
        *(_QWORD *)(v35 + 8 * v37) = v36;
        ++*(_DWORD *)(v33 + 56);
      }
      v38 = *a6 + 1;
      *a6 = v38;
      while ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD), unsigned __int64, __int64))(*a3)[1])(
                a3,
                v34,
                v35) > v38
           && ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a6) )
      {
        v39 = **a3;
        ++*a6;
        v40 = v39(a3);
        v41 = *(unsigned int *)(v33 + 56);
        v34 = *(unsigned int *)(v33 + 60);
        if ( v41 + 1 > v34 )
        {
          v34 = v33 + 64;
          srcf = v40;
          sub_2237220(v33 + 48, v33 + 64, v41 + 1, 8);
          v41 = *(unsigned int *)(v33 + 56);
          v40 = srcf;
        }
        v35 = *(_QWORD *)(v33 + 48);
        *(_QWORD *)(v35 + 8 * v41) = v40;
        v38 = *a6;
        ++*(_DWORD *)(v33 + 56);
      }
      *a1 = v33;
      return (__int64)a1;
    case 9:
      v42 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)*a6);
      v43 = *a6;
      v44 = _mm_loadu_si128(a2);
      v90 = (_BYTE *)(v42 + a5);
      ++*a6;
      v45 = operator new(0x58u);
      sub_21B58D0(v45, v44.m128i_i64[0], v44.m128i_i64[1], a4, a5, v43, 0);
      v46 = v90;
      v47 = v90;
      while ( 2 )
      {
        v48 = *v47;
        if ( *v47 )
        {
          v49 = v47 + 1;
          if ( v48 != 44 )
            goto LABEL_32;
        }
        if ( v47 != v46 )
        {
          srcg = v46;
          v50 = v47 - v46;
          v51 = (void *)operator new[](v47 - v46 + 1);
          memcpy(v51, srcg, v50);
          v52 = *(unsigned int *)(v45 + 56);
          v53 = *(unsigned int *)(v45 + 60);
          *((_BYTE *)v51 + v50) = 0;
          if ( v52 + 1 > v53 )
          {
            sub_2237220(v45 + 48, v45 + 64, v52 + 1, 8);
            v52 = *(unsigned int *)(v45 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(v45 + 48) + 8 * v52) = v51;
          ++*(_DWORD *)(v45 + 56);
        }
        if ( v48 )
        {
          v49 = v47 + 1;
          v46 = v47 + 1;
LABEL_32:
          v47 = v49;
          continue;
        }
        break;
      }
      *(_BYTE *)(v45 + 44) |= 4u;
      *a1 = v45;
      return (__int64)a1;
    case 0xA:
      if ( a5 != v12 )
        goto LABEL_13;
      v54 = *a6 + *(unsigned __int8 *)(v13 + 45) + 1;
      v55 = *a3;
      *a6 = v54;
      if ( v54 > (unsigned int)v55[1](a3) )
        goto LABEL_13;
      v96 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(
              a3,
              *a6 - (unsigned int)*(unsigned __int8 *)(a2->m128i_i64[0] + 45));
      *(__m128i *)srch = _mm_loadu_si128(a2);
      v91 = *a6 - 1 - *(unsigned __int8 *)(a2->m128i_i64[0] + 45);
      v56 = operator new(0x58u);
      v57 = a5;
      v58 = 1;
      v59 = (__int64)srch[0];
      srch[0] = (void *)v56;
      sub_21B5910(v56, v59, (__int64)srch[1], a4, v57, v91, v96, 0);
      v61 = v73;
      v62 = (unsigned int *)srch[0];
      v63 = *(unsigned __int8 *)(a2->m128i_i64[0] + 45);
      v64 = (unsigned __int64)srch[0] + 64;
      v65 = (char *)srch[0] + 48;
      v92 = (char *)srch[0] + 64;
      if ( v63 == 1 )
        goto LABEL_48;
      do
      {
        while ( 1 )
        {
          srca = v62;
          v67 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, __int64, unsigned __int64, __int64))**a3)(
                  a3,
                  (unsigned int)(v58 + *a6 - v63),
                  v60,
                  v64,
                  v61);
          v62 = srca;
          v64 = srca[14];
          if ( v64 + 1 > srca[15] )
            break;
          v60 = *((_QWORD *)srca + 6);
          ++v58;
          *(_QWORD *)(v60 + 8 * v64) = v67;
          v66 = a2->m128i_i64[0];
          ++srca[14];
          v63 = *(unsigned __int8 *)(v66 + 45);
          if ( v58 == v63 )
            goto LABEL_48;
        }
        srci = v67;
        ++v58;
        v97 = v62;
        sub_2237220(v65, v92, v64 + 1, 8);
        v62 = v97;
        v64 = v97[14];
        v60 = *((_QWORD *)v97 + 6);
        *(_QWORD *)(v60 + 8 * v64) = srci;
        v68 = a2->m128i_i64[0];
        ++v97[14];
        v63 = *(unsigned __int8 *)(v68 + 45);
      }
      while ( v63 != v58 );
LABEL_48:
      *a1 = (__int64)v62;
      return (__int64)a1;
    case 0xB:
      v14 = (unsigned int)*a6;
      v15 = *a3;
      if ( a5 != v12 )
      {
        v16 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64))*v15)(a3, v14);
        v17 = _mm_loadu_si128(a2);
        v18 = v16 + a5;
        v85 = (*a6)++;
        *(__m128i *)src = v17;
LABEL_6:
        v19 = operator new(0x58u);
        sub_21B5910(v19, (__int64)src[0], (__int64)src[1], a4, a5, v85, v18, 0);
        goto LABEL_7;
      }
      v69 = v14 + 2;
      *a6 = v69;
      if ( v69 <= (unsigned int)v15[1](a3) )
      {
LABEL_17:
        if ( ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)(*a6 - 1)) )
        {
          v87 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))**a3)(a3, (unsigned int)(*a6 - 1));
          *(__m128i *)srcc = _mm_loadu_si128(a2);
          v30 = *a6 - 2;
          v19 = operator new(0x58u);
          sub_21B5910(v19, (__int64)srcc[0], (__int64)srcc[1], a4, a5, v30, v87, 0);
LABEL_7:
          *a1 = v19;
          return (__int64)a1;
        }
      }
LABEL_13:
      *a1 = 0;
      return (__int64)a1;
  }
}
