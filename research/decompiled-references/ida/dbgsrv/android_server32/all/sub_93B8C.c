/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93B8C
// Address: 0x00093B8C

//----- (00093B8C) --------------------------------------------------------
int __fastcall sub_93B8C(int result, _BYTE *a2, _BYTE *a3)
{
  size_t v3; // r5
  _DWORD *v5; // r4

  v3 = a3 - a2;
  if ( a3 != a2 )
  {
    v5 = (_DWORD *)result;
    sub_93BBC(result, a3 - a2);
    memmove((void *)(*v5 + v5[1]), a2, v3);
    result = v5[1] + v3;
    v5[1] = result;
  }
  return result;
}
