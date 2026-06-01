__int64 __fastcall hexplace_t__makeplace(__int64 a1, const char *a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx

  v6 = qalloc_or_throw(24, a2);
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = off_2AFE250;
  *(_DWORD *)(v6 + 12) = a3;
  *(_DWORD *)(v6 + 16) = -1;
  sub_4116C0(v6, a3, (__int64)a2);
  *(_DWORD *)(v6 + 8) = a4;
  return v6;
}

