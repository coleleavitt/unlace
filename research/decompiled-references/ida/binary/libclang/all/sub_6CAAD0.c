__int64 __fastcall sub_6CAAD0(_QWORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp

  if ( (a1[2820] & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    return a1[2820];
  if ( (a1[2819] & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v2 = a1[274];
    a1[284] += 48LL;
    v3 = (v2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a1[275] >= v3 + 48 && v2 )
      a1[274] = v3 + 48;
    else
      v3 = sub_6A76A0((__int64)(a1 + 274), 48, 4);
    sub_B17C00(v3, 0, 0, 0, 0, 0, 0, 0);
    a1[2819] = v3 & 0xFFFFFFFFFFFFFFF0LL;
  }
  a1[2820] = sub_6C5080((__int64)a1, a1[2819]);
  return a1[2820];
}

