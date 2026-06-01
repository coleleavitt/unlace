__int64 __fastcall sub_799310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r13
  char i; // dl
  __int64 v8; // rax
  const __m128i **v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // r14d
  const __m128i *v14; // rsi
  __int16 v15; // ax
  __int8 *v16; // r10
  size_t v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdx
  _BYTE *v24; // r13
  size_t v25; // rbx
  double *v26; // rax
  double *v27; // rdi
  size_t v28; // rdx
  double v29; // rcx
  __int16 v31; // ax
  __int64 v32; // rax
  signed int v33; // eax
  __int64 v34; // rax
  signed int v35; // eax
  void *v36; // rax
  __int64 *v37; // rdi
  double *v38; // rdi
  unsigned int *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rdi
  unsigned int n; // [rsp+20h] [rbp-A8h]
  size_t na; // [rsp+20h] [rbp-A8h]
  __int8 *src; // [rsp+28h] [rbp-A0h]
  __int64 *v51; // [rsp+30h] [rbp-98h]
  __m128i v52; // [rsp+38h] [rbp-90h] BYREF
  void *v53; // [rsp+50h] [rbp-78h]
  __m128i v54; // [rsp+58h] [rbp-70h] BYREF
  void *v55; // [rsp+70h] [rbp-58h]
  size_t v56; // [rsp+78h] [rbp-50h]
  double v57[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = a1;
  for ( i = *(_BYTE *)(a1 + 28) & 0x7F; i == 69; i = *(_BYTE *)(v5 + 28) & 0x7F )
    v5 = *(_QWORD *)(v5 + 48);
  v52.m128i_i8[8] = 0;
  v51 = &v52.m128i_i64[1];
  v52.m128i_i64[0] = 0;
  if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
  {
    v13 = 0;
    if ( !a2 )
      return v13;
LABEL_61:
    v13 = 0;
    goto LABEL_62;
  }
  v8 = v5;
  if ( i )
    v8 = sub_793320(v5);
  v9 = nullptr;
  v10 = sub_6BB160(*(_QWORD *)(v8 + 88), v5);
  v11 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
  {
    v12 = v5;
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0 )
      v12 = sub_793320(v5);
    v9 = (const __m128i **)*sub_6BB160(*(_QWORD *)(v12 + 88), v5);
  }
  if ( (const __m128i **)v11 == v9 )
  {
    v13 = 0;
    if ( !a2 )
      goto LABEL_44;
    goto LABEL_61;
  }
  v13 = 0;
  if ( !a2 )
  {
    v14 = *v9;
    v31 = (*v9)[2].m128i_i16[0];
    if ( v31 != 193 )
      goto LABEL_52;
LABEL_48:
    if ( v13 <= 1 )
      v13 = 2;
    while ( 1 )
    {
      do
      {
        if ( (const __m128i **)v11 == ++v9 )
          goto LABEL_44;
        v14 = *v9;
        v31 = (*v9)[2].m128i_i16[0];
        if ( v31 == 193 )
          goto LABEL_48;
LABEL_52:
        if ( v31 == 376 )
          goto LABEL_53;
      }
      while ( v31 != 136 );
      v34 = (*(_BYTE *)(v5 + 28) & 0x7F) != 0 ? sub_793320(v5) : v5;
      v35 = sub_7939B0(*(_QWORD *)(v34 + 88), v14, 0, a3, a4);
      if ( v35 == 3 )
        break;
      if ( (int)v13 < v35 )
        v13 = v35;
    }
LABEL_81:
    if ( a5 )
    {
      v39 = *(unsigned int **)(v14[2].m128i_i64[1] + 16);
      v40 = *v39;
      *a5 = v39 + 4;
      a5[1] = v40;
    }
LABEL_53:
    v13 = 3;
    goto LABEL_44;
  }
  v14 = *v9;
  v15 = (*v9)[2].m128i_i16[0];
  if ( v15 != 193 )
    goto LABEL_31;
  while ( 1 )
  {
    if ( v13 > 1 )
      goto LABEL_29;
    v16 = (__int8 *)v14[2].m128i_i64[1];
    v17 = v14[2].m128i_u32[1];
    v53 = &v54.m128i_u64[1];
    if ( v16 )
    {
      v55 = (void *)v17;
      if ( v17 > 0xF )
      {
        src = v16;
        na = v17;
        v36 = (void *)std::string::_M_create();
        v17 = na;
        v16 = src;
        v53 = v36;
        v37 = (__int64 *)v36;
        v54.m128i_i64[1] = (__int64)v55;
        goto LABEL_74;
      }
    }
    else
    {
      if ( v17 )
        goto LABEL_116;
      v55 = nullptr;
    }
    if ( v17 == 1 )
    {
      v54.m128i_i8[8] = *v16;
LABEL_18:
      v18 = &v54.m128i_i64[1];
      goto LABEL_19;
    }
    if ( !v17 )
      goto LABEL_18;
    v37 = &v54.m128i_i64[1];
LABEL_74:
    memcpy(v37, v16, v17);
    v17 = (size_t)v55;
    v18 = (__int64 *)v53;
LABEL_19:
    v54.m128i_i64[0] = v17;
    *((_BYTE *)v18 + v17) = 0;
    v19 = v51;
    v20 = v51;
    if ( v51 == (__int64 *)&v52.m128i_u64[1] )
    {
      if ( v53 != &v54.m128i_u64[1] )
      {
        v51 = (__int64 *)v53;
        v52 = _mm_loadu_si128(&v54);
LABEL_92:
        v53 = &v54.m128i_u64[1];
        v19 = &v54.m128i_i64[1];
        goto LABEL_23;
      }
      v21 = v54.m128i_i64[0];
      v22 = v54.m128i_i64[0];
    }
    else
    {
      v21 = v54.m128i_i64[0];
      v22 = v54.m128i_i64[0];
      if ( v53 != &v54.m128i_u64[1] )
      {
        v51 = (__int64 *)v53;
        v23 = v52.m128i_i64[1];
        v52 = (__m128i)_mm_loadh_ps((const double *)&v54.m128i_i64[1]);
        if ( v19 )
        {
          v53 = v19;
          v54.m128i_i64[1] = v23;
          goto LABEL_23;
        }
        goto LABEL_92;
      }
    }
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        *(_BYTE *)v51 = v54.m128i_i8[8];
        v22 = v54.m128i_i64[0];
        v19 = v51;
        goto LABEL_104;
      }
      if ( (unsigned int)v21 >= 8 )
      {
        *v51 = v54.m128i_i64[1];
        *(__int64 *)((char *)v51 + (unsigned int)v21 - 8) = *(__int64 *)((char *)v54.m128i_i64 + (unsigned int)v21);
        v41 = (unsigned __int64)(v51 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (((_DWORD)v21 + (_DWORD)v51 - (_DWORD)v41) & 0xFFFFFFF8) >= 8 )
        {
          v42 = (v21 + (_DWORD)v51 - v41) & 0xFFFFFFF8;
          v43 = 0;
          do
          {
            v44 = v43;
            v43 += 8;
            *(_QWORD *)(v41 + v44) = *(_QWORD *)((char *)&v54.m128i_u64[1] - ((char *)v51 - v41) + v44);
          }
          while ( v43 < v42 );
        }
LABEL_102:
        v20 = v51;
        v21 = v54.m128i_i64[0];
      }
      else if ( (v21 & 4) != 0 )
      {
        *(_DWORD *)v51 = v54.m128i_i32[2];
        *(_DWORD *)((char *)v51 + (unsigned int)v21 - 4) = *(__int32 *)((char *)&v54.m128i_i32[1] + (unsigned int)v21);
        v20 = v51;
        v21 = v54.m128i_i64[0];
      }
      else if ( (_DWORD)v21 )
      {
        *(_BYTE *)v51 = v54.m128i_i8[8];
        if ( (v21 & 2) == 0 )
          goto LABEL_102;
        *(_WORD *)((char *)v51 + (unsigned int)v21 - 2) = *(__int16 *)((char *)&v54.m128i_i16[3] + (unsigned int)v21);
        v20 = v51;
        v21 = v54.m128i_i64[0];
      }
      v22 = v21;
      v19 = v20;
    }
