/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4682AA
// Address: 0x004682AA

//----- (004682AA) --------------------------------------------------------
int __usercall sub_4682AA@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int8 *a3, unsigned __int8 *a4, _DWORD *a5)
{
  unsigned __int8 *v5; // esi
  unsigned __int8 *v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _DWORD v13[3]; // [esp+4h] [ebp-10h] BYREF
  char v14; // [esp+10h] [ebp-4h]

  v5 = a3;
  if ( a3 )
  {
    v7 = a4;
    if ( a4 )
    {
      sub_467FF8((int)v13, a5);
      v8 = *(_DWORD *)(v13[1] + 148);
      do
      {
        v9 = *v5++;
        v10 = *(unsigned __int8 *)(v9 + v8);
        v11 = *v7++;
        v12 = *(unsigned __int8 *)(v11 + v8);
      }
      while ( v10 == v12 && v10 );
      if ( v14 )
        *(_DWORD *)(v13[0] + 848) &= ~2u;
      return v10 - v12;
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(a1, 0);
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 0x7FFFFFFF;
  }
}
