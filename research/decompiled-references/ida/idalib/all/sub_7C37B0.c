ssize_t __fastcall sub_7C37B0(__int64 a1, const void *a2, int a3)
{
  size_t v3; // rbp
  int v4; // r13d
  ssize_t result; // rax
  ssize_t v6; // rbx

  v3 = a3;
  v4 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    result = send(v4, a2, v3, 0);
    v6 = result;
    if ( result != -1 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_5;
  }
  if ( result >= 0 )
    return result;
LABEL_5:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *__errno_location();
  return v6;
}
