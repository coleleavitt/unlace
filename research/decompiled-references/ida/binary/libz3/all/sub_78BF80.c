int *__fastcall sub_78BF80(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v8; // rdi
  int v10; // r15d
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int *result; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // esi
  char *v26; // rcx
  unsigned int v27; // edx
  char *v28; // r11
  __int64 v29; // rdx
  char *v30; // rbx
  char *i; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  char *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  char *v37; // rdi
  __int64 v38; // rdx
  char *v39; // r11
  char *j; // rax
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(__int64, unsigned __int8); // rax
  unsigned int v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // ebp
  int v47; // r11d
  bool v48; // zf
  _DWORD *v49; // rax
  unsigned int v50; // ebx
  unsigned int v51; // r13d
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // ebp
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rdi
  __int64 v75; // rax
  unsigned int **v76; // rax
  unsigned int **v77; // rbp
  unsigned int *v78; // rax
  __int64 v79; // rdx
  unsigned int *v80; // r13
  unsigned int v81; // eax
  unsigned __int32 v82; // r8d
  unsigned int v83; // r9d
  unsigned int v84; // edx
  __int32 *v85; // rax
  __int32 v86; // r9d
  unsigned __int32 v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  char **v92; // rbp
  char **exception; // rbp
  __m128i v94; // [rsp+0h] [rbp-A8h] BYREF
  int *v95; // [rsp+10h] [rbp-98h]
  unsigned int v96; // [rsp+1Ch] [rbp-8Ch]
  int v97[8]; // [rsp+20h] [rbp-88h] BYREF
  int v98[2]; // [rsp+40h] [rbp-68h] BYREF
  __int32 v99; // [rsp+48h] [rbp-60h]
  char v100[88]; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_1606360(v98, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
    sub_669CA0(v97, "unexpected number of arguments to ", (__int64)v98);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v97);
    sub_233E40((__int64)v97);
    sub_18572D0(v100);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v8 = *(_DWORD **)(a1 + 88);
  v10 = a4;
  if ( v8 )
  {
    v11 = *(v8 - 1);
    v12 = v8[v11 - 1];
    v13 = (unsigned int)(v11 - 2);
    v14 = _mm_cvtsi32_si128(v8[v13]);
    *(v8 - 1) = v13;
    v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v14);
  }
  else
  {
    v12 = MEMORY[0x3FFFFFFFC];
    v14 = _mm_cvtsi32_si128(MEMORY[0x3FFFFFFF8]);
    v15 = _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)0x3FFFFFFF8LL), 225);
  }
  if ( a3 )
  {
    if ( !*(_WORD *)(a2 + 4) )
    {
      v16 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v16 )
      {
        if ( !*v16 )
        {
          LOBYTE(a4) = v16[1] == 7;
          a4 = v10 ^ (unsigned int)a4;
        }
      }
    }
    if ( (_BYTE)a4 )
    {
      *(_QWORD *)v98 = v15.m128i_i64[0];
      v94.m128i_i64[0] = v15.m128i_i64[0];
      sub_7872D0(a1, 2u, (__int64)v98, a4, a5, a6);
      *(_QWORD *)v98 = _mm_xor_si128(_mm_loadl_epi64(&v94), _mm_loadl_epi64((const __m128i *)&qword_18B6000)).m128i_u64[0];
      return (int *)sub_7872D0(a1, 2u, (__int64)v98, v21, v22, v23);
    }
    else
    {
      v98[0] = v12;
      v98[1] = _mm_cvtsi128_si32(v14) ^ 1;
      sub_7872D0(a1, 2u, (__int64)v98, a4, a5, a6);
      v98[0] = v12 ^ 1;
      v98[1] = _mm_cvtsi128_si32(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v14)));
      return (int *)sub_7872D0(a1, 2u, (__int64)v98, v17, v18, v19);
    }
  }
  v24 = *(unsigned int *)(a1 + 104);
  v25 = *(_DWORD *)(a2 + 12);
  v26 = *(char **)(a1 + 96);
  v27 = v24 - 1;
  v24 *= 16;
  v28 = &v26[v24];
  v29 = 16LL * (v25 & v27);
  v30 = &v26[v29];
  if ( v29 != v24 )
  {
    for ( i = &v26[v29]; v28 != i; i += 16 )
    {
      v32 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v32 + 12) == v25 && a2 == v32 )
          goto LABEL_39;
      }
      else if ( !v32 )
      {
        goto LABEL_19;
      }
    }
  }
  if ( v26 == v30 )
    goto LABEL_19;
  v67 = *(_QWORD *)v26;
  if ( *(_QWORD *)v26 <= 1u )
    goto LABEL_48;
