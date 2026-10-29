__int64 __fastcall sub_470B40(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rbx
  unsigned int *v3; // r12
  unsigned int *v4; // [rsp+8h] [rbp-20h] BYREF

  v4 = nullptr;
  result = sub_1819DC0(a1 + 192, &v4);
  v2 = v4;
  if ( v4 )
  {
    v3 = &v4[*(v4 - 1)];
    if ( v3 == v4 )
      return sub_186B220(v2 - 2);
    do
      result = sub_4479D0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *v2++));
    while ( v3 != v2 );
    v2 = v4;
    if ( v4 )
      return sub_186B220(v2 - 2);
  }
  return result;
}

