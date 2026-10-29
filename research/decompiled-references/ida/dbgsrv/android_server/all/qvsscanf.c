/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsscanf
// Address: 0x00000000000C656C

//----- (00000000000C656C) ----------------------------------------------------
__int64 __fastcall qvsscanf(const char *a1, char *s, _OWORD *a3)
{
  size_t v6; // x0
  const char *v7; // x0
  __int128 v8; // q0
  _OWORD arg[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v11; // [xsp+28h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = strlen(s);
  v7 = sub_C61D8(s, (unsigned __int8 *)arg - ((v6 + 115) & 0xFFFFFFFFFFFFFFF0LL), v6 + 100);
  v8 = a3[1];
  arg[0] = *a3;
  arg[1] = v8;
  return vsscanf(a1, v7, arg);
}
