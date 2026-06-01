/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33100
// Address: 0x00033100

//----- (00033100) --------------------------------------------------------
unsigned int __cdecl sub_33100(unsigned int a1, int a2)
{
  unsigned int result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // [esp+4h] [ebp-38h]
  int v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+24h] [ebp-18h]

  *(_DWORD *)(a1 + 60) = 0;
  result = *(unsigned __int16 *)(a1 + 30);
  if ( result != 0xFFFF )
  {
    if ( result <= 0xFEFF )
      *(_DWORD *)(a1 + 60) = result;
    return result;
  }
  v3 = *(_DWORD *)(a2 + 212);
  if ( v3 > a1 || v3 + 68 * *(_DWORD *)(a2 + 216) < a1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20088);
LABEL_24:
    BUG();
  }
  v4 = -252645135 * ((int)(a1 - v3) >> 2);
  if ( v4 >= *(_DWORD *)(a2 + 224) )
  {
    v5 = *(_DWORD *)(a2 + 140);
    if ( v5 )
    {
      if ( !*(_BYTE *)(a2 + 176) )
      {
LABEL_22:
        if ( !(_BYTE)under_debugger )
          interr(20099);
        goto LABEL_24;
      }
      v4 -= *(_DWORD *)(a2 + 224);
      if ( *(_DWORD *)(a2 + 60) > v5 )
        goto LABEL_14;
    }
    return sub_333F0();
  }
  v5 = *(_DWORD *)(a2 + 136);
  if ( !v5 )
    return sub_333F0();
  if ( !*(_BYTE *)(a2 + 176) )
    goto LABEL_22;
  if ( *(_DWORD *)(a2 + 60) <= v5 )
    return sub_333F0();
LABEL_14:
  v6 = *(_DWORD *)(a2 + 56);
  v7 = v5 << 6;
  if ( !(v7 + v6) )
    return sub_333F0();
  v10 = *(_DWORD *)(v6 + v7 + 24);
  if ( !*(_QWORD *)(v6 + v7 + 24) )
    return sub_333F0();
  v9 = 4 * v4;
  if ( (unsigned __int64)(4 * v4) >= *(_QWORD *)(v6 + v7 + 32) )
    return sub_333F0();
  LODWORD(v8) = v9 + v10;
  HIDWORD(v8) = __CFADD__(v9, v10) + *(_DWORD *)(v6 + v7 + 28);
  result = sub_33290(a2, v8);
  *(_DWORD *)(a1 + 60) = result;
  if ( !result )
    return sub_333F0();
  return result;
}
// 13E34C: using guessed type int under_debugger;
