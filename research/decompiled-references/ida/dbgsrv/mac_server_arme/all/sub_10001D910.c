/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D910
// Address: 0x000000010001D910

//----- (000000010001D910) ----------------------------------------------------
__int64 __fastcall sub_10001D910(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 result; // x0
  int v9; // w9
  __int64 v10; // [xsp+8h] [xbp-138h] BYREF
  int v11; // [xsp+10h] [xbp-130h]
  __int64 v12; // [xsp+18h] [xbp-128h]

  result = sub_10001D5D0(a1, a2, (__int64)&v10);
  if ( (_DWORD)result )
  {
    v9 = v11;
    *a3 = v10;
    *a4 = v9;
    *a5 = v12;
  }
  return result;
}
