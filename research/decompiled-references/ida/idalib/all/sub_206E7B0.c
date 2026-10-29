__int64 __fastcall sub_206E7B0(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // r12d
  int v4; // r12d
  int v5; // r12d
  int v6; // r12d
  int v7; // r12d
  int v8; // r12d
  int v9; // r12d
  int v10; // r12d
  int v11; // r12d
  int v12; // r12d

  v2 = a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = a1 & 0xFFE;
    sub_206E760(a2, 1);
    v3 = a1 & 2;
    if ( (a1 & 2) == 0 )
    {
LABEL_3:
      v4 = v2 & 4;
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else
  {
    v3 = a1 & 2;
    if ( (a1 & 2) == 0 )
      goto LABEL_3;
  }
  sub_206E760(a2, v3);
  v2 &= v3 ^ 0xFFF;
  v4 = v2 & 4;
  if ( (v2 & 4) == 0 )
  {
LABEL_4:
    v5 = v2 & 8;
    if ( (v2 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  sub_206E760(a2, v4);
  v2 &= v4 ^ 0xFFF;
  v5 = v2 & 8;
  if ( (v2 & 8) == 0 )
  {
LABEL_5:
    v6 = v2 & 0x10;
    if ( (v2 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_17;
  }
LABEL_16:
  sub_206E760(a2, v5);
  v2 &= v5 ^ 0xFFF;
  v6 = v2 & 0x10;
  if ( (v2 & 0x10) == 0 )
  {
LABEL_6:
    v7 = v2 & 0x20;
    if ( (v2 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_17:
  sub_206E760(a2, v6);
  v2 &= v6 ^ 0xFFF;
  v7 = v2 & 0x20;
  if ( (v2 & 0x20) == 0 )
  {
LABEL_7:
    v8 = v2 & 0x40;
    if ( (v2 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_19;
  }
LABEL_18:
  sub_206E760(a2, v7);
  v2 &= v7 ^ 0xFFF;
  v8 = v2 & 0x40;
  if ( (v2 & 0x40) == 0 )
  {
LABEL_8:
    v9 = v2 & 0x80;
    if ( (v2 & 0x80) == 0 )
      goto LABEL_9;
    goto LABEL_20;
  }
LABEL_19:
  sub_206E760(a2, v8);
  v2 &= v8 ^ 0xFFF;
  v9 = v2 & 0x80;
  if ( (v2 & 0x80) == 0 )
  {
LABEL_9:
    v10 = v2 & 0x100;
    if ( (v2 & 0x100) == 0 )
      goto LABEL_10;
    goto LABEL_21;
  }
LABEL_20:
  sub_206E760(a2, v9);
  v2 &= v9 ^ 0xFFF;
  v10 = v2 & 0x100;
  if ( (v2 & 0x100) == 0 )
  {
LABEL_10:
    v11 = v2 & 0x200;
    if ( (v2 & 0x200) == 0 )
      goto LABEL_11;
LABEL_22:
    sub_206E760(a2, v11);
    v2 &= v11 ^ 0xFFF;
    v12 = v2 & 0x800;
    if ( (v2 & 0x800) == 0 )
      return v2;
    goto LABEL_23;
  }
LABEL_21:
  sub_206E760(a2, v10);
  v2 &= v10 ^ 0xFFF;
  v11 = v2 & 0x200;
  if ( (v2 & 0x200) != 0 )
    goto LABEL_22;
LABEL_11:
  v12 = v2 & 0x800;
  if ( (v2 & 0x800) == 0 )
    return v2;
LABEL_23:
  sub_206E760(a2, v12);
  return (v12 ^ 0xFFF) & v2;
}
