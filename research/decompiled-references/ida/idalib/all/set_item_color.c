__int64 __fastcall set_item_color(void *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return del_item_color(a1);
  set_abits(a1, 0x40000);
  v5 = a2 + 1;
  v2 = ea2node(a1);
  netnode_supset(v2, 20, &v5, 4, 65, v3);
  sub_39ADA0(0x3Bu, a1, a2);
  if ( qword_2CCB548 )
    return qword_2CCB548(a1, 1);
  else
    return v6 - __readfsqword(0x28u);
}
