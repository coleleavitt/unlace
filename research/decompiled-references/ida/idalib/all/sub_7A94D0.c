__int64 __fastcall sub_7A94D0(_QWORD *a1)
{
  __int64 v1; // r12
  char *v2; // r13
  __int64 v3; // r12
  char *v4; // r12
  int v5; // ebx
  __int64 v6; // rax

  v1 = a1[6];
  if ( !v1 )
    return 0;
  v2 = (char *)a1[5];
  v3 = v1 - 1;
  if ( !v3 )
    return 0;
  v4 = &v2[v3];
  while ( 1 )
  {
    v5 = *v2;
    if ( *v2 < 0 )
      break;
    v6 = sub_7A9010((__int64)a1);
    if ( *(_BYTE *)(v6 + 265) )
    {
      set_qerrno(2012);
    }
    else if ( *(_DWORD *)v6 )
    {
      if ( *(_DWORD *)v6 == 2 )
        *(_DWORD *)(v6 + 8) = v5 + 1;
      else
        set_qerrno(2005);
    }
    else
    {
      *(_DWORD *)v6 = 1;
      *(_DWORD *)(v6 + 4) = v5;
    }
    a1[17] = -1;
    if ( v4 == ++v2 )
      return 0;
  }
  return 2014;
}
