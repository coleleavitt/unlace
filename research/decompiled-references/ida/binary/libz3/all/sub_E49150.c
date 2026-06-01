__int64 __fastcall sub_E49150(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 96) = 1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 72) + 16LL))(v1 + 72);
}

