__int64 __fastcall sub_4FF880(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int32 a5,
        int a6,
        __int64 a7)
{
  unsigned __int64 v7; // r14
  __int64 func; // rax
  unsigned __int64 v14; // rcx
  int v15; // r9d
  _DWORD *v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // r14
  char v20; // al
  void *v21; // rdx
  __m128i v22; // xmm0
  int v24; // edx
  int v25; // esi
  bool (__fastcall *v26)(__int64, __int64, int); // r9
  __int64 (*v27)(); // r9
  int v28; // eax
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // r8
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  __m128i v45; // xmm0
  _QWORD *v46; // r8
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned int v49; // edx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  bool (__fastcall *v53)(__int64, __int64, int); // rcx
  __int64 (*v54)(); // rax
  int v55; // eax
  bool v56; // al
  __int64 v57; // rdi
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r8
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  void *v63; // r15
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdi
  __m128i v68; // xmm0
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rsi
  __m128i *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __m128i v80; // xmm0
  bool v81; // cf
  bool v82; // al
  bool v83; // dl
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __m128i *v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r9
  const __m128i *v91; // rcx
  __int64 v92; // rax
  __m128i v93; // xmm0
  __int64 v95; // [rsp+0h] [rbp-A8h]
  _DWORD *v96; // [rsp+0h] [rbp-A8h]
  _DWORD *v97; // [rsp+0h] [rbp-A8h]
  _QWORD *v98; // [rsp+0h] [rbp-A8h]
  __int64 v99; // [rsp+0h] [rbp-A8h]
  __int64 v100; // [rsp+0h] [rbp-A8h]
  __int64 v101; // [rsp+0h] [rbp-A8h]
  __int64 v102; // [rsp+0h] [rbp-A8h]
  _QWORD *v103; // [rsp+8h] [rbp-A0h]
  __int64 v104; // [rsp+8h] [rbp-A0h]
  __int64 v105; // [rsp+8h] [rbp-A0h]
  __m128i v106; // [rsp+10h] [rbp-98h] BYREF
  __m128i v107; // [rsp+20h] [rbp-88h] BYREF
  __int64 v108; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i v110; // [rsp+48h] [rbp-60h] BYREF
  char v111; // [rsp+58h] [rbp-50h]
  unsigned __int64 v112; // [rsp+68h] [rbp-40h]

  v112 = __readfsqword(0x28u);
  if ( a5 == (_DWORD)&stru_10000 )
  {
    if ( !under_debugger )
      interr(3106);
    goto LABEL_113;
  }
  v7 = a3;
  if ( a4 != -1 )
    v7 = a4;
  func = get_func(v7);
  v14 = *(_QWORD *)(a2 + 216);
  v15 = a6;
  *(_QWORD *)(a2 + 24) = func;
  *(_QWORD *)(a2 + 32) = v14;
  v16 = *(_DWORD **)(qword_2CCB598 + 1672);
  v17 = *(_DWORD *)(a2 + 48);
  if ( v17 )
  {
    if ( (unsigned int)(a6 + 1) > 1 )
    {
      if ( !under_debugger )
        interr(3284);
      goto LABEL_113;
    }
    v24 = *(_DWORD *)(a2 + 44);
    if ( !*(_BYTE *)(a2 + 40) )
    {
      v25 = v16[159];
      if ( v25 > v24 )
      {
        if ( a6 == -1 )
        {
LABEL_21:
          *(_DWORD *)(a2 + 44) = v25;
          v24 = v25;
          goto LABEL_22;
        }
        if ( a5 >= 0 )
        {
          v26 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 56LL);
          if ( v26 != sub_4F45C0 )
          {
            v101 = *(_QWORD *)(qword_2CCB598 + 1672);
            v82 = v26(a2, v7, (unsigned __int16)a5);
            v14 = *(_QWORD *)(a2 + 216);
            v30 = v101;
            v83 = v82;
            v17 = *(_DWORD *)(a2 + 48);
            if ( v83 )
              goto LABEL_20;
            goto LABEL_97;
          }
          v27 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
          if ( v27 != sub_4F3CB0 )
          {
            v95 = *(_QWORD *)(qword_2CCB598 + 1672);
            v28 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v27)(a2, v7);
            v14 = *(_QWORD *)(a2 + 216);
            v29 = v28;
            v30 = v95;
            v17 = *(_DWORD *)(a2 + 48);
            if ( (unsigned __int16)a5 == v29 )
            {
LABEL_20:
              v25 = *(_DWORD *)(v30 + 636);
              goto LABEL_21;
            }
LABEL_97:
            v24 = *(_DWORD *)(a2 + 44);
          }
        }
      }
    }
