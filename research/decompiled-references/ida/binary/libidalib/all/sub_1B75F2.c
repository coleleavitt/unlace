__int64 __fastcall sub_1B75F2(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[4]; // [rsp+18h] [rbp-3E8h] BYREF
  int v5; // [rsp+1Ch] [rbp-3E4h]
  _QWORD v6[6]; // [rsp+20h] [rbp-3E0h] BYREF
  _BYTE v7[512]; // [rsp+50h] [rbp-3B0h] BYREF
  struct utsname name; // [rsp+250h] [rbp-1B0h] BYREF
  __int64 v9; // [rsp+3D8h] [rbp-28h]
  __int64 v10; // [rsp+3E0h] [rbp-20h]
  _QWORD *i; // [rsp+3E8h] [rbp-18h]
  char v12; // [rsp+3F7h] [rbp-9h]
  unsigned __int64 v13; // [rsp+3F8h] [rbp-8h]

  *(_DWORD *)(a2 + 20) = 33281;
  if ( uname(&name) )
    return 0;
  memset(v7, 0, sizeof(v7));
  v13 = 511;
  v6[4] = 0;
  v6[0] = &name;
  v6[1] = name.release;
  v6[2] = name.version;
  v6[3] = name.machine;
  v12 = 1;
  for ( i = v6; *i; ++i )
  {
    v10 = 1;
    v9 = my_strlen(*i);
    if ( v9 )
    {
      if ( v12 )
        v3 = 0;
      else
        v3 = v10;
      if ( v13 < v9 + v3 )
        break;
      if ( v12 != 1 )
      {
        my_strlcat(v7, &unk_1DA3C8, 512);
        v13 -= v10;
      }
      v12 = 0;
      my_strlcat(v7, *i, 512);
      v13 -= v9;
    }
  }
  if ( (unsigned __int8)google_breakpad::MinidumpFileWriter::WriteString(a1 + 40, v7, 0, v4) != 1 )
    return 0;
  *(_DWORD *)(a2 + 24) = v5;
  return 1;
}

