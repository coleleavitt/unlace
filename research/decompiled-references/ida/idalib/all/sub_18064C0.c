__int64 __fastcall sub_18064C0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = sub_B8DC30(a1, 1);
  if ( v2 )
    return *(_QWORD *)(v2 + 8LL * a2 + 48);
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 8 )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * a2) + 48LL);
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * a2) + 48LL);
}
