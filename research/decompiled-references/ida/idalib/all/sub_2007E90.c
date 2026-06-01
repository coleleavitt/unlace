_QWORD *__fastcall sub_2007E90(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0;
  *a1 = v2;
  return a1;
}
