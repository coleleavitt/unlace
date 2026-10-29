__int64 __fastcall sub_31FB30(
        char *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // r12d
  const char *path; // rax
  const char *v13; // rsi
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rbp
  double v21; // xmm0_8
  char *v22; // rbx
  __int64 v23; // rdi
  _QWORD *v25; // [rsp+8h] [rbp-21D0h] BYREF
  _QWORD v26[10]; // [rsp+10h] [rbp-21C8h] BYREF
  char v27; // [rsp+60h] [rbp-2178h] BYREF
  char v28; // [rsp+C0h] [rbp-2118h] BYREF
  __int64 *v29; // [rsp+2158h] [rbp-80h]
  __int64 v30; // [rsp+2160h] [rbp-78h]
  __int64 v31; // [rsp+2170h] [rbp-68h]
  __int64 v32; // [rsp+2178h] [rbp-60h]
  unsigned __int64 v33; // [rsp+21A8h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  if ( a1 )
  {
    path = (const char *)get_path(1);
    sub_31E6E0((__int64)v26, path);
    v13 = a1;
    v16 = sub_31E850((__int64)v26, (__int64)a1, (__int64 *)&v25, a2, a3, a4, a5, a6, v14, v15, a9, a10);
    LOBYTE(v10) = v16 == 1;
    if ( v16 == 1 )
    {
      v13 = (char *)v25 + 138;
      *(_QWORD *)a1 = *v25;
      qstrncpy(a1 + 138, v13, 4096);
    }
    v26[0] = snapman_t___vtable;
    if ( v31 )
    {
      v32 = 0;
      *(double *)a3.m128_u64 = qfree(v31, v13);
    }
    v17 = v30;
    v18 = v29;
    v19 = v29;
    if ( 8 * v30 )
    {
      do
      {
        v20 = *v19;
        if ( *v19 )
        {
          v21 = sub_319CD0(*v19);
          *(double *)a3.m128_u64 = qfree(v20, v13, v21);
          v18 = v29;
          v17 = v30;
        }
        ++v19;
      }
      while ( v19 != &v18[v17] );
    }
    if ( v18 )
    {
      v30 = 0;
      *(double *)a3.m128_u64 = qfree(v18, v13, *(double *)a3.m128_u64);
    }
    v22 = &v28;
    v26[0] = &stru_86F6A0;
    do
    {
      v23 = *((_QWORD *)v22 - 3);
      v22 -= 24;
      if ( v23 )
      {
        *((_QWORD *)v22 + 1) = 0;
        *(double *)a3.m128_u64 = qfree(v23, v13, *(double *)a3.m128_u64);
      }
    }
    while ( v22 != &v27 );
  }
  else
  {
    return 0;
  }
  return v10;
}
