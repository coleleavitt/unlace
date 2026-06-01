/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000090AC
// Address: 0x00000001000090AC

//----- (00000001000090AC) ----------------------------------------------------
__int64 __fastcall sub_1000090AC(__int64 a1, _QWORD *a2)
{
  group *v4; // x0
  group *v5; // x20
  int v6; // w0
  gid_t gr_gid; // w8
  __int64 v8; // x12
  unsigned __int64 v9; // x11
  gid_t v10; // w13
  gid_t v12[16]; // [xsp+8h] [xbp-58h] BYREF

  sub_100005AFC(a1);
  sub_100060854(a1);
  if ( a2 )
    *a2 = 0x500000000LL;
  if ( getuid() )
  {
    if ( !sub_1000062B0() )
      goto LABEL_13;
    v4 = getgrnam("_developer");
    if ( !v4 )
      goto LABEL_13;
    v5 = v4;
    v6 = getgroups(16, v12);
    if ( v6 <= 0 )
      goto LABEL_13;
    gr_gid = v5->gr_gid;
    if ( v12[0] != gr_gid )
    {
      v8 = 1;
      do
      {
        v9 = v8;
        if ( v6 == v8 )
          break;
        v10 = v12[v8++];
      }
      while ( v10 != gr_gid );
      if ( v9 >= (unsigned int)v6 )
        goto LABEL_13;
    }
    if ( !sub_1000063AC(a1) )
LABEL_13:
      sub_100000B44();
    sub_100006BC8(a1);
  }
  return 1;
}
