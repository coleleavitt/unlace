void __fastcall sub_F3A2D0(
        __int64 *a1,
        int *a2,
        void *a3,
        __int64 (__fastcall *a4)(int *, __int64),
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v10; // r15d
  unsigned int v12; // ebp
  __int64 i; // rax
  __int64 v14; // rdx
  _BYTE *v15; // r12
  __int64 v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // eax
  _QWORD *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdi
  void (__fastcall *v28)(__int64, __int64, __int64); // rax
  __int64 v29; // rax
  _BYTE *v30; // rax
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rdi
  _WORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i *v38; // r15
  __int64 v39; // rax
  __int64 (__fastcall *v40)(); // rax
  __m128i *v41; // rax
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  void (__fastcall *v44)(__m128i *, __m128i *, __int64); // rax
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __m128i *v48; // rdi
  bool v49; // zf
  __int64 v50; // rax
  __m128i *v51; // r15
  __m128i si128; // xmm4
  __int64 (__fastcall *v57)(); // [rsp+38h] [rbp-1E0h] BYREF
  __m128 v58; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-1C8h]
  __int64 v60; // [rsp+58h] [rbp-1C0h]
  __m128i v61; // [rsp+60h] [rbp-1B8h] BYREF
  __m128i v62; // [rsp+70h] [rbp-1A8h]
  __int64 v63; // [rsp+80h] [rbp-198h]
  __int64 (__fastcall *v64)(int *, __int64); // [rsp+88h] [rbp-190h]
  int v65[14]; // [rsp+90h] [rbp-188h] BYREF
  void *v66; // [rsp+C8h] [rbp-150h]
  _QWORD *v67; // [rsp+D0h] [rbp-148h]
  __int64 v68; // [rsp+E0h] [rbp-138h]
  __int64 v69; // [rsp+E8h] [rbp-130h]
  __int64 (__fastcall *v70)(int *, __int64); // [rsp+F0h] [rbp-128h]
  int v71[14]; // [rsp+F8h] [rbp-120h] BYREF
  __int64 v72; // [rsp+130h] [rbp-E8h]
  _QWORD *v73; // [rsp+138h] [rbp-E0h]
  void *v74; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v75; // [rsp+148h] [rbp-D0h]
  __m128i v76; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+168h] [rbp-B0h]
  __int64 v79; // [rsp+170h] [rbp-A8h]
  int v80[14]; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+1B0h] [rbp-68h]
  __int64 v82; // [rsp+1B8h] [rbp-60h]
  void *v83; // [rsp+1C0h] [rbp-58h]
  __int64 v84; // [rsp+1C8h] [rbp-50h]
  __m128i v85[4]; // [rsp+1D0h] [rbp-48h] BYREF

  v59 = a7;
  v60 = a8;
  if ( a5 )
  {
    v10 = 0;
    v57 = sub_F3B290;
    v58 = _mm_loadh_ps((const double *)&v57);
LABEL_3:
    v12 = v10;
    do
    {
      for ( i = a4(a2, v12); ; i = *(_QWORD *)(i + 16) )
      {
        v14 = 1LL << *(_DWORD *)i;
        if ( (v14 & 0x30FF) != 0 )
          break;
        if ( (v14 & 0x800) == 0 )
          goto LABEL_9;
      }
      if ( v10 + 4 == v12 )
        break;
      ++v12;
    }
    while ( v12 != a5 );
    while ( 1 )
    {
LABEL_9:
      LODWORD(v63) = v10;
      if ( v10 + 1 >= v12 )
        v12 = v10 + 1;
      v64 = a4;
      HIDWORD(v63) = v12;
      sub_A53C40((__int64)v65, a2);
      v67 = a1;
      v66 = a3;
      if ( v12 - v10 <= 1 )
      {
        v15 = (_BYTE *)v59;
        v16 = v60;
      }
      else
      {
        v15 = a9;
        v16 = a10;
      }
      v17 = v63;
      v18 = HIDWORD(v63);
      if ( *((_BYTE *)a1 + 1056) )
      {
        *((_BYTE *)a1 + 1056) = 0;
        if ( v17 < v18 )
        {
          do
          {
            v19 = v67;
            v20 = v17++;
            v21 = v64(v65, v20);
            sub_F37C60(v19, v21, v66);
            if ( v17 == HIDWORD(v63) )
              break;
            v33 = v67[137];
            v34 = *(_WORD **)(v33 + 32);
            if ( *(_QWORD *)(v33 + 24) - (_QWORD)v34 > 1u )
            {
              *v34 = 8236;
              *(_QWORD *)(v33 + 32) += 2LL;
            }
            else
            {
              sub_227BF10(v33, ", ", 2);
            }
          }
          while ( v17 < HIDWORD(v63) );
        }
        v22 = *((unsigned int *)a1 + 6);
        if ( (_DWORD)v22 )
        {
          v23 = a1[2];
          LOBYTE(v77) = 1;
          v24 = v23 + 32 * v22 - 32;
          if ( !*(_QWORD *)(v24 + 16) )
            goto LABEL_69;
          while ( 1 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(v24 + 24))(v24, &v77);
            v26 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
            *((_DWORD *)a1 + 6) = v26;
            v27 = a1[2] + 32 * v26;
            v28 = *(void (__fastcall **)(__int64, __int64, __int64))(v27 + 16);
            if ( v28 )
              v28(v27, v27, 3);
            v29 = *((unsigned int *)a1 + 6);
            if ( !(_DWORD)v29 )
              break;
            v25 = a1[2];
            LOBYTE(v77) = 1;
            v24 = v25 + 32 * v29 - 32;
            if ( !*(_QWORD *)(v24 + 16) )
              goto LABEL_69;
          }
        }
        v30 = (_BYTE *)a1[133];
        a1[134] = 0;
        *v30 = 0;
        v31 = *a1;
        v32 = *(_BYTE **)(*a1 + 32);
        if ( *(_BYTE **)(*a1 + 24) == v32 )
        {
          sub_227BF10(v31, "\n", 1);
        }
        else
        {
          *v32 = 10;
          ++*(_QWORD *)(v31 + 32);
        }
        *((_BYTE *)a1 + 1056) = 1;
LABEL_26:
        if ( v65[0] <= 1u )
          goto LABEL_27;
        goto LABEL_51;
      }
      v68 = (__int64)a1;
      v70 = v64;
      v69 = v63;
      sub_A53C40((__int64)v71, v65);
      v72 = (__int64)v66;
      v73 = v67;
      v74 = &v76;
      if ( v15 )
      {
        sub_F24710(&v74, v15, (__int64)&v15[v16]);
        if ( *((_BYTE *)a1 + 1057) )
          goto LABEL_58;
      }
      else
      {
        v49 = *((_BYTE *)a1 + 1057) == 0;
        v76.m128i_i8[0] = 0;
        v75 = 0;
        if ( !v49 )
        {
LABEL_58:
          v77 = v68;
          v78 = v69;
          v79 = (__int64)v70;
          sub_A53C40((__int64)v80, v71);
          v81 = v72;
          v82 = (__int64)v73;
          v83 = v85;
          if ( v74 == &v76 )
          {
            v85[0] = _mm_load_si128(&v76);
          }
          else
          {
            v83 = v74;
            v85[0].m128i_i64[0] = v76.m128i_i64[0];
          }
          v50 = v75;
          v75 = 0;
          v76.m128i_i8[0] = 0;
          v84 = v50;
          v74 = &v76;
          v62.m128i_i64[0] = 0;
          v51 = (__m128i *)operator new(0x80u);
          v51->m128i_i64[0] = v77;
          v51->m128i_i64[1] = v78;
          v51[1].m128i_i64[0] = v79;
          sub_A53C40((__int64)&v51[1].m128i_i64[1], v80);
          v51[5].m128i_i64[0] = v81;
          v51[5].m128i_i64[1] = v82;
          v51[6].m128i_i64[0] = (__int64)v51[7].m128i_i64;
          if ( v83 == v85 )
          {
            v51[7] = _mm_load_si128(v85);
          }
          else
          {
            v51[6].m128i_i64[0] = (__int64)v83;
            v51[7].m128i_i64[0] = v85[0].m128i_i64[0];
          }
          v61.m128i_i64[0] = (__int64)v51;
          si128 = _mm_load_si128((const __m128i *)&v58);
          v85[0].m128i_i8[0] = 0;
          v51[6].m128i_i64[1] = v84;
          v83 = v85;
          v84 = 0;
          v62 = si128;
          sub_ACD330((__int64)(a1 + 2), &v61);
          if ( v62.m128i_i64[0] )
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v62.m128i_i64[0])(&v61, &v61, 3);
          goto LABEL_43;
        }
      }
      v35 = *((unsigned int *)a1 + 6);
      v36 = a1[2];
      v61.m128i_i8[0] = 0;
      v37 = v36 + 32 * v35 - 32;
      if ( !*(_QWORD *)(v37 + 16) )
