__int64 __fastcall sub_31D800(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 tinfo_property; // rax
  __int64 v5; // rdi
  __int64 v7; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+10h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  v3 = *a2;
  v7 = 0;
  tinfo_property = get_tinfo_property(v3, 9);
  v5 = *a1;
  v7 = tinfo_property;
  v8[0] = get_tinfo_property(v5, 11);
  LODWORD(a1) = compare_tinfo(v8[0], v7, 2);
  clear_tinfo_t(v8);
  clear_tinfo_t(&v7);
  return (unsigned int)a1;
}
