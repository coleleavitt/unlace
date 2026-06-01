__int64 __fastcall sub_5E42E0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = a1[16];
  if ( !v1 )
  {
    v1 = a1[17];
    if ( !v1 )
      v1 = a1[14];
  }
  v2 = *(_QWORD *)(v1 + 40);
  if ( (v2 & 0x200000000LL) != 0 )
    return set_qerrno(66);
  *(_QWORD *)(v1 + 40) = v2 | 0x200000000LL;
  return 0;
}
