bool __fastcall sub_AED5B0(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  return (*(_QWORD *)(v1 + 80) & 0x40000LL) != 0
      || ((*(_QWORD *)(v1 + 80) >> 16) & 8) != 0
      || (unsigned int)sub_B984E0(v1) != 0;
}
