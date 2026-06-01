__int64 __fastcall get_item_color(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // eax
  int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v1 = -1;
  v5 = __readfsqword(0x28u);
  if ( (get_aflags(a1) & 0x40000) != 0 )
  {
    v2 = ea2node((unsigned int)a1);
    if ( netnode_supval(v2, 20, &v4, 4, 65) > 0 )
      return (unsigned int)(v4 - 1);
  }
  return v1;
}

