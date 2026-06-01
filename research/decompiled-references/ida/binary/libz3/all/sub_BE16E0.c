__int64 __fastcall sub_BE16E0(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4)
{
  char **exception; // rbx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 **v9; // r13
  __int64 **v10; // r15
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r9
  _QWORD *v15; // rdi
  unsigned int v16; // esi
  int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // r9
  int v20; // esi
  unsigned __int32 v21; // edx
  __int64 v22; // r8
  __int64 v23; // r10
  __m128i *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int32 v27; // r9d
  _BYTE *v28; // rcx
  unsigned int v29; // edi
  __int32 v30; // edx
  unsigned int v31; // ebx
  unsigned int v32; // eax
  unsigned int v33; // esi
  _QWORD *v34; // rbp
  int v35; // eax
  __int64 v36; // r8
  __int32 v37; // esi
  __int64 v38; // r9
  __int64 v39; // rax
  size_t v40; // rcx
  __m128i *v41; // rax
  __m128i *v42; // rdi
  __int64 **v43; // rbx
  _BYTE *v44; // rdx
  unsigned int v45; // edx
  __int64 v46; // rbp
  __int64 v47; // rdx
  unsigned __int32 v48; // r9d
  _BYTE *v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rbp
  __int64 v52; // rdx
  unsigned int v53; // r10d
  __int64 v54; // r13
  __int64 v55; // r10
  _QWORD *v56; // rbx
  unsigned int v57; // eax
  __int64 v58; // rdx
  _BYTE *v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __m128i *v64; // r11
  __int64 v65; // rcx
  __m128i *v66; // rdi
  const __m128i *v67; // rcx
  unsigned int v68; // edx
  const __m128i *v69; // rbp
  __m128i *v70; // rbx
  __int64 v71; // r8
  const __m128i *v72; // r14
  __int64 **v73; // rcx
  __int64 **v74; // r15
  __int64 v75; // r13
  unsigned int v76; // r10d
  __int64 v77; // rdx
  __m128i *v78; // rsi
  __m128i *v79; // rdx
  _QWORD *v80; // rax
  unsigned int v81; // r12d
  unsigned int v82; // edx
  unsigned int *v83; // rax
  _QWORD *v84; // rcx
  __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  __int64 v87; // rdx
  _QWORD *v88; // rdx
  _QWORD *v89; // rdx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v93; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD *v94; // [rsp+18h] [rbp-B0h]
  __m128 v95; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+30h] [rbp-98h]
  __int64 v97; // [rsp+38h] [rbp-90h]
  __int64 v98; // [rsp+40h] [rbp-88h]
  __int64 v99; // [rsp+48h] [rbp-80h]
  __int64 v100; // [rsp+50h] [rbp-78h]
  unsigned int v101; // [rsp+5Ch] [rbp-6Ch]
  __int64 v102[11]; // [rsp+70h] [rbp-58h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  v93 = a3;
  v94 = a4;
  if ( (unsigned int)sub_8E7030(v6) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 7488) + 56LL))(*(_QWORD *)(v6 + 7488), v7);
    if ( !(_BYTE)result )
      return result;
  }
  result = a2[7];
  if ( !result )
    return result;
  v9 = (__int64 **)(result + 8LL * *(unsigned int *)(result - 4));
  if ( (__int64 **)result == v9 )
    return result;
  v10 = (__int64 **)a2[7];
  while ( 2 )
  {
    v11 = *(_QWORD *)(v5 + 16);
    v12 = *v10;
    v13 = **v10;
    if ( (unsigned int)sub_8E7030(v11) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 7488) + 56LL))(
                 *(_QWORD *)(v11 + 7488),
                 v13);
      if ( !(_BYTE)result )
        goto LABEL_6;
    }
    result = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 24LL);
    if ( !result )
      goto LABEL_6;
    if ( *(_DWORD *)(v5 + 8) != *(_DWORD *)result )
      goto LABEL_6;
    if ( *(_DWORD *)(result + 4) )
      goto LABEL_6;
    result = v12[14];
    if ( a2 != *(__int64 **)(result + 8) )
      goto LABEL_6;
    v14 = sub_BE07E0(v5, (__int64)v12);
    v95.m128_i8[0] = *((_BYTE *)v93 + 44);
    LOBYTE(v98) = v95.m128_i8[0] & 8;
    if ( (v95.m128_i8[0] & 8) != 0 )
    {
      v16 = -1;
      v15 = v93;
    }
    else
    {
      v15 = v93;
      v16 = *(_DWORD *)(*v93 + 24LL) - 1;
    }
    v95.m128_u64[0] = v14;
    v17 = sub_BDCBD0(v15, v16);
    v19 = v95.m128_u64[0];
    v20 = v17;
    v21 = *(_DWORD *)(v95.m128_u64[0] + 8);
    v22 = *(_QWORD *)v95.m128_u64[0];
    LODWORD(v96) = v21 - 1;
    result = 16LL * (v17 & (v21 - 1));
    v23 = 16LL * v21;
    v24 = (__m128i *)(v22 + v23);
    v25 = v22 + result;
    if ( result != v23 )
    {
      v97 = v22 + result;
      result += v22;
      v26 = v95.m128_u64[0];
      v27 = v21;
      v95.m128_u64[0] = (unsigned __int64)v12;
      do
      {
        v28 = *(_BYTE **)(result + 8);
        if ( (unsigned __int64)v28 > 1 )
        {
          if ( *(_DWORD *)result == v20 )
          {
            if ( (v28[44] & 8) != 0 )
              goto LABEL_6;
            v45 = *(_DWORD *)(*(_QWORD *)v28 + 24LL);
            if ( v45 <= 1 )
              goto LABEL_6;
            v46 = v45 - 1;
            LODWORD(v100) = v20;
            v47 = 0;
            v99 = result;
            while ( 1 )
            {
              result = *(_QWORD *)&v28[8 * v47 + 120];
              if ( *(_QWORD *)(result + 8) != *(_QWORD *)(v93[v47 + 15] + 8LL) )
                break;
              if ( v46 == ++v47 )
                goto LABEL_6;
            }
            result = v99;
            v20 = v100;
          }
        }
        else if ( !v28 )
        {
          v12 = (__int64 *)v95.m128_u64[0];
          v21 = v27;
          v19 = v26;
          goto LABEL_22;
        }
        result += 16;
      }
      while ( v24 != (__m128i *)result );
      v21 = v27;
      v12 = (__int64 *)v95.m128_u64[0];
      v19 = v26;
      v25 = v97;
    }
    if ( v22 != v25 )
    {
      v97 = v19;
      result = v22;
      v48 = v21;
      v95.m128_u64[0] = (unsigned __int64)v12;
      while ( 1 )
      {
        v49 = *(_BYTE **)(result + 8);
        if ( (unsigned __int64)v49 > 1 )
        {
          if ( *(_DWORD *)result == v20 )
          {
            if ( (v49[44] & 8) != 0 )
              goto LABEL_6;
            v50 = *(_DWORD *)(*(_QWORD *)v49 + 24LL);
            if ( v50 <= 1 )
              goto LABEL_6;
            LODWORD(v99) = v48;
            v51 = v50 - 1;
            v52 = 0;
            v100 = result;
            while ( 1 )
            {
              result = *(_QWORD *)(v93[v52 + 15] + 8LL);
              if ( *(_QWORD *)(*(_QWORD *)&v49[8 * v52 + 120] + 8LL) != result )
                break;
              if ( v51 == ++v52 )
                goto LABEL_6;
            }
            result = v100;
            v48 = v99;
          }
        }
        else if ( !v49 )
        {
LABEL_52:
          v21 = v48;
          v12 = (__int64 *)v95.m128_u64[0];
          v19 = v97;
          break;
        }
        result += 16;
        if ( v25 == result )
          goto LABEL_52;
      }
    }
