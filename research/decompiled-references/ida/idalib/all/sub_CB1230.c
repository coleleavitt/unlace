__int64 __fastcall sub_CB1230(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 result; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) == 42 )
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) != 48 )
    return 0;
  return result;
}
