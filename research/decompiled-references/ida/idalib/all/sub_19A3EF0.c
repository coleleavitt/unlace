__int64 __fastcall sub_19A3EF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r9
  __int64 v4; // rax

  v2 = a2;
  sub_1906AD0(a1);
  if ( *(_BYTE *)(a1 + 4512) )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 632);
    v2 = sub_C96350(
           *(_QWORD **)(a1 + 248),
           a2,
           *(_BYTE *)(a1 + 4513),
           *(_QWORD *)(a1 + 4520) + 8 * v4,
           *(unsigned int *)(a1 + 4528) - v4,
           v3);
    sub_18C3E40(a1);
  }
  return v2;
}
