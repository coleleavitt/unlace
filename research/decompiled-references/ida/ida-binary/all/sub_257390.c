__int64 __fastcall sub_257390(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __m128 v12; // xmm0
  __int64 v13; // rdi
  const char *v14; // r8
  unsigned int v15; // ebp
  const char *v16; // rdx
  int v17; // eax
  const char *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  size_t v24; // r14
  _BYTE *v25; // r13
  char *v26; // rax
  const char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm1
  __int64 result; // rax
  __int64 v32; // rax
  int v33; // eax
  _DWORD *v34; // rdi
  __int64 v35; // rdx
  char *v36; // rcx
  void *src; // [rsp+0h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-A0h]
  const char *v39; // [rsp+20h] [rbp-88h] BYREF
  __int128 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-68h] BYREF
  __m128i v42; // [rsp+48h] [rbp-60h] BYREF
  char *v43; // [rsp+60h] [rbp-48h] BYREF
  __int128 v44; // [rsp+68h] [rbp-40h]
  unsigned __int64 v45; // [rsp+78h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  set_debug_event_code(&qword_8CC340, 0);
  if ( byte_8CC55A )
  {
    if ( !byte_8CC5F6 )
      goto LABEL_3;
    sub_233440(a2, a3, a4, a5, v10, v11, a8, a9, (__int64)&qword_8CC340, nullptr);
  }
  result = (unsigned __int8)byte_8CC5F6;
  if ( byte_8CC5F6 )
    return result;
LABEL_3:
  v12.m128_u64[0] = 0;
  src = nullptr;
  v39 = nullptr;
  v13 = dbg;
  byte_8CC55A = 0;
  *(_OWORD *)n = 0;
  v40 = 0;
  if ( (*(_BYTE *)(dbg + 32) & 1) != 0 )
  {
    if ( !(unsigned __int8)sub_256790((__int64 *)&src, "Host") )
      reg_str_get(&src, "DefaultRemoteHost64", 0);
    if ( !(unsigned __int8)sub_256790((__int64 *)&v39, "Password") )
      reg_str_get(&v39, "DefaultRemotePass64", 0);
    v15 = qword_8CC070;
    if ( !qword_8CC070 )
    {
      netnode_check(&v43, "$ debugger application", 0, 0);
      v32 = netnode_altval(v43, 1, 65);
      v15 = v32;
      if ( v32 )
        qword_8CC070 = v32;
      else
        v15 = reg_int_op("DefaultRemotePort64", 0, 23946, 0);
    }
    v12.m128_u64[0] = 0;
    v13 = dbg;
    v41 = 0;
    v42 = 0;
    v14 = &s1;
    if ( (_QWORD)v40 )
      v14 = v39;
    if ( n[0] )
      v16 = (const char *)src;
    else
      v16 = &s1;
  }
  else
  {
    v14 = &s1;
    v42 = 0;
    v15 = 0;
    v41 = 0;
    v16 = &s1;
  }
  v17 = sub_20CEA0(v13, 0, v16, v15, v14, &v41, src);
  byte_8CC5F6 = v17 == 1;
  if ( v17 == 1 )
  {
    sub_24E850(1, 0.0, *(double *)a3.m128_u64, a4, a5, *(double *)v22.m128_u64, *(double *)v23.m128_u64, a8, a9);
    v33 = xmmword_8CC2F8;
    v34 = qword_8CC600;
    v35 = qword_8CC2F0;
    v36 = (char *)(unsigned int)xmmword_8CC2F8;
    if ( qword_8CC600 )
    {
      *(_QWORD *)qword_8CC600 = qword_8CC2F0;
      v34[2] = v33;
      sub_23D480((__int64)v34, 24, v35, v36, 0.0);
    }
    else
    {
      sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
    }
    goto LABEL_21;
  }
  v24 = n[0];
  if ( n[0] > 1 )
  {
    if ( (*(_BYTE *)(dbg + 33) & 0x20) != 0 )
    {
      sub_16FAA0(&v41, (__int64)"\nusing connection string '%s'", (const char *)src);
      v12 = (__m128)_mm_loadl_epi64(&v42);
      if ( a1 )
        goto LABEL_20;
LABEL_44:
      if ( v12.m128_u64[0] > 1 )
        sub_169630(
          (int)"ICON ERROR\nAUTOHIDE NONE\n%s",
          v41,
          (__int64)v18,
          v19,
          v20,
          v21,
          v12,
          a3,
          a4,
          a5,
          v22,
          v23,
          a8,
          a9,
          (char)src);
      goto LABEL_21;
    }
    v25 = (_BYTE *)qalloc_or_throw(n[0]);
    memcpy(v25, src, v24);
    v43 = nullptr;
    v44 = 0;
    if ( (_WORD)v15 )
    {
      if ( *v25 == 91 || (v26 = strchr(v25, 58)) == nullptr || v26 - v25 == -1 )
        sub_169A50((__int64 *)&v43, (__int64)"%s:%u", v25, (unsigned __int16)v15);
      else
        sub_169A50((__int64 *)&v43, (__int64)"[%s]:%u", v25, (unsigned __int16)v15);
    }
    else
    {
      v43 = (char *)qvector_reserve(&v43, 0, v24, 1);
      *(_QWORD *)&v44 = v24;
      memmove(v43, v25, v24 - 1);
      v43[v24 - 1] = 0;
    }
    v27 = &s1;
    if ( (_QWORD)v44 )
      v27 = v43;
    sub_16FAA0(&v41, (__int64)"\nwhen connecting to %s", v27);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43, "\nwhen connecting to %s", v18);
    }
    if ( v25 )
      qfree(v25, "\nwhen connecting to %s");
  }
  v12 = (__m128)_mm_loadl_epi64(&v42);
  if ( !a1 )
    goto LABEL_44;
LABEL_20:
  v28 = *(_QWORD *)a1;
  v29 = v41;
  v12 = _mm_loadh_ps((const double *)&v42.m128i_i64[1]);
  v30 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(__m128 *)(a1 + 8) = v12;
  *(_QWORD *)a1 = v29;
  v41 = v28;
  v42 = v30;
LABEL_21:
  sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 0, 0, *(double *)v12.m128_u64, v19, v20, v21);
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    *(double *)v12.m128_u64 = qfree(v41, nullptr);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    *(double *)v12.m128_u64 = qfree(v39, nullptr, *(double *)v12.m128_u64);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, nullptr, *(double *)v12.m128_u64);
  }
  return (unsigned __int8)byte_8CC5F6;
}
