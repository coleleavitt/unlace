/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8063900
// Address: 0x08063900

//----- (08063900) --------------------------------------------------------
int __cdecl sub_8063900(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebp
  int (__cdecl *v7)(int, int, int, int); // eax
  int v8; // eax

  v5 = a5;
  v6 = a3;
  if ( !a4 )
    return (unsigned __int8)sub_80B9EE0((int *)a1, v6, a2);
  v7 = *(int (__cdecl **)(int, int, int, int))(*(_DWORD *)a1 + 148);
  if ( v7 == sub_80637F0 )
  {
    v8 = 0;
    if ( !*(_BYTE *)(a1 + 733) && *(_DWORD *)(a1 + 724) != -1 )
      v8 = sub_8063570(a1, -1, a3, a4, a5, 1);
  }
  else
  {
    v8 = ((int (__cdecl *)(int, int, int, int, _DWORD))v7)(a1, a3, a4, a5, 0);
  }
  if ( v5 != v8 )
    return (unsigned __int8)sub_80B9EE0((int *)a1, v6, a2);
  sub_80553C0((_DWORD *)(a1 + 736), (unsigned int *)&a3);
  return 1;
}
