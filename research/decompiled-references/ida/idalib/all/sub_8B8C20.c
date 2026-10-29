unsigned __int64 *__fastcall sub_8B8C20(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rsi
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rcx
  unsigned __int64 *v7; // rax

  v3 = sub_8B8B40(a1, a2, 0, a1[3]);
  v4 = (unsigned __int64 *)a1[2];
  v5 = (unsigned __int64 *)a1[11];
  if ( v4 == v3 )
    return v5;
  v6 = v3 - 3;
  if ( v3 - 3 == v5 )
    return v5;
  if ( a2 < *(v3 - 2) )
  {
    v7 = v3 - 6;
    if ( v4 != v6 )
      return v7;
    return v5;
  }
  return v3 - 3;
}
