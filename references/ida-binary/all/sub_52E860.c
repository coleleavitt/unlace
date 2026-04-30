__int64 __fastcall sub_52E860(
        _QWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  double v14; // xmm0_8
  __int64 v16; // rax
  __int64 v18; // rdx
  char *v19; // rsi
  bool v20; // zf
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdi
  const char *v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rbx
  const char *v38; // rax
  __int64 v39; // rdi
  const char *v41; // [rsp+0h] [rbp-98h] BYREF
  __int128 v42; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+20h] [rbp-78h] BYREF
  __int128 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int128 v46; // [rsp+40h] [rbp-58h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v14 = 0.0;
  v16 = *a1;
  v47 = __readfsqword(0x28u);
  v42 = 0;
  v18 = a2;
  v19 = (char *)&s1;
  v45 = 0;
  v44 = 0;
  v46 = 0;
  v20 = *(_QWORD *)(v16 + 8) == 0;
  v41 = nullptr;
  v43 = 0;
  if ( !v20 )
    v19 = *(char **)v16;
  v22 = sub_52B980(&v43, v19, v18, &v41, a3, a14, 0.0, a5, a6, a7, a8, a9, a10, a11);
  if ( (_BYTE)v22 )
  {
    v19 = (char *)(*a1 + 24LL);
    if ( a2 )
      v19 = (char *)(*a1 + 48LL);
    v22 = sub_52DF60((__int64)&v43, (__int64 *)v19, a3);
  }
  v25 = v45;
  if ( v45 )
  {
    v26 = v46;
    if ( (_QWORD)v46 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v25 + 40 * v27);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v19);
          v25 = v45;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v46 = 0;
    v14 = qfree(v25, v19);
  }
  v30 = v43;
  if ( v43 )
  {
    v31 = v44;
    if ( (_QWORD)v44 )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v30 + 24 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          v14 = qfree(v34, v19, v14);
          v30 = v43;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v44 = 0;
    v14 = qfree(v30, v19, v14);
  }
  v35 = v41;
  if ( v41 )
  {
    v36 = v42;
    if ( (_QWORD)v42 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(_QWORD *)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          v14 = qfree(v39, v19, v14);
          v35 = v41;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    qfree(v35, v19, v35, v21, v23, v24, v14, v41, 0, *((_QWORD *)&v42 + 1));
  }
  return v22;
}
