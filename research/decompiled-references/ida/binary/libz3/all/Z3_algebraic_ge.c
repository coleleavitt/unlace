__int64 __fastcall Z3_algebraic_ge(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)Z3_algebraic_lt(a1, a2, a3) ^ 1;
}

