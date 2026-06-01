__int64 __fastcall sub_3042A0(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  void *v5; // rbx
  void *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // r13
  void *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  void (__fastcall ***v19)(_QWORD); // rbx

  sub_18572D0(a1 + 20);
  v2 = a1[19];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void (__fastcall ***)(void *))a1[18];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 4))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 14);
  sub_182CBA0(v5, a1 + 16);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 10);
  result = sub_182CBA0(v6, a1 + 12);
  v8 = (__int64 *)a1[9];
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[8];
          v4 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_13;
      }
      result = sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_13:
    v8 = (__int64 *)a1[9];
    if ( v8 )
LABEL_14:
      result = sub_186B220(v8 - 1);
  }
  v12 = (void *)a1[5];
  if ( v12 )
    result = sub_186B220(v12);
  v13 = (__int64 *)a1[4];
  if ( v13 )
  {
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = &v13[7 * v14];
      do
      {
        while ( 1 )
        {
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v13 + 2);
          sub_182CBA0(v16, v13 + 4);
          v17 = *v13;
          if ( *v13 )
          {
            v18 = v13[1];
            v4 = (*(_DWORD *)(v17 + 8))-- == 1;
            if ( v4 )
              break;
          }
          v13 += 7;
          if ( v15 == v13 )
            goto LABEL_24;
        }
        sub_15D7BC0(v18, v17);
        v13 += 7;
      }
      while ( v15 != v13 );
LABEL_24:
      v13 = (__int64 *)a1[4];
    }
    result = sub_186B220(v13 - 1);
  }
  v19 = (void (__fastcall ***)(_QWORD))a1[3];
  if ( v19 )
  {
    (**v19)(a1[3]);
    return sub_186B220(v19);
  }
  return result;
}

