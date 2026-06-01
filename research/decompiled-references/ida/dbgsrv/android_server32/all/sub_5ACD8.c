/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ACD8
// Address: 0x0005ACD8

//----- (0005ACD8) --------------------------------------------------------
int __fastcall sub_5ACD8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD **v7; // r0
  _DWORD v9[2]; // [sp+14h] [bp-Ch] BYREF

  v9[0] = a3;
  v9[1] = a3 + a4;
  v7 = (_DWORD **)(a1 - 100);
  if ( !a1 )
    v7 = nullptr;
  if ( a2 < 0x1000000 )
    return (*(int (__fastcall **)(_DWORD *))(*v7[61] + 200))(v7[61]);
  else
    return ((int (__fastcall *)(_DWORD **, int, int, int, _DWORD *))(*v7)[4])(v7, a2, a5, a6, v9);
}
