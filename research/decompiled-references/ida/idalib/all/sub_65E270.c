bool __fastcall sub_65E270(__int64 *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *a1;
  v5[1] = __readfsqword(0x28u);
  v4 = 0;
  do
  {
    v5[0] = 0;
    v5[0] = get_tinfo_property(v1, 13);
    copy_tinfo_t(&v4);
    clear_tinfo_t(v5);
    v1 = v4;
    v2 = v4 & 0xF;
  }
  while ( (unsigned __int8)((v4 & 0xF) - 10) <= 1u );
  clear_tinfo_t(&v4);
  return v2 == 12;
}
