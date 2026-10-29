unsigned __int64 __fastcall sub_14ED9D0(__int64 a1)
{
  unsigned __int64 result; // rax

  result = **(_QWORD **)a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( result )
    result = sub_173F990(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) + 656LL),
               *(_QWORD *)(*(_QWORD *)result + 8LL),
               *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
               **(_QWORD **)(a1 + 24),
               *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL),
               *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
               1);
  **(_BYTE **)(a1 + 32) = 1;
  return result;
}
