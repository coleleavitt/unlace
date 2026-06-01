__int64 __fastcall sub_2E64E0(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 local_types_tlc; // rax
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v10 = __readfsqword(0x28u);
  v7 = 0;
  if ( a2 )
  {
    v9 = 257;
    v8[1] = (unsigned int)a1;
    v8[0] = get_idati(a1);
    if ( (unsigned __int8)create_tinfo(&v7, 61, 189, v8) )
    {
      local_types_tlc = get_local_types_tlc(&v7, 61);
      v3 = sub_3AC430(&v7, a3, local_types_tlc);
    }
  }
  clear_tinfo_t(&v7);
  return v3;
}
