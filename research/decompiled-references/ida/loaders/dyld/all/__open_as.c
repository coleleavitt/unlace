__int64 __fastcall _open_as(int a1, int *a2)
{
  unsigned __int64 v4; // x25
  int v5; // w20
  int v6; // w21
  int *v7; // x0
  __int64 v8; // x23
  __int64 v9; // x0
  __int64 unsafe; // x0
  __int64 v12; // x19
  __int64 v13; // x20
  __int64 v14; // x21
  int *v15; // x0
  int v16[3]; // [xsp+10h] [xbp-50h] BYREF
  int v17; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = 0;
  v5 = *a2;
  *a2 = -1;
  do
  {
    v6 = open("/dev/null", a1, 0);
    v7 = __error();
    if ( v6 < 0 )
    {
      if ( !*v7 )
        dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "srcfd", v6);
    }
    else
    {
      *v7 = 0;
    }
    v8 = (unsigned int)*__error();
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 5 )
      {
        v17 = v6;
        v8 = (unsigned int)*__error();
        if ( v6 < 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      v8 = (unsigned int)*__error();
      sleep_ns(0x2FAF080u);
      ++v4;
    }
  }
  while ( v6 < 0 && v4 < 0xA );
  v17 = v6;
  if ( v4 == 10 )
  {
    *(_QWORD *)v16 = -1;
    v9 = __pipe(v16);
    if ( (_DWORD)v9 )
    {
      unsafe = boot_get_unsafe(v9);
      v12 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
      v13 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
      v14 = (unsigned int)*__error();
      v15 = __error();
      ignition_halt(v12, v14, v13, "failed to create pipe for 88828241 workaround: %d", *v15);
    }
    v6 = v16[0];
    v17 = v16[0];
    closefd(&v16[1], "pipe write end");
    v8 = 0;
  }
  if ( (v6 & 0x80000000) == 0 )
  {
LABEL_16:
    *a2 = dupfd2(v6, v5, "reserved src fd");
    if ( v6 == v5 )
      v17 = -1;
  }
LABEL_18:
  closefd_optional(&v17, "reserved fd src");
  if ( (unsigned int)v8 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v8);
  return v8;
}
