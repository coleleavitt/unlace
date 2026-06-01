/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438F90
// Address: 0x00438F90

//----- (00438F90) --------------------------------------------------------
int __thiscall sub_438F90(int this, int a2, char **a3)
{
  __int8 *v5; // eax
  unsigned int v6; // ecx
  int v7; // esi
  int v8; // eax
  int result; // eax
  int v10; // [esp+Ch] [ebp-4h]
  unsigned int v11; // [esp+18h] [ebp+8h]

  v5 = sub_464F10(*a3, 0);
  *a3 = v5;
  v10 = *(_DWORD *)(this + 72);
  v6 = *(_DWORD *)(this + 92);
  v11 = (unsigned int)v5;
  if ( v6 < (unsigned int)v5 )
  {
    v7 = sub_4399B0(*(_DWORD *)(this + 88), v6);
    v8 = sub_4399B0(*(_DWORD *)(this + 92), v11);
    (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)a2 + 4))(a2, v7, v8, v10);
    *(_DWORD *)(this + 92) = v11;
  }
  if ( *(*a3 - 1) == *(_BYTE *)(this + 104) )
  {
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 16))(a2, 16);
    result = *(_DWORD *)(this + 72);
  }
  else
  {
    result = *(_DWORD *)(this + 60);
  }
  *(_DWORD *)(this + 96) = result;
  return result;
}