LABEL_22:
    if ( !*(_QWORD *)(a2 + 56) && a7 )
    {
      *(_QWORD *)(a2 + 56) = a7;
      if ( v24 + v17 >= v14 )
        goto LABEL_9;
    }
    else if ( v24 + v17 >= v14 )
    {
      goto LABEL_9;
    }
    *(_BYTE *)(a1 + 24) = 2;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v31 = qvector_reserve(a1, 0, 1, 24);
    v32 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v31;
    v33 = v31 + 24 * v32;
    *(_QWORD *)v33 = 0xFFFFFFFFLL;
    *(_QWORD *)(v33 + 8) = a3;
    *(_DWORD *)(v33 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
  if ( a6 < -1 )
  {
    if ( !under_debugger )
      interr(3283);
    goto LABEL_113;
  }
  *(_BYTE *)(a2 + 40) = a6 > 0;
  *(_QWORD *)(a2 + 56) = a7;
  if ( a6 > 0 )
    goto LABEL_7;
  if ( a6 )
    goto LABEL_62;
  if ( a5 >= 0 )
  {
    v53 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 56LL);
    if ( v53 == sub_4F45C0 )
    {
      v54 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
      if ( v54 != sub_4F3CB0 )
      {
        v96 = v16;
        v55 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v54)(a2, v7);
        v16 = v96;
        if ( (unsigned __int16)a5 == v55 )
          goto LABEL_62;
      }
    }
    else
    {
      v97 = v16;
      v56 = v53(a2, v7, (unsigned __int16)a5);
      v16 = v97;
      if ( v56 )
      {
LABEL_62:
        v15 = v16[159];
        goto LABEL_7;
      }
    }
  }
  v15 = v16[158];
LABEL_7:
  *(_DWORD *)(a2 + 44) = v15;
  v18 = (int)v16[160];
  if ( v18 < *(_QWORD *)(*(_QWORD *)(a2 + 200) + 40LL) )
    sub_4FA640(a2, v7, v16[160], v18, (__int64)v16, v15);
