__int64 __fastcall get_op_tinfo(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = a2;
  v8 = a3;
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1816LL);
  v4 = sub_695310(v3 + 56, &v7);
  v5 = 0;
  if ( v4 != v3 + 64 )
  {
    if ( a1 )
      copy_tinfo_t(a1);
    return 1;
  }
  return v5;
}
