__int64 __fastcall sub_ACD480(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  void *v7; // rdi
  _QWORD *v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi

  result = sub_157EB20(a1 + 30);
  v3 = (void *)a1[25];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = a1[22];
  if ( v4 )
  {
    v5 = a1[23];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      result = sub_15D7BC0(v5, v4);
  }
  v7 = (void *)a1[12];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = (_QWORD *)a1[9];
  if ( v8 )
  {
    v9 = (__int64 *)v8[12];
    if ( v9 )
    {
      v10 = &v9[*((unsigned int *)v9 - 1)];
      if ( v9 >= v10 )
        goto LABEL_17;
      do
      {
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            v12 = v8[11];
            v6 = (*(_DWORD *)(v11 + 8))-- == 1;
            if ( v6 )
              break;
          }
          if ( ++v9 >= v10 )
            goto LABEL_16;
        }
        sub_15D7BC0(v12, v11);
        ++v9;
      }
      while ( v9 < v10 );
LABEL_16:
      v9 = (__int64 *)v8[12];
      if ( v9 )
LABEL_17:
        sub_186B220(v9 - 1);
    }
    v13 = v8[10];
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    return sub_186B220(v8);
  }
  return result;
}

