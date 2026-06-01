__int64 __fastcall sub_3BF120(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  void **v7; // r14
  __int64 v8; // rax
  void **v9; // r13
  __int64 *v10; // r12
  bool v11; // zf
  __int64 *v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rdi
  __int64 result; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbx
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi

  sub_8E4B60(a1 + 161);
  v2 = (_QWORD *)a1[83];
  if ( v2 != a1 + 85 )
    operator delete(v2, a1[85] + 1LL);
  v3 = (_QWORD *)a1[79];
  if ( v3 != a1 + 81 )
    operator delete(v3, a1[81] + 1LL);
  sub_39A7A0((__int64)(a1 + 39));
  v4 = a1[38];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  sub_E66770(a1 + 37);
  sub_3BEED0(a1 + 21);
  v5 = (void *)a1[18];
  if ( v5 )
    sub_186B220(v5);
  sub_2334C0(a1 + 16);
  v6 = a1[12];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = (void **)a1[10];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[v8];
      do
      {
        while ( 1 )
        {
          v10 = (__int64 *)*v7;
          if ( *v7 )
          {
            v11 = (*((_DWORD *)v10 + 19))-- == 1;
            if ( v11 )
              break;
          }
          if ( ++v7 == v9 )
            goto LABEL_30;
        }
        sub_3BCB50(v10[4], v10[5]);
        v12 = (__int64 *)v10[3];
        if ( v12 )
        {
          v13 = &v12[*((unsigned int *)v12 - 1)];
          if ( v12 >= v13 )
            goto LABEL_25;
          do
          {
            while ( 1 )
            {
              v14 = *v12;
              if ( *v12 )
              {
                v15 = v10[2];
                v11 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_24;
            }
            sub_15D7BC0(v15, v14);
            ++v12;
          }
          while ( v12 < v13 );
LABEL_24:
          v12 = (__int64 *)v10[3];
          if ( v12 )
LABEL_25:
            sub_186B220(v12 - 1);
        }
        v16 = *v10;
        if ( *v10 )
        {
          v17 = v10[1];
          v11 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v17, v16);
        }
        ++v7;
        sub_186B220(v10);
      }
      while ( v7 != v9 );
LABEL_30:
      v7 = (void **)a1[10];
    }
    sub_186B220(v7 - 1);
  }
  v18 = (__int64 *)a1[9];
  if ( v18 )
    sub_3BE360(v18);
  sub_2334C0(a1 + 7);
  result = sub_3BCB50(a1[5], a1[6]);
  v20 = a1[3];
  if ( v20 )
  {
    v21 = a1[4];
    v11 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v21, v20);
  }
  v22 = (__int64 *)a1[2];
  if ( v22 )
  {
    result = *((unsigned int *)v22 - 1);
    v23 = &v22[result];
    if ( v22 >= v23 )
      return sub_186B220(v22 - 1);
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = a1[1];
          v11 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v22 >= v23 )
          goto LABEL_44;
      }
      result = sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( v22 < v23 );
LABEL_44:
    v22 = (__int64 *)a1[2];
    if ( v22 )
      return sub_186B220(v22 - 1);
  }
  return result;
}

