unsigned __int64 __fastcall sub_4F23A0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v4; // r13
  void *v5; // rdi
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v10; // rdx
  int v11; // r15d
  _QWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v1 = *a1;
  v2 = a1[3];
  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v1 + 1672);
  if ( v2 )
  {
    do
    {
      sub_4F1890(*(_QWORD **)(v2 + 24));
      v5 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v5, 0x30u);
    }
    while ( v2 );
    v1 = *a1;
  }
  a1[3] = 0;
  a1[4] = a1 + 2;
  a1[5] = a1 + 2;
  a1[6] = 0;
  v16 = *(_QWORD *)(v4 + 2728);
  for ( i = sub_7BEB80(&v16, v1, 65); i != -1; i = sub_7BEBF0(&v16, *a1, i, 65) )
  {
    v7 = node2ea(i);
    v8 = *a1;
    v17 = v7;
    v9 = sub_7BE710(&v16, v8, i, 65);
    v10 = (_QWORD *)a1[3];
    v11 = v9;
    if ( v10 )
    {
      v12 = a1 + 2;
      do
      {
        while ( 1 )
        {
          v13 = v10[2];
          v14 = v10[3];
          if ( v10[4] < v17 )
            break;
          v12 = v10;
          v10 = (_QWORD *)v10[2];
          if ( !v13 )
            goto LABEL_10;
        }
        v10 = (_QWORD *)v10[3];
      }
      while ( v14 );
LABEL_10:
      if ( v12 != a1 + 2 && v17 >= v12[4] )
        goto LABEL_13;
    }
    else
    {
      v12 = a1 + 2;
    }
    v18 = &v17;
    v12 = sub_4F17D0(a1 + 1, v12, &v18);
LABEL_13:
    *((_DWORD *)v12 + 10) = v11;
  }
  register_undo_handlers(&unk_2B2D480, 2, 1, 0);
  return v19 - __readfsqword(0x28u);
}
