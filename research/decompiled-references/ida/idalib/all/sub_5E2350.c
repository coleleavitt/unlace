__int64 __fastcall sub_5E2350(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(v1 + 40);
  if ( (v2 & 0x1C) != 0 )
    return set_qerrno(66);
  *(_QWORD *)(v1 + 40) = v2 | 4;
  return 0;
}
