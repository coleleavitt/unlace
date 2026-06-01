__int64 __fastcall ClpDynamicMatrix::whichSet(ClpDynamicMatrix *this, int a2)
{
  do
    a2 = *(_DWORD *)(*((_QWORD *)this + 40) + 4LL * a2);
  while ( a2 >= 0 );
  return (unsigned int)~a2;
}

