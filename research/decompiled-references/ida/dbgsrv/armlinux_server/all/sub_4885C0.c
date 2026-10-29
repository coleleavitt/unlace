/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4885C0
// Address: 0x00000000004885C0

//----- (00000000004885C0) ----------------------------------------------------
__int64 __fastcall sub_4885C0(_QWORD *a1, __int64 *a2, char a3)
{
  __int64 result; // x0
  unsigned __int64 v5; // [xsp+20h] [xbp-10h] BYREF

  result = sub_488070(&v5, a2, 64, a3);
  if ( (_DWORD)result == 1 )
    *a1 = v5;
  return result;
}
