__int64 __fastcall sub_BA4020(__int64 *a1, double *a2, const __m128i *a3)
{
  char **exception; // r12
  double v6; // rcx
  unsigned __int64 v7; // r12
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v11; // r15
  unsigned __int64 v15; // r12
  int v16; // eax
  unsigned __int64 v18; // r15
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 *v24; // rdx
  _QWORD *v25; // r14
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  _QWORD *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 result; // rax
  unsigned __int64 v34; // r13
  int v35; // eax
  unsigned int v36; // r12d
  unsigned __int64 i; // r14
  bool v40; // zf
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned int v52; // r9d
  __int64 v53; // rdi
  unsigned int v54; // edi
  unsigned int v61; // r9d
  size_t v62; // rsi
  _DWORD *v63; // rax
  __int64 v64; // rsi
  int v65; // r9d
  _QWORD *v66; // rdx
  double v68[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v69; // [rsp+18h] [rbp-70h] BYREF
  __int64 *v70; // [rsp+20h] [rbp-68h]
  const __m128i *v71; // [rsp+28h] [rbp-60h]
  char *v72[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(double *)((char *)&stru_18290.r_offset + (_QWORD)a1);
  v7 = *((_QWORD *)a2 + 13);
  *(unsigned __int64 *)((char *)&stru_18290.r_offset + (_QWORD)a1) = (unsigned __int64)a2;
  v68[1] = v6;
  v8 = a1[12371];
  a1[12371] = (__int64)a3;
  v69 = v8;
  if ( v7 && a3[6].m128i_i64[0] )
  {
    if ( (v7 & 1) != 0 )
    {
      LODWORD(v68[0]) = 0;
    }
    else
    {
      v9 = 1;
      do
      {
        v7 >>= 1;
        LODWORD(v68[0]) = v9++;
      }
      while ( (v7 & 1) == 0 );
    }
    while ( !(unsigned __int8)sub_8E6FA0(a1[1]) )
    {
      _R13 = a3[6].m128i_i64[0];
      if ( _R13 )
      {
        v11 = a3[6].m128i_u64[0];
        if ( (_R13 & 1) == 0 )
        {
          do
            v11 >>= 1;
          while ( (v11 & 1) == 0 );
        }
        __asm { tzcnt   r13, r13 }
        while ( 1 )
        {
          sub_BA34D0((__int64)a1, (__int64)a2, a1[64 * (unsigned __int64)LODWORD(v68[0]) + 8268 + (unsigned int)_R13]);
          _RDX = v11 >> 1;
          if ( !(v11 >> 1) )
            break;
          v11 >>= 1;
          if ( (_RDX & 1) == 0 )
          {
            do
              v11 >>= 1;
            while ( (v11 & 1) == 0 );
          }
          __asm { tzcnt   rdx, rdx }
          LODWORD(_R13) = _R13 + _RDX + 1;
        }
      }
      _RAX = v7 >> 1;
      if ( !(v7 >> 1) )
        break;
      v7 >>= 1;
      if ( (_RAX & 1) == 0 )
      {
        do
          v7 >>= 1;
        while ( (v7 & 1) == 0 );
      }
      __asm { tzcnt   rax, rax }
      LODWORD(v68[0]) += _RAX + 1;
    }
  }
  v15 = a3[6].m128i_u64[1];
  if ( !v15 )
  {
    v68[0] = a2[13];
    goto LABEL_30;
  }
  if ( *((_QWORD *)a2 + 12) )
  {
    if ( (v15 & 1) != 0 )
    {
      LODWORD(v68[0]) = 0;
    }
    else
    {
      v16 = 1;
      do
      {
        v15 >>= 1;
        LODWORD(v68[0]) = v16++;
      }
      while ( (v15 & 1) == 0 );
    }
    while ( !(unsigned __int8)sub_8E6FA0(a1[1]) )
    {
      _R13 = *((_QWORD *)a2 + 12);
      if ( _R13 )
      {
        v18 = *((_QWORD *)a2 + 12);
        if ( (_R13 & 1) == 0 )
        {
          do
            v18 >>= 1;
          while ( (v18 & 1) == 0 );
        }
        __asm { tzcnt   r13, r13 }
        while ( 1 )
        {
          sub_BA34D0((__int64)a1, (__int64)a3, a1[64 * (unsigned __int64)LODWORD(v68[0]) + 8268 + (unsigned int)_R13]);
          _RDX = v18 >> 1;
          if ( !(v18 >> 1) )
            break;
          v18 >>= 1;
          if ( (_RDX & 1) == 0 )
          {
            do
              v18 >>= 1;
            while ( (v18 & 1) == 0 );
          }
          __asm { tzcnt   rdx, rdx }
          LODWORD(_R13) = _R13 + _RDX + 1;
        }
      }
      _RAX = v15 >> 1;
      if ( !(v15 >> 1) )
        break;
      v15 >>= 1;
      if ( (_RAX & 1) == 0 )
      {
        do
          v15 >>= 1;
        while ( (v15 & 1) == 0 );
      }
      __asm { tzcnt   rax, rax }
      LODWORD(v68[0]) += _RAX + 1;
    }
    v34 = *((_QWORD *)a2 + 13);
    if ( v34 )
    {
      if ( !a3[6].m128i_i64[1] )
      {
        v68[0] = a2[13];
        goto LABEL_30;
      }
LABEL_35:
      if ( (v34 & 1) != 0 )
      {
        v36 = 0;
      }
      else
      {
        v35 = 1;
        do
        {
          v34 >>= 1;
          v36 = v35++;
        }
        while ( (v34 & 1) == 0 );
      }
      while ( 1 )
      {
        if ( (unsigned __int8)sub_8E6FA0(a1[1]) )
          goto LABEL_82;
        _R15 = a3[6].m128i_i64[1];
        if ( _R15 )
          break;
LABEL_59:
        _RAX = v34 >> 1;
        if ( !(v34 >> 1) )
        {
LABEL_82:
          v68[0] = a2[13];
          goto LABEL_30;
        }
        v34 >>= 1;
        if ( (_RAX & 1) == 0 )
        {
          do
            v34 >>= 1;
          while ( (v34 & 1) == 0 );
        }
        __asm { tzcnt   rax, rax }
        v36 += _RAX + 1;
      }
      i = a3[6].m128i_u64[1];
      if ( (_R15 & 1) == 0 )
      {
        do
          i >>= 1;
        while ( (i & 1) == 0 );
      }
      __asm { tzcnt   r15, r15 }
      v40 = (_DWORD)_R15 == v36;
      if ( (unsigned int)_R15 >= v36 )
      {
LABEL_43:
        if ( v40 )
        {
          v41 = *((_QWORD *)a2 + 7);
          if ( v41
            && ((v42 = *(_DWORD *)(v41 - 4), (v43 = a3[3].m128i_i64[1]) == 0) ? (v44 = 0) : (v44 = *(_DWORD *)(v43 - 4)),
                v44 < v42) )
          {
            sub_BA34D0((__int64)a1, (__int64)a3, a1[128 * (unsigned __int64)v36 + 76 + 2 * (unsigned int)_R15]);
          }
          else
          {
            sub_BA34D0((__int64)a1, (__int64)a2, a1[128 * (unsigned __int64)v36 + 76 + 2 * (unsigned int)_R15]);
          }
          goto LABEL_49;
        }
        v48 = (__int64)a2;
        v47 = (__int64)a3;
        v49 = (unsigned int)_R15;
        v50 = v36;
        goto LABEL_54;
      }
      while ( 1 )
      {
        v47 = (__int64)a2;
        v48 = (__int64)a3;
        v49 = v36;
        v50 = (unsigned int)_R15;
LABEL_54:
        v51 = *(_QWORD *)(v48 + 56);
        if ( v51
          && ((v52 = *(_DWORD *)(v51 - 4), (v53 = *(_QWORD *)(v47 + 56)) == 0)
            ? (v54 = 0)
            : (v54 = *(_DWORD *)(v53 - 4)),
              v54 < v52) )
        {
          sub_BA34D0((__int64)a1, v47, a1[128 * v50 + 77 + 2 * v49]);
          _RAX = i >> 1;
          if ( !(i >> 1) )
            goto LABEL_59;
        }
        else
        {
          sub_BA34D0((__int64)a1, v48, a1[128 * v50 + 76 + 2 * v49]);
LABEL_49:
          _RAX = i >> 1;
          if ( !(i >> 1) )
            goto LABEL_59;
        }
        for ( i = _RAX; (i & 1) == 0; i >>= 1 )
          ;
        __asm { tzcnt   rax, rax }
        LODWORD(_R15) = _R15 + _RAX + 1;
        v40 = (_DWORD)_R15 == v36;
        if ( (unsigned int)_R15 >= v36 )
          goto LABEL_43;
      }
    }
    v68[0] = 0.0;
  }
  else
  {
    v34 = *((_QWORD *)a2 + 13);
    if ( v34 )
      goto LABEL_35;
    v68[0] = 0.0;
  }
LABEL_30:
  v22 = a3[6].m128i_i64[0];
  v71 = a3 + 6;
  v70 = (__int64 *)v22;
  v23 = (_QWORD *)sub_180C100(a1 + 6, 24);
  v24 = v70;
  v25 = v23;
  *v23 = off_1C56EA8;
  v23[2] = v24;
  v26 = (_QWORD *)a1[4];
  v23[1] = a3 + 6;
  if ( v26 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v61 = (3 * v27 + 1) >> 1;
      v62 = 8 * v61 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v62 || v27 >= v61 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2(v72);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v72);
        sub_233E40((__int64)v72);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v70) = (3 * v27 + 1) >> 1;
      v63 = (_DWORD *)sub_186B300(v26 - 1, v62);
      v64 = (unsigned int)v63[1];
      v65 = (int)v70;
      v26 = v63 + 2;
      a1[4] = (__int64)(v63 + 2);
      *v63 = v65;
      LODWORD(v63) = v64;
      v30 = &v26[v64];
      v29 = (_DWORD)v63 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    v66 = (_QWORD *)sub_186B270(0x18u);
    *v66 = 2;
    v29 = 1;
    v26 = v66 + 1;
    a1[4] = (__int64)v26;
    v30 = v26;
  }
  *v30 = v25;
  v31 = a3[6].m128i_i64[1];
  *((_DWORD *)v26 - 1) = v29;
  v70 = a1 + 4;
  v32 = sub_180C100(a1 + 6, 24);
  *(_QWORD *)v32 = off_1C56EA8;
  *(_QWORD *)(v32 + 16) = v31;
  *(_QWORD *)(v32 + 8) = (char *)a3 + 104;
  v72[0] = (char *)v32;
  result = sub_B9B610(a1 + 4, v72);
  a3[6] = _mm_or_si128((__m128i)_mm_loadh_ps(v68), _mm_loadu_si128(a3 + 6));
  *(__m128 *)((char *)&stru_18290.r_offset + (_QWORD)a1) = _mm_loadh_ps((const double *)&v69);
  return result;
}

