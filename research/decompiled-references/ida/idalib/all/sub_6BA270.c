__int64 __fastcall sub_6BA270(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10 = 257;
  v8 = 0;
  v9[1] = (unsigned int)a2;
  v9[0] = get_idati(a1, a2);
  v6 = create_tinfo(&v8, 61, 189, v9);
  if ( (_BYTE)v6 )
    LOBYTE(v6) = (unsigned int)set_tinfo_property4(&v8, 5, a3, a4 ^ 1u, 0, 0) == 0;
  clear_tinfo_t(&v8);
  return v6;
}
