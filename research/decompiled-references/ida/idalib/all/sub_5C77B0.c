__int64 __fastcall sub_5C77B0(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 result; // rax
  unsigned int v5; // ebp

  LODWORD(result) = sub_504700(a1 + 1704, a2);
  v5 = result;
  if ( a3 == 1 || !(_BYTE)result )
    return (unsigned int)result;
  lock_func_range(a2, 1);
  sub_39ADA0(0x21u, a2);
  lock_func_range(a2, 0);
  return v5;
}
