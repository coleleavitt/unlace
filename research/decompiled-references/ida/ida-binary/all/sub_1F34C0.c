__int64 __fastcall sub_1F34C0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int a5)
{
  __int64 v6; // r8
  unsigned int v9; // r12d

  v6 = a5 & 1;
  if ( (_DWORD)v6 )
  {
    sub_1C76F0((int)"Searching", a2, a3, a4, v6);
    v9 = search(*(_QWORD *)(a1 + 728), *a3, *a4, a3 + 1, a2, a5);
  }
  else
  {
    sub_1C76F0((int)"Searching");
    v9 = search(*(_QWORD *)(a1 + 728), *a4, *a3, a4 + 1, a2, a5);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a3 + 24LL))(*a3, *a4);
    *((_DWORD *)a3 + 2) = *((_DWORD *)a4 + 2);
  }
  sub_1C78D0();
  return v9;
}
