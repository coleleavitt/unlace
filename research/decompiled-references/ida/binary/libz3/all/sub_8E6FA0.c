__int64 __fastcall sub_8E6FA0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 8632) != 1 || *(_BYTE *)(v2 + 4)) && (unsigned __int8)sub_18290A0(v2) )
    return 0;
  *(_DWORD *)(a1 + 10308) = 3;
  return 1;
}

