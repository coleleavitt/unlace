/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000678E0
// Address: 0x00000001000678E0

//----- (00000001000678E0) ----------------------------------------------------
__int64 __fastcall sub_1000678E0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  bool v4; // cf
  __int64 result; // rax

  v2 = sub_100061BB0(a1, a2);
  v3 = v2 - 128;
  v4 = v2 < 0x81;
  result = -1;
  if ( !v4 )
    return v3;
  return result;
}
