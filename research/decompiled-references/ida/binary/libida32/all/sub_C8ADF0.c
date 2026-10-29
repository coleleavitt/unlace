__int64 *__fastcall sub_C8ADF0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbp

  v1 = *(__int64 **)a1;
  v2 = 8LL * *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1 + v2;
  v4 = v2 >> 5;
  v5 = v2 >> 3;
  if ( v4 > 0 )
  {
    v6 = &v1[4 * v4];
    while ( !sub_B55C60(*v1) )
    {
      if ( sub_B55C60(v1[1]) )
        return v1 + 1;
      if ( sub_B55C60(v1[2]) )
        return v1 + 2;
      if ( sub_B55C60(v1[3]) )
        return v1 + 3;
      v1 += 4;
      if ( v1 == v6 )
      {
        v5 = (v3 - (__int64)v1) >> 3;
        goto LABEL_11;
      }
    }
    return v1;
  }
LABEL_11:
  if ( v5 == 2 )
    goto LABEL_19;
  if ( v5 == 3 )
  {
    if ( sub_B55C60(*v1) )
      return v1;
    ++v1;
LABEL_19:
    if ( !sub_B55C60(*v1) )
    {
      ++v1;
      goto LABEL_14;
    }
    return v1;
  }
  if ( v5 != 1 )
    return (__int64 *)v3;
LABEL_14:
  if ( sub_B55C60(*v1) )
    return v1;
  return (__int64 *)v3;
}

