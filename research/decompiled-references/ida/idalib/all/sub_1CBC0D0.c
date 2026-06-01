unsigned __int64 __fastcall sub_1CBC0D0(__int64 a1, __int64 **a2, unsigned int a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi

  v6 = sub_F57E80(*(_QWORD *)(**a2 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = *a2;
  if ( v6 && (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v6 + 17) & 4) == 0 )
  {
    v10 = (__int64 *)sub_1D554E0(a1, v10);
    *a2 = v10;
  }
  return sub_1CBBE10(a1, *v10, a3, v7, v8, v9, a4);
}