LABEL_44:
  if ( *(_DWORD *)(v67 + 12) != v25 || a2 != v67 )
  {
    do
    {
      v26 += 16;
      if ( v30 == v26 )
        break;
      v67 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 > 1u )
        goto LABEL_44;
LABEL_48:
      ;
    }
    while ( v67 );
LABEL_19:
    v33 = *(_QWORD *)(a1 + 216);
    if ( v33 )
    {
      v34 = *(char **)v33;
      v35 = *(unsigned int *)(v33 + 8);
      v36 = v35 - 1;
      v35 *= 16;
      v37 = &v34[v35];
      v38 = 16LL * (v25 & v36);
      v39 = &v34[v38];
      if ( v38 != v35 )
      {
        for ( j = &v34[v38]; v37 != j; j += 16 )
        {
          v41 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v41 + 12) == v25 && a2 == v41 )
            {
LABEL_55:
              v45 = *((_DWORD *)j + 2);
              goto LABEL_30;
            }
          }
          else if ( !v41 )
          {
            goto LABEL_27;
          }
        }
      }
      for ( ; v39 != v34; v34 += 16 )
      {
        v72 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 > 1u )
        {
          if ( *(_DWORD *)(v72 + 12) == v25 && a2 == v72 )
          {
            j = v34;
            goto LABEL_55;
          }
        }
        else if ( !v72 )
        {
          break;
        }
      }
    }
LABEL_27:
    v42 = *(_QWORD *)(a1 + 192);
    v94.m128i_i64[0] = v15.m128i_i64[0];
    v43 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v42 + 24LL);
    if ( v43 == sub_788600 )
      v44 = sub_11CA540(v42, 0, 1);
    else
      v44 = ((__int64 (__fastcall *)(__int64, _QWORD, double, double))v43)(
              v42,
              0,
              *(double *)v15.m128i_i64,
              *(double *)v14.m128i_i64);
    v15 = _mm_loadl_epi64(&v94);
    v45 = v44;
    if ( *(_BYTE *)(a1 + 273) )
    {
      v94.m128i_i64[0] = v15.m128i_i64[0];
      v73 = sub_789F10(a1);
      v15 = _mm_loadl_epi64(&v94);
      v74 = v73;
      v75 = v73[3];
      if ( v75 )
      {
        if ( *(_BYTE *)(v75 + 352) )
        {
          sub_7A4170(v74);
          v76 = (unsigned int **)sub_789F10(a1);
          v15 = _mm_loadl_epi64(&v94);
          v77 = v76;
          v78 = v76[297];
          if ( !v78 || (v79 = *(v78 - 1), (_DWORD)v79 == *(v78 - 2)) )
          {
            v94.m128i_i64[0] = v15.m128i_i64[0];
            sub_2FD3F0(v77 + 297);
            v78 = v77[297];
            v15 = _mm_loadl_epi64(&v94);
            v79 = *(v78 - 1);
          }
          v80 = v77[291];
          v78[v79] = v45;
          ++*(v78 - 1);
          if ( v80 )
          {
            v81 = *(v80 - 1);
            v96 = v81;
            if ( v45 >= v81 )
            {
              v82 = v45 + 1;
              if ( v81 < v45 + 1 )
                goto LABEL_77;
              *(v80 - 1) = v82;
            }
          }
          else if ( v45 != -1 )
          {
            v94.m128i_i32[2] = v45 + 1;
            v94.m128i_i64[0] = v15.m128i_i64[0];
            v91 = (_QWORD *)sub_186B270(0x18u);
            v15 = _mm_loadl_epi64(&v94);
            v82 = v94.m128i_u32[2];
            v96 = 0;
            *v91 = 2;
            v80 = (unsigned int *)(v91 + 1);
            v77[291] = (unsigned int *)(v91 + 1);
LABEL_77:
            while ( 1 )
            {
              v87 = *(v80 - 2);
              if ( v87 >= v82 )
                break;
              v83 = (3 * v87 + 1) >> 1;
              v84 = 8 * v83 + 8;
              if ( 8 * v87 + 8 >= v84 || v87 >= v83 )
              {
                v92 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v98, "Overflow encountered when expanding vector");
                goto LABEL_86;
              }
              LODWORD(v95) = v82;
              v94.m128i_i32[0] = (3 * v87 + 1) >> 1;
              v94.m128i_i64[1] = v15.m128i_i64[0];
              v85 = (__int32 *)sub_186B300(v80 - 2, v84);
              v86 = v94.m128i_i32[0];
              v82 = (unsigned int)v95;
              v80 = (unsigned int *)(v85 + 2);
              v15 = _mm_loadl_epi64((const __m128i *)&v94.m128i_u64[1]);
              v77[291] = (unsigned int *)(v85 + 2);
              *v85 = v86;
            }
            v88 = v96;
            *(v80 - 1) = v82;
            v89 = 8LL * v82;
            v90 = 8 * v88;
            if ( v90 != v89 )
            {
              v94.m128i_i64[0] = v15.m128i_i64[0];
              memset(&v80[(unsigned __int64)v90 / 4], 0, v89 - v90);
              v15 = _mm_loadl_epi64(&v94);
            }
          }
          *(_QWORD *)&v80[2 * v45] = a2;
        }
      }
    }
