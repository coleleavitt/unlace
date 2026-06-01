__int64 __fastcall sub_5C60D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a1 + 144);
  if ( (*(_BYTE *)(v2 + 44) & 4) == 0 )
    return set_qerrno(11, a2);
  *(_QWORD *)(v2 + 104) = 8 * *(_DWORD *)(a1 + 68);
  return 0;
}

