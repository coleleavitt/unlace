const char *__fastcall clang_getDeclObjCTypeEncoding(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  int v21; // eax
  __int64 *v22; // rdx
  __int64 *v23; // r8
  __int64 v24; // rax
  void *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  void *v28; // r12
  __int64 v29; // rdx
  unsigned __int64 v30; // rsi
  int v31; // edx
  char *v32; // r8
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 *v37; // r8
  __int64 v38; // rsi
  void *v39; // rax
  unsigned __int64 v40; // rsi
  int v41; // edx
  char *v42; // r8
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int8 v49; // dl
  unsigned __int64 v50; // rsi
  char *v51; // rdi
  unsigned int v52; // edx
  unsigned int v53; // eax
  __int64 v54; // r8
  __m128i v55; // [rsp+0h] [rbp-88h]
  __m128i v56; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+20h] [rbp-68h] BYREF
  __m128i n; // [rsp+28h] [rbp-60h] BYREF
  void *v59; // [rsp+40h] [rbp-48h] BYREF
  __m128i v60; // [rsp+48h] [rbp-40h] BYREF

  v8 = (unsigned int)a7;
  if ( !(unsigned int)clang_isDeclaration((unsigned int)a7) )
    return sub_690460();
  v55 = _mm_loadu_si128((const __m128i *)&a7);
  v14 = sub_63A250(v8, a2, v9, v10, v11, v12, v55.m128i_i32[0], v55.m128i_i64[1]);
  v56 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = _mm_loadu_si128((const __m128i *)&a8);
  src = &n.m128i_u64[1];
  v20 = sub_63A2D0(v8, a2, v16, v17, v18, v19, v56.m128i_i32[0], v56.m128i_i32[2], v15.m128i_i32[0], v15.m128i_i64[1]);
  LOBYTE(v21) = *(_BYTE *)(v14 + 28);
  n.m128i_i8[8] = 0;
  n.m128i_i64[0] = 0;
  LOBYTE(v21) = v21 & 0x7F;
  if ( (_BYTE)v21 == 16 )
  {
    sub_7121C0(&v59, v20, v14, 0);
    v22 = (__int64 *)src;
    v23 = (__int64 *)src;
    if ( src != &n.m128i_u64[1] )
    {
      v24 = v60.m128i_i64[0];
      v25 = v59;
      v26 = v60.m128i_i64[0];
      if ( v59 != &v60.m128i_u64[1] )
        goto LABEL_6;
LABEL_33:
      if ( !v24 )
        goto LABEL_25;
      if ( v24 != 1 )
      {
        v29 = (unsigned int)v24;
        if ( (unsigned int)v24 >= 8 )
        {
          *(_QWORD *)src = v60.m128i_i64[1];
          *(__int64 *)((char *)v23 + (unsigned int)v24 - 8) = *(__int64 *)((char *)v60.m128i_i64 + (unsigned int)v24);
          v40 = (unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v41 = (_DWORD)v23 - v40;
          v42 = (char *)((char *)&v60.m128i_u64[1] - ((char *)v23 - v40));
          v43 = (v24 + v41) & 0xFFFFFFF8;
          if ( v43 >= 8 )
          {
            v44 = v43 & 0xFFFFFFF8;
            v45 = 0;
            do
            {
              v46 = v45;
              v45 += 8;
              *(_QWORD *)(v40 + v46) = *(_QWORD *)&v42[v46];
            }
            while ( v45 < v44 );
          }
          goto LABEL_23;
        }
LABEL_61:
        if ( (v24 & 4) != 0 )
        {
          *(_DWORD *)v23 = v60.m128i_i32[2];
          *(_DWORD *)((char *)v23 + v29 - 4) = *(__int32 *)((char *)&v60.m128i_i32[1] + v29);
          v23 = (__int64 *)src;
          v24 = v60.m128i_i64[0];
          goto LABEL_24;
        }
        if ( !(_DWORD)v24 )
        {
LABEL_24:
          v26 = v24;
          v22 = v23;
          goto LABEL_25;
        }
        *(_BYTE *)v23 = v60.m128i_i8[8];
        if ( (v24 & 2) != 0 )
        {
          *(_WORD *)((char *)v23 + v29 - 2) = *(__int16 *)((char *)&v60.m128i_i16[3] + v29);
          v23 = (__int64 *)src;
          v24 = v60.m128i_i64[0];
          goto LABEL_24;
        }
LABEL_23:
        v23 = (__int64 *)src;
        v24 = v60.m128i_i64[0];
        goto LABEL_24;
      }
      goto LABEL_60;
    }
    v39 = v59;
    if ( v59 == &v60.m128i_u64[1] )
    {
      v24 = v60.m128i_i64[0];
      v26 = v60.m128i_i64[0];
      goto LABEL_33;
    }
LABEL_41:
    src = v39;
    n = _mm_loadu_si128(&v60);
LABEL_42:
    v59 = &v60.m128i_u64[1];
    v22 = &v60.m128i_i64[1];
    goto LABEL_8;
  }
  if ( (_BYTE)v21 == 73 )
  {
    sub_711670(&v59, v20, v14, 0);
    v22 = (__int64 *)src;
    v23 = (__int64 *)src;
    if ( src == &n.m128i_u64[1] )
    {
      v39 = v59;
      if ( v59 != &v60.m128i_u64[1] )
        goto LABEL_41;
      v24 = v60.m128i_i64[0];
      v26 = v60.m128i_i64[0];
    }
    else
    {
      v24 = v60.m128i_i64[0];
      v25 = v59;
      v26 = v60.m128i_i64[0];
      if ( v59 != &v60.m128i_u64[1] )
      {
LABEL_6:
        src = v25;
        v27 = n.m128i_i64[1];
        n = (__m128i)_mm_loadh_ps((const double *)&v60.m128i_i64[1]);
        if ( v22 )
        {
          v59 = v22;
          v60.m128i_i64[1] = v27;
          goto LABEL_8;
        }
        goto LABEL_42;
      }
    }
    if ( !v24 )
    {
LABEL_25:
      n.m128i_i64[0] = v26;
      *((_BYTE *)v22 + v26) = 0;
      v22 = (__int64 *)v59;
      goto LABEL_8;
    }
    if ( v24 != 1 )
    {
      v29 = (unsigned int)v24;
      if ( (unsigned int)v24 >= 8 )
      {
        *(_QWORD *)src = v60.m128i_i64[1];
        *(__int64 *)((char *)v23 + (unsigned int)v24 - 8) = *(__int64 *)((char *)v60.m128i_i64 + (unsigned int)v24);
        v30 = (unsigned __int64)(v23 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v31 = (_DWORD)v23 - v30;
        v32 = (char *)((char *)&v60.m128i_u64[1] - ((char *)v23 - v30));
        v33 = (v24 + v31) & 0xFFFFFFF8;
        if ( v33 >= 8 )
        {
          v34 = v33 & 0xFFFFFFF8;
          v35 = 0;
          do
          {
            v36 = v35;
            v35 += 8;
            *(_QWORD *)(v30 + v36) = *(_QWORD *)&v32[v36];
          }
          while ( v35 < v34 );
        }
        goto LABEL_23;
      }
      goto LABEL_61;
    }
LABEL_60:
    *(_BYTE *)v23 = v60.m128i_i8[8];
    v26 = v60.m128i_i64[0];
    v22 = (__int64 *)src;
    goto LABEL_25;
  }
  v21 = (unsigned __int8)v21;
  if ( (unsigned int)(unsigned __int8)v21 - 32 <= 5 )
  {
    sub_711B40(&v59, v20, v14);
    v22 = (__int64 *)src;
    v37 = (__int64 *)src;
    if ( src == &n.m128i_u64[1] )
    {
      v39 = v59;
      if ( v59 != &v60.m128i_u64[1] )
        goto LABEL_41;
    }
    else if ( v59 != &v60.m128i_u64[1] )
    {
      v38 = n.m128i_i64[1];
      src = v59;
      n = _mm_loadu_si128(&v60);
      if ( v22 )
      {
        v59 = v22;
        v60.m128i_i64[1] = v38;
        goto LABEL_8;
      }
      goto LABEL_42;
    }
    v47 = v60.m128i_i64[0];
    v48 = v60.m128i_i64[0];
    if ( !v60.m128i_i64[0] )
    {
LABEL_51:
      n.m128i_i64[0] = v47;
      *((_BYTE *)v22 + v47) = 0;
      v22 = (__int64 *)v59;
LABEL_8:
      v60.m128i_i64[0] = 0;
      *(_BYTE *)v22 = 0;
      if ( v59 != &v60.m128i_u64[1] )
        operator delete(v59, v60.m128i_i64[1] + 1);
      goto LABEL_10;
    }
    if ( v60.m128i_i64[0] == 1 )
    {
      *(_BYTE *)src = v60.m128i_i8[8];
      v47 = v60.m128i_i64[0];
      v22 = (__int64 *)src;
      goto LABEL_51;
    }
    v49 = v60.m128i_i8[0];
    if ( v60.m128i_i32[0] >= 8u )
    {
      *(_QWORD *)src = v60.m128i_i64[1];
      *(__int64 *)((char *)v37 + (unsigned int)v47 - 8) = *(__int64 *)((char *)v60.m128i_i64 + (unsigned int)v47);
      v50 = (unsigned __int64)(v37 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v51 = (char *)((char *)&v60.m128i_u64[1] - ((char *)v37 - v50));
      if ( (((_DWORD)v48 + (_DWORD)v37 - (_DWORD)v50) & 0xFFFFFFF8) >= 8 )
      {
        v52 = (v48 + (_DWORD)v37 - v50) & 0xFFFFFFF8;
        v53 = 0;
        do
        {
          v54 = v53;
          v53 += 8;
          *(_QWORD *)(v50 + v54) = *(_QWORD *)&v51[v54];
        }
        while ( v53 < v52 );
      }
    }
    else
    {
      if ( (v60.m128i_i8[0] & 4) != 0 )
      {
        *(_DWORD *)src = v60.m128i_i32[2];
        *(_DWORD *)((char *)v37 + (unsigned int)v47 - 4) = *(__int32 *)((char *)&v60.m128i_i32[1] + (unsigned int)v47);
        v37 = (__int64 *)src;
        v48 = v60.m128i_i64[0];
        goto LABEL_50;
      }
      if ( !v60.m128i_i32[0] )
      {
LABEL_50:
        v47 = v48;
        v22 = v37;
        goto LABEL_51;
      }
      *(_BYTE *)src = v60.m128i_i8[8];
      if ( (v49 & 2) != 0 )
      {
        *(_WORD *)((char *)v37 + (unsigned int)v47 - 2) = *(__int16 *)((char *)&v60.m128i_i16[3] + (unsigned int)v47);
        v37 = (__int64 *)src;
        v48 = v60.m128i_i64[0];
        goto LABEL_50;
      }
    }
    v37 = (__int64 *)src;
    v48 = v60.m128i_i64[0];
    goto LABEL_50;
  }
  if ( (unsigned int)(unsigned __int8)v21 - 56 <= 9 )
  {
    if ( *(_QWORD *)(v14 + 48) )
    {
LABEL_54:
      v28 = (void *)sub_6904A0("?");
      goto LABEL_11;
    }
    sub_6E8D60(v20, v14);
    v21 = *(_BYTE *)(v14 + 28) & 0x7F;
  }
  if ( (unsigned int)(v21 - 24) > 0x1A )
    goto LABEL_54;
  sub_711B20(v20, *(_QWORD *)(v14 + 48), &src, 0, 0);
LABEL_10:
  v28 = sub_6905C0(src, n.m128i_u64[0]);
LABEL_11:
  if ( src != &n.m128i_u64[1] )
    operator delete(src, n.m128i_i64[1] + 1);
  return (const char *)v28;
}

