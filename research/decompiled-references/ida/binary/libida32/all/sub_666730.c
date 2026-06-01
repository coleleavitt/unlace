__int64 __fastcall sub_666730(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v5; // edx
  unsigned int *v6; // rbx
  unsigned int v7; // eax

  v3 = *(_DWORD *)(a1 + 1548);
  if ( v3 == -1 )
  {
    *(_DWORD *)(a1 + 1548) = 0;
    v6 = sub_4EEBF0(a1 + 1552);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = ea2node(*v6);
        if ( netnode_supval(v7, 17, 0, 0, 83) > 0 )
          break;
        v6 = sub_4EE960(a1 + 1552, *v6);
        if ( !v6 )
          goto LABEL_4;
      }
      *(_DWORD *)(a1 + 1548) = 1;
      return 1;
    }
    else
    {
LABEL_4:
      LOBYTE(v5) = *(_DWORD *)(a1 + 1548) != 0;
      return v5;
    }
  }
  else
  {
    LOBYTE(a3) = v3 != 0;
    return a3;
  }
}

