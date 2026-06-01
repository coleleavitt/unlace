void __fastcall sub_5B6380(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // r13
  _QWORD *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = *(unsigned int *)(a1 + 104);
  v3 = *(_QWORD **)(a1 + 96);
  v4 = v3;
  v5 = &v3[2 * v2];
  if ( v3 != v5 )
  {
    while ( *v4 <= 1u )
    {
      v4 += 2;
      if ( v5 == v4 )
        goto LABEL_16;
    }
    if ( v4 != v5 )
    {
      do
      {
        v6 = (_QWORD *)v4[1];
        if ( v6 )
        {
          if ( *v6 )
            sub_186B220((void *)(*v6 - 8LL));
          sub_186B220(v6);
        }
        v7 = v4 + 2;
        if ( v5 == v4 + 2 )
          break;
        while ( 1 )
        {
          v4 = v7;
          if ( *v7 > 1u )
            break;
          v7 += 2;
          if ( v5 == v7 )
            goto LABEL_15;
        }
      }
      while ( v7 != v5 );
LABEL_15:
      v3 = *(_QWORD **)(a1 + 96);
    }
  }
LABEL_16:
  if ( v3 )
    sub_186B220(v3);
  v8 = *(void **)(a1 + 56);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(void **)(a1 + 32);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void **)(a1 + 8);
  if ( v10 )
    sub_186B220(v10);
}

