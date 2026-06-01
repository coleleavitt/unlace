__int64 __fastcall sub_8F8A20(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  int v5; // esi
  int v6; // eax
  _BYTE v7[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_180B130(a1);
  sub_1841000(v7, v2 > 0x63, "smt.simplifying", 0);
  v3 = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 8632) != 1 || *(_BYTE *)(v3 + 4)) && (unsigned __int8)sub_18290A0(v3) )
  {
    if ( *(_BYTE *)(a1 + 10320) || (v5 = *(_DWORD *)(a1 + 9464), v6 = *(_DWORD *)(a1 + 9468), v5 == v6) )
    {
      sub_C13740(a1 + 216);
    }
    else
    {
      sub_8F7780(a1, v5 - v6);
      sub_C13740(a1 + 216);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 10308) = 3;
  }
  return sub_18410E0(v7);
}

