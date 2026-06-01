__int64 __fastcall sub_19A3E60(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rax

  if ( a2 == 1 )
    return 1;
  v3 = a2 & 0xFFFFFFFFFFFFFFFELL;
  sub_1906AD0(a1);
  if ( *(_BYTE *)(a1 + 4512) )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 632);
    v3 = sub_C96350(
           *(_QWORD **)(a1 + 248),
           a2 & 0xFFFFFFFFFFFFFFFELL,
           *(_BYTE *)(a1 + 4513),
           *(_QWORD *)(a1 + 4520) + 8 * v5,
           *(unsigned int *)(a1 + 4528) - v5,
           v4);
    sub_18C3E40(a1);
  }
  return v3;
}
