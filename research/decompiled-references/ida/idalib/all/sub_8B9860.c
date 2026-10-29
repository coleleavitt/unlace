__int64 __fastcall sub_8B9860(__int64 *a1, __int64 **a2, unsigned __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 undo_param; // rax
  void *v13; // rdi
  _QWORD v14[11]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a4 - a3;
  v14[3] = __readfsqword(0x28u);
  sub_40D2A0(a1, a3);
  sub_40D2A0(a1, v7);
  if ( !a5 )
    return 1;
  v10 = a1[1];
  v11 = 4 * v7;
  undo_param = get_undo_param(1u);
  if ( !undo_param || undo_param >= v10 + v11 )
  {
    v14[0] = off_2B3DF50;
    v14[1] = a1;
    sub_8B94D0(a2, a3, v7, (__int64)v14, 0, 0);
    if ( a1[1] - v10 != v11 )
    {
      if ( !under_debugger )
        interr(1764);
      BUG();
    }
    return 1;
  }
  reset_undo(1, v7);
  v13 = (void *)*a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v13);
    *a1 = 0;
    a1[2] = 0;
  }
  return 0;
}
