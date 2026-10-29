__int64 __fastcall sub_836E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qseek(*(unsigned int *)(a1 + 20), a2, 0);
  if ( result != -1 )
    return (int)qread(*(unsigned int *)(a1 + 20), a3, a4);
  return result;
}
