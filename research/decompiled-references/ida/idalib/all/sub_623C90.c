unsigned __int64 __fastcall sub_623C90(__int64 a1, __int64 a2, unsigned __int64 a3, void *a4)
{
  __int64 v5; // rax
  void *v7; // r13
  __int64 i; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rsi
  char *v13; // rbx
  char *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rbx
  char *v19; // rsi
  void *v20; // rdi
  _QWORD v21[2]; // [rsp+8h] [rbp-60h] BYREF
  void *v22; // [rsp+18h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 1672);
  v21[0] = a2;
  v25 = __readfsqword(0x28u);
  sub_622EE0((_QWORD *)(v5 + 2336), a3);
  v7 = (void *)sub_3BDD60(*(_QWORD **)(a1 + 1672), a3);
  if ( a4 != (void *)-1LL )
  {
    if ( (unsigned __int8)sub_7BEFD0(v21, a1, &v22, a4, 65) )
    {
      if ( v22 != v7 )
      {
        ptr = a4;
        sub_7BE7C0(v21, a1, v7, &ptr, 8, 79);
      }
    }
    else
    {
      ptr = v7;
      sub_7BE7C0(v21, a1, a4, &ptr, 8, 65);
    }
    return v25 - __readfsqword(0x28u);
  }
  v24 = 0;
  ptr = nullptr;
  for ( i = sub_7BEB80(v21, a1, 65); ; i = sub_7BEBF0(v21, a1, v10, 65) )
  {
    v10 = i;
    if ( i == -1 )
      break;
    if ( v7 == (void *)sub_7BE710(v21, a1, i, 65) )
    {
      v11 = v24;
      v12 = ptr;
      if ( *((_QWORD *)&v24 + 1) < (unsigned __int64)(v24 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v24 + 1, 8);
        v12 = ptr;
        v11 = v24;
      }
      v12[v11] = v10;
      *(_QWORD *)&v24 = v24 + 1;
    }
  }
  v13 = (char *)ptr;
  v14 = (char *)ptr + 8 * v24;
  if ( v14 != ptr )
  {
    do
    {
      sub_7BE850(v21, a1, *(_QWORD *)v13, 65);
      v13 += 8;
    }
    while ( v14 != v13 );
  }
  sub_7BE850(v21, a1, v7, 79);
  v15 = sub_7BEB80(v21, a1, 79);
  if ( v15 == -1 )
  {
LABEL_23:
    v20 = ptr;
    if ( !ptr )
      return v25 - __readfsqword(0x28u);
LABEL_24:
    *(_QWORD *)&v24 = 0;
    qfree(v20);
    return v25 - __readfsqword(0x28u);
  }
  while ( 1 )
  {
    v16 = sub_7BE710(v21, a1, v15, 79);
    v17 = (char *)ptr;
    v18 = v16;
    v19 = (char *)ptr + 8 * v24;
    if ( ptr != v19 )
    {
      while ( v16 != *(_QWORD *)v17 )
      {
        v17 += 8;
        if ( v19 == v17 )
          goto LABEL_22;
      }
      if ( v19 != v17 )
        break;
    }
LABEL_22:
    v15 = sub_7BEBF0(v21, a1, v15, 79);
    if ( v15 == -1 )
      goto LABEL_23;
  }
  sub_7BE850(v21, a1, v15, 79);
  v22 = (void *)v15;
  sub_7BE7C0(v21, a1, v18, &v22, 8, 65);
  v20 = ptr;
  if ( ptr )
    goto LABEL_24;
  return v25 - __readfsqword(0x28u);
}
