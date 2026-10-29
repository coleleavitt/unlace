/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408120
// Address: 0x00408120

//----- (00408120) --------------------------------------------------------
int __thiscall sub_408120(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // esi
  int v5; // esi
  int v6; // ecx
  char v8; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+4h] [ebp-18h]
  BSTR bstrString; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-4h]

  v4 = a3;
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 136))(a3) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30537);
  }
  v5 = (*(int (__stdcall **)(_DWORD, BSTR *))(*(_DWORD *)v4[2] + 132))(v4[2], &bstrString);
  if ( !v5 )
  {
    a3 = nullptr;
    v6 = *(this + 7);
    v11 = 0;
    v5 = (*(int (__stdcall **)(int, _DWORD, BSTR, int, _DWORD **))(*(_DWORD *)v6 + 84))(v6, 0, bstrString, 4, &a3);
    SysFreeString(bstrString);
    if ( !v5 )
      sub_403E30(this, 0, a2, a3, v8, v9);
    v11 = 1;
    if ( a3 )
      (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3);
  }
  return v5;
}
// 40819E: variable 'v8' is possibly undefined
// 40819E: variable 'v9' is possibly undefined
// 4B70F0: using guessed type char byte_4B70F0;
