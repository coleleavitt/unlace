__int64 __fastcall sub_DEB1A0(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int32 v15; // edx
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int32 v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rbx
  char *v28; // rax
  __m128i *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v34; // rdi
  __int64 *v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __m128i v40; // xmm0
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbx
  char *v44; // rax
  __m128i *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // rcx
  char *v51; // rdi
  unsigned int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // rsi
  int v55; // [rsp+0h] [rbp-108h]
  int v56; // [rsp+0h] [rbp-108h]
  __int64 v57; // [rsp+0h] [rbp-108h]
  int v58; // [rsp+8h] [rbp-100h]
  int v59[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 *v60; // [rsp+18h] [rbp-F0h] BYREF
  void *v61; // [rsp+20h] [rbp-E8h] BYREF
  __m128 v62; // [rsp+28h] [rbp-E0h] BYREF
  int v63; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v65; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+58h] [rbp-B0h]
  int v67; // [rsp+60h] [rbp-A8h]
  int v68; // [rsp+68h] [rbp-A0h]
  int v69; // [rsp+70h] [rbp-98h]
  int v70; // [rsp+78h] [rbp-90h]
  int v71; // [rsp+80h] [rbp-88h]
  int v72; // [rsp+88h] [rbp-80h]
  int v73; // [rsp+90h] [rbp-78h]
  int v74; // [rsp+98h] [rbp-70h]
  int v75; // [rsp+A0h] [rbp-68h]
  void *v76; // [rsp+A8h] [rbp-60h]
  int v77; // [rsp+B0h] [rbp-58h]
  __int64 v78; // [rsp+B8h] [rbp-50h]

  sub_180CE20(
    (int)&v61,
    (int)v59,
    (int)a3,
    a4,
    a5,
    a6,
    v55,
    &v61,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    (__int64)v60,
    (int)v61,
    v62.m128_i32[0],
    v62.m128_i32[2],
    v63,
    (int)ptr,
    v65.m128i_i32[0],
    v65.m128i_i32[2],
    v66,
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
    v77,
    v78);
  if ( !(unsigned __int8)sub_17E8F70(v59) )
    goto LABEL_2;
  sub_17E8F90(
    (int)&ptr,
    (int)v59,
    v8,
    v9,
    v10,
    v11,
    v56,
    v58,
    v59[0],
    (int)v60,
    (int)v61,
    v62.m128_i32[0],
    v62.m128_i32[2],
    v63,
    (int)ptr,
    (void *)v65.m128i_i64[0],
    v65.m128i_i32[2],
    v66);
  v35 = (__int64 *)v61;
  v36 = (__int64 *)v61;
  if ( v61 == &v62.m128_u16[4] )
  {
    if ( ptr != &v65.m128i_u64[1] )
    {
      v40 = _mm_loadu_si128(&v65);
      v61 = ptr;
      v62 = (__m128)v40;
LABEL_37:
      ptr = &v65.m128i_u64[1];
      v35 = &v65.m128i_i64[1];
      goto LABEL_33;
    }
    v37 = v65.m128i_i64[0];
    v38 = v65.m128i_i64[0];
  }
  else
  {
    v37 = v65.m128i_i64[0];
    v38 = v65.m128i_i64[0];
    if ( ptr != &v65.m128i_u64[1] )
    {
      v61 = ptr;
      v39 = v62.m128_i64[1];
      v62 = _mm_loadh_ps((const double *)&v65.m128i_i64[1]);
      if ( v35 )
      {
        ptr = v35;
        v65.m128i_i64[1] = v39;
        goto LABEL_33;
      }
      goto LABEL_37;
    }
  }
  if ( v37 )
  {
    if ( v37 == 1 )
    {
      *(_BYTE *)v61 = v65.m128i_i8[8];
      v38 = v65.m128i_i64[0];
      v35 = (__int64 *)v61;
      goto LABEL_61;
    }
    if ( (unsigned int)v37 >= 8 )
    {
      *(_QWORD *)v61 = v65.m128i_i64[1];
      *(__int64 *)((char *)v36 + (unsigned int)v37 - 8) = *(__int64 *)((char *)v65.m128i_i64 + (unsigned int)v37);
      v50 = (unsigned __int64)(v36 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v51 = (char *)((char *)&v65.m128i_u64[1] - ((char *)v36 - v50));
      if ( (((_DWORD)v37 + (_DWORD)v36 - (_DWORD)v50) & 0xFFFFFFF8) >= 8 )
      {
        v52 = (v37 + (_DWORD)v36 - v50) & 0xFFFFFFF8;
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
      if ( (v37 & 4) != 0 )
      {
        *(_DWORD *)v61 = v65.m128i_i32[2];
        *(_DWORD *)((char *)v36 + (unsigned int)v37 - 4) = *(__int32 *)((char *)&v65.m128i_i32[1] + (unsigned int)v37);
        v36 = (__int64 *)v61;
        v37 = v65.m128i_i64[0];
        goto LABEL_60;
      }
      if ( !(_DWORD)v37 )
      {
LABEL_60:
        v38 = v37;
        v35 = v36;
        goto LABEL_61;
      }
      *(_BYTE *)v61 = v65.m128i_i8[8];
      if ( (v37 & 2) != 0 )
      {
        *(_WORD *)((char *)v36 + (unsigned int)v37 - 2) = *(__int16 *)((char *)&v65.m128i_i16[3] + (unsigned int)v37);
        v36 = (__int64 *)v61;
        v37 = v65.m128i_i64[0];
        goto LABEL_60;
      }
    }
    v36 = (__int64 *)v61;
    v37 = v65.m128i_i64[0];
    goto LABEL_60;
  }
LABEL_61:
  v62.m128_u64[0] = v38;
  *((_BYTE *)v35 + v38) = 0;
  v35 = (__int64 *)ptr;
LABEL_33:
  v65.m128i_i64[0] = 0;
  *(_BYTE *)v35 = 0;
  if ( ptr != &v65.m128i_u64[1] )
    operator delete(ptr, v65.m128i_i64[1] + 1);
LABEL_2:
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *a3;
  if ( v12 && *(_DWORD *)(v12 - 4) )
  {
    ptr = &v65.m128i_u64[1];
    v65.m128i_i64[0] = 0x1000000000LL;
    v14 = sub_1638010(v13);
    v15 = v65.m128i_i32[0];
    v16 = v14;
    v17 = ptr;
    if ( v65.m128i_i32[0] >= (unsigned __int32)v65.m128i_i32[1] )
    {
      v43 = (unsigned int)(2 * v65.m128i_i32[1]);
      v44 = (char *)sub_186B270(8 * v43);
      v15 = v65.m128i_i32[0];
      v45 = (__m128i *)ptr;
      v17 = v44;
      if ( v65.m128i_i32[0] )
      {
        if ( (unsigned int)(v65.m128i_i32[0] - 1) <= 2 || v44 == (char *)ptr + 8 )
        {
          v48 = 0;
          v49 = 8LL * v65.m128i_u32[0];
          do
          {
            v17[v48 / 8] = v45->m128i_i64[v48 / 8];
            v48 += 8LL;
          }
          while ( v48 != v49 );
        }
        else
        {
          v46 = 0;
          v47 = 16LL * ((unsigned __int32)v65.m128i_i32[0] >> 1);
          do
          {
            *(__m128i *)&v17[v46 / 8] = _mm_loadu_si128(&v45[v46 / 0x10]);
            v46 += 16LL;
          }
          while ( v46 != v47 );
          if ( (v15 & 1) != 0 )
            v17[v15 & 0xFFFFFFFE] = v45->m128i_i64[v15 & 0xFFFFFFFE];
        }
      }
      if ( v45 != (__m128i *)&v65.m128i_u64[1] && v45 )
      {
        sub_186B220(v45);
        v15 = v65.m128i_i32[0];
      }
      ptr = v17;
      v65.m128i_i32[1] = v43;
    }
    v18 = *(_QWORD *)(a1 + 16);
    v19 = v15;
    v20 = v15 + 1;
    v17[v19] = v16;
    v65.m128i_i32[0] = v20;
    if ( v18 )
    {
      v21 = v18 + 4LL * *(unsigned int *)(v18 - 4);
      if ( v21 != v18 )
      {
        v22 = v18;
        do
        {
          v24 = sub_16386F0(*a3);
          v25 = v65.m128i_i32[0];
          v26 = v24;
          if ( v65.m128i_i32[0] < (unsigned __int32)v65.m128i_i32[1] )
          {
            v17 = ptr;
          }
          else
          {
            v57 = v24;
            v27 = (unsigned int)(2 * v65.m128i_i32[1]);
            v28 = (char *)sub_186B270(8 * v27);
            v25 = v65.m128i_i32[0];
            v29 = (__m128i *)ptr;
            v17 = v28;
            v26 = v57;
            if ( v65.m128i_i32[0] )
            {
              if ( (unsigned int)(v65.m128i_i32[0] - 1) <= 2 || v28 == (char *)ptr + 8 )
              {
                v41 = 0;
                v42 = 8LL * v65.m128i_u32[0];
                do
                {
                  v17[v41 / 8] = v29->m128i_i64[v41 / 8];
                  v41 += 8LL;
                }
                while ( v41 != v42 );
              }
              else
              {
                v30 = 0;
                v31 = 16LL * ((unsigned __int32)v65.m128i_i32[0] >> 1);
                do
                {
                  *(__m128i *)&v17[v30 / 8] = _mm_loadu_si128(&v29[v30 / 0x10]);
                  v30 += 16LL;
                }
                while ( v30 != v31 );
                if ( (v25 & 1) != 0 )
                  v17[v25 & 0xFFFFFFFE] = v29->m128i_i64[v25 & 0xFFFFFFFE];
              }
            }
            if ( v29 && v29 != (__m128i *)&v65.m128i_u64[1] )
            {
              sub_186B220(v29);
              v25 = v65.m128i_i32[0];
            }
            ptr = v17;
            v65.m128i_i32[1] = v27;
          }
          v23 = v25;
          v22 += 4;
          v20 = v25 + 1;
          v17[v23] = v26;
          v65.m128i_i32[0] = v20;
        }
        while ( v21 != v22 );
      }
    }
    v34 = *a3;
    v60 = &v17[v20];
    v32 = sub_DDB4B0(v34, v17, &v60, "_", "(");
    if ( ptr && ptr != &v65.m128i_u64[1] )
      sub_186B220(ptr);
  }
  else
  {
    v32 = sub_1638010(v13);
  }
  if ( v61 != &v62.m128_u16[4] )
    operator delete(v61, v62.m128_u64[1] + 1);
  return v32;
}

