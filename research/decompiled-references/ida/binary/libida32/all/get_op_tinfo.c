__int64 __fastcall get_op_tinfo(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v7[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v7[0] = a2;
  v7[1] = a3;
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1624LL);
  v4 = sub_675610(v3 + 56, v7);
  v5 = 0;
  if ( v4 != v3 + 64 )
  {
    if ( a1 )
      copy_tinfo_t(a1);
    return 1;
  }
  return v5;
}

