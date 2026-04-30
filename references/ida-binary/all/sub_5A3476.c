__int64 __fastcall sub_5A3476(__int64 a1, _QWORD *a2, const char *a3)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  signed int v6; // [rsp+40h] [rbp-20h]
  unsigned int v7; // [rsp+44h] [rbp-1Ch]
  __int64 *v8; // [rsp+48h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 *v10; // [rsp+58h] [rbp-8h]

  v6 = sub_59FFFE(a3, 0, 0);
  if ( v6 < 0 )
    return 0;
  v10 = (__int64 *)sub_5A304E(a1, 0x400u);
  *v10 = 0;
  v10[1] = 0;
  v9 = 0;
  v8 = v10;
  while ( 1 )
  {
    do
      v5 = sub_5A005F(v6, (char *)v8 + v8[1] + 16, 1008 - v8[1]);
    while ( v5 == -1 && *__errno_location() == 4 );
    if ( v5 <= 0 )
      break;
    v9 += v5;
    v8[1] += v5;
    if ( v8[1] == 1008 )
    {
      *v8 = sub_5A304E(a1, 0x400u);
      v8 = (__int64 *)*v8;
      *v8 = 0;
      v8[1] = 0;
    }
  }
  sub_59FF54(v6);
  if ( !v9 )
    return 0;
  sub_5A4100(v4, a1 + 40);
  if ( (unsigned __int8)sub_5A8344(v4, v9) != 1 )
    return 0;
  v7 = sub_5A4140(v4);
  while ( v10 )
  {
    if ( v10[1] )
    {
      sub_5A83BE(v4, v7, v10 + 2, v10[1]);
      v7 += v10[1];
    }
    else if ( *v10 )
    {
      __assert_fail(
        "buffers->next == __null",
        "src/client/linux/minidump_writer/minidump_writer.cc",
        0x55Au,
        "bool {anonymous}::MinidumpWriter::WriteFile(MDLocationDescriptor*, const char*)");
    }
    v10 = (__int64 *)*v10;
  }
  *a2 = sub_5A4152(v4);
  return 1;
}
