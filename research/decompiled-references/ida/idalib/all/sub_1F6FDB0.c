__int64 __fastcall sub_1F6FDB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi

  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_DWORD *)a2, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 4), *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  result = sub_9B9C90(*(_QWORD *)(*(_QWORD *)a1 + 16LL), *(_QWORD *)(a2 + 8) != 0);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return sub_183F100(*(_QWORD *)a1 + 24LL, v3);
  return result;
}
