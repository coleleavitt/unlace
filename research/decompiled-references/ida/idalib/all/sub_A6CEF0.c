unsigned __int64 __fastcall sub_A6CEF0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F5DCA0(a3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 - 16), (*(_BYTE *)(a2 - 22) & 8) != 0);
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