LABEL_69:
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, __m128i *))(v37 + 24))(v37, &v61);
      v38 = (__m128i *)(a1[2] + 32LL * *((unsigned int *)a1 + 6) - 32);
      v77 = v68;
      v78 = v69;
      v79 = (__int64)v70;
      sub_A53C40((__int64)v80, v71);
      v81 = v72;
      v82 = (__int64)v73;
      v83 = v85;
      if ( v74 == &v76 )
      {
        v85[0] = _mm_load_si128(&v76);
      }
      else
      {
        v83 = v74;
        v85[0].m128i_i64[0] = v76.m128i_i64[0];
      }
      v39 = v75;
      v75 = 0;
      v76.m128i_i8[0] = 0;
      v84 = v39;
      v74 = &v76;
      v62.m128i_i64[0] = 0;
      v40 = (__int64 (__fastcall *)())operator new(0x80u);
      v57 = v40;
      *(_QWORD *)v40 = v77;
      *((_QWORD *)v40 + 1) = v78;
      *((_QWORD *)v40 + 2) = v79;
      sub_A53C40((__int64)v40 + 24, v80);
      v41 = (__m128i *)v57;
      *((_QWORD *)v57 + 10) = v81;
      v41[5].m128i_i64[1] = v82;
      v41[6].m128i_i64[0] = (__int64)v41[7].m128i_i64;
      if ( v83 == v85 )
      {
        v41[7] = _mm_load_si128(v85);
      }
      else
      {
        v41[6].m128i_i64[0] = (__int64)v83;
        v41[7].m128i_i64[0] = v85[0].m128i_i64[0];
      }
      v42 = _mm_load_si128((const __m128i *)&v58);
      v61.m128i_i64[0] = (__int64)v41;
      v85[0].m128i_i8[0] = 0;
      v43 = _mm_load_si128(&v61);
      v41[6].m128i_i64[1] = v84;
      v62 = v42;
      v83 = v85;
      v84 = 0;
      v61 = _mm_loadu_si128(v38);
      v44 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v38[1].m128i_i64[0];
      v45 = v38[1].m128i_i64[1];
      *v38 = v43;
      v46 = v62.m128i_i64[0];
      v62.m128i_i64[0] = (__int64)v44;
      v38[1].m128i_i64[0] = v46;
      v47 = v62.m128i_i64[1];
      v62.m128i_i64[1] = v45;
      v38[1].m128i_i64[1] = v47;
      if ( v44 )
        v44(&v61, &v61, 3);
LABEL_43:
      if ( v83 != v85 )
        operator delete(v83);
      if ( v80[0] > 1u )
        sub_A4F8E0(v80);
      v48 = (__m128i *)v74;
      *((_BYTE *)a1 + 1057) = 0;
      if ( v48 != &v76 )
        operator delete(v48);
      if ( v71[0] <= 1u )
        goto LABEL_26;
      sub_A4F8E0(v71);
      if ( v65[0] <= 1u )
      {
LABEL_27:
        if ( a5 <= v12 )
          return;
        goto LABEL_28;
      }
LABEL_51:
      sub_A4F8E0(v65);
      if ( a5 <= v12 )
        return;
LABEL_28:
      v10 = v12;
      if ( a5 > v12 )
        goto LABEL_3;
    }
  }
}
