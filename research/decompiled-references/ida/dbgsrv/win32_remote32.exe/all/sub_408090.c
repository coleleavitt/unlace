/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408090
// Address: 0x00408090

//----- (00408090) --------------------------------------------------------
int __thiscall sub_408090(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  int v8; // esi
  _DWORD *v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-4h]

  v10 = nullptr;
  v7 = *(this + 7);
  v11 = 0;
  v8 = (*(int (__stdcall **)(int, int, int, int, _DWORD **))(*(_DWORD *)v7 + 104))(v7, a3, a4, a5, &v10);
  if ( !v8 )
    v8 = sub_403EE0((int)this, a2, v10);
  v11 = 1;
  if ( v10 )
    (*(void (__stdcall **)(_DWORD *))(*v10 + 8))(v10);
  return v8;
}
