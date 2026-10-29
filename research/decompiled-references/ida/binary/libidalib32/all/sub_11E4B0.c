_BOOL8 __fastcall sub_11E4B0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  int v10; // eax
  int v11; // ebx
  _BOOL4 v12; // r12d
  __int64 v13; // rdx
  _QWORD **v14; // rdi
  _QWORD **v15; // rbx
  __int64 v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rdi
  _QWORD vars0[10]; // [rsp+0h] [rbp+0h] BYREF
  __int64 _50; // [rsp+50h] [rbp+50h] BYREF
  char varsB0; // [rsp+B0h] [rbp+B0h] BYREF
  _QWORD **vars2148; // [rsp+2148h] [rbp+2148h]
  __int64 vars2150; // [rsp+2150h] [rbp+2150h]
  __int64 vars2160; // [rsp+2160h] [rbp+2160h]
  __int64 vars2168; // [rsp+2168h] [rbp+2168h]
  unsigned __int64 vars2198; // [rsp+2198h] [rbp+2198h]

  vars2198 = __readfsqword(0x28u);
  get_path();
  sub_11D4A0((__int64)vars0);
  v10 = sub_11D610((__int64)vars0, 0, nullptr, nullptr, a1, a2, a3, a4, v8, v9, a7, a8);
  v11 = v10;
  if ( v10 == -1 )
  {
    sub_92120((__int64)"ICON ERROR\nFailed to create database snapshot!");
  }
  else if ( v10 == 1 )
  {
    sub_11D360(vars0);
  }
  vars0[0] = off_230F18;
  v12 = v11 != -1;
  if ( vars2160 )
  {
    vars2168 = 0;
    qfree();
  }
  v13 = vars2150;
  v14 = vars2148;
  v15 = vars2148;
  if ( 8 * vars2150 )
  {
    do
    {
      v16 = (__int64)*v15;
      if ( *v15 )
      {
        sub_118C40(*v15);
        if ( *(_QWORD *)(v16 + 4240) )
        {
          *(_QWORD *)(v16 + 4248) = 0;
          qfree();
        }
        qfree();
        v14 = vars2148;
        v13 = vars2150;
      }
      ++v15;
    }
    while ( v15 != &v14[v13] );
  }
  if ( v14 )
  {
    vars2150 = 0;
    qfree();
  }
  v17 = (__int64 *)&varsB0;
  vars0[0] = &stru_235898;
  do
  {
    v18 = *(v17 - 3);
    v17 -= 3;
    if ( v18 )
    {
      v17[1] = 0;
      qfree();
    }
  }
  while ( v17 != &_50 );
  return v12;
}

