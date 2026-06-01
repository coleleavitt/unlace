__int64 __fastcall file_outstream_t__::vfunc_5(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rax
  const char *v7; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4 + 1;
  if ( v4 < a2 )
  {
    do
    {
      qfputc(32, *(_QWORD *)(a1 + 16));
      v6 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v6 + 1;
    }
    while ( v6 < a2 );
  }
  v7 = &s1;
  if ( *(_QWORD *)(a3 + 8) )
    v7 = *(const char **)a3;
  return qfputs(v7, *(_QWORD *)(a1 + 16));
}
