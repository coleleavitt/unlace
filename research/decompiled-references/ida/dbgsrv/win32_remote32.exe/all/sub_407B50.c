/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407B50
// Address: 0x00407B50

//----- (00407B50) --------------------------------------------------------
int __thiscall sub_407B50(_DWORD *this, int *a2, int (__thiscall ***a3)(_DWORD, int))
{
  int v4; // edx
  int v5; // esi
  int v7; // [esp+Ch] [ebp-10h] BYREF
  int v8; // [esp+18h] [ebp-4h]

  v7 = 0;
  v4 = *(this + 7);
  v8 = 0;
  v5 = (*(int (__stdcall **)(int, int *, int *))(*(_DWORD *)v4 + 88))(v4, a2, &v7);
  if ( v5 >= 0 )
  {
    a2 = nullptr;
    LOBYTE(v8) = 2;
    v5 = (*(int (__stdcall **)(int, int **))(*(_DWORD *)v7 + 24))(v7, &a2);
    if ( !v5 )
      v5 = sub_404110(this, a2, a3);
    LOBYTE(v8) = 3;
    if ( a2 )
      (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
  v8 = 4;
  if ( v7 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7);
  return v5;
}
