__int64 __fastcall sub_1168E0(__int64 a1, __int64 a2)
{
  int v3; // r12d
  int v4; // r13d

  if ( (unsigned __int8)sub_5E300((_QWORD *)a2) )
    return 0;
  v3 = sub_5E3E0((_QWORD *)a2, 0);
  v4 = sub_5E620((_QWORD *)a2, v3);
  if ( (unsigned int)sub_5E3E0((_QWORD *)a2, v4 + v3) != *(_DWORD *)(a2 + 8) )
    return 0;
  sub_1166E0(a1);
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 4) = v4;
  return 1;
}
