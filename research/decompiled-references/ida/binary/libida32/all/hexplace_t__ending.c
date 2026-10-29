bool __fastcall hexplace_t__ending(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  bool result; // al

  v3 = *(_DWORD *)(a1 + 16);
  v4 = v3 + (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, v3) - 1;
  result = 1;
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
    return (unsigned int)next_addr(v4) == -1;
  return result;
}

