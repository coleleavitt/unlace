/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79FC0
// Address: 0x00079FC0

//----- (00079FC0) --------------------------------------------------------
void __fastcall sub_79FC0(int a1, int *a2)
{
  _DWORD *v2; // r4
  int *v5; // r8
  int v6; // r0
  int v7; // r5

  v2 = *(_DWORD **)(a1 + 12);
  if ( v2 == (_DWORD *)(a1 + 12) )
  {
LABEL_6:
    if ( !under_debugger )
      sub_78C64(1209);
LABEL_7:
    __und(0xFFu);
  }
  while ( a2 != v2 + 2 )
  {
    v2 = (_DWORD *)*v2;
    if ( (_DWORD *)(a1 + 12) == v2 )
      goto LABEL_6;
  }
  v5 = _errno_location();
  v6 = a2[4];
  v7 = *v5;
  if ( sub_79EE8(v6, 0) )
  {
    if ( !under_debugger )
      sub_78C64(1158);
    goto LABEL_7;
  }
  *(_DWORD *)v2[1] = *v2;
  *(_DWORD *)(*v2 + 4) = v2[1];
  sub_79D3C(v2[6]);
  sub_77F70(v2);
  --*(_DWORD *)(a1 + 20);
  *v5 = v7;
}
// D6C20: using guessed type char under_debugger;
