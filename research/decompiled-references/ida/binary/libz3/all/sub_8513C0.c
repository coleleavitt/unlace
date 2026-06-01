__int64 __fastcall sub_8513C0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  unsigned int v4; // r12d

  if ( sub_7E5030(a1, a2) )
  {
    v2 = (char *)(a2 + 88);
    if ( *(int *)(a2 + 88) >> 8 == -1 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      while ( *(_DWORD *)(a1 + 12) != *v2 )
      {
        v2 = *((char **)v2 + 1);
        if ( !v2 )
          return 0xFFFFFFFFLL;
      }
      return (unsigned int)(*(int *)v2 >> 8);
    }
  }
  else
  {
    v4 = sub_7E69A0(a1, a2);
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, a2, v4, *(unsigned int *)(a1 + 12));
    return v4;
  }
}

