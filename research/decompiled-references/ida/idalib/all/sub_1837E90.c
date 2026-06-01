__int64 __fastcall sub_1837E90(_QWORD **a1, __int64 a2)
{
  _BOOL4 v2; // ebx

  v2 = (*(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**a1 + 32LL))(**a1) + 82) & 0x40) != 0;
  return v2
       ^ (unsigned int)((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) != 0);
}
