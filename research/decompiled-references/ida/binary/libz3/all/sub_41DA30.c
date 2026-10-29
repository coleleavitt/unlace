__int64 __fastcall sub_41DA30(__int64 **a1)
{
  __int64 *v1; // rbx
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // r13
  void (__fastcall ***v6)(__int64); // r12
  __int64 v7; // rdi
  _DWORD *v8; // rbp
  bool v9; // zf
  void (__fastcall ***v10)(void *); // rbp
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[12];
    if ( v2 )
      sub_186B220(v2);
    sub_2B4F40(v1 + 10);
    sub_2B4F40(v1 + 8);
    v3 = v1[7];
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    v4 = v1 + 5;
    v5 = v1 + 3;
    do
    {
      while ( 1 )
      {
        v6 = (void (__fastcall ***)(__int64))*v4;
        if ( !*v4 )
          break;
        v7 = *v4--;
        (**v6)(v7);
        sub_186B220(v6);
        if ( v4 == v5 )
          goto LABEL_9;
      }
      --v4;
    }
    while ( v5 != v4 );
LABEL_9:
    v8 = (_DWORD *)v1[3];
    if ( v8 && (v9 = v8[12] == 1, --v8[12], v9) )
    {
      (**(void (__fastcall ***)(_DWORD *))v8)(v8);
      sub_186B220(v8);
      v10 = (void (__fastcall ***)(void *))v1[2];
      if ( v10 )
      {
LABEL_12:
        v9 = (*((_DWORD *)v10 + 12))-- == 1;
        if ( v9 )
        {
          (**v10)(v10);
          sub_186B220(v10);
        }
      }
    }
    else
    {
      v10 = (void (__fastcall ***)(void *))v1[2];
      if ( v10 )
        goto LABEL_12;
    }
    return sub_186B220(v1);
  }
  return result;
}

