__int64 __fastcall std::string::copy(_QWORD *a1, _BYTE *a2, size_t a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  size_t v6; // rbx
  _BYTE *v7; // rsi

  v4 = a1[1];
  if ( a4 > v4 )
    std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
  v6 = v4 - a4;
  if ( v6 > a3 )
    v6 = a3;
  if ( !v6 )
    return v6;
  v7 = (_BYTE *)(*a1 + a4);
  if ( v6 != 1 )
  {
    memcpy(a2, v7, v6);
    return v6;
  }
  *a2 = *v7;
  return 1;
}