LABEL_22:
    if ( v18 <= 1 )
      goto LABEL_6;
    v95.m128_i32[0] = v21;
    for ( result = 1; result != v18; ++result )
    {
      v29 = result;
      if ( *(_QWORD *)(v12[result + 14] + 8) != *(_QWORD *)(v93[result + 14] + 8LL) )
      {
        v30 = v95.m128_i32[0];
        goto LABEL_27;
      }
    }
    v30 = v95.m128_i32[0];
    ++v29;
LABEL_27:
    if ( v29 >= v18 )
      goto LABEL_6;
    v31 = 2 * v30;
    v32 = 4 * (*(_DWORD *)(v19 + 12) + *(_DWORD *)(v19 + 16));
    v95 = _mm_loadh_ps((const double *)&v93);
    if ( 3 * v30 < v32 )
    {
      v97 = v19;
      v96 = 16LL * v31;
      v63 = sub_186B270(v96);
      v23 = v96;
      v19 = v97;
      v22 = v63;
      v64 = (__m128i *)(v63 + v96);
      if ( v31 )
      {
        if ( (v96 & 0x10) == 0 || (*(_QWORD *)(v63 + 8) = 0, v63 += 16, (__m128i *)(v22 + 16) != v64) )
        {
          do
          {
            *(_QWORD *)(v63 + 8) = 0;
            v63 += 32;
            *(_QWORD *)(v63 - 8) = 0;
          }
          while ( (__m128i *)v63 != v64 );
        }
      }
      v65 = *(unsigned int *)(v19 + 8);
      v66 = *(__m128i **)v19;
      v24 = v64;
      LODWORD(v96) = v31 - 1;
      v67 = &v66[v65];
      if ( v66 != v67 )
      {
        v68 = v31;
        v69 = v66;
        v70 = (__m128i *)v22;
        v71 = v5;
        v72 = v67;
        v73 = v10;
        v74 = v9;
        v75 = v23;
        v76 = v68;
        do
        {
          if ( v69->m128i_i64[1] > 1uLL )
          {
            v77 = 16LL * (v69->m128i_i32[0] & (unsigned int)v96);
            v78 = &v70[(unsigned __int64)v77 / 0x10];
            if ( v75 == v77 )
            {
LABEL_102:
              if ( v70 == v78 )
              {
LABEL_121:
                v101 = v76;
                v100 = v71;
                v99 = (__int64)v73;
                v98 = (__int64)v64;
                v97 = v19;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v79 = v70;
              while ( v79->m128i_i64[1] )
              {
                if ( v78 == ++v79 )
                  goto LABEL_121;
              }
            }
            else
            {
              v79 = &v70[(unsigned __int64)v77 / 0x10];
              while ( v79->m128i_i64[1] )
              {
                if ( v64 == ++v79 )
                  goto LABEL_102;
              }
            }
            *v79 = _mm_loadu_si128(v69);
          }
          ++v69;
        }
        while ( v72 != v69 );
        v66 = *(__m128i **)v19;
        v5 = v71;
        v24 = v64;
        v22 = (__int64)v70;
        v31 = v76;
        v23 = v75;
        v9 = v74;
        v10 = v73;
      }
      if ( v66 )
      {
        v99 = v22;
        v98 = v23;
        v97 = v19;
        sub_186B220(v66);
        v22 = v99;
        v23 = v98;
        v19 = v97;
      }
      v80 = v93;
      *(_QWORD *)v19 = v22;
      *(_DWORD *)(v19 + 8) = v31;
      LOBYTE(v80) = *((_BYTE *)v80 + 44);
      *(_DWORD *)(v19 + 16) = 0;
      LOBYTE(v97) = (_BYTE)v80;
      LOBYTE(v98) = (unsigned __int8)v80 & 8;
    }
    v33 = -1;
    if ( !(_BYTE)v98 )
      v33 = *(_DWORD *)(*v93 + 24LL) - 1;
    v34 = v93;
    v99 = v22;
    v98 = v23;
    v97 = v19;
    v35 = sub_BDCBD0(v93, v33);
    v36 = v99;
    v37 = v35;
    v38 = v97;
    v39 = 16LL * (v35 & (unsigned int)v96);
    v40 = v99 + v39;
    if ( v39 == v98 )
    {
      v42 = nullptr;
LABEL_74:
      if ( v40 == v99 )
      {
LABEL_83:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v59 = *(_BYTE **)(v36 + 8);
        if ( (unsigned __int64)v59 > 1 )
        {
          if ( *(_DWORD *)v36 == v37 )
          {
            if ( (v59[44] & 8) != 0 || (v60 = *(_DWORD *)(*(_QWORD *)v59 + 24LL), v60 <= 1) )
            {
LABEL_82:
              *(_QWORD *)(v36 + 8) = v93;
              goto LABEL_69;
            }
            v61 = v60 - 1;
            v62 = 0;
            while ( *(_QWORD *)(*(_QWORD *)&v59[8 * v62 + 120] + 8LL) == *(_QWORD *)(v93[v62 + 15] + 8LL) )
            {
              if ( v61 == ++v62 )
                goto LABEL_82;
            }
          }
        }
        else
        {
          if ( !v59 )
          {
            if ( v42 )
            {
              --*(_DWORD *)(v97 + 16);
              v36 = (__int64)v42;
            }
            v90 = v93;
            *(_DWORD *)v36 = v37;
            *(_QWORD *)(v36 + 8) = v90;
            ++*(_DWORD *)(v38 + 12);
            goto LABEL_69;
          }
          v42 = (__m128i *)v36;
        }
        v36 += 16;
        if ( v40 == v36 )
          goto LABEL_83;
      }
    }
    v41 = (__m128i *)(v99 + v39);
    v42 = nullptr;
    v43 = v9;
    while ( 1 )
    {
      v44 = (_BYTE *)v41->m128i_i64[1];
      if ( (unsigned __int64)v44 > 1 )
      {
        if ( v41->m128i_i32[0] == v37 )
        {
          if ( (v44[44] & 8) != 0 || (v53 = *(_DWORD *)(*(_QWORD *)v44 + 24LL), v53 <= 1) )
          {
            v9 = v43;
LABEL_68:
            v41->m128i_i64[1] = (__int64)v93;
            goto LABEL_69;
          }
          v54 = v53 - 1;
          v96 = v40;
          v55 = 0;
          while ( *(_QWORD *)(*(_QWORD *)&v44[8 * v55 + 120] + 8LL) == *(_QWORD *)(v34[v55 + 15] + 8LL) )
          {
            if ( ++v55 == v54 )
            {
              v9 = v43;
              goto LABEL_68;
            }
          }
          v40 = v96;
        }
        goto LABEL_34;
      }
      if ( !v44 )
        break;
      v42 = v41;
LABEL_34:
      if ( ++v41 == v24 )
      {
        v9 = v43;
        goto LABEL_74;
      }
    }
    v9 = v43;
    if ( v42 )
    {
      --*(_DWORD *)(v97 + 16);
      v41 = v42;
    }
    v89 = v93;
    v41->m128i_i32[0] = v37;
    v41->m128i_i64[1] = (__int64)v89;
    ++*(_DWORD *)(v38 + 12);
LABEL_69:
    v56 = (_QWORD *)*v94;
    if ( *v94 )
    {
      v57 = *((_DWORD *)v56 - 1);
      if ( v57 == *((_DWORD *)v56 - 2) )
      {
        v81 = (3 * v57 + 1) >> 1;
        v82 = 16 * v81 + 8;
        if ( 16 * v57 + 8 >= v82 || v57 >= v81 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v102, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v102);
          sub_233E40((__int64)v102);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v83 = (unsigned int *)sub_186B270(v82);
        v56 = v83 + 2;
        v84 = (_QWORD *)*v94;
        if ( *v94 )
        {
          v85 = *((unsigned int *)v84 - 1);
          v86 = 0;
          v83[1] = v85;
          v87 = 16 * v85;
          if ( v87 )
          {
            do
            {
              *(__m128i *)&v83[v86 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v84[v86 / 8]);
              v86 += 16LL;
            }
            while ( v87 != v86 );
          }
          v96 = (__int64)v83;
          sub_186B220(v84 - 1);
          v83 = (unsigned int *)v96;
        }
        else
        {
          v83[1] = 0;
        }
        v88 = v94;
        *v83 = v81;
        v57 = v83[1];
        *v88 = v56;
      }
    }
    else
    {
      v91 = (_QWORD *)sub_186B270(0x28u);
      *v91 = 2;
      v56 = v91 + 1;
      *v94 = v91 + 1;
      v57 = 0;
    }
    v58 = v57;
    result = v57 + 1;
    *(__m128i *)&v56[2 * v58] = _mm_load_si128((const __m128i *)&v95);
    *((_DWORD *)v56 - 1) = result;
LABEL_6:
    if ( v9 != ++v10 )
      continue;
    return result;
  }
}

