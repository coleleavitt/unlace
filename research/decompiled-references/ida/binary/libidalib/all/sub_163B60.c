__int64 __fastcall sub_163B60(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax

  if ( !*(_BYTE *)(a1 + 992) )
    return sub_91350(0, a2, a3, a4, a5, a6);
  if ( *(_QWORD *)(a1 + 480) )
  {
    v6 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v6 = *(_QWORD *)(a1 + 856);
    return sub_91350(v6, a2, a3, a4, a5, a6);
  }
  else
  {
    sub_158B30(a1);
    return sub_163BA0(a1, a2);
  }
}

