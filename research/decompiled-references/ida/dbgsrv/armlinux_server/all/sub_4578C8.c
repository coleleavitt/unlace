/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4578C8
// Address: 0x00000000004578C8

//----- (00000000004578C8) ----------------------------------------------------
__int64 __fastcall sub_4578C8(__int64 a1, unsigned __int8 **a2, _DWORD *a3)
{
  __int64 result; // x0
  bool v6; // zf

  result = sub_4567F8(a1, (__int64)a2, 0, a3);
  if ( *(_QWORD *)(a1 + 64) )
    v6 = (_DWORD)result == 0;
  else
    v6 = 0;
  if ( v6 )
    return sub_4574E0((__int64 **)a1, a2);
  return result;
}
