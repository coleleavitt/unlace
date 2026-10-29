__int64 __fastcall sub_E496C0(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  void (__fastcall ***v4)(void *); // rbx
  void (__fastcall ***v5)(void *); // rbx
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi

  v2 = (void (__fastcall ***)(void *))a1[5];
  *(a1 - 9) = &off_1C76A78;
  *a1 = off_1C76C68;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 12))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = (void (__fastcall ***)(void *))a1[4];
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v3 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  *a1 = qword_1C77178;
  *(a1 - 9) = qword_1C76FE8;
  sub_18572D0(a1 + 1);
  v5 = (void (__fastcall ***)(void *))*(a1 - 2);
  result = (__int64)qword_1C63FB0;
  *(a1 - 9) = qword_1C63FB0;
  if ( v5 )
  {
    v3 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v3 )
    {
      (**v5)(v5);
      result = sub_186B220(v5);
    }
  }
  v7 = *(a1 - 5);
  if ( v7 )
  {
    v8 = *(a1 - 4);
    v3 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v3 )
      result = sub_15D7BC0(v8, v7);
  }
  v9 = (__int64 *)*(a1 - 6);
  if ( v9 )
  {
    result = *((unsigned int *)v9 - 1);
    v10 = &v9[result];
    if ( v9 >= v10 )
      return sub_186B220(v9 - 1);
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(a1 - 7);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_20;
      }
      result = sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_20:
    v9 = (__int64 *)*(a1 - 6);
    if ( v9 )
      return sub_186B220(v9 - 1);
  }
  return result;
}

