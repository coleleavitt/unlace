/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A280
// Address: 0x0002A280

//----- (0002A280) --------------------------------------------------------
int __fastcall sub_2A280(int a1, void *a2, signed int a3, int a4)
{
  int v6; // r0
  int result; // r0
  int v8; // r5
  void (__fastcall *v9)(int, int, signed int, int, int, int); // r7
  int v10; // r0
  int v11; // r1

  v6 = *(_DWORD *)(a1 + 364);
  if ( a4 )
    a4 = *(unsigned __int8 *)(a1 + 480);
  result = sub_74F00(v6, a2, a3, a4);
  v8 = result;
  if ( result < 0 )
  {
    v9 = *(void (__fastcall **)(int, int, signed int, int, int, int))(a1 + 384);
    v10 = sub_74C30(*(_DWORD *)(a1 + 364), 0, 1);
    v9(a1, 19, a3, v8, v10, v11);
    return v8;
  }
  return result;
}
// 2A2C2: variable 'v11' is possibly undefined
