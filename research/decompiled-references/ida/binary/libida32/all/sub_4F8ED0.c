__int64 __fastcall sub_4F8ED0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  unsigned int *v4; // rax

  v1 = netnode_inited();
  if ( (_BYTE)v1 )
  {
    v2 = v1;
    v4 = sub_4EEBF0(a1 + 1552);
    if ( !v4 )
      return v2;
    while ( (v4[6] & 8) != 0 )
    {
      v4 = sub_4EE960(a1 + 1552, *v4);
      if ( !v4 )
        return v2;
    }
  }
  return 0;
}

