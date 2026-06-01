/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005930
// Address: 0x0000000140005930

//----- (0000000140005930) ----------------------------------------------------
__int64 __fastcall sub_140005930(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  BSTR bstrString; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, BSTR *))(**(_QWORD **)(a1 + 16) + 40LL))(
             *(_QWORD *)(a1 + 16),
             &bstrString);
  if ( !(_DWORD)result )
  {
    sub_140061D80(a2, bstrString, -1);
    SysFreeString(bstrString);
    return 0;
  }
  return result;
}
