_BOOL8 __fastcall sub_1924B0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 232);
  return v2 && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 856LL))(v2, a1) != 0;
}
