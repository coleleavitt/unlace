__int64 __fastcall sub_4FBCE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v4[0] = 0;
  sub_4C6580(*(_QWORD *)(v2 + 24), a1 + 16, a2, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 32) + 40LL))(*(_QWORD *)(a1 + 32), v4);
  if ( v4[0] )
    return sub_186B220((void *)(v4[0] - 8LL));
  return result;
}

