__int64 __fastcall sub_369290(__int64 a1, __int64 a2)
{
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = get_flags_ex(*(unsigned int *)(a1 + 8), 1);
  return 0;
}

