__int64 __fastcall sub_14B5DF0(__int64 a1)
{
  __int64 result; // rax

  result = sub_173EAA0(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 656LL),
             **(_QWORD **)(a1 + 8) & 0xFFFFFFFFFFFFFFFELL,
             **(_QWORD **)(a1 + 16),
             *(unsigned int *)(*(_QWORD *)(a1 + 16) + 8LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 24) + 48LL));
  *(_BYTE *)(*(_QWORD *)a1 + 368LL) = 1;
  return result;
}
