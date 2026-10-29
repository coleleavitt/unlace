__int64 (__fastcall **__fastcall sub_C1BA80(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rbp
  void (__fastcall ***v3)(_QWORD); // rbx
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // r15
  __int64 v14; // rax
  char *v15; // rbx
  char *v16; // r14
  void *v17; // r13
  char *v18; // rsi

  result = &off_1C583E8;
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
    v13 = *(char **)(v2 + 24);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v2 + 32);
      if ( (_DWORD)v14 )
      {
        v15 = *(char **)(v2 + 24);
        v16 = &v13[40 * v14];
        do
        {
          v17 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v15 + 8);
          v18 = v15 + 24;
          v15 += 40;
          sub_182CBA0(v17, v18);
        }
        while ( v15 != v16 );
      }
      sub_186B220(v13);
    }
    return (__int64 (__fastcall **)())sub_186B220((void *)v2);
  }
  return result;
}

