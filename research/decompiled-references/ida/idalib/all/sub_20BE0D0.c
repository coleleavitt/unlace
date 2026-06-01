void __fastcall sub_20BE0D0(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v6; // rax
  int v7; // eax

  if ( a4 || *(_QWORD *)(a1 + 48) || (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    v6 = (__int64 *)sub_20CB0D0(a1);
    v7 = sub_20922F0(v6, a2, a3);
    sub_20BE040(a1, v7, a4);
  }
}
