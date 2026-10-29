__int64 __fastcall sub_619510(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = 0;
  v3 = parse_decl(v5, 0, a1, a3, 269);
  if ( (_BYTE)v3 )
    v3 = apply_tinfo(a2);
  clear_tinfo_t(v5);
  return v3;
}
