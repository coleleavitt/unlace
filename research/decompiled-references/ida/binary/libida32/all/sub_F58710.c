bool __fastcall sub_F58710(__int64 a1)
{
  return !*(_QWORD *)a1
      && *(_OWORD *)(a1 + 8) == 0
      && !*(_QWORD *)(a1 + 24)
      && !*(_QWORD *)(a1 + 32)
      && *(_QWORD *)(a1 + 40) == 0;
}

