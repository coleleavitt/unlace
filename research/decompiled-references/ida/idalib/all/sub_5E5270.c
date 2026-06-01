__int64 __fastcall sub_5E5270(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = a1[9];
  if ( v1 > 7 )
    return set_qerrno(5);
  *(_QWORD *)(a1[19] + 104LL) += v1;
  v3 = a1[16];
  if ( !v3 )
  {
    v3 = a1[17];
    if ( !v3 )
      v3 = a1[14];
  }
  v4 = *(_QWORD *)(v3 + 40);
  if ( (v4 & 0x8000000000LL) != 0 )
    return set_qerrno(66);
  *(_QWORD *)(v3 + 40) = v4 | 0x8000000000LL;
  return 0;
}
