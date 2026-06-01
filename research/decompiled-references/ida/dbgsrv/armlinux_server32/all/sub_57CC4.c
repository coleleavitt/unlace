/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57CC4
// Address: 0x00057CC4

//----- (00057CC4) --------------------------------------------------------
int __fastcall sub_57CC4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r0
  int (*v7)(); // r12
  _DWORD v9[2]; // [sp+14h] [bp-10h] BYREF

  if ( a1 )
    a1 -= 25;
  v9[0] = a3;
  v9[1] = a3 + a4;
  if ( a2 >= 0x1000000 )
    return (*(int (__fastcall **)(_DWORD *, int, int, int, _DWORD *))(*a1 + 16))(a1, a2, a5, a6, v9);
  v6 = a1[61];
  v7 = *(int (**)())(*(_DWORD *)v6 + 200);
  if ( v7 == sub_15094 )
    return 0;
  else
    return ((int (__fastcall *)(int, int))v7)(v6, a2);
}
