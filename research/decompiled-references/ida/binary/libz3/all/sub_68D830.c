__int64 __fastcall sub_68D830(std::ios_base *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx

  if ( *a3 && *(_DWORD *)(*a3 - 4LL) )
  {
    sub_1872CE0("");
    sub_1873130((char *)&qword_68 + 3, 185);
  }
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return sub_E60CB0(a1, *(_DWORD *)(v3 - 4), v3);
  else
    return sub_E60CB0(a1, 0, 0);
}

