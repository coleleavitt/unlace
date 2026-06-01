__int64 __fastcall sub_41D1C0(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax
  void **v4; // r12
  _QWORD *v5; // rbp
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    result = *((unsigned int *)v1 - 1);
    v4 = &v1[result];
    if ( v1 >= v4 )
      return sub_186B220(v1 - 1);
    do
    {
      while ( 1 )
      {
        v5 = *v1;
        if ( *v1 )
        {
          v6 = (*(_DWORD *)v5)-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v1 >= v4 )
          goto LABEL_16;
      }
      v7 = v5[6];
      if ( v7 )
      {
        v8 = v5[7];
        v6 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v8, v7);
      }
      sub_41D1C0(v5 + 5);
      v9 = v5[3];
      if ( v9 )
        sub_186B220((void *)(v9 - 8));
      v10 = v5[1];
      if ( v10 )
      {
        v11 = v5[2];
        v6 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v11, v10);
      }
      ++v1;
      result = sub_186B220(v5);
    }
    while ( v1 < v4 );
LABEL_16:
    v1 = *a1;
    if ( *a1 )
      return sub_186B220(v1 - 1);
  }
  return result;
}

