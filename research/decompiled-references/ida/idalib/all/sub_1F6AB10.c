size_t *__fastcall sub_1F6AB10(__int64 a1, __int64 a2, __int64 a3, size_t *a4)
{
  __int64 v4; // r13
  __int64 i; // r15
  __int64 v6; // rbx
  size_t **v7; // r12
  size_t *v8; // r14
  __int64 v9; // r13
  size_t *v10; // r14
  __int64 v12; // rbx
  size_t *v13; // rax
  __int64 v15; // [rsp+10h] [rbp-48h]

  v4 = (a3 - 1) / 2;
  v15 = a3 & 1;
  if ( a2 >= v4 )
  {
    v7 = (size_t **)(a1 + 8 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    v6 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v6 )
    {
      v12 = 2 * v6 + 2;
      v13 = *(size_t **)(a1 + 8 * v12 - 8);
      v6 = v12 - 1;
      *v7 = v13;
      v7 = (size_t **)(a1 + 8 * v6);
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v6 )
  {
    v6 = 2 * (i + 1);
    v7 = (size_t **)(a1 + 16 * (i + 1));
    v8 = *v7;
    if ( !sub_1F6AA70(*v7, *(v7 - 1)) )
      break;
    --v6;
    v7 = (size_t **)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * i) = *v7;
    if ( v6 >= v4 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  *(_QWORD *)(a1 + 8 * i) = v8;
  if ( v6 < v4 )
    goto LABEL_4;
LABEL_7:
  if ( !v15 )
    goto LABEL_16;
LABEL_8:
  v9 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    while ( 1 )
    {
      v7 = (size_t **)(a1 + 8 * v6);
      v10 = *(size_t **)(a1 + 8 * v9);
      if ( !sub_1F6AA70(v10, a4) )
        break;
      *v7 = v10;
      v6 = v9;
      if ( a2 >= v9 )
      {
        v7 = (size_t **)(a1 + 8 * v9);
        break;
      }
      v9 = (v9 - 1) / 2;
    }
  }
LABEL_13:
  *v7 = a4;
  return a4;
}