LABEL_30:
    v46 = _mm_cvtsi128_si32(v15);
    v47 = 2 * v45;
    v97[0] = 2 * v45;
    v48 = *(_WORD *)(a2 + 4) == 0;
    v94.m128i_i32[0] = v46 ^ 1;
    if ( v48 )
    {
      v49 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v49 )
      {
        if ( !*v49 && v49[1] == 7 )
        {
          v46 = v94.m128i_i32[0];
          v94.m128i_i32[0] = _mm_cvtsi128_si32(v15);
        }
      }
    }
    v50 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 229));
    v51 = v47 ^ 1;
    v96 = v47;
    v94.m128i_i32[2] = v50 ^ 1;
    v52 = sub_78AA80(a1, v47 ^ 1u, v46, v50 ^ 1);
    v98[1] = v46;
    v95 = v98;
    v98[0] = v51;
    v99 = v94.m128i_i32[2];
    sub_78AC30(a1, 3u, (__int64)v98, v52, v53, v54);
    v55 = sub_78AA80(a1, v51, v94.m128i_u32[0], v50);
    v98[0] = v51;
    v98[1] = v94.m128i_i32[0];
    v99 = v50;
    sub_78AC30(a1, 3u, (__int64)v95, v55, v56, v57);
    v58 = sub_78AA80(a1, v97[0], v46, v50);
    v98[1] = v46;
    v98[0] = v96;
    v99 = v50;
    sub_78AC30(a1, 3u, (__int64)v95, v58, v59, v60);
    v61 = sub_78AA80(a1, v97[0], v94.m128i_u32[0], v94.m128i_i32[2]);
    v98[1] = v94.m128i_i32[0];
    v99 = v94.m128i_i32[2];
    v98[0] = v96;
    sub_78AC30(a1, 3u, (__int64)v95, v61, v62, v63);
    if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192)) )
    {
      v64 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192));
      sub_118D170(v64, (unsigned int)v97[0], v46, v50);
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, (unsigned int)v97[0]);
    if ( (_BYTE)v10 )
      v97[0] = v51;
    return (int *)sub_787180((_QWORD *)(a1 + 88), (unsigned int *)v97);
  }
  i = v26;
LABEL_39:
  v65 = *((_DWORD *)i + 2) ^ (unsigned __int8)v10;
  v66 = (unsigned int)*(v8 - 1);
  if ( (_DWORD)v66 == *(v8 - 2) )
  {
    v68 = (unsigned int)(3 * v66 + 1) >> 1;
    v69 = 4 * v68 + 8;
    if ( 4 * (int)v66 + 8 >= (unsigned int)v69 || (unsigned int)v66 >= v68 )
    {
      v92 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v98, "Overflow encountered when expanding vector");
LABEL_86:
      *v92 = (char *)off_1C63128;
      sub_2333C0(v92 + 1, v98);
      sub_233E40((__int64)v98);
      __cxa_throw(v92, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v70 = (unsigned int *)sub_186B300(v8 - 2, v69);
    v8 = v70 + 2;
    *v70 = v68;
    v71 = v70[1];
    *(_QWORD *)(a1 + 88) = v8;
    result = &v8[v71];
  }
  else
  {
    result = &v8[v66];
  }
  *result = v65;
  ++*(v8 - 1);
  return result;
}

