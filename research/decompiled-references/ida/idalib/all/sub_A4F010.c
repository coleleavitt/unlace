void __fastcall sub_A4F010(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // r13
  __int64 v6; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return;
  v2 = 24LL * *(_QWORD *)(v1 - 8);
  v3 = v1 + v2;
  if ( v1 == v1 + v2 )
    goto LABEL_9;
  v5 = sub_21F90D0();
  while ( 1 )
  {
    v1 = v3 - 24;
    v6 = v3 - 24;
    if ( *(_QWORD *)(v3 - 24) == v5 )
      break;
    sub_21F9830(v6);
    if ( v1 == *(_QWORD *)(a1 + 8) )
      goto LABEL_8;
LABEL_5:
    v3 -= 24;
  }
  sub_A4F010(v6);
  if ( *(_QWORD *)(a1 + 8) != v1 )
    goto LABEL_5;
LABEL_8:
  v2 = 24LL * *(_QWORD *)(v3 - 32);
LABEL_9:
  operator delete[]((void *)(v1 - 8), v2 + 8);
}
