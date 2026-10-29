__int64 __fastcall qstrlen(_WORD *a1)
{
  _WORD *v1; // rax

  if ( !*a1 )
    return 0;
  v1 = a1;
  do
    ++v1;
  while ( *v1 );
  return v1 - a1;
}

