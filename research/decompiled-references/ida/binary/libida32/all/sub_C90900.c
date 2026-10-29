__int64 __fastcall sub_C90900(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v3 = *(_QWORD *)a2 >> 63;
  v5 = a2 | 4;
  return sub_CDCB10(a1, (unsigned __int8)v3, &v5);
}

