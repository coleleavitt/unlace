__int64 __fastcall sub_C9E2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // rdx

  while ( 1 )
  {
    v2 = sub_F6AC00(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v2 )
      return 0;
    v3 = *(_QWORD *)(v2 + 32);
    v4 = *(_QWORD *)(v3 + 40);
    if ( (v4 & 7) != 0 )
      BUG();
    v5 = *(unsigned int **)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v6 = *v5;
    switch ( v6 )
    {
      case 6LL:
        if ( v5[4] == 1702521203 && *((_WORD *)v5 + 10) == 29791 )
          goto LABEL_22;
        break;
      case 7LL:
        if ( v5[4] == 2053731187 && *((_WORD *)v5 + 10) == 24421 && *((_BYTE *)v5 + 22) == 116 )
        {
LABEL_22:
          *(_DWORD *)(a2 + 8) = 8;
          return 1;
        }
        break;
      case 8LL:
        if ( *((_QWORD *)v5 + 2) == 0x745F78616D746E69LL )
          goto LABEL_14;
        break;
      case 9LL:
        if ( *((_QWORD *)v5 + 2) == 0x5F78616D746E6975LL && *((_BYTE *)v5 + 24) == 116 )
        {
LABEL_14:
          *(_DWORD *)(a2 + 8) = 7;
          return 1;
        }
        if ( *((_QWORD *)v5 + 2) == 0x5F66666964727470LL && *((_BYTE *)v5 + 24) == 116 )
        {
          *(_DWORD *)(a2 + 8) = 9;
          return 1;
        }
        break;
    }
    v7 = (__int64 *)(*(_QWORD *)(v3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v3 + 80) & 4) != 0 )
      a1 = v7[1];
    else
      a1 = *v7;
  }
}
