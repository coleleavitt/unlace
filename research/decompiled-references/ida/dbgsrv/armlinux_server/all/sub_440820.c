/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440820
// Address: 0x0000000000440820

//----- (0000000000440820) ----------------------------------------------------
__int64 __fastcall sub_440820(__int64 *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x25
  int v9; // w0
  char v10; // w21
  unsigned int v11; // w22
  char v13[16]; // [xsp+58h] [xbp-18h] BYREF

  v8 = sub_43CF60();
  v9 = sub_43D000(v8);
  v10 = v9;
  sub_49B748(v13, 0x10u, "___idcexec%d", v9);
  v11 = (unsigned __int8)sub_440448(v13, a2, a3, a4, 0);
  if ( v11 )
    v11 = (unsigned __int8)sub_450368(a1, v13, nullptr, 0, a3, a4);
  sub_43D0A8(v8, v10);
  return v11;
}
