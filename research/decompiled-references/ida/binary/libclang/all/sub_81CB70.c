unsigned __int64 __fastcall sub_81CB70(__int64 a1, void **a2, __int64 a3)
{
  signed __int64 v3; // rdx
  unsigned __int64 result; // rax
  void **v5; // rdi

  v3 = 8 * a3;
  result = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
  v5 = (void **)(a1 + 8 * result + 32);
  if ( v3 > 8 )
    return (unsigned __int64)memmove(v5, a2, v3);
  if ( v3 == 8 )
  {
    result = (unsigned __int64)*a2;
    *v5 = *a2;
  }
  return result;
}

