__int64 __fastcall file_outstream_t__::vfunc_4(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  const char *v6; // rdi

  if ( (a3 & 1) == 0 )
    qfputc(10, *(_QWORD *)(a1 + 16));
  result = 0;
  if ( (a3 & 2) != 0 )
  {
    v6 = &s1;
    if ( *(_QWORD *)(a2 + 8) )
      v6 = *(const char **)a2;
    qfputs(v6, *(_QWORD *)(a1 + 16));
    result = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  }
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
