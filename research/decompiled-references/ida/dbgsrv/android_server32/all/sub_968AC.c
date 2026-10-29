/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_968AC
// Address: 0x000968AC

//----- (000968AC) --------------------------------------------------------
int __fastcall sub_968AC(int a1, int a2)
{
  unsigned __int8 *v4; // r0
  _BYTE **v5; // r5
  _BYTE *v6; // t1
  _BYTE **v7; // r6
  int v9[3]; // [sp+4h] [bp-1Ch] BYREF

  v9[0] = a2;
  v9[1] = a1;
  sub_9241E(a2, 40);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v4 = *(unsigned __int8 **)(a1 + 12);
    if ( v4 )
    {
      sub_923F8(v4, a2);
      sub_9241E(a2, 32);
      v6 = *(_BYTE **)(a1 + 16);
      v5 = (_BYTE **)(a1 + 16);
      v7 = v5 + 1;
      sub_93B8C(a2, v6, v5[1]);
      sub_9241E(a2, 32);
    }
    else
    {
      v7 = (_BYTE **)(a1 + 20);
      v5 = (_BYTE **)(a1 + 16);
    }
    sub_93B8C(a2, "... ", "");
    sub_93B8C(a2, *v5, *v7);
    sub_9241E(a2, 32);
    sub_969A8(v9);
  }
  else
  {
    sub_969A8(v9);
    sub_9241E(a2, 32);
    sub_93B8C(a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
    sub_93B8C(a2, " ...", "");
    if ( *(_DWORD *)(a1 + 12) )
    {
      sub_9241E(a2, 32);
      sub_93B8C(a2, *(_BYTE **)(a1 + 16), *(_BYTE **)(a1 + 20));
      sub_9241E(a2, 32);
      sub_923F8(*(unsigned __int8 **)(a1 + 12), a2);
    }
  }
  sub_9241E(a2, 41);
  return _stack_chk_guard - v9[2];
}
