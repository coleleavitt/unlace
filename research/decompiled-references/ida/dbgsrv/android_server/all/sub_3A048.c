/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A048
// Address: 0x000000000003A048

//----- (000000000003A048) ----------------------------------------------------
__int64 __fastcall sub_3A048(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x21
  unsigned int v4; // w20
  bool v7; // zf
  __int64 result; // x0

  v3 = a3 - (a3 & 1);
  if ( (a3 & 1) != 0 )
    v4 = 2;
  else
    v4 = 4;
  v7 = (unsigned int)sub_3E500(a1, 0xFFFFFFFF, a3 - (a3 & 1), (unsigned __int64 *)(a2 + 8), v4, 0) == v4;
  result = 0;
  if ( v7 )
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 312LL))(
               a1,
               0,
               4,
               v3,
               v4);
    if ( (_DWORD)result )
    {
      *(_QWORD *)a2 = v3;
      *(_BYTE *)(a2 + 12) = v4;
      return 1;
    }
  }
  return result;
}
