unsigned __int64 __fastcall sub_69A460(int a1, __int64 a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  int v8; // eax
  int vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  void *vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10[2]; // [rsp+10h] [rbp+10h]
  int vars20; // [rsp+20h] [rbp+20h]
  int vars28[2]; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]

  *(_QWORD *)vars28 = __readfsqword(0x28u);
  *(_QWORD *)vars0 = 0;
  *(_OWORD *)vars10 = 0;
  func_tail_iterator_set(vars0, a2, -1);
  LODWORD(v7) = vars0[0];
  LODWORD(vars8) = -1;
  if ( *(_QWORD *)vars0 )
  {
    while ( 1 )
    {
      rangeset_t_add(a1, v7, v3, v4, v5, v6, vars0[0], vars8, vars10[0], vars10[1], vars20, vars28[0], vars30);
      LODWORD(v7) = vars0[0];
      if ( !*(_QWORD *)vars0 )
        break;
      v8 = (_DWORD)vars8 + 1;
      if ( *(_DWORD *)(*(_QWORD *)vars0 + 128LL) <= (int)vars8 + 1 )
      {
        lock_func_range(*(_QWORD *)vars0, 0);
        return *(_QWORD *)vars28 - __readfsqword(0x28u);
      }
      LODWORD(vars8) = (_DWORD)vars8 + 1;
      if ( v8 >= 0 )
        v7 = *(_QWORD *)(*(_QWORD *)vars0 + 136LL) + 16LL * v8;
    }
  }
  return *(_QWORD *)vars28 - __readfsqword(0x28u);
}
