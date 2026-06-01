__int64 __fastcall sub_23E330(__int64 a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  void *v5; // rax
  __int64 v6; // rdx

  v5 = qword_8CC600;
  if ( !qword_8CC600 )
    return 4294967291LL;
  v6 = dbg;
  if ( dbg && (*(_BYTE *)(dbg + 34) & 0x20) != 0 )
    return 4294967292LL;
  *(_QWORD *)qword_8CC600 = a1;
  return sub_23D480((__int64)v5, 18, v6, a5, a2);
}
