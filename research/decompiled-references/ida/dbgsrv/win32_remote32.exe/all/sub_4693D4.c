/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4693D4
// Address: 0x004693D4

//----- (004693D4) --------------------------------------------------------
int __usercall sub_4693D4@<eax>(int a1@<ebx>, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // esi
  unsigned __int8 *v6; // edi
  int result; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  _DWORD v11[3]; // [esp+8h] [ebp-10h] BYREF
  char v12; // [esp+14h] [ebp-4h]

  v5 = a4;
  v6 = (unsigned __int8 *)a2;
  if ( !a2 && a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 0x7FFFFFFF;
  }
  if ( !a3 )
  {
    if ( a4 )
    {
      *sub_46B984() = 22;
      sub_467EF4(0, a2);
      return 0x7FFFFFFF;
    }
    return 0;
  }
  if ( !a4 )
    return 0;
  sub_467FF8((int)v11, a5);
  v8 = *(_DWORD *)(v11[1] + 148);
  do
  {
    v9 = *(unsigned __int8 *)(v6[a3 - a2] + v8);
    v10 = *v6++;
    result = *(unsigned __int8 *)(v10 + v8) - v9;
    if ( result )
      break;
    --v5;
  }
  while ( v5 );
  if ( v12 )
    *(_DWORD *)(v11[0] + 848) &= ~2u;
  return result;
}
