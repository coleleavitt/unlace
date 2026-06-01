bool __fastcall cpp_external_colorizer_t__::vfunc_3(__int64 a1, _DWORD *a2, const char **a3)
{
  __int64 name_ea; // rax
  unsigned __int8 v7; // al
  int v8; // eax
  __int64 v9; // rcx
  const char *v10; // rsi
  const char *v11; // rsi
  __int64 v12; // [rsp+8h] [rbp-40h]
  const char *v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( !a3[1] )
    return 0;
  name_ea = get_name_ea(-1, *a3);
  if ( name_ea == -1 )
  {
    v13 = nullptr;
    v14 = 0;
    v9 = (unsigned int)getinf(99);
    v10 = &s1;
    if ( a3[1] )
      v10 = *a3;
    if ( !(unsigned __int8)gen_decorate_name(&v13, v10, 1, v9, 0) )
    {
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13, v10);
      }
      return 0;
    }
    v11 = v13;
    name_ea = get_name_ea(-1, v13);
    if ( v13 )
    {
      v12 = name_ea;
      *(_QWORD *)&v14 = 0;
      qfree(v13, v11);
      name_ea = v12;
    }
    if ( name_ea == -1 )
      return 0;
  }
  v7 = calc_prefix_color(name_ea) - 3;
  if ( v7 > 0x20u )
  {
    *a2 = 0;
    return 0;
  }
  v8 = byte_5E9200[v7];
  *a2 = v8;
  return v8 != 0;
}
