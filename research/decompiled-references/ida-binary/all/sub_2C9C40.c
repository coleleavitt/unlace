__int64 __fastcall sub_2C9C40(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 result; // rax

  v5 = sub_1EB5B0(a1, (__int64)a2, a3, a4, a5);
  result = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v5 + 424LL))(v5, a2);
  if ( *(_BYTE *)(a1 + 1080) )
  {
    sub_1E8C00((_QWORD *)(a1 + 576), a2);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 664LL))(a1);
  }
  return result;
}
