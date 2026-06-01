unsigned __int64 __fastcall sub_67A520(int a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // edi
  int v8; // eax
  int vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  int vars18[2]; // [rsp+18h] [rbp+18h]
  int vars20; // [rsp+20h] [rbp+20h]
  int vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]

  *(_QWORD *)vars18 = __readfsqword(0x28u);
  *(_QWORD *)vars0 = 0;
  *(_QWORD *)((char *)&vars8 + 4) = 0;
  func_tail_iterator_set(vars0, a2, 0xFFFFFFFFLL);
  v7 = vars0[0];
  LODWORD(vars8) = -1;
  if ( *(_QWORD *)vars0 )
  {
    while ( 1 )
    {
      rangeset_t_add(
        a1,
        v7,
        v3,
        v4,
        v5,
        v6,
        vars0[0],
        (void *)vars8,
        *((__int64 *)&vars8 + 1),
        vars18[0],
        vars20,
        vars28,
        vars30);
      v7 = vars0[0];
      if ( !*(_QWORD *)vars0 )
        break;
      v8 = vars8 + 1;
      if ( *(_DWORD *)(*(_QWORD *)vars0 + 104LL) <= (int)vars8 + 1 )
      {
        lock_func_range(*(_QWORD *)vars0, 0);
        return *(_QWORD *)vars18 - __readfsqword(0x28u);
      }
      LODWORD(vars8) = vars8 + 1;
      if ( v8 >= 0 )
      {
        v3 = *(_QWORD *)(*(_QWORD *)vars0 + 112LL);
        v7 = v3 + 8 * v8;
      }
    }
  }
  return *(_QWORD *)vars18 - __readfsqword(0x28u);
}

