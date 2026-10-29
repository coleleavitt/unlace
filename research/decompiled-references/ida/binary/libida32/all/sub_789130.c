__int64 __fastcall sub_789130(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // r13
  __int64 v4; // r12
  char *v5; // r12
  int v6; // ebx
  __int64 v7; // rax

  v2 = a1[6];
  if ( !v2 )
    return 0;
  v3 = (char *)a1[5];
  v4 = v2 - 1;
  if ( !v4 )
    return 0;
  v5 = &v3[v4];
  while ( 1 )
  {
    v6 = *v3;
    if ( *v3 < 0 )
      break;
    v7 = sub_788C70((__int64)a1);
    if ( *(_BYTE *)(v7 + 265) )
    {
      set_qerrno(2012, a2);
    }
    else if ( *(_DWORD *)v7 )
    {
      if ( *(_DWORD *)v7 == 2 )
        *(_DWORD *)(v7 + 8) = v6 + 1;
      else
        set_qerrno(2005, a2);
    }
    else
    {
      *(_DWORD *)v7 = 1;
      *(_DWORD *)(v7 + 4) = v6;
    }
    a1[16] = -1;
    if ( v5 == ++v3 )
      return 0;
  }
  return 2014;
}

