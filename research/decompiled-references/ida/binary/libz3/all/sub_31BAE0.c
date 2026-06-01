__int64 __fastcall sub_31BAE0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(void *); // rbx
  bool v5; // zf
  void *v6; // r12
  void *v7; // rbx
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi

  v2 = a1 + 19;
  *(v2 - 19) = qword_1C64158;
  sub_18572D0(v2);
  v3 = a1[18];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void (__fastcall ***)(void *))a1[17];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 4))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 13);
  sub_182CBA0(v6, a1 + 15);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 9);
  result = sub_182CBA0(v7, a1 + 11);
  v9 = (__int64 *)a1[8];
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[7];
          v5 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_13;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_13:
    v9 = (__int64 *)a1[8];
    if ( v9 )
LABEL_14:
      result = sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[6];
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    v14 = &v13[result];
    if ( v13 >= v14 )
      return sub_186B220(v13 - 1);
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[5];
          v5 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_22;
      }
      result = sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_22:
    v13 = (__int64 *)a1[6];
    if ( v13 )
      return sub_186B220(v13 - 1);
  }
  return result;
}

