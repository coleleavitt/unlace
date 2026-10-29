/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93774
// Address: 0x00093774

//----- (00093774) --------------------------------------------------------
int __fastcall sub_93774(__int64 **a1)
{
  __int64 v1; // r0
  int result; // r0
  int v3; // r1
  bool v4; // zf

  v1 = **a1;
  if ( HIDWORD(v1) == (_DWORD)v1 )
    return 1;
  v3 = *(unsigned __int8 *)v1;
  result = 1;
  v4 = v3 == 46;
  if ( v3 != 46 )
    v4 = v3 == 69;
  if ( !v4 && v3 != 95 )
    return 0;
  return result;
}
