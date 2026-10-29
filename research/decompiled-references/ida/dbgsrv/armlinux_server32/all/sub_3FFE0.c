/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FFE0
// Address: 0x0003FFE0

//----- (0003FFE0) --------------------------------------------------------
const char *__fastcall sub_3FFE0(unsigned __int8 *a1, const char *a2, void **a3, int a4)
{
  int v8; // r9
  int v9; // r0
  char v10; // r5
  const char *v11; // r10
  char v13[16]; // [sp+14h] [bp-18h] BYREF

  v8 = sub_3E4E0();
  v9 = sub_3E574(v8);
  v10 = v9;
  sub_7EBB4(v13, 16, "___idcexec%d", v9);
  v11 = sub_3FD54(v13, a2, a3, a4, 0);
  if ( v11 )
    v11 = (const char *)sub_4B150(a1, v13, nullptr, 0, (int)a3, a4);
  sub_3E60C(v8, v10);
  return v11;
}
