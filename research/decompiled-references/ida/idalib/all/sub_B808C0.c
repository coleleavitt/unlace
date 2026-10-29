__int64 __fastcall sub_B808C0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 **v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax

  if ( *(_DWORD *)(*(_QWORD *)(sub_B8C330(a1) + 17448) + 340LL) != 10 )
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v6 = sub_B8C3D0(a1);
    v1 = *(_QWORD *)v6;
    v2 = (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8));
    if ( *(_QWORD *)v6 < (unsigned __int64)v2 )
    {
      v10 = *(__int64 **)v6;
      while ( 1 )
      {
        v1 = *v10;
        if ( *(_WORD *)(*v10 + 36) == 195 )
          break;
        if ( v2 == ++v10 )
          return 0;
      }
      if ( v2 == v10 )
        return 0;
    }
    else
    {
      if ( (__int64 *)v1 == v2 )
        return 0;
      if ( *(_WORD *)(*v2 + 36) != 195 )
      {
        v7 = (__int64 **)(v2 + 1);
        while ( (__int64 **)v1 != v7 )
        {
          v2 = *v7++;
          if ( *((_WORD *)v2 + 18) == 195 )
            goto LABEL_12;
        }
        return 0;
      }
    }
  }
LABEL_12:
  v8 = (unsigned __int64)sub_7053D0(
                           (__int64 *)(*(_QWORD *)(a1 + 112) + 104LL),
                           *(_QWORD *)(a1 + 112),
                           v1,
                           (__int64)v2,
                           v3,
                           v4);
  if ( !v8 )
    return 0;
  while ( (*(_BYTE *)(v8 + 29) & 2) != 0 || *(_BYTE *)(v8 + 81) >> 5 != 1 )
  {
    v9 = *(_QWORD *)(v8 + 104);
    if ( (v9 & 3) != 0 )
      return 0;
    v8 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v8 )
      return 0;
  }
  return 1;
}
