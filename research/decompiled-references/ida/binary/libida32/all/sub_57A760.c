void __fastcall __noreturn sub_57A760(const char *a1, double a2, double a3)
{
  unsigned __int64 v3; // rbp
  char v4[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v5; // [rsp+1008h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v3 = qfilesize(a1);
  if ( get_free_disk_space(a1, a2, a3) < v3 )
    sub_375400();
  sub_57A620(v4, 4096, a1, "$$$");
  qunlink(v4);
  sub_395C70((int)"HIDECANCEL\nCollecting garbage in the database");
}

