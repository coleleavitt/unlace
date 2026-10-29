__int64 __fastcall sub_59EA9E(__int64 a1, int a2)
{
  sub_599EF6(a1, a2, (__int64)&unk_75A3A8);
  *(_QWORD *)a1 = google_breakpad::LinuxPtraceDumper___vtable;
  *(_BYTE *)(a1 + 256) = 0;
  return a1;
}
