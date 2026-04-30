__int64 __fastcall sub_2C23F0(
        __m128i *this,
        __int64 a2,
        unsigned int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v11; // r13
  const __m128i *v12; // r12
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 (*v20)(); // rdx
  unsigned int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r13d
  double *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  double v40; // xmm4_8
  double v41; // xmm5_8
  __int64 v42; // [rsp+8h] [rbp-70h] BYREF
  int v43[4]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h] BYREF
  __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]
  unsigned __int64 v48; // [rsp+48h] [rbp-30h]

  v11 = BYTE1(a3);
  v12 = (const __m128i *)a2;
  v48 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_database_busy() )
    return 2;
  v17 = *((_QWORD *)this + 55);
  v18.m128i_i64[0] = 0;
  v44 = 0;
  v45 = -1;
  v46 = 0;
  v47 = 0;
  *(_OWORD *)v43 = 0;
  if ( v17 )
  {
    v19 = this->m128i_i64[0];
    v20 = *(__int64 (**)())(this->m128i_i64[0] + 800);
    if ( v20 != sub_2B2380 )
    {
      a2 = a3;
      if ( ((unsigned __int8 (__fastcall *)(__m128i *, _QWORD))v20)(this, a3) )
        goto LABEL_8;
      v19 = this->m128i_i64[0];
    }
    a2 = v12[2].m128i_i64[1];
    if ( (*(unsigned __int8 (__fastcall **)(__m128i *, __int64, __int64))(v19 + 824))(this, a2, v17) )
    {
      if ( (unsigned __int8)sub_176E70((QT::QCoreApplication *)this) )
      {
        a2 = (__int64)v43;
        if ( (unsigned __int8)sub_174EF0((__int64)this, (__int64)v43) )
        {
          if ( v11 == 1 )
            v45 = v12[1].m128i_i64[1];
          v21 = 4;
LABEL_26:
          LODWORD(v46) = sub_1EB540(*((_QWORD **)this + 2), (__int64)this);
          v33 = sub_1EA6A0(*((_QWORD *)this + 2) + 384LL, (__int64)this, v31, v32, *(double *)v18.m128i_i64);
          v34 = *(_DWORD *)(v33 + 32);
          v35 = (double *)v33;
          if ( v34 != (unsigned int)sub_1EB540(*((_QWORD **)this + 2), (__int64)this)
            || (v18.m128i_i64[0] = 0, *(double *)v43 <= 0.0)
            || *v35 <= 0.0 )
          {
            sub_2BAFD0(
              this->m128i_i64,
              (__m128d *)v43,
              (int *)&v45,
              *(double *)v18.m128i_i64,
              *(double *)a5.m128_u64,
              a6,
              a7,
              v40,
              v41,
              a10,
              a11);
          }
          a2 = (__int64)v43;
          sub_1F14A0((const __m128i *)(*((_QWORD *)this + 2) + 384LL), (const __m128i *)v43, v36, v37, v38, v39);
          if ( v21 == 3 )
            sub_174FE0(this->m128i_i64);
          else
            v21 = 4;
          goto LABEL_13;
        }
      }
      goto LABEL_6;
    }
  }
LABEL_8:
  while ( *((_DWORD *)this + 96) )
    sub_2C2100(this, a2, 0.0, a5, a6, a7, v15, v16, a10, a11);
  a2 = v12[2].m128i_i64[1];
  v22 = (*(__int64 (__fastcall **)(__m128i *, __int64))(this->m128i_i64[0] + 816))(this, a2);
  v23 = v22;
  if ( !v22 )
  {
LABEL_6:
    v21 = 0;
    goto LABEL_13;
  }
  if ( dword_8CCA94 >= (*(int (__fastcall **)(__int64))(*(_QWORD *)v22 + 64LL))(v22)
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23) )
  {
    a2 = (__int64)&v42;
    v42 = 0;
    if ( (unsigned __int8)sub_2B5270(this, &v42, v23) )
    {
      v27 = v42;
      a2 = (__int64)v43;
      if ( (*(unsigned __int8 (__fastcall **)(__m128i *, int *, const __m128i *, __int64))(this->m128i_i64[0] + 808))(
             this,
             v43,
             v12,
             v42) )
      {
        if ( v11 == 5 )
        {
          v18 = _mm_loadu_si128(v12);
          v44 = v12[1].m128i_i64[0];
          v28 = *((_QWORD *)this + 2);
          *(__m128i *)v43 = v18;
          *(_DWORD *)(v28 + 952) |= 0x8000000u;
        }
        v29 = *(__int64 (__fastcall **)(__int64, __int64))(this->m128i_i64[0] + 600);
        if ( v29 == sub_2B23B0 )
        {
          v30 = *((_QWORD *)this + 55);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          *((_QWORD *)this + 55) = v27;
        }
        else
        {
          a2 = v27;
          v29((__int64)this, v27);
        }
        sub_2B4F60(this, (const char *)a2);
        v21 = 3;
        goto LABEL_26;
      }
    }
    goto LABEL_6;
  }
  v24 = *(_QWORD *)v23;
  v25 = v23;
  v21 = 1;
  (*(void (__fastcall **)(__int64))(v24 + 8))(v25);
LABEL_13:
  if ( v47 )
    qfree(v47, (const char *)a2);
  return v21;
}
