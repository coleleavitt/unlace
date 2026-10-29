__int64 __fastcall Clp_getColumnStatus(__int64 a1, int a2)
{
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + a2) & 7;
}

