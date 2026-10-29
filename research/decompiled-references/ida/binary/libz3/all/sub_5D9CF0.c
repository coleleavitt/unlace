__int64 __fastcall sub_5D9CF0(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = (__int64 *)a1[1];
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 >= v2 )
      return sub_186B220(v1 - 1);
    do
    {
      v3 = *v1++;
      result = sub_62A410(*a1, v3);
    }
    while ( v1 < v2 );
    v1 = (__int64 *)a1[1];
    if ( v1 )
      return sub_186B220(v1 - 1);
  }
  return result;
}

