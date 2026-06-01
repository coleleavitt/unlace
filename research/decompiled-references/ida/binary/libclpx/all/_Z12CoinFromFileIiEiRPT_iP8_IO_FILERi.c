unsigned __int64 __fastcall CoinFromFile<int>(_QWORD *a1, int a2, FILE *a3, int *a4)
{
  unsigned __int64 result; // rax
  unsigned int v7; // r13d
  void *v8; // rax
  size_t v9; // rdx

  if ( (unsigned int)fread(a4, 4u, 1u, a3) != 1 )
    return 1;
  result = *a4;
  if ( a2 == (_DWORD)result )
  {
    v7 = 0;
    if ( (_DWORD)result )
      goto LABEL_6;
LABEL_11:
    *a1 = 0;
    return result;
  }
  if ( !(_DWORD)result )
  {
    if ( *a1 )
      result = 2;
    goto LABEL_11;
  }
  v7 = 2;
LABEL_6:
  if ( result > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v8 = (void *)operator new[](4 * result);
  v9 = *a4;
  *a1 = v8;
  if ( *a4 != (unsigned int)fread(v8, 4u, v9, a3) )
    return 1;
  return v7;
}

