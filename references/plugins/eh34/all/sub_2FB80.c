__int64 __fastcall sub_2FB80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  *(_BYTE *)(v2 + 16) = sub_2F9E0(*(_QWORD *)v2, *(_QWORD *)(v2 + 8));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, 0);
  return 0;
}
