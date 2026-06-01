__int64 __fastcall sub_4DA630(__int64 a1)
{
  __int64 v2; // rax
  char *v3; // rdi
  char *v4; // rbp
  char *v5; // rbx
  void (***v6)(void); // rdi
  void (*v7)(void); // rax
  char *v8; // rax
  void (***v10)(void); // [rsp+8h] [rbp-30h]

  *(_QWORD *)a1 = off_1C66400;
  v2 = *(unsigned int *)(a1 + 56);
  v3 = *(char **)(a1 + 48);
  v4 = &v3[24 * v2];
  v5 = v3;
  if ( v3 != v4 )
  {
    while ( *((_DWORD *)v5 + 1) != 2 )
    {
      v5 += 24;
      if ( v4 == v5 )
        goto LABEL_16;
    }
    if ( v4 != v5 )
    {
      do
      {
        v6 = *((void (****)(void))v5 + 2);
        if ( v6 )
        {
          v7 = **v6;
          if ( (char *)v7 != (char *)nullsub_250 )
          {
            v10 = *((void (****)(void))v5 + 2);
            v7();
            v6 = v10;
          }
          sub_186B220(v6);
        }
        v8 = v5 + 24;
        if ( v4 == v5 + 24 )
          break;
        while ( 1 )
        {
          v5 = v8;
          if ( *((_DWORD *)v8 + 1) == 2 )
            break;
          v8 += 24;
          if ( v4 == v8 )
            goto LABEL_15;
        }
      }
      while ( v4 != v8 );
LABEL_15:
      v3 = *(char **)(a1 + 48);
    }
  }
LABEL_16:
  if ( v3 )
    sub_186B220(v3);
  return sub_629AC0(a1 + 8);
}

