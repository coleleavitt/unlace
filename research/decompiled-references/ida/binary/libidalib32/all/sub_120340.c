_BOOL8 __fastcall sub_120340(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 224);
  return v2 && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 552LL))(v2, a1) != 0;
}

