__int64 __fastcall sub_9AB940(__int64 a1, _QWORD *a2, __int64 *a3, char a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  unsigned __int64 v6; // r8
  __int64 *v7; // r13
  _QWORD *v8; // r12
  _QWORD *v9; // rbp
  _BYTE *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __m128 v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // r14
  __int64 v21; // rsi
  __m128 v22; // xmm0
  __m128i *v23; // rdi
  __int64 (__fastcall *v24)(void **, const __m128i **, int); // r8
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  void **v32; // rsi
  __int64 (__fastcall *v33)(); // r15
  __int64 v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int16 *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int16 *v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 *v45; // rsi
  _QWORD *v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  _QWORD *v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned int *v60; // rcx
  size_t v61; // r8
  const char *v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned int *v65; // rsi
  size_t v66; // rax
  const char *v67; // rsi
  __int64 v68; // rdi
  void (*v69)(); // rax
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // rcx
  size_t v73; // rax
  _QWORD *v74; // rsi
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // r9
  __int64 v78; // r8
  bool v79; // zf
  const char *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdi
  void (*v83)(); // r8
  bool v84; // al
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // r15
  __m128i *v88; // rdi
  int v89; // esi
  size_t v90; // [rsp+8h] [rbp-160h]
  __int64 (__fastcall *v91)(); // [rsp+18h] [rbp-150h] BYREF
  __m128i v92; // [rsp+20h] [rbp-148h] BYREF
  __m128i *p_ptr; // [rsp+30h] [rbp-138h]
  size_t v94; // [rsp+38h] [rbp-130h]
  __m128i *v95; // [rsp+40h] [rbp-128h]
  void **v96; // [rsp+48h] [rbp-120h]
  __int64 *v97; // [rsp+50h] [rbp-118h]
  _QWORD *v98; // [rsp+58h] [rbp-110h]
  _QWORD *v99; // [rsp+60h] [rbp-108h]
  __int64 *v100; // [rsp+68h] [rbp-100h]
  int v101; // [rsp+74h] [rbp-F4h] BYREF
  __int64 v102; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v103; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD *v104; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v105[2]; // [rsp+90h] [rbp-D8h] BYREF
  __m128 v106; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-B8h]
  __m128i v108; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v109; // [rsp+D0h] [rbp-98h]
  __m128i ptr; // [rsp+E0h] [rbp-88h] BYREF
  char v111; // [rsp+F0h] [rbp-78h] BYREF

  v4 = *a3;
  result = *(_QWORD *)(*a3 + 8);
  v6 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return result;
  v7 = a3;
  v8 = a2;
  v9 = (_QWORD *)a1;
  if ( a4 )
    goto LABEL_3;
  v28 = (result >> 1) & 3;
  if ( (v28 & 1) != 0 )
    goto LABEL_3;
  v29 = *(_QWORD *)(v4 + 16);
  v107 = *(_QWORD *)(v4 + 24);
  v106.m128_u64[1] = v29;
  v106.m128_u64[0] = ((-(__int64)((v28 & 2) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 6) | v6;
  if ( sub_9A6250((__int64)a2, (__int64 *)(a1 + 544), (__int64 *)&v106) )
  {
    sub_9A6400(a2, (__int64 *)(a1 + 544), (__int64 *)&v106);
    v4 = *v7;
    v10 = *(_BYTE **)(a1 + 320);
    goto LABEL_4;
  }
  v84 = sub_9A4330(a1, (_QWORD *)(v4 + 8));
  v4 = *v7;
  v10 = *(_BYTE **)(a1 + 320);
  if ( v84 && *(_BYTE *)(v4 + 34) != 1 && (*(_BYTE *)(v4 + 8) & 4) == 0 )
  {
    v91 = *(__int64 (__fastcall **)())(*(_QWORD *)v10 + 80LL);
    v92.m128i_i32[0] = *(_DWORD *)(v4 + 36);
    p_ptr = &ptr;
    sub_9A8660(&ptr, (__int64 *)&v106);
    v85 = *v7;
    v86 = ptr.m128i_i64[0];
    v95 = &v108;
    v87 = ptr.m128i_i64[1];
    sub_9A8660(&v108, (__int64 *)(v85 + 8));
    v88 = (__m128i *)v108.m128i_i64[0];
    if ( (char *)v91 != (char *)nullsub_356 )
    {
      ((void (__fastcall *)(_BYTE *, _QWORD, _QWORD, __int64, __int64, _QWORD, __int64, __int64))v91)(
        v10,
        *(_QWORD *)(*v7 + 16),
        *(_QWORD *)(*v7 + 24),
        v108.m128i_i64[0],
        v108.m128i_i64[1],
        v92.m128i_u32[0],
        v86,
        v87);
      v88 = (__m128i *)v108.m128i_i64[0];
    }
    if ( v88 != &v95[1] )
      operator delete(v88);
    if ( (__m128i *)ptr.m128i_i64[0] != &p_ptr[1] )
      operator delete((void *)ptr.m128i_i64[0]);
    v4 = *v7;
LABEL_3:
    v10 = (_BYTE *)v9[40];
  }
LABEL_4:
  if ( v10[8] && (unsigned __int8)(*(_BYTE *)(v4 + 34) - 1) > 1u )
  {
    v11 = *(_QWORD *)(v4 + 8);
    v12 = v9[74];
    v13 = *(_QWORD *)(v4 + 16);
    v14 = *(_QWORD *)(v4 + 24);
    if ( (v11 & 2) != 0 || (v15 = v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v16 = 0;
    }
    else if ( *(_BYTE *)v15 == 12 )
    {
      v16 = *(_QWORD *)(v15 + 64);
    }
    else
    {
      v16 = 0;
      if ( *(_BYTE *)v15 == 4 )
        v16 = *(_QWORD *)(v15 + 16);
    }
    v101 = *(_DWORD *)(v4 + 36);
    v91 = sub_9AC3F0;
    ptr.m128i_i64[0] = (__int64)&v111;
    v105[0] = v13;
    v17 = _mm_loadh_ps((const double *)&v91);
    v102 = v16;
    v92 = (__m128i)v17;
    v105[1] = v14;
    p_ptr = &ptr;
    ptr.m128i_i64[1] = 0x800000000LL;
    v109.m128i_i64[0] = 0;
    v18 = operator new(0x40u);
    v91 = (__int64 (__fastcall *)())v9;
    v19 = _mm_load_si128(&v92);
    v20 = v18;
    v21 = v102;
    *(_QWORD *)(v18 + 16) = &ptr;
    v91 = (__int64 (__fastcall *)())v12;
    *(_QWORD *)(v18 + 24) = v8;
    v108.m128i_i64[0] = v18;
    v22 = _mm_loadh_ps((const double *)&v91);
    v109 = v19;
    *(__m128 *)v18 = v22;
    *(_QWORD *)(v18 + 32) = &v102;
    *(_QWORD *)(v18 + 40) = v105;
    *(_QWORD *)(v18 + 48) = &v101;
    v95 = &v108;
    *(_QWORD *)(v18 + 56) = &v108;
    v103 = v21;
    if ( !v21 )
    {
      v23 = (__m128i *)ptr.m128i_i64[0];
      v24 = sub_9A43E0;
      v25 = ptr.m128i_i64[0] + 8LL * ptr.m128i_u32[2];
      if ( v25 == ptr.m128i_i64[0] )
        goto LABEL_21;
LABEL_18:
      v26 = (__int64 *)v23;
      do
      {
        v27 = *v26++;
        *(_DWORD *)(v27 + 48) = 0;
      }
      while ( (__int64 *)v25 != v26 );
LABEL_20:
      if ( !v24 )
      {
LABEL_22:
        if ( v23 != &p_ptr[1] )
          free(v23);
        v4 = *v7;
        goto LABEL_5;
      }
LABEL_21:
      v24((void **)v95, (const __m128i **)v95, 3);
      v23 = (__m128i *)ptr.m128i_i64[0];
      goto LABEL_22;
    }
    v96 = sub_9AB690(v12, v21, (__int64)v9);
    LODWORD(v91) = *((_DWORD *)v96 + 12);
    if ( (unsigned int)((_DWORD)v91 - 1) <= 1 || !*((_DWORD *)v96 + 2) )
    {
LABEL_17:
      v23 = (__m128i *)ptr.m128i_i64[0];
      v24 = (__int64 (__fastcall *)(void **, const __m128i **, int))v109.m128i_i64[0];
      v25 = ptr.m128i_i64[0] + 8LL * ptr.m128i_u32[2];
      if ( ptr.m128i_i64[0] == v25 )
        goto LABEL_20;
      goto LABEL_18;
    }
    v30 = *(_QWORD *)(v20 + 16);
    v31 = *(unsigned int *)(v30 + 8);
    if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 12) )
    {
      sub_22134E0(*(_QWORD *)(v20 + 16), v30 + 16, v31 + 1, 8);
      v31 = *(unsigned int *)(v30 + 8);
    }
    v32 = v96;
    *(_QWORD *)(*(_QWORD *)v30 + 8 * v31) = v96;
    v33 = (__int64 (__fastcall *)())*v32;
    ++*(_DWORD *)(v30 + 8);
    v34 = *((unsigned int *)v32 + 2);
    *((_DWORD *)v32 + 12) = 1;
    v91 = (__int64 (__fastcall *)())((char *)v33 + 8 * v34);
    if ( v33 == v91 )
    {
LABEL_72:
      *((_DWORD *)v96 + 12) = 2;
      goto LABEL_17;
    }
    v99 = v8;
    v97 = &v103;
    v100 = v7;
    v98 = v9;
    while ( 1 )
    {
      v35 = *(_QWORD **)v33;
      v36 = *(_QWORD *)(v20 + 24);
      v37 = *(_QWORD *)v20;
      v104 = *(_QWORD **)v33;
      v38 = *(unsigned __int16 **)v36;
      v39 = *(_QWORD *)(v36 + 8);
      v106.m128_u64[1] = (unsigned __int64)&v104;
      v106.m128_u64[0] = v37 + 544;
      v40 = 2 * v39;
      v41 = &v38[v39];
      v42 = (2 * v39) >> 3;
      v43 = v40 >> 1;
      if ( v42 > 0 )
      {
        v44 = *(_QWORD *)(v37 + 544);
        v45 = &v38[4 * v42];
        while ( 1 )
        {
          v56 = *(_QWORD *)(*(_QWORD *)(v44 + 8LL * *v38) + 8LL);
          if ( (v56 & 2) != 0 )
            break;
          v57 = v56 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v57 )
            break;
          if ( *(_BYTE *)v57 == 12 )
          {
            v46 = *(_QWORD **)(v57 + 64);
            goto LABEL_37;
          }
          v46 = nullptr;
          if ( *(_BYTE *)v57 != 4 )
            goto LABEL_37;
          if ( v35 == *(_QWORD **)(v57 + 16) )
            goto LABEL_59;
LABEL_38:
          v47 = *(_QWORD *)(*(_QWORD *)(v44 + 8LL * v38[1]) + 8LL);
          if ( (v47 & 2) != 0 || (v48 = v47 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v49 = nullptr;
LABEL_42:
            if ( v35 == v49 )
              goto LABEL_83;
            goto LABEL_43;
          }
          if ( *(_BYTE *)v48 == 12 )
          {
            v49 = *(_QWORD **)(v48 + 64);
            goto LABEL_42;
          }
          v49 = nullptr;
          if ( *(_BYTE *)v48 != 4 )
            goto LABEL_42;
          if ( v35 == *(_QWORD **)(v48 + 16) )
          {
LABEL_83:
            ++v38;
            goto LABEL_59;
          }
LABEL_43:
          v50 = *(_QWORD *)(*(_QWORD *)(v44 + 8LL * v38[2]) + 8LL);
          if ( (v50 & 2) != 0 || (v51 = v50 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v52 = nullptr;
LABEL_47:
            if ( v35 == v52 )
              goto LABEL_79;
            goto LABEL_48;
          }
          if ( *(_BYTE *)v51 == 12 )
          {
            v52 = *(_QWORD **)(v51 + 64);
            goto LABEL_47;
          }
          v52 = nullptr;
          if ( *(_BYTE *)v51 != 4 )
            goto LABEL_47;
          if ( v35 == *(_QWORD **)(v51 + 16) )
          {
LABEL_79:
            v38 += 2;
            goto LABEL_59;
          }
LABEL_48:
          v53 = *(_QWORD *)(*(_QWORD *)(v44 + 8LL * v38[3]) + 8LL);
          if ( (v53 & 2) != 0 || (v54 = v53 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v55 = nullptr;
          }
          else if ( *(_BYTE *)v54 == 12 )
          {
            v55 = *(_QWORD **)(v54 + 64);
          }
          else
          {
            v55 = nullptr;
            if ( *(_BYTE *)v54 == 4 )
              v55 = *(_QWORD **)(v54 + 16);
          }
          if ( v35 == v55 )
          {
            v38 += 3;
            goto LABEL_59;
          }
          v38 += 4;
          if ( v45 == v38 )
          {
            v43 = v41 - v38;
            goto LABEL_90;
          }
        }
        v46 = nullptr;
LABEL_37:
        if ( v35 == v46 )
          goto LABEL_59;
        goto LABEL_38;
      }
LABEL_90:
      if ( v43 == 2 )
        goto LABEL_115;
      if ( v43 != 3 )
      {
        if ( v43 != 1 )
          goto LABEL_68;
LABEL_93:
        if ( !sub_9A4250(&v106, *v38) )
          goto LABEL_68;
        goto LABEL_59;
      }
      if ( !sub_9A4250(&v106, *v38) )
        break;
LABEL_59:
      if ( v41 != v38 )
      {
        v58 = *(_QWORD *)(**(_QWORD **)(v20 + 32) + 40LL);
        if ( (v58 & 7) != 0 || (v59 = v58 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v73 = j__strlen(&byte_22CD811);
          v62 = &byte_22CD811;
          v61 = v73;
        }
        else
        {
          v60 = *(unsigned int **)(v59 + 16);
          v61 = *v60;
          v62 = (const char *)(v60 + 4);
        }
        v63 = v35[5];
        if ( (v63 & 7) != 0 || (v64 = v63 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v94 = v61;
          v92.m128i_i64[0] = (__int64)v62;
          v66 = j__strlen(&byte_22CD811);
          v61 = v94;
          v62 = (const char *)v92.m128i_i64[0];
          v67 = &byte_22CD811;
        }
        else
        {
          v65 = *(unsigned int **)(v64 + 16);
          v66 = *v65;
          v67 = (const char *)(v65 + 4);
        }
        v68 = *(_QWORD *)(v37 + 320);
        v90 = v66;
        v69 = *(void (**)())(*(_QWORD *)v68 + 128LL);
        if ( v69 != nullsub_362 )
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, const char *, size_t, _QWORD, const char *, size_t))v69)(
            v68,
            **(_QWORD **)(v20 + 40),
            *(_QWORD *)(*(_QWORD *)(v20 + 40) + 8LL),
            v62,
            v61,
            **(unsigned int **)(v20 + 48),
            v67,
            v90);
      }
LABEL_68:
      v70 = *(_QWORD *)(v20 + 56);
      v106.m128_u64[0] = (unsigned __int64)v35;
      if ( !*(_QWORD *)(v70 + 16) )
        std::__throw_bad_function_call();
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __m128 *))(v70 + 24))(v70, &v106) )
        goto LABEL_70;
      v71 = *(_QWORD *)(v20 + 8);
      if ( !(unsigned __int8)sub_9A6AE0((__int64 *)(v71 + 24), v97, &v104) )
      {
        v74 = v104;
        v75 = (unsigned int)(*(_DWORD *)(v71 + 32) + 1);
        v76 = *(_DWORD *)(v71 + 40);
        v106.m128_u64[0] = (unsigned __int64)v104;
        v77 = (unsigned int)(4 * v75);
        v78 = 3 * v76;
        if ( (unsigned int)v77 >= (unsigned int)v78 )
        {
          v89 = 2 * v76;
        }
        else
        {
          v78 = v76 >> 3;
          if ( v76 - *(_DWORD *)(v71 + 36) - (unsigned int)v75 > (unsigned int)v78 )
          {
LABEL_98:
            v79 = *v74 == -4096;
            *(_DWORD *)(v71 + 32) = v75;
            if ( !v79 )
              --*(_DWORD *)(v71 + 36);
            *((_BYTE *)v74 + 8) = 1;
            *v74 = v103;
            v104 = v74;
            sub_9A6DE0(&v106, v74, (_QWORD *)(*(_QWORD *)(v71 + 24) + 16LL * v76), v71 + 24, 1);
            v80 = sub_971A10(v103);
            v82 = *(_QWORD *)(*(_QWORD *)v20 + 320LL);
            v83 = *(void (**)())(*(_QWORD *)v82 + 136LL);
            if ( v83 != nullsub_363 )
              ((void (__fastcall *)(__int64, const char *, __int64, _QWORD))v83)(
                v82,
                v80,
                v81,
                *(unsigned int *)(v103 + 24));
            goto LABEL_70;
          }
          v89 = v76;
        }
        sub_9AB7C0(v71 + 24, v89, v75, v72, v78, v77);
        sub_9A6AE0((__int64 *)(v71 + 24), v97, &v106);
        v76 = *(_DWORD *)(v71 + 40);
        LODWORD(v75) = *(_DWORD *)(v71 + 32) + 1;
        v74 = (_QWORD *)v106.m128_u64[0];
        goto LABEL_98;
      }
      sub_9A6DE0(&v106, v104, (_QWORD *)(*(_QWORD *)(v71 + 24) + 16LL * *(unsigned int *)(v71 + 40)), v71 + 24, 1);
LABEL_70:
      v33 = (__int64 (__fastcall *)())((char *)v33 + 8);
      if ( v91 == v33 )
      {
        v9 = v98;
        v8 = v99;
        v7 = v100;
        goto LABEL_72;
      }
    }
    ++v38;
LABEL_115:
    if ( !sub_9A4250(&v106, *v38) )
    {
      ++v38;
      goto LABEL_93;
    }
    goto LABEL_59;
  }
LABEL_5:
  result = sub_9A6250((__int64)v8, v9 + 68, (__int64 *)(v4 + 8));
  if ( result )
  {
    if ( *(_BYTE *)(v4 + 34) != 1 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64, _QWORD))(*(_QWORD *)result + 24LL))(
               result,
               v8,
               v9 + 68,
               v4,
               v9[40]);
  }
  else
  {
    *v7 = 0;
    ptr.m128i_i64[0] = v4;
    result = sub_9A4A60(v8, v9 + 68, ptr.m128i_i64);
    if ( ptr.m128i_i64[0] )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)ptr.m128i_i64[0] + 8LL))(ptr.m128i_i64[0]);
  }
  return result;
}