LABEL_9:
  v19 = *(_QWORD *)(a2 + 56);
  sub_4FF360((__int64)&ptr, a2, a3, a4, a5);
  v20 = v111;
  if ( v111 == 2 )
  {
    v34 = *(_QWORD *)(a2 + 32);
    v35 = *(_QWORD *)(a2 + 216);
    if ( v34 >= v35 )
    {
      if ( v34 == v35 )
        goto LABEL_34;
      v106 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v57 = a2 + 208;
    }
    else
    {
      do
      {
        v36 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 16 * v34);
        v37 = **(_QWORD **)(a2 + 192) + 48 * v36;
        if ( !*(_BYTE *)(v37 + 40) && *(_QWORD *)(v37 + 32) )
        {
          sub_4FAB50(a2, v36);
          v35 = *(_QWORD *)(a2 + 216);
        }
        ++v34;
      }
      while ( v34 < v35 );
      v34 = *(_QWORD *)(a2 + 32);
      if ( v34 == v35 )
        goto LABEL_34;
      v106 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      if ( v34 < v35 )
        goto LABEL_33;
      v57 = a2 + 208;
    }
    v58 = *(_QWORD *)(a2 + 208);
    v59 = *(_QWORD *)(a2 + 224);
    if ( (unsigned __int64)&v106 < v58 || (unsigned __int64)&v106 >= 16 * v59 + v58 )
    {
      if ( v59 < v34 )
      {
        v99 = *(_QWORD *)(a2 + 224);
        v74 = qvector_reserve(v57, 0, v34, 16);
        v75 = *(_QWORD *)(a2 + 216);
        v76 = *(_QWORD *)(a2 + 224);
        v77 = *(__m128i **)(a2 + 208);
        *(_QWORD *)(a2 + 224) = v99;
        v78 = v75 - 1;
        if ( v78 >= 0 )
        {
          v79 = v74;
          do
          {
            v80 = _mm_loadu_si128(v77);
            v79 += 16;
            ++v77;
            *(__m128i *)(v79 - 16) = v80;
            v81 = v78-- == 0;
          }
          while ( !v81 );
          v77 = *(__m128i **)(a2 + 208);
        }
        v100 = v74;
        qfree(v77);
        v35 = *(_QWORD *)(a2 + 216);
        *(_QWORD *)(a2 + 208) = v100;
        *(_QWORD *)(a2 + 224) = v76;
      }
      if ( v35 < v34 )
      {
        v68 = _mm_load_si128(&v106);
        do
        {
          v69 = v35++;
          *(__m128i *)(*(_QWORD *)(a2 + 208) + 16 * v69) = v68;
        }
        while ( v34 != v35 );
      }
    }
    else
    {
      if ( v59 < v34 )
      {
        v102 = *(_QWORD *)(a2 + 224);
        v85 = qvector_reserve(v57, 0, v34, 16);
        v86 = *(__m128i **)(a2 + 208);
        v87 = v85;
        v88 = v85;
        v89 = *(_QWORD *)(a2 + 216);
        v90 = *(_QWORD *)(a2 + 224);
        v91 = v86;
        *(_QWORD *)(a2 + 224) = v102;
        v92 = v89 - 1;
        if ( v92 >= 0 )
        {
          do
          {
            v93 = _mm_loadu_si128(v91);
            v88 += 16;
            ++v91;
            *(__m128i *)(v88 - 16) = v93;
            v81 = v92-- == 0;
          }
          while ( !v81 );
          v86 = *(__m128i **)(a2 + 208);
        }
        v105 = v90;
        qfree(v86);
        v35 = *(_QWORD *)(a2 + 216);
        *(_QWORD *)(a2 + 208) = v87;
        *(_QWORD *)(a2 + 224) = v105;
      }
      if ( v35 < v34 )
      {
        do
        {
          v60 = v35++;
          v61 = (_QWORD *)(*(_QWORD *)(a2 + 208) + 16 * v60);
          *v61 = -1;
          v61[1] = 0;
        }
        while ( v34 != v35 );
      }
    }
LABEL_33:
    *(_QWORD *)(a2 + 216) = v34;
