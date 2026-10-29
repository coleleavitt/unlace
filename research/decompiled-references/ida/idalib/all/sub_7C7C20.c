__int64 __fastcall sub_7C7C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  FILE *v6; // rbx
  unsigned int v7; // ebp

  v6 = stream;
  if ( !stream )
    v6 = stdout;
  v7 = qvfprintf(v6, a1, a2, a4, a5, a6);
  fflush(v6);
  return v7;
}
