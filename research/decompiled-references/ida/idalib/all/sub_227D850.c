ssize_t __fastcall sub_227D850(__int64 a1, void *a2, size_t a3)
{
  std::_V2 *v4; // rdi
  ssize_t result; // rax
  ssize_t v6; // rbp
  __int64 v7; // r12
  int v8; // eax

  v4 = (std::_V2 *)*(unsigned int *)(a1 + 48);
  result = read((int)v4, a2, a3);
  v6 = result;
  if ( result < 0 )
  {
    v7 = std::_V2::generic_category(v4);
    v8 = *__errno_location();
    *(_QWORD *)(a1 + 80) = v7;
    *(_DWORD *)(a1 + 72) = v8;
    return v6;
  }
  else
  {
    *(_QWORD *)(a1 + 88) += result;
  }
  return result;
}
