/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B4C0
// Address: 0x000000000049B4C0

//----- (000000000049B4C0) ----------------------------------------------------
__int64 __fastcall sub_49B4C0(const char *a1, char *s, _QWORD *a3)
{
  size_t v6; // x0
  const char *v7; // x0
  __int64 v8; // x5
  __int64 v9; // x2
  __int64 v10; // x3
  unsigned __int8 v12[16]; // [xsp+0h] [xbp+0h] BYREF
  _QWORD arg[5]; // [xsp+30h] [xbp+30h] BYREF

  v6 = strlen(s);
  v7 = sub_49AEC8(s, v12, v6 + 100);
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  arg[0] = *a3;
  arg[1] = v8;
  arg[2] = v9;
  arg[3] = v10;
  return vsscanf(a1, v7, arg);
}
