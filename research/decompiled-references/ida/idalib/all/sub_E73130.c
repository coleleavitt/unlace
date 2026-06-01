__int64 __fastcall sub_E73130(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(unsigned int *)(a1 + 32);
  *(_QWORD *)a1 = &off_2B4B990;
  return operator delete(*(_QWORD *)(a1 + 16), 16 * v1, 8);
}
