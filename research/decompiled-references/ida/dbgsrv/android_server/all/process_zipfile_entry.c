/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zipfile_entry
// Address: 0x00000000000B8678

//----- (00000000000B8678) ----------------------------------------------------
__int64 __fastcall process_zipfile_entry(
        __int64 a1,
        char *a2,
        __int64 (__fastcall *a3)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a4,
        char a5)
{
  int32x2_t *v9; // x0
  unsigned int v10; // w22
  __int64 v11; // x19
  unsigned int v12; // w2
  int v13; // w0

  v9 = sub_D23B8(a1);
  v10 = 1;
  if ( v9 )
  {
    v11 = (__int64)v9;
    if ( (a5 & 1) != 0 )
      v12 = 1;
    else
      v12 = 2;
    v13 = sub_D3248((__int64)v9, a2, v12);
    if ( v13 )
    {
      if ( v13 < 0 )
        v10 = -v13;
      else
        v10 = 0;
    }
    else
    {
      v10 = sub_B8718(v11, a3, a4);
    }
    sub_D23D0(v11);
  }
  return v10;
}
