/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DD00
// Address: 0x0045DD00

//----- (0045DD00) --------------------------------------------------------
int __cdecl sub_45DD00(_WORD *a1, int a2)
{
  int v2; // ebx
  __int16 v3; // ax
  int result; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  __int16 v8; // ax
  _BYTE v9[20]; // [esp+8h] [ebp-1Ch] BYREF
  __int16 v10; // [esp+1Ch] [ebp-8h]

  v2 = 112;
  *(_DWORD *)v9 = *(_DWORD *)a2;
  *(_OWORD *)&v9[4] = 0;
  v10 = 0;
  while ( 1 )
  {
    v3 = a1[9];
    if ( v3 )
      break;
    sub_464310((unsigned int)(a1 + 3), (unsigned int)(a1 + 2), 0x10u);
    result = 0;
    a1[2] = 0;
    v2 -= 16;
    if ( !v2 )
    {
      *(_OWORD *)a2 = 0;
      *(_DWORD *)(a2 + 16) = 0;
      *(_WORD *)(a2 + 20) = 0;
      return result;
    }
  }
  if ( !(_BYTE)v3 )
  {
    sub_45E220((int)a1);
    v2 -= 8;
  }
  v5 = 0;
  if ( v2 > 0 )
  {
    do
    {
      if ( (a1[9] & 1) != 0 )
        sub_45D960((_WORD *)a2, v9);
      v6 = v5 | 1;
      if ( (v10 & 1) == 0 )
        v6 = v5;
      v5 = v6;
      sub_45E090(a1);
      sub_45E090(v9);
      --v2;
    }
    while ( v2 );
  }
  v7 = *(_DWORD *)&v9[16];
  v8 = v10;
  *(_OWORD *)a2 = *(_OWORD *)v9;
  *(_DWORD *)(a2 + 16) = v7;
  *(_WORD *)(a2 + 20) = v8;
  return v5;
}
