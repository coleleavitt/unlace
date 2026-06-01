void __fastcall __noreturn sub_718B40(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  sub_389700((__int64)&unk_22AF079);
  qword_2CA26A8(a1, a2);
  off_2C57CC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))qword_2CA26A8;
  sub_713900((__int64)"\r*** FATAL: %s\n", "can't continue compressing");
  sub_722B40();
  remove(filename);
  off_2C57CC0(0x14u, 0, v2, v3, v4, v5);
}

