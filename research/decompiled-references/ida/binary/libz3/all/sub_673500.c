__int64 __fastcall sub_673500(_QWORD *a1)
{
  _QWORD *v2; // rdi
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void (__fastcall ***v10)(void *); // rbx
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = a1 + 8;
  *(v2 - 17) = &off_1C68EE0;
  *(v2 - 8) = off_1C69090;
  sub_14CD160();
  v3 = (void (__fastcall ***)(void *))a1[7];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = a1[5];
  *(a1 - 9) = qword_1C75FB0;
  *a1 = qword_1C76160;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = (__int64 *)a1[4];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[3];
          v4 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = (__int64 *)a1[4];
    if ( v6 )
LABEL_14:
      sub_186B220(v6 - 1);
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v10 = (void (__fastcall ***)(void *))*(a1 - 2);
  result = (__int64)qword_1C63FB0;
  *(a1 - 9) = qword_1C63FB0;
  if ( v10 )
  {
    v4 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v4 )
    {
      (**v10)(v10);
      result = sub_186B220(v10);
    }
  }
  v12 = *(a1 - 5);
  if ( v12 )
  {
    v13 = *(a1 - 4);
    v4 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v4 )
      result = sub_15D7BC0(v13, v12);
  }
  v14 = (__int64 *)*(a1 - 6);
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(a1 - 7);
          v4 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_28:
    v14 = (__int64 *)*(a1 - 6);
    if ( v14 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

