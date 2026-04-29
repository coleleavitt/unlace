__int64 __fastcall sub_DC660(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // edx

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(v2 + 64);
  v5 = sub_1CD070(v4, *(_QWORD *)(v3 + 24));
  v6 = *(_DWORD *)(v3 + 4);
  if ( (v6 & 0x20) != 0 )
    v5 += *(int *)(*(_QWORD *)(v4 + 1504) + 80LL);
  if ( (v6 & 0x40) != 0 )
    v5 += *(int *)(*(_QWORD *)(v2 + 64) + 116LL);
  v7 = sub_CF1E0(*(_QWORD *)(a1 + 32));
  v8 = 0;
  if ( v7 > 0 && a2 >= v5 )
    LOBYTE(v8) = v7 + v5 - 1 >= a2;
  return v8;
}
