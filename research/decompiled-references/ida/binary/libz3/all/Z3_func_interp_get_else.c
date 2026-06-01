__int64 __fastcall Z3_func_interp_get_else(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      v3 = *(_QWORD *)(a2 + 32);
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        sub_251FD0(a1, *(_QWORD *)(v3 + 24));
        return v4;
      }
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
    }
    return 0;
  }
  sub_29B9A0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
      sub_251FD0(a1, *(_QWORD *)(v6 + 24));
    sub_2BB620(v7);
  }
  else
  {
    sub_24EA30(a1, 3u, "ast is null");
    v7 = 0;
  }
  byte_1C7EBA0 = 1;
  return v7;
}

