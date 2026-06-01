__int64 __fastcall sub_DB7680(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DA8420(a1, a2, v2, 4)
    || !(unsigned __int8)sub_DFDF30(a1) && !*(_DWORD *)(v2 + 24) && sub_D8CD70(v2) )
  {
    return 0;
  }
  sub_E0E500(a1);
  return sub_CDB0E0(a1, (__int64)a2);
}

