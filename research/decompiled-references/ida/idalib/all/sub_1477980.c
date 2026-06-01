__int64 __fastcall sub_1477980(__int64 a1)
{
  __int64 result; // rax

  result = sub_173F990(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 656LL),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL),
             *(_DWORD *)(**(_QWORD **)(a1 + 16) + 24LL),
             **(_QWORD **)(a1 + 24),
             *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL),
             *(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL),
             0);
  *(_BYTE *)(*(_QWORD *)a1 + 368LL) = 1;
  return result;
}
