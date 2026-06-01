__int64 __fastcall sub_1E86D80(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 7) != 0 )
  {
    **a1 = a2;
    return 0;
  }
  return result;
}
