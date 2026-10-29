__int64 __fastcall sub_6EE20(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  void *v6; // rax

  v6 = &loc_20000;
  if ( *(_DWORD *)(a1 + 30176) )
    LODWORD(v6) = *(_DWORD *)(a1 + 29944);
  if ( a5 > (unsigned int)v6 )
    return -72;
  else
    return sub_6CC80(a1, a2, a3, a4, a5, a6);
}

