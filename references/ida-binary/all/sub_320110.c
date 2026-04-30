__int64 __fastcall sub_320110(const char *a1, __int64 a2, __int64 a3)
{
  const char *path; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rbp
  double v11; // xmm0_8
  char *v12; // rbx
  __int64 v13; // rdi
  _QWORD v15[10]; // [rsp+0h] [rbp-21C8h] BYREF
  char v16; // [rsp+50h] [rbp-2178h] BYREF
  char v17; // [rsp+B0h] [rbp-2118h] BYREF
  __int64 *v18; // [rsp+2148h] [rbp-80h]
  __int64 v19; // [rsp+2150h] [rbp-78h]
  __int64 v20; // [rsp+2160h] [rbp-68h]
  __int64 v21; // [rsp+2168h] [rbp-60h]
  unsigned __int64 v22; // [rsp+2198h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  path = (const char *)get_path(1);
  sub_31E6E0((__int64)v15, path);
  sub_31F500((__int64)v15, (__int64)a1, a2, a3);
  v15[0] = snapman_t___vtable;
  if ( v20 )
  {
    v21 = 0;
    qfree(v20, a1);
  }
  v7 = v19;
  v8 = v18;
  v9 = v18;
  if ( 8 * v19 )
  {
    do
    {
      v10 = *v9;
      if ( *v9 )
      {
        v11 = sub_319CD0(*v9);
        qfree(v10, a1, v11);
        v8 = v18;
        v7 = v19;
      }
      ++v9;
    }
    while ( v9 != &v8[v7] );
  }
  if ( v8 )
  {
    v19 = 0;
    qfree(v8, a1);
  }
  v12 = &v17;
  v15[0] = &stru_86F6A0;
  do
  {
    v13 = *((_QWORD *)v12 - 3);
    v12 -= 24;
    if ( v13 )
    {
      *((_QWORD *)v12 + 1) = 0;
      qfree(v13, a1);
    }
  }
  while ( v12 != &v16 );
  return 1;
}
