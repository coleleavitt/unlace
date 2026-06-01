__int64 __fastcall Clp_getRowStatus(__int64 a1, int a2)
{
  return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + *(_DWORD *)(*(_QWORD *)a1 + 108LL) + a2) & 7;
}

