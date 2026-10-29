/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F5F0
// Address: 0x0043F5F0

//----- (0043F5F0) --------------------------------------------------------
int __stdcall sub_43F5F0(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v2 )
    return 0;
  sub_415CB0(a2 + 8, v2);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = sub_439DB0();
  if ( (*(int (__stdcall **)(int, int, int, int, _DWORD))(*(_DWORD *)v5 + 140))(v5, v3, v4, v2, 0) == v2 )
    return 0;
  else
    return sub_41BD30(a2, "read error");
}
