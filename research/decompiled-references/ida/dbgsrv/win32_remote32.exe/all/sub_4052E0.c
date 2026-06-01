/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4052E0
// Address: 0x004052E0

//----- (004052E0) --------------------------------------------------------
int __thiscall sub_4052E0(int this, int a2)
{
  int result; // eax
  BSTR bstrString; // [esp+8h] [ebp-4h] BYREF

  bstrString = (BSTR)this;
  result = (*(int (__stdcall **)(_DWORD, BSTR *))(**(_DWORD **)(this + 8) + 20))(*(_DWORD *)(this + 8), &bstrString);
  if ( !result )
  {
    sub_45A700(a2, bstrString, -1);
    SysFreeString(bstrString);
    return 0;
  }
  return result;
}
