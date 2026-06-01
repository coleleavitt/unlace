__int64 __fastcall sub_364720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi

  v5 = a1 + 96;
  *(_QWORD *)(v5 - 96) = 0;
  *(_QWORD *)(v5 - 72) = 0;
  *(_QWORD *)(v5 - 48) = 0;
  *(_QWORD *)(v5 - 24) = 0;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 48) = -1;
  *(_QWORD *)(v5 + 56) = a2;
  *(_QWORD *)(v5 + 64) = a3;
  *(_QWORD *)(v5 + 72) = a4;
  *(_QWORD *)(v5 + 80) = a5;
  *(_OWORD *)(v5 - 88) = 0;
  *(_OWORD *)(v5 - 64) = 0;
  *(_OWORD *)(v5 - 40) = 0;
  *(_OWORD *)(v5 - 16) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  return get_abi_name();
}
