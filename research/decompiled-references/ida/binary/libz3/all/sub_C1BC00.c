void __fastcall sub_C1BC00(_QWORD *a1)
{
  __int64 v2; // rbp
  void (__fastcall ***v3)(_QWORD); // rbx
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rax
  char *v14; // rbx
  char *v15; // r14
  void *v16; // r15
  char *v17; // rsi
  char *ptr; // [rsp+8h] [rbp-40h]

  v2 = a1[2];
  *a1 = &off_1C583E8;
  if ( v2 )
  {
    v3 = *(void (__fastcall ****)(_QWORD))(v2 + 160);
    if ( v3 )
    {
      (**v3)(*(_QWORD *)(v2 + 160));
      sub_186B220(v3);
    }
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 120);
    sub_182CBA0(v4, v2 + 136);
    v5 = *(_QWORD *)(v2 + 112);
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    v6 = *(__int64 **)(v2 + 104);
    if ( v6 )
    {
      v7 = &v6[*((unsigned int *)v6 - 1)];
      if ( v6 >= v7 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v8 = *v6;
          if ( *v6 )
          {
            v9 = *(_QWORD *)(v2 + 96);
            if ( (*(_DWORD *)(v8 + 8))-- == 1 )
              break;
          }
          if ( ++v6 >= v7 )
            goto LABEL_13;
        }
        sub_15D7BC0(v9, v8);
        ++v6;
      }
      while ( v6 < v7 );
LABEL_13:
      v6 = *(__int64 **)(v2 + 104);
      if ( v6 )
LABEL_14:
        sub_186B220(v6 - 1);
    }
    v11 = *(void **)(v2 + 72);
    if ( v11 )
      sub_186B220(v11);
    v12 = *(void **)(v2 + 48);
    if ( v12 )
      sub_186B220(v12);
    ptr = *(char **)(v2 + 24);
    if ( ptr )
    {
      v13 = *(unsigned int *)(v2 + 32);
      if ( (_DWORD)v13 )
      {
        v14 = *(char **)(v2 + 24);
        v15 = &ptr[40 * v13];
        do
        {
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v14 + 8);
          v17 = v14 + 24;
          v14 += 40;
          sub_182CBA0(v16, v17);
        }
        while ( v14 != v15 );
      }
      sub_186B220(ptr);
    }
    sub_186B220((void *)v2);
  }
  operator delete(a1, 0x18u);
}

