__int64 __fastcall sub_4E6FC0(__int64 a1, __int64 a2, __int64 a3, signed __int32 a4, int a5, __int64 a6)
{
  unsigned int v7; // esi
  unsigned int v12; // r14d
  __int64 func; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rcx
  char v19; // al
  void *v20; // rdx
  __m128i v21; // xmm0
  int v23; // edx
  int v24; // edi
  bool (__fastcall *v25)(__int64, __int64, int); // r8
  __int64 (*v26)(); // r8
  int v27; // eax
  int v28; // edx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // r15d
  __int64 v38; // r8
  unsigned int v39; // r9d
  __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  __int64 v42; // rdx
  _QWORD *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // eax
  bool (__fastcall *v50)(__int64, __int64, int); // rcx
  __int64 (*v51)(); // rax
  int v52; // eax
  bool v53; // al
  __int64 v54; // rdi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  void *v60; // r14
  __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r9
  __m128i *v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // rsi
  __m128i v74; // xmm0
  bool v75; // cf
  bool v76; // al
  bool v77; // dl
  __int64 v78; // rax
  __m128i *v79; // rdi
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r10
  const __m128i *v84; // rsi
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // [rsp+8h] [rbp-A0h]
  __int64 v88; // [rsp+8h] [rbp-A0h]
  __int64 v89; // [rsp+8h] [rbp-A0h]
  __int64 v90; // [rsp+8h] [rbp-A0h]
  _DWORD *v92; // [rsp+10h] [rbp-98h]
  _DWORD *v93; // [rsp+10h] [rbp-98h]
  __int64 v94; // [rsp+10h] [rbp-98h]
  __int64 v95; // [rsp+10h] [rbp-98h]
  __int64 v96; // [rsp+10h] [rbp-98h]
  __int64 v97; // [rsp+10h] [rbp-98h]
  __int64 v98; // [rsp+10h] [rbp-98h]
  __int64 v99; // [rsp+10h] [rbp-98h]
  unsigned int v100; // [rsp+18h] [rbp-90h]
  __int64 v101; // [rsp+18h] [rbp-90h]
  __int64 v102; // [rsp+18h] [rbp-90h]
  __m128i v103; // [rsp+20h] [rbp-88h] BYREF
  __m128i v104; // [rsp+30h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i v106; // [rsp+48h] [rbp-60h] BYREF
  char v107; // [rsp+58h] [rbp-50h]
  unsigned __int64 v108; // [rsp+68h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  if ( a4 == 0x10000 )
  {
    if ( !under_debugger )
      interr(3106);
    goto LABEL_107;
  }
  v7 = HIDWORD(a3);
  if ( HIDWORD(a3) == -1 )
    v7 = a3;
  v12 = a3;
  func = get_func(v7);
  v14 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a2 + 24) = func;
  *(_QWORD *)(a2 + 32) = v14;
  v15 = (unsigned int)a5;
  v16 = *(_DWORD **)(qword_2CA1698 + 1480);
  v17 = *(_DWORD *)(a2 + 48);
  if ( v17 )
  {
    if ( (unsigned int)(a5 + 1) > 1 )
    {
      if ( !under_debugger )
        interr(3284);
      goto LABEL_107;
    }
    v23 = *(_DWORD *)(a2 + 44);
    if ( !*(_BYTE *)(a2 + 40) )
    {
      v24 = v16[157];
      if ( v24 > v23 )
      {
        if ( a5 == -1 )
        {
LABEL_21:
          *(_DWORD *)(a2 + 44) = v24;
          v23 = v24;
          goto LABEL_22;
        }
        if ( a4 >= 0 )
        {
          v25 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 56LL);
          if ( v25 != sub_4DD1C0 )
          {
            v90 = *(_QWORD *)(qword_2CA1698 + 1480);
            v76 = v25(a2, v7, (unsigned __int16)a4);
            v14 = *(_QWORD *)(a2 + 184);
            v29 = v90;
            v77 = v76;
            v17 = *(_DWORD *)(a2 + 48);
            if ( v77 )
              goto LABEL_20;
            goto LABEL_94;
          }
          v26 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
          if ( v26 != sub_4DC700 )
          {
            v88 = *(_QWORD *)(qword_2CA1698 + 1480);
            v27 = ((__int64 (__fastcall *)(__int64, _QWORD))v26)(a2, v7);
            v14 = *(_QWORD *)(a2 + 184);
            v28 = v27;
            v29 = v88;
            v17 = *(_DWORD *)(a2 + 48);
            if ( (unsigned __int16)a4 == v28 )
            {
LABEL_20:
              v24 = *(_DWORD *)(v29 + 628);
              goto LABEL_21;
            }
LABEL_94:
            v23 = *(_DWORD *)(a2 + 44);
          }
        }
      }
    }
