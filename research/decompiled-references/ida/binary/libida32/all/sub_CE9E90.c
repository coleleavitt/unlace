__int64 __fastcall sub_CE9E90(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 24) && *(_BYTE *)(sub_CDA220(a1) + 60) && v2 == *(_DWORD *)(a1 + 40) )
    return v1 + v2 + 72;
  else
    return v1 + v2 + 40;
}

