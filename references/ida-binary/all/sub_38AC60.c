unsigned __int64 __fastcall struc_stroff_data_t__::vfunc_3(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v10; // [rsp-10h] [rbp-50h]
  __int64 v11; // [rsp+0h] [rbp-40h] BYREF
  __int128 v12; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  sub_38ABA0(a1, &v11, a4);
  append_struct_fields(a2, a3, 0, v11, (unsigned int)v12, 0, a5, a6);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, a3, v10);
  }
  return v13 - __readfsqword(0x28u);
}
