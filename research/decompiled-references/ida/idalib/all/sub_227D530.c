__off_t __fastcall sub_227D530(__int64 *a1, __off_t a2)
{
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  std::_V2 *v7; // rdi
  __off_t result; // rax
  __int64 v9; // r12
  int v10; // eax

  v3 = a1[4];
  v5 = a1[2];
  if ( v3 != v5 )
  {
    v6 = *a1;
    a1[4] = v5;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v6 + 72))(a1, v5, v3 - v5);
  }
  v7 = (std::_V2 *)*((unsigned int *)a1 + 12);
  result = lseek((int)v7, a2, 0);
  a1[11] = result;
  if ( result == -1 )
  {
    v9 = std::_V2::generic_category(v7);
    v10 = *__errno_location();
    a1[10] = v9;
    *((_DWORD *)a1 + 18) = v10;
    return -1;
  }
  return result;
}