LABEL_34:
    if ( v19 )
    {
LABEL_56:
      v20 = v111;
      goto LABEL_10;
    }
    v38 = *(_DWORD *)(a2 + 44) + *(_DWORD *)(a2 + 48) - *(_DWORD *)(a2 + 32);
    v39 = (unsigned int)v38;
    if ( v38 >= 0 )
    {
      v40 = sub_4F6D80(*(__int64 **)(a2 + 192));
      v41 = -1;
      v42 = **(_QWORD **)(a2 + 192) + 48 * v40;
      if ( v110.m128i_i64[0] == 1 )
        v41 = *((_QWORD *)ptr + 1);
      v43 = *(_QWORD *)v42;
      *(_BYTE *)(v42 + 24) = 2;
      *(_QWORD *)(v42 + 8) = 0;
      v44 = *(_QWORD *)(v42 + 16);
      v107.m128i_i64[0] = v39;
      v107.m128i_i64[1] = v41;
      LODWORD(v108) = 0;
      if ( (unsigned __int64)&v107 >= v43 && (unsigned __int64)&v107 < v43 + 24 * v44 )
      {
        if ( !v44 )
        {
          v104 = v41;
          v72 = qvector_reserve(v42, v43, 1, 24);
          v41 = v104;
          v73 = *(_QWORD *)(v42 + 8);
          *(_QWORD *)v42 = v72;
          v43 = v72 + 24 * v73;
        }
        *(_QWORD *)v43 = v39;
        *(_QWORD *)(v43 + 8) = v41;
        *(_DWORD *)(v43 + 16) = 0;
      }
      else
      {
        if ( !v44 )
        {
          v70 = qvector_reserve(v42, v43, 1, 24);
          v71 = *(_QWORD *)(v42 + 8);
          *(_QWORD *)v42 = v70;
          v43 = v70 + 24 * v71;
        }
        v45 = _mm_load_si128(&v107);
        *(_QWORD *)(v43 + 16) = v108;
        *(__m128i *)v43 = v45;
      }
      ++*(_QWORD *)(v42 + 8);
      v46 = *(_QWORD **)(a2 + 200);
      v47 = v46[2];
      v48 = (__int64)(v46 + 1);
      if ( !v47 )
        goto LABEL_74;
      do
      {
        while ( 1 )
        {
          v50 = *(_QWORD *)(v47 + 32);
          if ( v50 < a3 )
            break;
          if ( a3 >= v50 )
          {
            v49 = *(_DWORD *)(v47 + 40);
            if ( v49 == (_DWORD)&stru_10000 || v49 < a5 )
              break;
          }
          v48 = v47;
          v47 = *(_QWORD *)(v47 + 16);
          if ( !v47 )
            goto LABEL_51;
        }
        v47 = *(_QWORD *)(v47 + 24);
      }
      while ( v47 );
LABEL_51:
      if ( v46 + 1 == (_QWORD *)v48
        || (v51 = *(_QWORD *)(v48 + 32), a3 < v51)
        || v51 >= a3 && (v52 = *(_DWORD *)(v48 + 40), a5 < v52) && v52 != (_DWORD)&stru_10000 )
      {
LABEL_74:
        v103 = v46 + 1;
        v98 = v46;
        v62 = operator new(0x40u);
        *(_QWORD *)(v62 + 32) = a3;
        *(_DWORD *)(v62 + 40) = a5;
        v63 = (void *)v62;
        *(_QWORD *)(v62 + 48) = v40;
        *(_QWORD *)(v62 + 56) = 0;
        v65 = sub_4FAC40(v98, v48, v62 + 32, v64);
        if ( v66 )
        {
          if ( v65 || (_QWORD *)v66 == v103 )
          {
            v67 = 1;
          }
          else
          {
            v84 = *(_QWORD *)(v66 + 32);
            v67 = 1;
            if ( a3 >= v84 )
            {
              v67 = 0;
              if ( v84 >= a3 )
                v67 = (*(_DWORD *)(v66 + 40) != (_DWORD)&stru_10000)
                    & (unsigned __int8)((unsigned int)a5 < *(_DWORD *)(v66 + 40));
            }
          }
          std::_Rb_tree_insert_and_rebalance(v67, v63, v66, v103);
          ++v98[5];
        }
        else if ( v63 )
        {
          operator delete(v63, 0x40u);
        }
      }
      goto LABEL_56;
    }
    if ( !under_debugger )
      interr(3359);
LABEL_113:
    BUG();
  }
LABEL_10:
  v21 = ptr;
  v22 = _mm_loadu_si128(&v110);
  *(_BYTE *)(a1 + 24) = v20;
  *(_QWORD *)a1 = v21;
  *(__m128i *)(a1 + 8) = v22;
  return a1;
}
