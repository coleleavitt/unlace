__int64 __fastcall sub_7772E0(__int64 a1, __int64 a2)
{
  char v2; // al
  bool v3; // zf
  _BOOL4 v5; // ebp

  v2 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 7 )
  {
    v5 = *(_QWORD *)(a1 + 16) > 1u;
    free_idcv(a1);
    *(_DWORD *)(a1 + 8) = v5;
    return 1;
  }
  if ( v2 > 7 )
  {
    if ( v2 == 9 )
    {
      v3 = *(_QWORD *)(a1 + 8) == 0;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 8) = !v3;
      return 1;
    }
  }
  else
  {
    if ( v2 == 2 )
      return 1;
    if ( v2 == 5 )
    {
      free_idcv(a1);
      *(_DWORD *)(a1 + 8) = 1;
      return 1;
    }
  }
  set_qerrno(61, a2);
  return 0;
}

