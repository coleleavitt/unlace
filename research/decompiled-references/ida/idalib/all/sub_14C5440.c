__int64 __fastcall sub_14C5440(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax

  v1 = sub_1E85500(*(_QWORD *)(*(_QWORD *)a1 + 96LL), *(_QWORD *)(a1 + 8));
  result = 0;
  if ( v1 )
    result = sub_173F990(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 656LL),
               *(_QWORD *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
               *(_DWORD *)(*(_QWORD *)(a1 + 8) + 92LL),
               **(_QWORD **)(a1 + 16),
               *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
               **(_DWORD **)(a1 + 24),
               0);
  *(_BYTE *)(*(_QWORD *)a1 + 368LL) = 1;
  return result;
}
