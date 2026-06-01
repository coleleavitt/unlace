void __fastcall sub_E74900(unsigned int *a1, unsigned int *a2, char **a3)
{
  char *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // r15
  __int64 v8; // r14
  bool v9; // zf
  __int64 v10; // r14
  char *v11; // r14
  char *v12; // rbx
  char *v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  char *v16[8]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *a3;
  if ( (char *)a2 - (char *)a1 <= 112 )
  {
    v13 = nullptr;
    if ( v4 )
    {
      sub_C7B020(&v13, a3);
      v12 = v13;
      sub_E73C80(a1, a2, &v13);
      if ( v12 )
        sub_186B220(v12 - 8);
    }
    else
    {
      sub_E73C80(a1, a2, &v13);
    }
  }
  else
  {
    v14 = 0;
    v5 = ((char *)a2 - (char *)a1) >> 4;
    v6 = 8 * v5;
    v7 = (char *)&a1[2 * v5];
    if ( v4 )
    {
      sub_C7B020(&v14, a3);
      v8 = v14;
      sub_E74900(a1, v7, &v14);
      if ( v8 )
        sub_186B220((void *)(v8 - 8));
    }
    else
    {
      sub_E74900(a1, &a1[2 * v5], &v14);
    }
    v9 = *a3 == nullptr;
    v15 = 0;
    if ( v9 )
    {
      sub_E74900(v7, a2, &v15);
    }
    else
    {
      sub_C7B020(&v15, a3);
      v10 = v15;
      sub_E74900(v7, a2, &v15);
      if ( v10 )
        sub_186B220((void *)(v10 - 8));
    }
    v11 = *a3;
    if ( *a3 )
    {
      v16[0] = nullptr;
      sub_C7B020(v16, a3);
      v11 = v16[0];
    }
    v16[0] = v11;
    sub_E74000((char *)a1, v7, (__int64)a2, v6 >> 3, ((char *)a2 - v7) >> 3, v16);
    if ( v11 )
      sub_186B220(v11 - 8);
  }
}

