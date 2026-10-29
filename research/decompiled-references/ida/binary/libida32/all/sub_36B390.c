__int64 __fastcall sub_36B390(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    *(_DWORD *)(a2 + 8) = set_idcv_attr() == 0;
    return 0;
  }
  else
  {
    set_error_string();
    return set_qerrno(56, "setattr");
  }
}

