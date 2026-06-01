__int64 __fastcall sub_DF1220(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void (__fastcall ***v11)(void *); // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  void (__fastcall ***v14)(void *); // rbx
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi

  *a1 = &off_1C75490;
  v2 = a1[20];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (_QWORD *)a1[16];
  *a1 = &off_1C5CC90;
  if ( v3 != a1 + 18 )
    operator delete(v3, a1[18] + 1LL);
  v4 = a1[14];
  if ( v4 )
  {
    v5 = a1[15];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v5, v4);
  }
  v7 = (__int64 *)a1[13];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[12];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_15;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_15:
    v7 = (__int64 *)a1[13];
    if ( v7 )
LABEL_16:
      sub_186B220(v7 - 1);
  }
  v11 = (void (__fastcall ***)(void *))a1[11];
  if ( v11 )
  {
    v6 = (*((_DWORD *)v11 + 4))-- == 1;
    if ( v6 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v12 = a1[10];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[9];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = (void (__fastcall ***)(void *))a1[7];
  result = (__int64)qword_1C63FB0;
  *a1 = qword_1C63FB0;
  if ( v14 )
  {
    v6 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v6 )
    {
      (**v14)(v14);
      result = sub_186B220(v14);
    }
  }
  v16 = a1[4];
  if ( v16 )
  {
    v17 = a1[5];
    v6 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v6 )
      result = sub_15D7BC0(v17, v16);
  }
  v18 = (__int64 *)a1[3];
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    v19 = &v18[result];
    if ( v18 >= v19 )
      return sub_186B220(v18 - 1);
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = a1[2];
          v6 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_37;
      }
      result = sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_37:
    v18 = (__int64 *)a1[3];
    if ( v18 )
      return sub_186B220(v18 - 1);
  }
  return result;
}

