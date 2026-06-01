_QWORD *__fastcall objc::objc_headeropt_ro_t<unsigned long long>::get(int *a1, __int64 a2, char *a3)
{
  int v3; // w10
  int v4; // w13
  int v5; // w14
  _QWORD *v6; // x8
  char *v7; // x15

  if ( *a1 < 0 )
    return nullptr;
  v3 = 0;
  v4 = *a1;
  while ( 1 )
  {
    if ( *a1 <= (unsigned int)((v3 + v4) / 2) )
      objc::objc_headeropt_ro_t<unsigned long long>::get();
    v5 = (v3 + v4) / 2;
    v6 = (_QWORD *)((char *)a1 + (unsigned int)(a1[1] * v5) + 8);
    v7 = (char *)v6 + a2 - (_QWORD)a1 + *v6;
    if ( v7 == a3 )
      break;
    if ( v7 <= a3 )
      v3 = v5 + 1;
    else
      v4 = v5 - 1;
    if ( v3 > v4 )
      return nullptr;
  }
  return v6;
}
