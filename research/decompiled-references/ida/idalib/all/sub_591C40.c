__int64 __fastcall sub_591C40(__int64 a1, __int64 a2)
{
  qstrncpy(a1, a2, 20);
  qstrncpy(a1 + 20, a2 + 12, 20);
  qstrncpy(a1 + 40, a2 + 24, 20);
  qstrncpy(a1 + 60, a2 + 36, 12);
  qstrncpy(a1 + 72, a2 + 48, 12);
  qstrncpy(a1 + 84, a2 + 60, 12);
  qstrncpy(a1 + 96, a2 + 72, 12);
  return qstrncpy(a1 + 108, a2 + 84, 4);
}
