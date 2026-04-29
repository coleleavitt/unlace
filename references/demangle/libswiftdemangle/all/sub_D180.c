__int64 __fastcall sub_D180(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  int v2; // eax
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d

  v1 = a1[9];
  if ( v1 < a1[8] && *(_BYTE *)(a1[7] + v1) == 95 )
  {
    a1[9] = v1 + 1;
    return 0;
  }
  else
  {
    v2 = sub_D100(a1);
    if ( v2 < 0 )
    {
      return (unsigned int)-1000;
    }
    else
    {
      v4 = a1[9];
      v5 = -1000;
      if ( v3 > v4 && *(_BYTE *)(a1[7] + v4) == 95 )
      {
        v5 = v2 + 1;
        a1[9] = v4 + 1;
      }
    }
    return v5;
  }
}
