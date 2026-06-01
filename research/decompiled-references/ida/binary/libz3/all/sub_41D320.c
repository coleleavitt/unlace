__int64 __fastcall sub_41D320(void ***a1)
{
  void **v1; // rbx
  __int64 result; // rax
  void **v4; // r12
  _QWORD *v5; // rbp
  bool v6; // zf
  void (__fastcall ***v7)(void *); // r13
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi

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
      v7 = (void (__fastcall ***)(void *))v5[11];
      if ( v7 )
      {
        v6 = (*((_DWORD *)v7 + 4))-- == 1;
        if ( v6 )
        {
          (**v7)(v7);
          sub_186B220(v7);
        }
      }
      v8 = (_DWORD *)v5[10];
      if ( v8 )
        sub_41CD50(v8);
      sub_2B4F40(v5 + 8);
      sub_2B4F40(v5 + 6);
      sub_2334C0(v5 + 4);
      v9 = v5[2];
      if ( v9 )
      {
        v10 = v5[3];
        v6 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v6 )
          sub_15D7BC0(v10, v9);
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

