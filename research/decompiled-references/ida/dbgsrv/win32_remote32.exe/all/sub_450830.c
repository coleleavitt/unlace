/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450830
// Address: 0x00450830

//----- (00450830) --------------------------------------------------------
_BYTE *__stdcall sub_450830(const char *a1)
{
  unsigned int v1; // kr00_4
  _BYTE *v2; // eax
  _BYTE *v3; // edi

  if ( !a1 )
    return nullptr;
  v1 = strlen(a1);
  v2 = sub_46C90D(1u, v1 + 1);
  v3 = v2;
  if ( !v2 )
    return nullptr;
  sub_46C78C(v1 + 1, (int)v2, v2, v1 + 1, (int)a1);
  return v3;
}
