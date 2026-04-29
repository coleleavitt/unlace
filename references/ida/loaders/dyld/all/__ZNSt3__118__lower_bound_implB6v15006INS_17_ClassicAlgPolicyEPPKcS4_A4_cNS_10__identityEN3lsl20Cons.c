_QWORD *__fastcall std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,char const**,char const**,char [4],std::__identity,lsl::ConstCharStarCompare>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int8 *v4; // x2
  int v5; // w8
  int v6; // t1
  unsigned __int64 v7; // x10
  _QWORD *v8; // x11
  int v9; // w12
  char *v10; // x13
  unsigned __int8 *v11; // x14
  int v12; // w15
  bool v13; // cc
  _BOOL4 v14; // w15
  int v15; // t1
  int v16; // t1

  if ( a2 != a1 )
  {
    v3 = a2 - a1;
    v6 = *a3;
    v4 = a3 + 1;
    v5 = v6;
    a2 = a1;
    do
    {
      v7 = v3 >> 1;
      v8 = &a2[v3 >> 1];
      v9 = *(char *)*v8;
      if ( v9 < (char)v5 )
        goto LABEL_16;
      v10 = (char *)(*v8 + 1LL);
      v11 = v4;
      v12 = v5;
      while ( 1 )
      {
        v13 = v12 && (char)v9 <= (char)v12;
        v14 = !v13;
        if ( !(_BYTE)v9 || v14 )
          break;
        v15 = *v10++;
        v9 = v15;
        v16 = (char)*v11++;
        v12 = (unsigned __int8)v16;
        if ( v9 < v16 )
          goto LABEL_16;
      }
      if ( !v14 )
      {
LABEL_16:
        a2 = v8 + 1;
        v7 = v3 + ~v7;
      }
      v3 = v7;
    }
    while ( v7 );
  }
  return a2;
}
