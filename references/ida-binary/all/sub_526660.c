__int64 __fastcall sub_526660(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  serialize_json(a1, a2, 1);
  return a1;
}
