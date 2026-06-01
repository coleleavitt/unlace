unsigned __int64 __fastcall sub_7B5310(__int64 a1, void *a2, unsigned __int64 a3, int a4)
{
  __int16 v5; // ax
  char v6; // cl
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int16 v9; // r15
  bool v10; // cf
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  unsigned __int16 *v17; // [rsp+10h] [rbp-68h]
  __int64 v18; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v16 = (unsigned __int64)a2;
  v21 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= a3 )
  {
    if ( !under_debugger )
      interr(2813);
LABEL_29:
    BUG();
  }
  v5 = a4;
  if ( (unsigned __int64)a4 > 8 )
  {
    if ( !under_debugger )
      interr(2814);
    goto LABEL_29;
  }
  if ( a4 == 8 )
  {
    v7 = 0x100000000000000LL;
    v18 = 0xFF00000000000000LL;
    v5 = 7;
  }
  else
  {
    v6 = 8 * a4;
    v7 = 1LL << v6;
    v18 = 255LL << v6;
  }
  v8 = (unsigned __int64)a2;
  v17 = (unsigned __int16 *)(a1 + 53);
  v9 = 9 - v5;
  while ( 1 )
  {
    *(_WORD *)(a1 + 53) = v9;
    v12 = swap64(v8);
    v14 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 56) = v12;
    if ( *(_BYTE *)(v14 + 6020) && (unsigned __int8)must_journal(v8, a2, v13) )
    {
      a2 = (void *)(a1 + 53);
      *(_QWORD *)(v14 + 56) = get_undo_param(1u);
      ptr = nullptr;
      v20 = 0;
      if ( (unsigned int)sub_73ED50(v14, v17, (__int64)&ptr) )
      {
        a2 = ptr;
        if ( (_QWORD)v20 && *(_BYTE *)ptr == 5 )
          reset_undo(v14, ptr);
        else
          add_undo_record(1, ptr, v20);
      }
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        qfree(ptr);
      }
    }
    else
    {
      a2 = (void *)(a1 + 53);
      sub_73ED50(v14, v17, 0);
    }
    v10 = __CFADD__(v7, v8);
    v11 = v7 + v8;
    if ( v10 )
      return a3;
    v8 = -v7 & v11;
    if ( v16 >= v8 )
    {
      if ( !under_debugger )
        interr(2815);
      goto LABEL_29;
    }
    if ( (v8 & v18) == 0 || v8 >= a3 )
      return v8;
  }
}
