void __fastcall sub_CC6500(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rdi
  _DWORD *v4; // rbx
  char *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  char *v9; // r14
  __int64 v10; // rdi

  v2 = a1[2];
  *a1 = &off_1C59398;
  if ( v2 )
  {
    sub_CC60C0(*(_QWORD *)v2, v2 + 96);
    v3 = *(void **)(v2 + 96);
    if ( v3 )
      sub_186B220(v3);
    v4 = *(_DWORD **)(v2 + 88);
    if ( v4 )
    {
      if ( v4[8]-- == 1 )
      {
        sub_ED44E0(v4);
        sub_186B220(v4);
      }
    }
    sub_14B63F0(v2 + 48);
    v6 = *(char **)(v2 + 8);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v2 + 16);
      if ( (_DWORD)v7 )
      {
        v8 = *(_QWORD *)(v2 + 8);
        v9 = &v6[16 * v7];
        do
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v8 + 8);
            if ( !v10 )
              break;
            v8 += 16;
            sub_186B220((void *)(v10 - 8));
            if ( (char *)v8 == v9 )
              goto LABEL_12;
          }
          v8 += 16;
        }
        while ( (char *)v8 != v9 );
      }
LABEL_12:
      sub_186B220(v6);
    }
    sub_186B220((void *)v2);
  }
  sub_18572D0(a1 + 3);
}

