/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF4D0
// Address: 0x00000000004AF4D0

//----- (00000000004AF4D0) ----------------------------------------------------
void __fastcall __noreturn sub_4AF4D0(const void *a1, __int64 a2)
{
  size_t v2; // x21
  void *v4; // x0
  char v5[16]; // [xsp+0h] [xbp+0h] BYREF
  _BYTE dest[56]; // [xsp+30h] [xbp+30h] BYREF
  __int64 v7; // [xsp+68h] [xbp+68h] BYREF

  v2 = a2 - (_QWORD)a1;
  v4 = memcpy(
         dest,
         "not enough space for format expansion (Please submit full bug report at https://gcc.gnu.org/bugs/):\n    ",
         0x69u);
  memcpy(v5, v4, 0x68u);
  memcpy(&v7, a1, v2);
  dest[v2 + 56] = 0;
  sub_4A03B0(v5);
}
