/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008A90
// Address: 0x0000000140008A90

//----- (0000000140008A90) ----------------------------------------------------
__int64 __fastcall sub_140008A90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed int v6; // ebx
  const char *v7; // rax
  const char *v8; // rdi
  size_t v9; // rax
  BSTR bstrString[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 176LL))(
         *(_QWORD *)(a1 + 48),
         a4,
         &v12);
  if ( v6 || (v6 = (*(__int64 (__fastcall **)(__int64, BSTR *))(*(_QWORD *)v12 + 32LL))(v12, bstrString)) != 0 )
  {
    if ( v6 < 0 && a3 )
    {
      v7 = (const char *)sub_14005A890(v6);
      v8 = v7;
      if ( v7 && (v9 = strlen(v7)) != 0 )
        sub_140001810(a3, v8, v9);
      else
        *(_QWORD *)(a3 + 8) = 0;
    }
  }
  else
  {
    sub_140061D80(a2, bstrString[0], -1);
    SysFreeString(bstrString[0]);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v6;
}
