__int64 __fastcall sub_5ACD60(__int64 a1, unsigned int *a2, char a3)
{
  __int64 result; // rax
  unsigned int v5; // ebp

  LODWORD(result) = sub_4ED1D0(a1 + 1624, a2);
  v5 = result;
  if ( a3 == 1 || !(_BYTE)result )
    return (unsigned int)result;
  lock_func_range(a2, 1);
  sub_396090(0x21u, a2);
  lock_func_range(a2, 0);
  return v5;
}

