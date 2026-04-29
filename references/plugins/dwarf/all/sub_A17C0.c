__int64 __fastcall sub_A17C0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // rax
  _QWORD *v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10 = nullptr;
  v11 = 0;
  sub_A14A0(a1);
  sub_A0B10(a1, (__int64 *)&v10, a2, a1 + 384, 1);
  if ( !(_QWORD)v11 )
  {
    v3 = (__int64)v10;
    if ( !v10 )
      return v3;
    v2 = v10;
    v3 = 0;
    goto LABEL_9;
  }
  if ( (_QWORD)v11 != 1 && (debug & 0x400000) != 0 )
  {
    sub_88B80((__int64)"dwarf_file_t::find_cu_die_for_code(%a) has more than 1 die.\n", 0.0);
    v2 = v10;
    v3 = v10[31];
    if ( v3 )
      goto LABEL_5;
  }
  else
  {
    v2 = v10;
    v3 = v10[31];
    if ( v3 )
      goto LABEL_5;
  }
  v9 = sub_87C20(*(_QWORD **)(*v2 + 16LL), *(_QWORD *)(*v2 + 24LL));
  v2[31] = v9;
  v3 = v9;
  v2 = v10;
LABEL_5:
  if ( v2 )
  {
    v4 = v11;
    if ( (_QWORD)v11 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (__int64)&v2[v5];
        ++v6;
        v5 += 33;
        sub_1B750(v7);
        v2 = v10;
      }
      while ( v4 != v6 );
    }
LABEL_9:
    *(_QWORD *)&v11 = 0;
    qfree(v2);
  }
  return v3;
}
