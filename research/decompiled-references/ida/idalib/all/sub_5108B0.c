__int64 __fastcall sub_5108B0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  unsigned __int64 *v4; // rax

  v1 = netnode_inited();
  if ( (_BYTE)v1 )
  {
    v2 = v1;
    v4 = sub_506150(a1 + 1624);
    if ( !v4 )
      return v2;
    while ( (*((_BYTE *)v4 + 44) & 8) != 0 )
    {
      v4 = sub_505EB0(a1 + 1624, *v4);
      if ( !v4 )
        return v2;
    }
  }
  return 0;
}
