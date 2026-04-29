__int64 __fastcall sub_53100(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // eax
  char v5; // dl

  v2 = *(_DWORD *)(a2 + 272);
  if ( *(_QWORD *)(a2 + 352) <= 1u )
  {
    v5 = sub_95200(a2 + 8);
    v3 = *(_DWORD *)(a1 + 48);
    if ( v5 )
    {
      if ( v3 != 1 )
      {
LABEL_4:
        if ( v3 == 2 && v2 == 1 )
          return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(a1 + 32))(
                   *(_QWORD *)(a1 + 8),
                   *(_QWORD *)(a1 + 16),
                   *(_QWORD *)(a1 + 24),
                   a2,
                   *(_QWORD *)(a1 + 40));
        return 0;
      }
    }
    else if ( v3 )
    {
LABEL_3:
      if ( v3 == 1 )
        return 0;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 48);
    if ( v3 )
      goto LABEL_3;
  }
  if ( v2 != 1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(a1 + 32))(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             *(_QWORD *)(a1 + 24),
             a2,
             *(_QWORD *)(a1 + 40));
  return 0;
}
