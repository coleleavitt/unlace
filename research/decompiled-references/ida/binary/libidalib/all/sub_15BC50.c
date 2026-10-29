__int64 __fastcall sub_15BC50(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 result; // rax
  char *v4; // rdi
  char *v5; // rdx
  _QWORD *v6; // rdi

  v2 = *(_QWORD **)a1;
  result = 8LL * *(_QWORD *)(a1 + 8);
  if ( result )
  {
    do
    {
      v4 = (char *)qword_2544B0;
      v5 = (char *)(qword_2544B0 + 8 * xmmword_2544B8);
      if ( (char *)qword_2544B0 == v5 )
        goto LABEL_12;
      while ( *v2 != *(_QWORD *)v4 )
      {
        v4 += 8;
        if ( v5 == v4 )
          goto LABEL_12;
      }
      if ( v5 == v4 )
      {
LABEL_12:
        sub_8F740((__int64)"Coherency check failed: currently_being_synced.del(cur)\n");
      }
      else
      {
        memmove(v4, v4 + 8, v5 - v4 - 8);
        *(_QWORD *)&xmmword_2544B8 = xmmword_2544B8 - 1;
      }
      v6 = *(_QWORD **)a1;
      ++v2;
      result = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
    }
    while ( v2 != (_QWORD *)result );
  }
  else
  {
    v6 = *(_QWORD **)a1;
  }
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree();
  }
  return result;
}

