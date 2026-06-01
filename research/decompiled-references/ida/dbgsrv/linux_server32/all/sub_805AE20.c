/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805AE20
// Address: 0x0805AE20

//----- (0805AE20) --------------------------------------------------------
unsigned int __cdecl sub_805AE20(int (**a1)(), int (**a2)(), int a3)
{
  int v3; // edx
  int *v4; // ecx
  unsigned int result; // eax
  int *v6; // esi
  int (**v7[5])(); // [esp+0h] [ebp-24h] BYREF
  unsigned int v8; // [esp+14h] [ebp-10h]

  v8 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a3 + 12);
  if ( *(_DWORD *)a3 == -1 )
  {
    v6 = &dword_80DDFD8;
    if ( v3 )
      v6 = *(int **)(a3 + 8);
    sub_80A03F0((int)a1, "Can't import symbols from %s: no imagebase\n", v6);
  }
  else
  {
    v7[2] = a1;
    v4 = &dword_80DDFD8;
    v7[1] = (int (**)())49;
    v7[0] = (int (**)())&off_811B7F4;
    v7[3] = (int (**)())a3;
    v7[4] = a2;
    if ( v3 )
      v4 = *(int **)(a3 + 8);
    sub_8072650((int)v4, v7, 0);
  }
  result = v8 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811B7F4: using guessed type int (__cdecl *off_811B7F4)(int, int, int);
