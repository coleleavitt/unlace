__int64 __fastcall sub_1F99B40(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rsi

  sub_1F9A420(a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 16));
  sub_1F9E200(a1, a2 + 24);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = sub_1F92240(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 48));
  sub_9B9C90(v2, v3);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_1F92240(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 56));
  sub_9B9C90(v4, v5);
  result = sub_9B9C90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 64) != 0);
  v7 = *(_QWORD *)(a2 + 64);
  if ( v7 )
    return sub_1F99A00(a1, v7);
  return result;
}
