__int64 __fastcall sub_DEACC0(__int64 a1, void *a2, __int64 a3, int a4, int a5, int a6)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // r8
  __int64 *v13; // r14
  __int64 v14; // r10
  __int64 *v15; // rsi
  __int64 *v16; // r12
  __int64 *v17; // rax
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 *v20; // rdx
  int v21; // esi
  unsigned int v22; // ebx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 *v25; // rdi
  __int64 *i; // rax
  __int64 v27; // rbx
  __int32 v28; // r15d
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 *v35; // rax
  __m128i *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __m128i v44; // xmm0
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  int v48; // eax
  char *v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rsi
  int v54; // [rsp+0h] [rbp-118h]
  int v55; // [rsp+0h] [rbp-118h]
  void *v56; // [rsp+8h] [rbp-110h]
  int v57; // [rsp+10h] [rbp-108h]
  __int64 v58; // [rsp+18h] [rbp-100h]
  int v59; // [rsp+18h] [rbp-100h]
  int v60[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v61; // [rsp+28h] [rbp-F0h] BYREF
  void *v62; // [rsp+30h] [rbp-E8h] BYREF
  __m128 v63; // [rsp+38h] [rbp-E0h] BYREF
  void *v64; // [rsp+48h] [rbp-D0h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v66; // [rsp+58h] [rbp-C0h] BYREF
  int v67; // [rsp+68h] [rbp-B0h]
  int v68; // [rsp+70h] [rbp-A8h]
  int v69; // [rsp+78h] [rbp-A0h]
  int v70; // [rsp+80h] [rbp-98h]
  int v71; // [rsp+88h] [rbp-90h]
  int v72; // [rsp+90h] [rbp-88h]
  int v73; // [rsp+98h] [rbp-80h]
  int v74; // [rsp+A0h] [rbp-78h]
  void *v75; // [rsp+A8h] [rbp-70h]
  int v76; // [rsp+B0h] [rbp-68h]
  __int64 v77; // [rsp+B8h] [rbp-60h]

  sub_180CE20(
    (int)&v62,
    (int)v60,
    a3,
    a4,
    a5,
    a6,
    v54,
    a2,
    (int)&v62,
    v58,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    (int)v61,
    (int)v62,
    v63.m128_i32[0],
    v63.m128_i32[2],
    (int)v64,
    (int)ptr,
    v66.m128i_i32[0],
    v66.m128i_i32[2],
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( (unsigned __int8)sub_17E8F70(v60) )
  {
    sub_17E8F90(
      (int)&ptr,
      (int)v60,
      v8,
      v9,
      v10,
      v11,
      v55,
      (int)v56,
      v57,
      v59,
      v60[0],
      (int)v61,
      (int)v62,
      v63.m128_i32[0],
      v63.m128_i32[2],
      v64,
      (int)ptr,
      v66.m128i_i64[0]);
    v39 = (__int64 *)v62;
    v40 = (__int64 *)v62;
    if ( v62 == &v63.m128_u16[4] )
    {
      if ( ptr != &v66.m128i_u64[1] )
      {
        v44 = _mm_loadu_si128(&v66);
        v62 = ptr;
        v63 = (__m128)v44;
LABEL_53:
        ptr = &v66.m128i_u64[1];
        v39 = &v66.m128i_i64[1];
        goto LABEL_49;
      }
      v41 = v66.m128i_i64[0];
      v42 = v66.m128i_i64[0];
    }
    else
    {
      v41 = v66.m128i_i64[0];
      v42 = v66.m128i_i64[0];
      if ( ptr != &v66.m128i_u64[1] )
      {
        v62 = ptr;
        v43 = v63.m128_i64[1];
        v63 = _mm_loadh_ps((const double *)&v66.m128i_i64[1]);
        if ( v39 )
        {
          ptr = v39;
          v66.m128i_i64[1] = v43;
          goto LABEL_49;
        }
        goto LABEL_53;
      }
    }
    if ( !v41 )
    {
LABEL_66:
      v63.m128_u64[0] = v42;
      *((_BYTE *)v39 + v42) = 0;
      v39 = (__int64 *)ptr;
LABEL_49:
      v66.m128i_i64[0] = 0;
      *(_BYTE *)v39 = 0;
      if ( ptr != &v66.m128i_u64[1] )
        operator delete(ptr, v66.m128i_i64[1] + 1);
      goto LABEL_2;
    }
    if ( v41 == 1 )
    {
      *(_BYTE *)v62 = v66.m128i_i8[8];
      v42 = v66.m128i_i64[0];
      v39 = (__int64 *)v62;
      goto LABEL_66;
    }
    if ( (unsigned int)v41 >= 8 )
    {
      *(_QWORD *)v62 = v66.m128i_i64[1];
      *(__int64 *)((char *)v40 + (unsigned int)v41 - 8) = *(__int64 *)((char *)v66.m128i_i64 + (unsigned int)v41);
      v47 = (unsigned __int64)(v40 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v48 = (_DWORD)v40 - v47;
      v49 = (char *)((char *)&v66.m128i_u64[1] - ((char *)v40 - v47));
      v50 = (v41 + v48) & 0xFFFFFFF8;
      if ( v50 >= 8 )
      {
        v51 = v50 & 0xFFFFFFF8;
        v52 = 0;
        do
        {
          v53 = v52;
          v52 += 8;
          *(_QWORD *)(v47 + v53) = *(_QWORD *)&v49[v53];
        }
        while ( v52 < v51 );
      }
    }
    else
    {
      if ( (v41 & 4) != 0 )
      {
        *(_DWORD *)v62 = v66.m128i_i32[2];
        *(_DWORD *)((char *)v40 + (unsigned int)v41 - 4) = *(__int32 *)((char *)&v66.m128i_i32[1] + (unsigned int)v41);
        v40 = (__int64 *)v62;
        v41 = v66.m128i_i64[0];
        goto LABEL_65;
      }
      if ( !(_DWORD)v41 )
      {
LABEL_65:
        v42 = v41;
        v39 = v40;
        goto LABEL_66;
      }
      *(_BYTE *)v62 = v66.m128i_i8[8];
      if ( (v41 & 2) != 0 )
      {
        *(_WORD *)((char *)v40 + (unsigned int)v41 - 2) = *(__int16 *)((char *)&v66.m128i_i16[3] + (unsigned int)v41);
        v40 = (__int64 *)v62;
        v41 = v66.m128i_i64[0];
        goto LABEL_65;
      }
    }
    v40 = (__int64 *)v62;
    v41 = v66.m128i_i64[0];
    goto LABEL_65;
  }
LABEL_2:
  v12 = *(__int64 **)(a1 + 16);
  if ( !v12 || !*((_DWORD *)v12 - 1) )
  {
    v31 = sub_1638010(*(_QWORD *)a3);
    goto LABEL_20;
  }
  v13 = *(__int64 **)(a1 + 16);
  LODWORD(v14) = 0;
  ptr = &v66.m128i_u64[1];
  v15 = &v66.m128i_i64[1];
  v66.m128i_i64[0] = 0x1000000000LL;
  v16 = &v12[*((unsigned int *)v12 - 1)];
  v17 = &v66.m128i_i64[1];
  if ( v12 == v16 )
    goto LABEL_16;
  do
  {
    v18 = *v13;
    v19 = *(unsigned int *)(a3 + 120);
    v20 = *(__int64 **)(a3 + 112);
    v21 = *(_DWORD *)(*v13 + 12);
    v22 = v19 - 1;
    v19 *= 16;
    v23 = (__int64 *)((char *)v20 + v19);
    v24 = 16LL * (v21 & v22);
    v25 = &v20[(unsigned __int64)v24 / 8];
    if ( v24 != v19 )
    {
      for ( i = &v20[(unsigned __int64)v24 / 8]; v23 != i; i += 2 )
      {
        v27 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v27 + 12) == v21 && v18 == v27 )
            goto LABEL_24;
        }
        else if ( !v27 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v20 == v25 )
    {
LABEL_44:
      v27 = 0;
LABEL_12:
      v28 = v66.m128i_i32[1];
      if ( (unsigned int)v14 < v66.m128i_i32[1] )
        goto LABEL_13;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = *v20;
          if ( (unsigned __int64)*v20 > 1 )
            break;
          if ( !v27 )
            goto LABEL_12;
          v20 += 2;
          if ( v25 == v20 )
            goto LABEL_44;
        }
        if ( *(_DWORD *)(v27 + 12) == v21 && v18 == v27 )
          break;
        v20 += 2;
        if ( v25 == v20 )
          goto LABEL_44;
      }
      i = v20;
LABEL_24:
      v33 = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64 *))(*(_QWORD *)i[1] + 40LL))(
              i[1],
              v56,
              a3,
              v23);
      LODWORD(v14) = v66.m128i_i32[0];
      v28 = v66.m128i_i32[1];
      v27 = v33;
      if ( v66.m128i_i32[0] < (unsigned __int32)v66.m128i_i32[1] )
      {
LABEL_13:
        v15 = (__int64 *)ptr;
        goto LABEL_14;
      }
    }
    v34 = (unsigned int)(2 * v28);
    v35 = (__int64 *)sub_186B270(8 * v34);
    LODWORD(v14) = v66.m128i_i32[0];
    v36 = (__m128i *)ptr;
    v15 = v35;
    if ( v66.m128i_i32[0] )
    {
      if ( (unsigned int)(v66.m128i_i32[0] - 1) <= 2 || v35 == (__int64 *)((char *)ptr + 8) )
      {
        v45 = 0;
        v46 = 8LL * v66.m128i_u32[0];
        do
        {
          v15[v45 / 8] = v36->m128i_i64[v45 / 8];
          v45 += 8LL;
        }
        while ( v45 != v46 );
      }
      else
      {
        v37 = 0;
        v38 = 16LL * ((unsigned __int32)v66.m128i_i32[0] >> 1);
        do
        {
          *(__m128i *)&v15[v37 / 8] = _mm_loadu_si128(&v36[v37 / 0x10]);
          v37 += 16LL;
        }
        while ( v37 != v38 );
        if ( (v14 & 1) != 0 )
          v15[(unsigned int)v14 & 0xFFFFFFFE] = v36->m128i_i64[(unsigned int)v14 & 0xFFFFFFFE];
      }
    }
    if ( v36 && v36 != (__m128i *)&v66.m128i_u64[1] )
    {
      sub_186B220(v36);
      LODWORD(v14) = v66.m128i_i32[0];
    }
    ptr = v15;
    v66.m128i_i32[1] = v34;
LABEL_14:
    v29 = (unsigned int)v14;
    ++v13;
    v14 = (unsigned int)(v14 + 1);
    v15[v29] = v27;
    v66.m128i_i32[0] = v14;
  }
  while ( v16 != v13 );
  v17 = &v15[v14];
LABEL_16:
  v30 = *(_QWORD *)a3;
  v61 = v17;
  v31 = sub_DDB4B0(v30, v15, &v61, (const char *)v62, "(");
  if ( ptr && ptr != &v66.m128i_u64[1] )
    sub_186B220(ptr);
LABEL_20:
  if ( v62 != &v63.m128_u16[4] )
    operator delete(v62, v63.m128_u64[1] + 1);
  return v31;
}

