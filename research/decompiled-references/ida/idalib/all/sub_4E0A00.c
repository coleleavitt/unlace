bool __fastcall sub_4E0A00(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax

  sub_4E07C0(a1);
  v2 = sub_4DE1A0((_QWORD *)(a1 + 48), a2);
  return v2 && *((_DWORD *)v2 + 4) != -1;
}
