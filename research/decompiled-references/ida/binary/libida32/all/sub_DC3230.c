__int64 __fastcall sub_DC3230(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v3 = sub_DA8420(a1, a2, v2, 3);
  if ( !(_BYTE)v3 )
    return v3;
  if ( !(unsigned __int8)sub_DFDF30(a1) && !*(_DWORD *)(v2 + 24) && sub_D8CD70(v2) )
    return 0;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) == 0 )
    return sub_CDB0E0(a1, (__int64)a2);
  *(_BYTE *)sub_CEAA70(v2) = 1;
  return v3;
}

