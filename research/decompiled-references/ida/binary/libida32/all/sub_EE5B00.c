__int64 __fastcall sub_EE5B00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi

  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_EE16F0(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_EE0C80(a1);
  sub_971800(*a1, ".");
  return sub_9717A0(
           *a1,
           (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 16LL),
           **(unsigned int **)(*(_QWORD *)(a2 + 24) + 16LL));
}

