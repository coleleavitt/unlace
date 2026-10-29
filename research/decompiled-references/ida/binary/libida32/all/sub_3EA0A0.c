__int64 __fastcall sub_3EA0A0(__int64 a1, unsigned int a2, char a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = a2;
  sub_3E9710(a1, a3);
  v4 = *(_QWORD *)(a1 + 912);
  v5 = a1 + 904;
  if ( v4 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 16);
        v7 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v4 + 32) < a2 )
          break;
        v5 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v7 );
LABEL_6:
    if ( a1 + 904 != v5 && *(_DWORD *)(v5 + 32) == a2 )
      goto LABEL_10;
  }
  sub_3E9710(a1, 0);
  if ( rangeset_t_find_range(a1 + 808, a2) )
  {
    v3 = -1;
LABEL_10:
    *(_DWORD *)(a1 + 1016) = v3;
    *(_QWORD *)(a1 + 1024) = -2;
    *(_QWORD *)(a1 + 992) = v5;
    return 1;
  }
  return 0;
}

