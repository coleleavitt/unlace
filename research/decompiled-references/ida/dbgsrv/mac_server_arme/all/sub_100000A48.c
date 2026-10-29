/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100000A48
// Address: 0x0000000100000A48

//----- (0000000100000A48) ----------------------------------------------------
__int64 __fastcall sub_100000A48(__int64 a1, int a2)
{
  size_t v3; // x8
  int *v4; // x0
  size_t v6; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v7; // [xsp+1Ch] [xbp-54h] BYREF
  size_t v8; // [xsp+20h] [xbp-50h] BYREF
  int v9[12]; // [xsp+28h] [xbp-48h] BYREF

  v8 = 12;
  if ( sysctlnametomib("sysctl.proc_cputype", v9, &v8) )
  {
LABEL_4:
    v4 = __error();
    strerror(*v4);
    sub_100000B44();
    return 0;
  }
  v3 = v8;
  if ( v8 < 0xC )
  {
    v9[v8] = a2;
    v8 = v3 + 1;
    v6 = 4;
    if ( !sysctl(v9, v3 + 1, &v7, &v6, nullptr, 0) )
      return v7;
    goto LABEL_4;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(895);
  return sub_100000B44();
}
// 1000A590D: using guessed type char under_debugger;
