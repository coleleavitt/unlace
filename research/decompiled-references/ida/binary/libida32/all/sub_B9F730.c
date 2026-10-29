unsigned __int64 __fastcall sub_B9F730(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(); // rax

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1[10] + 152LL);
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (v3 & 4) != 0 )
      break;
    a1 = (_QWORD *)(*(_QWORD *)(a1[10] + 152LL) & 0xFFFFFFFFFFFFFFF8LL);
    v10 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 16LL);
    if ( v10 != sub_B9F730 )
      return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64 (__fastcall *)()))v10)(v4, a2, sub_B9F730);
  }
  sub_B9F4D0((__int64)a1);
  v6 = a1[18];
  v7 = (unsigned int)v5;
  if ( v6 )
  {
    v8 = a1[7];
    if ( (v8 & 4) == 0 || !*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
      v7 = *(unsigned int *)(v6 + 8);
  }
  return v7 | v5 & 0xFFFFFFFF00000000LL;
}

