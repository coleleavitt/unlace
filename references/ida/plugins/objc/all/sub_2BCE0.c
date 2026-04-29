unsigned __int64 __fastcall sub_2BCE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+50h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_3C8E0;
  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 8) = 6;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  get_idati();
  create_tinfo();
  get_idati();
  create_tinfo();
  get_idati();
  create_tinfo();
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v3 - __readfsqword(0x28u);
}
