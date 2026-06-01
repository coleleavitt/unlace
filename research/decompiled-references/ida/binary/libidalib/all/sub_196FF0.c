unsigned __int64 __fastcall sub_196FF0(
        __int64 *a1,
        char *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        char a6,
        double a7,
        double a8,
        __m128 a9,
        unsigned int a10)
{
  __int64 v12; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v20; // [rsp+10h] [rbp-90h] BYREF
  __int128 v21; // [rsp+18h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-78h]
  __int64 v23; // [rsp+30h] [rbp-70h] BYREF
  __int128 v24; // [rsp+38h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-58h] BYREF
  __int128 v26; // [rsp+50h] [rbp-50h]
  char v27; // [rsp+60h] [rbp-40h]
  unsigned __int64 v28; // [rsp+68h] [rbp-38h]

  v12 = *a1;
  v28 = __readfsqword(0x28u);
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v24 = 0;
  v26 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v12 + 352))(a1, &v23, 7);
  v22 = -1;
  v20 = 0;
  v21 = 0;
  sub_195120(0.0, a8, a9, (__int64)a1, (__int64)&v20, (__int64)&v23, a6 | 2);
  sub_194F20((__int64)a1, a2, a3, a4, a5, (__int64)&v20, &v23, nullptr, a10);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  sub_17F4E0(&v25);
  v14 = v23;
  if ( v23 )
  {
    v15 = v24;
    if ( (_QWORD)v24 )
    {
      v16 = 0;
      do
      {
        v17 = v16++;
        sub_17F4E0((__int64 *)(32 * v17 + v14));
        v14 = v23;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v28 - __readfsqword(0x28u);
}

