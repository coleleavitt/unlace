/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F660
// Address: 0x0043F660

//----- (0043F660) --------------------------------------------------------
int __stdcall sub_43F660(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v5; // ebx
  int v6; // edi
  _DWORD v7[2]; // [esp+14h] [ebp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = sub_439DB0();
  if ( (*(int (__stdcall **)(int, int, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 140))(v3, v2, v7, 8, 0) != 8 )
    return sub_41BD30(a2, "read error");
  v5 = v7[1];
  v6 = v7[0];
  sub_423B70(a2);
  *(_DWORD *)(a2 + 8) = v6;
  *(_DWORD *)(a2 + 12) = v5;
  *(_BYTE *)a2 = 9;
  return 0;
}
