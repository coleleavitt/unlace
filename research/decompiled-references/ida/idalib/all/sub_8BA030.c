__int64 __fastcall sub_8BA030(__int64 **a1, int a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r12
  __int64 *v7; // rax
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rax

  if ( a2 == 3 )
    return 0;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
      sub_8BCC20(*a1, **a1 * *((unsigned int *)a1 + 10), a3);
    goto LABEL_5;
  }
  v4 = *a1;
  v5 = a1[2];
  *((_BYTE *)a1 + 100) = 1;
  v6 = *v4;
  v7 = a1[3];
  if ( !(24LL * (_QWORD)v7) )
  {
    if ( !v7 )
      goto LABEL_15;
    goto LABEL_21;
  }
  do
  {
    v8 = v5[1] - *v5;
    if ( v8 )
    {
      if ( v8 > 0x3FFFFFFFFFFFFFFFLL )
        return 4;
      v8 *= 4LL;
      if ( v5[2] != v6 && *((_BYTE *)a1 + 100) )
      {
        sub_8BCDF0(*a1);
        v8 = 4 * (v5[1] - *v5);
      }
    }
    v5[2] = v6;
    v9 = a1[3];
    v6 += v8;
    v5 += 3;
    v10 = a1[2];
  }
  while ( v5 != &v10[3 * (_QWORD)v9] );
  if ( v9 )
  {
    v11 = v5 - 3;
    if ( v10 != v5 )
    {
LABEL_19:
      v6 = v11[2] + 4 * (v11[1] - *v11);
      goto LABEL_15;
    }
LABEL_21:
    v11 = a1[11];
    goto LABEL_19;
  }
  v6 = **a1;
LABEL_15:
  if ( !(unsigned int)sub_8B9D60((__int64)a1, v6) )
  {
LABEL_5:
    sub_8B9FB0((__int64)a1);
    return 0;
  }
  return 4;
}
