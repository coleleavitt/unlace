__int64 __fastcall set_item_color(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return del_item_color(a1);
  set_abits(a1, &stru_40000);
  v4 = a2 + 1;
  v2 = ea2node(a1);
  netnode_supset(v2, 20, &v4, 4, 65);
  sub_396090(0x3Bu, a1, a2);
  if ( qword_2CA1648 )
    return qword_2CA1648(a1, 1);
  else
    return v5 - __readfsqword(0x28u);
}

