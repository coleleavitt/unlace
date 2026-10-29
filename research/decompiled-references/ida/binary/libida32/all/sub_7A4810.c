__int64 __fastcall sub_7A4810()
{
  FILE *v0; // rbx
  unsigned int v1; // ebp

  v0 = stream;
  if ( !stream )
    v0 = stdout;
  v1 = qvfprintf();
  fflush(v0);
  return v1;
}

