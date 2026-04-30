_BOOL8 __fastcall sub_40B020(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v8; // rsi
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  bool v17; // bp
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  _QWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  const char *v31; // [rsp+0h] [rbp-148h] BYREF
  __int128 v32; // [rsp+8h] [rbp-140h]
  _QWORD v33[7]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v34; // [rsp+58h] [rbp-F0h]
  __int64 v35; // [rsp+60h] [rbp-E8h]
  __int64 v36; // [rsp+70h] [rbp-D8h]
  __int64 v37; // [rsp+78h] [rbp-D0h]
  __int64 v38; // [rsp+88h] [rbp-C0h]
  __int64 v39; // [rsp+98h] [rbp-B0h]
  __int64 v40; // [rsp+A0h] [rbp-A8h]
  __int64 v41; // [rsp+B0h] [rbp-98h]
  __int64 v42; // [rsp+B8h] [rbp-90h]
  _QWORD *v43; // [rsp+D0h] [rbp-78h]
  __int64 v44; // [rsp+D8h] [rbp-70h]
  __int64 v45; // [rsp+F0h] [rbp-58h]
  __int64 v46; // [rsp+F8h] [rbp-50h]
  __int64 v47; // [rsp+108h] [rbp-40h]
  __int64 v48; // [rsp+110h] [rbp-38h]
  unsigned __int64 v49; // [rsp+128h] [rbp-20h]

  v49 = __readfsqword(0x28u);
  sub_40A8C0((__int64)v33);
  v8 = nullptr;
  v14 = 0;
  v31 = nullptr;
  v32 = 0;
  *(double *)v14.m128_u64 = callui(203, 0, (unsigned int)v33, (unsigned int)&v31, (unsigned int)&callui, v9);
  v17 = (unsigned __int64)v32 <= 1;
  if ( (unsigned __int64)v32 > 1 )
  {
    v8 = v31;
    sub_169700(
      (int)"There was an error showing the dialog: %s\n",
      (__int64)v31,
      v10,
      v11,
      v12,
      v13,
      v14,
      a2,
      a3,
      a4,
      v15,
      v16,
      a7,
      a8,
      (char)v31);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    *(double *)v14.m128_u64 = qfree(v31, v8, *(double *)v14.m128_u64);
  }
  v18 = v47;
  v33[0] = &forms::dialog_desc_t___vtable;
  if ( v47 )
  {
    v19 = v48;
    if ( v48 )
    {
      v20 = 0;
      do
      {
        v21 = (__int64 *)(v18 + 24 * v20);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          *(double *)v14.m128_u64 = qfree(v22, v8, *(double *)v14.m128_u64);
          v18 = v47;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    v48 = 0;
    *(double *)v14.m128_u64 = qfree(v18, v8, *(double *)v14.m128_u64);
  }
  if ( v45 )
  {
    v46 = 0;
    *(double *)v14.m128_u64 = qfree(v45, v8, *(double *)v14.m128_u64);
  }
  v23 = v43;
  v24 = &v43[v44];
  if ( v43 != v24 )
  {
    do
    {
      if ( *v23 )
        (*(void (__fastcall **)(_QWORD, double))(*(_QWORD *)*v23 + 8LL))(*v23, *(double *)v14.m128_u64);
      ++v23;
    }
    while ( v24 != v23 );
    v24 = v43;
  }
  if ( v24 )
  {
    v44 = 0;
    *(double *)v14.m128_u64 = qfree(v24, v8, *(double *)v14.m128_u64);
  }
  v33[0] = &forms::abstract_form_desc_t___vtable;
  if ( v41 )
  {
    v42 = 0;
    *(double *)v14.m128_u64 = qfree(v41, v8, *(double *)v14.m128_u64);
  }
  v33[0] = &forms::container_t___vtable;
  if ( v39 )
  {
    v40 = 0;
    *(double *)v14.m128_u64 = qfree(v39, v8, *(double *)v14.m128_u64);
  }
  v33[0] = &forms::abstract_container_t___vtable;
  if ( v38 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v38 + 8LL))(v38, *(double *)v14.m128_u64);
  v25 = v36;
  v38 = 0;
  v33[0] = &forms::element_t___vtable;
  if ( v36 )
  {
    v26 = v37;
    if ( v37 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v25 + 24 * v27);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          *(double *)v14.m128_u64 = qfree(v29, v8, *(double *)v14.m128_u64);
          v25 = v36;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    v37 = 0;
    *(double *)v14.m128_u64 = qfree(v25, v8, *(double *)v14.m128_u64);
  }
  if ( v34 )
  {
    v35 = 0;
    qfree(v34, v8, *(double *)v14.m128_u64);
  }
  return v17;
}
