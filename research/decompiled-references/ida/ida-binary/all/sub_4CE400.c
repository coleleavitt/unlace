__int64 __fastcall sub_4CE400(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int i; // ebp

  v1 = 0;
  for ( i = 0; i < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 464LL))(a1); ++i )
    v1 += *(_BYTE *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, i) + 44) == 0;
  return v1;
}
