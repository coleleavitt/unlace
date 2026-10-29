__int64 __fastcall sub_B765A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF8LL;
    v2 = *(_QWORD *)(a1 + 48);
  }
  result = a2 | v2 & 7;
  *(_QWORD *)(a1 + 48) = result;
  return result;
}

