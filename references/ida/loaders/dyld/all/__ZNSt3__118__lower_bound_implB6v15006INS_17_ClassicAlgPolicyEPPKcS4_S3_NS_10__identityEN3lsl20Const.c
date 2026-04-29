_QWORD *__fastcall std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,char const**,char const**,char const*,std::__identity,lsl::ConstCharStarCompare>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // x10
  unsigned __int64 v4; // x11
  _QWORD *v5; // x12
  int v6; // w14
  char *v7; // x13
  char *v8; // x15
  int v9; // w16
  bool v10; // cc
  _BOOL4 v11; // w16
  int v12; // t1
  int v13; // t1

  if ( a2 != a1 )
  {
    v3 = a2 - a1;
    a2 = a1;
    do
    {
      v4 = v3 >> 1;
      v5 = &a2[v3 >> 1];
      v6 = *(char *)*v5;
      if ( v6 < *(char *)*a3 )
        goto LABEL_16;
      v7 = (char *)(*v5 + 1LL);
      v8 = (char *)(*a3 + 1LL);
      v9 = *(unsigned __int8 *)*a3;
      while ( 1 )
      {
        v10 = v9 && (char)v6 <= (char)v9;
        v11 = !v10;
        if ( !(_BYTE)v6 || v11 )
          break;
        v12 = *v7++;
        v6 = v12;
        v13 = *v8++;
        v9 = (unsigned __int8)v13;
        if ( v6 < v13 )
          goto LABEL_16;
      }
      if ( !v11 )
      {
LABEL_16:
        a2 = v5 + 1;
        v4 = v3 + ~v4;
      }
      v3 = v4;
    }
    while ( v4 );
  }
  return a2;
}
