void __fastcall sub_42AD10(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = *(_QWORD *)(a2 + 16);
  if ( (a3 & 2) != 0 )
  {
    v5 = sub_5CAA10(a1);
    sub_5CB660(a1, v5, 0);
    if ( (a3 & 1) == 0 )
      goto LABEL_3;
  }
  else if ( (a3 & 1) == 0 )
  {
    goto LABEL_3;
  }
  v6 = sub_505D70(a1 + 1624, v4);
  if ( v6 )
  {
    *(_WORD *)(v6 + 44) |= 4u;
    update_segm(v6);
    if ( (a3 & 4) == 0 )
      return;
    goto LABEL_8;
  }
LABEL_3:
  if ( (a3 & 4) == 0 )
    return;
LABEL_8:
  v7 = sub_3C76B0(a1, v4);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 40) = 0;
    sub_3C7860(a1, v7);
  }
}
