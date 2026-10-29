__int64 __fastcall sub_505F30(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 (__fastcall ***a4)(_QWORD, unsigned __int64 *))
{
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v10; // rdx
  unsigned __int64 *v11; // rsi
  unsigned int v12; // r15d
  bool v13; // al
  bool v14; // r14
  bool v15; // al
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  char v23; // dl
  void *v24; // rdi

  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    return (unsigned int)-1;
  v5 = *(_DWORD *)(v4 + 180);
  v6 = a1;
  v7 = a2;
  if ( v5 )
    goto LABEL_3;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v5 = *(_DWORD *)(v4 + 180);
LABEL_3:
    *(_DWORD *)(v4 + 180) = v5 + 1;
  }
  v11 = sub_505D70(a1, a2);
  if ( v11 )
  {
    a1 = (__int64)a4;
    v12 = (**a4)(a4, v11);
    v13 = v12 == 0;
  }
  else
  {
    v13 = 1;
    v12 = 0;
  }
  v14 = v13 && v7 < a3;
  if ( v14 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int64 *)v7;
      a1 = v6;
      v16 = sub_505EB0(v6, v7);
      v17 = v16;
      if ( !v16 )
        break;
      if ( *v16 < a3 )
      {
        v11 = v16;
        a1 = (__int64)a4;
        v12 = (**a4)(a4, v16);
        v15 = v12 == 0;
        v7 = v17[1] - 1;
        if ( v7 >= a3 )
          goto LABEL_13;
      }
      else
      {
        v15 = v14;
        v12 = 0;
        v7 = v17[1] - 1;
        if ( v7 >= a3 )
          goto LABEL_13;
      }
      if ( !v15 )
        goto LABEL_13;
    }
    v18 = *(_QWORD *)(v6 + 32);
    v12 = 0;
    v19 = *(_DWORD *)(v18 + 180);
    if ( v19 )
    {
LABEL_14:
      v20 = v19 - 1;
      *(_DWORD *)(v18 + 180) = v20;
      if ( v20 )
        return v12;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_13:
    v18 = *(_QWORD *)(v6 + 32);
    v19 = *(_DWORD *)(v18 + 180);
    if ( v19 )
      goto LABEL_14;
  }
  v23 = must_journal(a1, v11, v10);
  v19 = *(_DWORD *)(v18 + 180);
  if ( v23 )
    goto LABEL_14;
  if ( v19 )
    return v12;
LABEL_15:
  v21 = *(_QWORD *)(v18 + 72);
  if ( v21 )
  {
    add_undo_record(*(unsigned int *)(v18 + 176), *(_QWORD *)(v18 + 64), v21);
    v24 = *(void **)(v18 + 64);
    if ( v24 )
    {
      *(_QWORD *)(v18 + 72) = 0;
      qfree(v24);
      *(_QWORD *)(v18 + 64) = 0;
      *(_QWORD *)(v18 + 80) = 0;
    }
    *(_QWORD *)(v18 + 144) = -1;
  }
  return v12;
}
