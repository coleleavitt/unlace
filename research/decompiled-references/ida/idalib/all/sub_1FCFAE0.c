__int64 __fastcall sub_1FCFAE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = **(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL);
  if ( (*(_BYTE *)(result + 626) & 2) == 0 )
    *(_QWORD *)(a1 + 24) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  return result;
}
