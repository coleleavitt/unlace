unsigned __int64 __fastcall sub_8B8F20(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx

  v3 = sub_8B8B40(a1, a2, 0, a1[3]);
  v4 = (unsigned __int64 *)a1[11];
  v5 = -1;
  if ( v3 != v4 )
  {
    v6 = *v3;
    if ( a2 == *v3 )
    {
      if ( v4 == v3 + 3 )
        return v5;
      v6 = v3[3];
      v3 += 3;
    }
    a1[7] = v3;
    a1[6] = v6;
    a1[8] = v3[2] + 4 * (v6 - *v3);
    return *v3;
  }
  return v5;
}
