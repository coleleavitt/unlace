_BOOL8 __fastcall sub_31F980(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *path; // rax
  double v9; // xmm4_8
  double v10; // xmm5_8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  int v18; // ebx
  _BOOL4 v19; // r12d
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  __int64 v23; // rbp
  double v24; // xmm0_8
  __int64 *v25; // rbx
  __int64 v26; // rdi
  _QWORD vars0[10]; // [rsp+0h] [rbp+0h] BYREF
  __int64 _50; // [rsp+50h] [rbp+50h] BYREF
  char varsB0; // [rsp+B0h] [rbp+B0h] BYREF
  __int64 *vars2148; // [rsp+2148h] [rbp+2148h]
  __int64 vars2150; // [rsp+2150h] [rbp+2150h]
  __int64 vars2160; // [rsp+2160h] [rbp+2160h]
  __int64 vars2168; // [rsp+2168h] [rbp+2168h]
  unsigned __int64 vars2198; // [rsp+2198h] [rbp+2198h]

  vars2198 = __readfsqword(0x28u);
  path = (const char *)get_path(1);
  sub_31E6E0((__int64)vars0, path);
  v11 = sub_31E850((__int64)vars0, 0, nullptr, nullptr, a1, a2, a3, a4, v9, v10, a7, a8);
  v18 = v11;
  if ( v11 == -1 )
  {
    sub_169630(
      (int)"ICON ERROR\nFailed to create database snapshot!",
      0,
      v12,
      v13,
      v14,
      v15,
      a1,
      a2,
      a3,
      a4,
      v16,
      v17,
      a7,
      a8,
      vars0[0]);
  }
  else if ( v11 == 1 )
  {
    sub_31E550(vars0, nullptr);
  }
  vars0[0] = snapman_t___vtable;
  v19 = v18 != -1;
  if ( vars2160 )
  {
    vars2168 = 0;
    *(double *)a1.m128_u64 = qfree(vars2160, nullptr);
  }
  v20 = vars2150;
  v21 = vars2148;
  v22 = vars2148;
  if ( 8 * vars2150 )
  {
    do
    {
      v23 = *v22;
      if ( *v22 )
      {
        v24 = sub_319CD0(*v22);
        *(double *)a1.m128_u64 = qfree(v23, nullptr, v24);
        v21 = vars2148;
        v20 = vars2150;
      }
      ++v22;
    }
    while ( v22 != &v21[v20] );
  }
  if ( v21 )
  {
    vars2150 = 0;
    *(double *)a1.m128_u64 = qfree(v21, nullptr, *(double *)a1.m128_u64);
  }
  v25 = (__int64 *)&varsB0;
  vars0[0] = &stru_86F6A0;
  do
  {
    v26 = *(v25 - 3);
    v25 -= 3;
    if ( v26 )
    {
      v25[1] = 0;
      *(double *)a1.m128_u64 = qfree(v26, nullptr, *(double *)a1.m128_u64);
    }
  }
  while ( v25 != &_50 );
  return v19;
}
