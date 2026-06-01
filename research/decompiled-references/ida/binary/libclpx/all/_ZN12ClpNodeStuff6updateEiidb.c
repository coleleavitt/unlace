double *__fastcall ClpNodeStuff::update(ClpNodeStuff *this, int a2, int a3, double a4, char a5)
{
  double *result; // rax

  if ( a2 < 0 )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 7) + 4LL * a3);
    if ( !a5 )
      ++*(_DWORD *)(*((_QWORD *)this + 9) + 4LL * a3);
    result = (double *)(*((_QWORD *)this + 4) + 8LL * a3);
    *result = fmax(a4, 1.0e-12) + *result;
  }
  else
  {
    ++*(_DWORD *)(*((_QWORD *)this + 8) + 4LL * a3);
    if ( !a5 )
      ++*(_DWORD *)(*((_QWORD *)this + 10) + 4LL * a3);
    result = (double *)(*((_QWORD *)this + 5) + 8LL * a3);
    *result = fmax(a4, 1.0e-12) + *result;
  }
  return result;
}