LABEL_22:
    if ( !*(_QWORD *)(a2 + 56) && a6 )
    {
      *(_QWORD *)(a2 + 56) = a6;
      if ( v23 + v17 >= v14 )
        goto LABEL_9;
    }
    else if ( v23 + v17 >= v14 )
    {
      goto LABEL_9;
    }
    *(_BYTE *)(a1 + 24) = 2;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v30 = qvector_reserve(a1, 0, 1, 16);
    v31 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v30;
    v32 = 16 * v31 + v30;
    *(_QWORD *)v32 = 0xFFFFFFFFLL;
    *(_DWORD *)(v32 + 8) = a3;
    *(_DWORD *)(v32 + 12) = 0;
    ++*(_QWORD *)(a1 + 8);
    return a1;
  }
  if ( a5 < -1 )
  {
    if ( !under_debugger )
      interr(3283);
    goto LABEL_107;
  }
  *(_QWORD *)(a2 + 56) = a6;
  *(_BYTE *)(a2 + 40) = a5 > 0;
  if ( a5 > 0 )
    goto LABEL_7;
  if ( a5 )
    goto LABEL_62;
  if ( a4 >= 0 )
  {
    v50 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a2 + 56LL);
    if ( v50 == sub_4DD1C0 )
    {
      v51 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
      if ( v51 != sub_4DC700 )
      {
        v92 = v16;
        v52 = ((__int64 (__fastcall *)(__int64))v51)(a2);
        v16 = v92;
        if ( (unsigned __int16)a4 == v52 )
          goto LABEL_62;
      }
    }
    else
    {
      v93 = v16;
      v53 = v50(a2, v7, (unsigned __int16)a4);
      v16 = v93;
      if ( v53 )
      {
LABEL_62:
        v15 = (unsigned int)v16[157];
        goto LABEL_7;
      }
    }
  }
  v15 = (unsigned int)v16[156];
LABEL_7:
  *(_DWORD *)(a2 + 44) = v15;
  v18 = (int)v16[158];
  if ( v18 < *(_QWORD *)(*(_QWORD *)(a2 + 168) + 40LL) )
    sub_4E3B40(a2, v7, v16[158], v18, v15, (int)v16);
