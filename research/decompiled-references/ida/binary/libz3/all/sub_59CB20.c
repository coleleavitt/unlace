void __fastcall sub_59CB20(__int64 *a1)
{
  __int64 *v2; // rdi
  char *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  char *v6; // r12
  __int64 v7; // rdi
  char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi

  v2 = a1 + 7;
  *(v2 - 7) = (__int64)&off_1C51DB0;
  sub_59C5A0(v2);
  sub_59C860(a1 + 10);
  v3 = (char *)a1[10];
  if ( v3 )
  {
    v4 = *((unsigned int *)a1 + 22);
    if ( (_DWORD)v4 )
    {
      v5 = a1[10];
      v6 = &v3[24 * v4];
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( !v7 )
            break;
          v5 += 24;
          sub_186B220((void *)(v7 - 8));
          if ( (char *)v5 == v6 )
            goto LABEL_6;
        }
        v5 += 24;
      }
      while ( (char *)v5 != v6 );
    }
LABEL_6:
    sub_186B220(v3);
  }
  v8 = (char *)a1[7];
  if ( v8 )
  {
    v9 = *((unsigned int *)a1 + 16);
    if ( (_DWORD)v9 )
    {
      v10 = a1[7];
      v11 = &v8[24 * v9];
      do
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( !v12 )
            break;
          v10 += 24;
          sub_186B220((void *)(v12 - 8));
          if ( v11 == (char *)v10 )
            goto LABEL_12;
        }
        v10 += 24;
      }
      while ( v11 != (char *)v10 );
    }
LABEL_12:
    sub_186B220(v8);
  }
  v13 = a1[6];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  operator delete(a1, 0x68u);
}

