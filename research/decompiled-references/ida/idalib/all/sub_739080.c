void __fastcall __noreturn sub_739080(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  sub_38E3E0((__int64)&unk_22D2079);
  qword_2CCC5A8(a1, a2);
  off_2C81BC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))qword_2CCC5A8;
  sub_733E40((__int64)"\r*** FATAL: %s\n", "can't continue compressing");
  sub_743080();
  remove(filename);
  off_2C81BC0(0x14u, 0, v2, v3, v4, v5);
}
