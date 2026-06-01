unsigned __int64 __fastcall sub_587660(_QWORD *a1, void **a2, unsigned int *a3, unsigned int a4)
{
  void **v4; // r12
  unsigned int *v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  char v11; // r15
  void *v12; // rsi
  __int64 v13; // rax
  _BYTE *v14; // rsi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = (_QWORD *)a1[2];
  v18 = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  a2 = (void **)*a2;
  v7 = a1 + 1;
  do
  {
    while ( 1 )
    {
      a3 = (unsigned int *)v6[2];
      v8 = v6[3];
      if ( v6[4] >= (unsigned __int64)a2 )
        break;
      v6 = (_QWORD *)v6[3];
      if ( !v8 )
        goto LABEL_6;
    }
    v7 = v6;
    v6 = (_QWORD *)v6[2];
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == v7 )
  {
LABEL_11:
    v7 = a1 + 1;
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( a2 == (void **)v7[4] )
  {
    if ( *((_DWORD *)v7 + 10) == *v5 )
      return v18 - __readfsqword(0x28u);
    v11 = must_journal(a1, a2, a3);
    if ( !v11 )
      goto LABEL_20;
    goto LABEL_13;
  }
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
LABEL_12:
    v11 = 0;
LABEL_13:
    v12 = *v4;
    ptr = nullptr;
    v17 = 0;
    sub_3A0A80((__int64 *)&ptr, (__int64)v12);
    v13 = v17;
    v14 = ptr;
    if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v17 + 1, 1);
      v14 = ptr;
      v13 = v17;
    }
    v14[v13] = v11;
    *(_QWORD *)&v17 = v17 + 1;
    if ( v11 )
      sub_3A0970((__int64 *)&ptr, *((_DWORD *)v7 + 10));
    sub_3A0970((__int64 *)&ptr, *v5);
    add_undo_record(a4, ptr, v17);
    if ( ptr )
    {
      *(_QWORD *)&v17 = 0;
      qfree(ptr);
    }
    if ( !v11 )
      goto LABEL_9;
LABEL_20:
    *((_DWORD *)v7 + 10) = *v5;
    return v18 - __readfsqword(0x28u);
  }
LABEL_9:
  v9 = *v5;
  ptr = *v4;
  LODWORD(v17) = v9;
  sub_3CF5E0(a1, v7, (__int64)&ptr);
  return v18 - __readfsqword(0x28u);
}
