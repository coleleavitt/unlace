unsigned __int64 __fastcall sub_120440(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD v5[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_120310((__int64)v5, a2);
  netnode_check();
  if ( v5[0] )
  {
    v5[1] = 0;
    qfree();
  }
  v2 = operator new(0x10u);
  *(_QWORD *)v2 = -1;
  v3 = (_QWORD *)v2;
  *(_DWORD *)(v2 + 8) = 0;
  navstack_t_register_live();
  *v3 = -1;
  sub_15D6F0(a1 + 440, v3);
  return v6 - __readfsqword(0x28u);
}

