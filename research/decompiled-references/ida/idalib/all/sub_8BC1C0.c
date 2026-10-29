unsigned __int64 __fastcall sub_8BC1C0(__int64 a1, unsigned __int64 *a2, int a3)
{
  char *v3; // rax
  unsigned __int64 v5; // rsi
  _BYTE *v7; // rdx
  char v8; // al
  char v10; // r12
  char v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  int v20; // ebx
  unsigned __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v3 = (char *)*a2;
  v24 = __readfsqword(0x28u);
  v5 = a2[1];
  if ( (unsigned __int64)v3 >= v5 )
    return v24 - __readfsqword(0x28u);
  v7 = v3 + 1;
  v8 = *v3;
  *a2 = (unsigned __int64)v7;
  if ( v8 != 1 )
  {
    if ( v8 != 2 )
    {
      if ( !v8 )
      {
        v10 = a3 == 1;
        if ( (unsigned __int64)v7 < v5 )
        {
          do
            sub_8BACD0(a2, a1, v10, 0);
          while ( *a2 < a2[1] );
        }
        return v24 - __readfsqword(0x28u);
      }
      if ( !under_debugger )
        interr(1727);
LABEL_25:
      BUG();
    }
    v13 = unpack_dq(a2);
    v14 = unpack_dq(a2);
    v15 = a2[1];
    v16 = a2;
    v17 = v14;
    v19 = unpack_dq(a2);
    if ( a3 )
    {
      v21 = v17;
      v17 = v13;
      v13 = v21;
      if ( !(unsigned __int8)must_journal(v16, v15, v18) )
        goto LABEL_19;
    }
    else if ( !(unsigned __int8)must_journal(v16, v15, v18) )
    {
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 96) != -1 )
    {
      v23 = 0;
      ptr = nullptr;
      v20 = sub_8BC100(a1, v17, v13, v19, (__int64 *)&ptr);
      if ( (_QWORD)v23 )
        add_undo_record(*(unsigned int *)(a1 + 96), ptr, v23);
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
      goto LABEL_20;
    }
LABEL_19:
    v20 = sub_8BC100(a1, v17, v13, v19, nullptr);
LABEL_20:
    if ( !v20 )
      return v24 - __readfsqword(0x28u);
    if ( !under_debugger )
      interr(1726);
    goto LABEL_25;
  }
  v12 = a3 == 0;
  if ( (unsigned __int64)v7 < v5 )
  {
    do
      sub_8BACD0(a2, a1, v12, 1);
    while ( *a2 < a2[1] );
  }
  return v24 - __readfsqword(0x28u);
}
