/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C400
// Address: 0x0007C400

//----- (0007C400) --------------------------------------------------------
int __cdecl sub_7C400(int a1, int a2, int a3, int a4)
{
  char v4; // dl
  int v5; // eax
  int v6; // ecx
  int result; // eax
  char v8; // [esp+3h] [ebp-11h]

  v4 = *(_BYTE *)(a4 + 153);
  if ( !v4 || (v8 = *(_BYTE *)(a4 + 153), v5 = sub_7EC10(a4, 40), v4 = v8, v6 = 2, !v5) )
    v6 = 1;
  result = 0;
  if ( v4 )
    return v6;
  return result;
}
