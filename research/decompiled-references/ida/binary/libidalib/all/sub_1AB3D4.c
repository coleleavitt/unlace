_BYTE *__fastcall sub_1AB3D4(__int64 a1)
{
  int v1; // eax
  char *machine; // rax
  struct utsname name; // [rsp+10h] [rbp-1A0h] BYREF
  char v5[7]; // [rsp+197h] [rbp-19h] BYREF
  __int16 v6; // [rsp+19Eh] [rbp-12h] BYREF
  char *v7; // [rsp+1A0h] [rbp-10h]
  bool v8; // [rsp+1AEh] [rbp-2h]
  unsigned __int8 v9; // [rsp+1AFh] [rbp-1h]

  v9 = sysconf(83);
  v6 = 76;
  strcpy(v5, "x86_64");
  sub_1AAF74(a1, (__int64)"O ");
  sub_1AAF74(a1, (__int64)&v6);
  sub_1AAF74(a1, (__int64)" ");
  sub_1AAF74(a1, (__int64)v5);
  sub_1AAF74(a1, (__int64)" ");
  sub_1AC02C(a1, v9);
  sub_1AAF74(a1, (__int64)" ");
  v1 = uname(&name);
  v8 = v1 == 0;
  if ( v1 )
    machine = "unknown_hw_arch";
  else
    machine = name.machine;
  v7 = machine;
  sub_1AAF74(a1, (__int64)machine);
  sub_1AAF74(a1, (__int64)" ");
  if ( *(_QWORD *)(a1 + 56) )
  {
    sub_1AAF74(a1, *(_QWORD *)(a1 + 56));
  }
  else if ( v8 )
  {
    sub_1AAFA4(a1, (__int64)name.release);
    sub_1AAF74(a1, (__int64)" ");
    sub_1AAFA4(a1, (__int64)name.version);
  }
  else
  {
    sub_1AAF74(a1, (__int64)"no build fingerprint available");
  }
  return sub_1AB020(a1);
}