LABEL_9:
  v87 = *(_QWORD *)(a2 + 56);
  sub_4E6AA0((__int64)&ptr, a2, a3, a4);
  v19 = v107;
  if ( v107 == 2 )
  {
    v33 = *(_QWORD *)(a2 + 32);
    v34 = *(_QWORD *)(a2 + 184);
    if ( v33 >= v34 )
    {
      if ( v33 == v34 )
        goto LABEL_34;
      v103.m128i_i64[0] = -1;
      v54 = a2 + 176;
      v103.m128i_i32[2] = 0;
    }
    else
    {
      do
      {
        v35 = *(_QWORD *)(*(_QWORD *)(a2 + 176) + 16 * v33);
        v36 = **(_QWORD **)(a2 + 160) + 48 * v35;
        if ( !*(_BYTE *)(v36 + 40) && *(_QWORD *)(v36 + 32) )
        {
          sub_4E4050(a2, v35);
          v34 = *(_QWORD *)(a2 + 184);
        }
        ++v33;
      }
      while ( v33 < v34 );
      v33 = *(_QWORD *)(a2 + 32);
      if ( v33 == v34 )
        goto LABEL_34;
      v103.m128i_i64[0] = -1;
      v103.m128i_i32[2] = 0;
      if ( v33 < v34 )
        goto LABEL_33;
      v54 = a2 + 176;
    }
    v55 = *(_QWORD *)(a2 + 176);
    v56 = *(_QWORD *)(a2 + 192);
    if ( (unsigned __int64)&v103 < v55 || (unsigned __int64)&v103 >= 16 * v56 + v55 )
    {
      if ( v56 < v33 )
      {
        v96 = *(_QWORD *)(a2 + 192);
        v68 = qvector_reserve(v54, 0, v33, 16);
        v69 = *(_QWORD *)(a2 + 184);
        v70 = *(_QWORD *)(a2 + 192);
        v71 = *(__m128i **)(a2 + 176);
        *(_QWORD *)(a2 + 192) = v96;
        v72 = v69 - 1;
        if ( v72 >= 0 )
        {
          v73 = v68;
          do
          {
            v74 = _mm_loadu_si128(v71);
            v73 += 16;
            ++v71;
            *(__m128i *)(v73 - 16) = v74;
            v75 = v72-- == 0;
          }
          while ( !v75 );
          v71 = *(__m128i **)(a2 + 176);
        }
        v101 = v70;
        v97 = v68;
        qfree(v71);
        v34 = *(_QWORD *)(a2 + 184);
        *(_QWORD *)(a2 + 176) = v97;
        *(_QWORD *)(a2 + 192) = v101;
      }
      if ( v34 < v33 )
      {
        v62 = _mm_load_si128(&v103);
        do
        {
          v63 = v34++;
          *(__m128i *)(*(_QWORD *)(a2 + 176) + 16 * v63) = v62;
        }
        while ( v33 != v34 );
      }
    }
    else
    {
      if ( v56 < v33 )
      {
        v98 = *(_QWORD *)(a2 + 192);
        v78 = qvector_reserve(v54, 0, v33, 16);
        v79 = *(__m128i **)(a2 + 176);
        v80 = v78;
        v81 = v78;
        v82 = *(_QWORD *)(a2 + 184);
        v83 = *(_QWORD *)(a2 + 192);
        v84 = v79;
        *(_QWORD *)(a2 + 192) = v98;
        v85 = v82 - 1;
        if ( v85 >= 0 )
        {
          do
          {
            v86 = _mm_loadu_si128(v84);
            v81 += 16;
            ++v84;
            *(__m128i *)(v81 - 16) = v86;
            v75 = v85-- == 0;
          }
          while ( !v75 );
          v79 = *(__m128i **)(a2 + 176);
        }
        v102 = v83;
        v99 = v80;
        qfree(v79);
        v34 = *(_QWORD *)(a2 + 184);
        *(_QWORD *)(a2 + 176) = v99;
        *(_QWORD *)(a2 + 192) = v102;
      }
      if ( v34 < v33 )
      {
        do
        {
          v57 = v34++;
          v58 = *(_QWORD *)(a2 + 176) + 16 * v57;
          *(_QWORD *)v58 = -1;
          *(_DWORD *)(v58 + 8) = 0;
        }
        while ( v33 != v34 );
      }
    }
LABEL_33:
    *(_QWORD *)(a2 + 184) = v33;
LABEL_34:
    if ( v87 )
    {
LABEL_56:
      v19 = v107;
      goto LABEL_10;
    }
    v37 = *(_DWORD *)(a2 + 44) + *(_DWORD *)(a2 + 48) - *(_DWORD *)(a2 + 32);
    if ( v37 >= 0 )
    {
      v38 = sub_4DFFA0(*(__int64 **)(a2 + 160));
      v39 = -1;
      v40 = **(_QWORD **)(a2 + 160) + 48 * v38;
      if ( v106.m128i_i64[0] == 1 )
        v39 = *((_DWORD *)ptr + 2);
      v41 = *(_QWORD *)v40;
      *(_BYTE *)(v40 + 24) = 2;
      *(_QWORD *)(v40 + 8) = 0;
      v42 = *(_QWORD *)(v40 + 16);
      v104.m128i_i64[0] = (unsigned int)v37;
      v104.m128i_i64[1] = v39;
      if ( (unsigned __int64)&v104 >= v41 && (unsigned __int64)&v104 < v41 + 16 * v42 )
      {
        if ( !v42 )
        {
          v100 = v39;
          v95 = v38;
          v66 = qvector_reserve(v40, v41, 1, 16);
          v39 = v100;
          v38 = v95;
          v67 = *(_QWORD *)(v40 + 8);
          *(_QWORD *)v40 = v66;
          v41 = v66 + 16 * v67;
        }
        *(_QWORD *)v41 = (unsigned int)v37;
        *(_DWORD *)(v41 + 8) = v39;
        *(_DWORD *)(v41 + 12) = 0;
      }
      else
      {
        if ( !v42 )
        {
          v94 = v38;
          v64 = qvector_reserve(v40, v41, 1, 16);
          v38 = v94;
          v65 = *(_QWORD *)(v40 + 8);
          *(_QWORD *)v40 = v64;
          v41 = v64 + 16 * v65;
        }
        *(__m128i *)v41 = _mm_load_si128(&v104);
      }
      ++*(_QWORD *)(v40 + 8);
      v43 = *(_QWORD **)(a2 + 168);
      v44 = v43[2];
      v45 = (__int64)(v43 + 1);
      if ( !v44 )
        goto LABEL_74;
      do
      {
        while ( 1 )
        {
          v47 = *(_DWORD *)(v44 + 32);
          if ( v47 < v12 )
            break;
          if ( v12 >= v47 )
          {
            v46 = *(_DWORD *)(v44 + 36);
            if ( v46 == 0x10000 || v46 < a4 )
              break;
          }
          v45 = v44;
          v44 = *(_QWORD *)(v44 + 16);
          if ( !v44 )
            goto LABEL_51;
        }
        v44 = *(_QWORD *)(v44 + 24);
      }
      while ( v44 );
LABEL_51:
      if ( v43 + 1 == (_QWORD *)v45
        || (v48 = *(_DWORD *)(v45 + 32), (unsigned int)a3 < v48)
        || v48 >= (unsigned int)a3 && (v49 = *(_DWORD *)(v45 + 36), a4 < v49) && v49 != 0x10000 )
      {
LABEL_74:
        v89 = v38;
        v59 = operator new(0x38u);
        *(_DWORD *)(v59 + 48) = 0;
        v60 = (void *)v59;
        *(_QWORD *)(v59 + 40) = v89;
        *(_QWORD *)(v59 + 32) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)).m128i_u64[0];
        sub_4E4F90(v43, v45, (unsigned int *)(v59 + 32));
        if ( v61 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++v43[5];
        }
        else if ( v60 )
        {
          operator delete(v60, 0x38u);
        }
      }
      goto LABEL_56;
    }
    if ( !under_debugger )
      interr(3359);
LABEL_107:
    BUG();
  }
LABEL_10:
  v20 = ptr;
  v21 = _mm_loadu_si128(&v106);
  *(_BYTE *)(a1 + 24) = v19;
  *(_QWORD *)a1 = v20;
  *(__m128i *)(a1 + 8) = v21;
  return a1;
}

