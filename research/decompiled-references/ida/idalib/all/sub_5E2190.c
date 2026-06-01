__int64 __fastcall sub_5E2190(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(v1 + 40);
  if ( (v2 & 0x100000000LL) != 0 )
    return set_qerrno(47);
  *(_QWORD *)(v1 + 40) = v2 | 0x100000000LL;
  return 0;
}
