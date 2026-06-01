/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D06F
// Address: 0x0047D06F

//----- (0047D06F) --------------------------------------------------------
int __cdecl sub_47D06F(const char *a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  unsigned int v6; // ebx
  _BYTE *v7; // eax
  _BYTE *v8; // esi
  int v9; // esi
  int v10; // [esp+0h] [ebp-4h]
  int v11; // [esp+0h] [ebp-4h]

  v4 = strlen(a1) + 1;
  v10 = v4;
  if ( v4 > ~a3 )
    return 12;
  v6 = v4 + a3 + 1;
  v7 = sub_4791B9(v6, 1u);
  v8 = v7;
  if ( a3 && sub_46C902(a3, v7, v6, a2, a3) || (v6 -= a3, sub_46C902(a3, &v8[a3], v6, (int)a1, v10)) )
  {
    sub_467F04(v6, 0);
    __debugbreak();
  }
  v11 = sub_47D377((int *)a4);
  if ( v11 )
  {
    sub_479216(v8);
    v9 = v11;
  }
  else
  {
    **(_DWORD **)(a4 + 4) = v8;
    v9 = 0;
    *(_DWORD *)(a4 + 4) += 4;
  }
  sub_479216(nullptr);
  return v9;
}
