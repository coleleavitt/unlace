/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A43B0
// Address: 0x00000000004A43B0

//----- (00000000004A43B0) ----------------------------------------------------
__int64 __fastcall sub_4A43B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 result; // x0

  v2 = a2;
  v3 = 1;
  while ( (unsigned __int8)_ITM_RU1(v2) )
  {
    ++v2;
    ++v3;
  }
  v6 = `transaction-clone for`operator new[](v3 + 24);
  *(_QWORD *)(v6 + 8) = v3 - 1;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = v3 - 1;
  v7 = v6 + 24;
  result = _ITM_memcpyRtWn(v6 + 24, a2, v3);
  if ( a1 )
    *a1 = v7;
  return result;
}
// 405A70: using guessed type __int64 __fastcall `transaction-clone for`operator new[](_QWORD);
// 405DB0: using guessed type __int64 __fastcall _ITM_RU1(_QWORD);
// 406000: using guessed type __int64 __fastcall _ITM_memcpyRtWn(_QWORD, _QWORD, _QWORD);
