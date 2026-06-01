unsigned __int64 __fastcall sub_F39EB0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
    return *(_QWORD *)(a1 + 48);
  else
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
}

