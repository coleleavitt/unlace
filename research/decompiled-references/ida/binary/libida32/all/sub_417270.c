void __fastcall sub_417270(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *(_DWORD *)(a2 + 12);
  if ( (a3 & 2) != 0 )
  {
    v5 = sub_5AFCE0(a1);
    sub_5B08F0(a1, v5, 0);
    if ( (a3 & 1) == 0 )
      goto LABEL_3;
  }
  else if ( (a3 & 1) == 0 )
  {
    goto LABEL_3;
  }
  v6 = sub_4EE820(a1 + 1552, v4);
  if ( v6 )
  {
    *(_WORD *)(v6 + 24) |= 4u;
    update_segm(v6);
    if ( (a3 & 4) == 0 )
      return;
    goto LABEL_8;
  }
LABEL_3:
  if ( (a3 & 4) == 0 )
    return;
LABEL_8:
  v7 = sub_3C25A0(a1, v4);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 32) = 0;
    sub_3C2740(a1, v7);
  }
}

