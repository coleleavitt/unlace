__int64 __fastcall sub_A6E7F0(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void (__fastcall ***v4)(void *); // rbx
  bool v5; // zf
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi

  result = sub_A72220(*a1, a1 + 10);
  v3 = (void *)a1[10];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = (void (__fastcall ***)(void *))a1[9];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 4))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      result = sub_186B220(v4);
    }
  }
  v6 = (__int64 *)a1[8];
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v7 = &v6[result];
    if ( v6 >= v7 )
      goto LABEL_14;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[7];
          v5 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v5 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_13;
      }
      result = sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_13:
    v6 = (__int64 *)a1[8];
    if ( v6 )
LABEL_14:
      result = sub_186B220(v6 - 1);
  }
  v10 = (void *)a1[4];
  if ( v10 )
    result = sub_186B220(v10);
  v11 = a1[2];
  if ( v11 )
    return sub_186B220((void *)(v11 - 8));
  return result;
}

