unsigned __int64 __fastcall sub_11FF30(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD v4[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_11FE00((__int64)v4, a2);
  netnode_check();
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree();
  }
  v2 = (_QWORD *)operator new(8u);
  *v2 = 0xFFFFFFFFLL;
  navstack_t_register_live();
  *(_DWORD *)v2 = -1;
  sub_15CE10(a1 + 440, v2);
  return v5 - __readfsqword(0x28u);
}