LABEL_104:
    v52.m128i_i64[0] = v22;
    *((_BYTE *)v19 + v22) = 0;
    v19 = (__int64 *)v53;
LABEL_23:
    v54.m128i_i64[0] = 0;
    *(_BYTE *)v19 = 0;
    if ( v53 != &v54.m128i_u64[1] )
      operator delete(v53, v54.m128i_i64[1] + 1);
    if ( v9 + 1 == (const __m128i **)v11 )
      break;
    v14 = v9[1];
    v15 = v14[2].m128i_i16[0];
    if ( v15 != 193 )
    {
      ++v9;
      v13 = 2;
      goto LABEL_31;
    }
    v9 += 2;
    if ( (const __m128i **)v11 == v9 )
      break;
    v14 = *v9;
    v13 = 2;
    v15 = (*v9)[2].m128i_i16[0];
    if ( v15 != 193 )
    {
LABEL_31:
      if ( v15 == 376 )
      {
        v24 = (_BYTE *)v14[2].m128i_i64[1];
        v25 = v14[2].m128i_u32[1];
        v55 = v57;
        if ( !v24 && v25 )
LABEL_116:
          std::__throw_logic_error("basic_string: construction from null is not valid");
        v53 = (void *)v25;
        if ( v25 > 0xF )
        {
          v55 = (void *)std::string::_M_create();
          v38 = (double *)v55;
          *(_QWORD *)&v57[0] = v53;
        }
        else
        {
          if ( v25 == 1 )
          {
            LOBYTE(v57[0]) = *v24;
            goto LABEL_37;
          }
          if ( !v25 )
          {
LABEL_37:
            v26 = v57;
            goto LABEL_38;
          }
          v38 = v57;
        }
        memcpy(v38, v24, v25);
        v25 = (size_t)v53;
        v26 = (double *)v55;
LABEL_38:
        v56 = v25;
        *((_BYTE *)v26 + v25) = 0;
        v27 = *(double **)a2;
        v28 = v56;
        if ( *(_QWORD *)a2 == a2 + 16 )
        {
          if ( v55 != v57 )
          {
            *(_QWORD *)a2 = v55;
            *(__m128 *)(a2 + 8) = _mm_loadh_ps(v57);
LABEL_79:
            v55 = v57;
            v27 = v57;
            goto LABEL_42;
          }
        }
        else if ( v55 != v57 )
        {
          v29 = *(double *)(a2 + 16);
          *(_QWORD *)a2 = v55;
          *(__m128 *)(a2 + 8) = _mm_loadh_ps(v57);
          if ( v27 )
          {
            v55 = v27;
            v57[0] = v29;
            goto LABEL_42;
          }
          goto LABEL_79;
        }
        if ( v56 )
        {
          if ( v56 == 1 )
            *(_BYTE *)v27 = LOBYTE(v57[0]);
          else
            memcpy(v27, v57, v56);
          v28 = v56;
          v27 = *(double **)a2;
        }
        *(_QWORD *)(a2 + 8) = v28;
        *((_BYTE *)v27 + v28) = 0;
        v27 = (double *)v55;
LABEL_42:
        v56 = 0;
        *(_BYTE *)v27 = 0;
        if ( v55 != v57 )
        {
          v13 = 3;
          operator delete(v55, *(_QWORD *)&v57[0] + 1LL);
          goto LABEL_44;
        }
        goto LABEL_53;
      }
      if ( v15 == 136 )
      {
        v32 = v5;
        if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0 )
          v32 = sub_793320(v5);
        v33 = sub_7939B0(*(_QWORD *)(v32 + 88), v14, a2, a3, a4);
        if ( v33 == 3 )
          goto LABEL_81;
        n = v33;
        if ( v33 > (int)v13 )
        {
          std::string::swap();
          v13 = n;
        }
      }
    }
LABEL_29:
    if ( (const __m128i **)v11 == ++v9 )
      goto LABEL_62;
    v14 = *v9;
    v15 = (*v9)[2].m128i_i16[0];
    if ( v15 != 193 )
      goto LABEL_31;
  }
  v13 = 2;
LABEL_62:
  std::string::swap();
LABEL_44:
  if ( v51 != (__int64 *)&v52.m128i_u64[1] )
    operator delete(v51, v52.m128i_i64[1] + 1);
  return v13;
}

