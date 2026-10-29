__int64 __fastcall sub_67D690(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // [rsp+0h] [rbp-40h] BYREF
  void *ptr; // [rsp+8h] [rbp-38h] BYREF
  __int128 v9; // [rsp+10h] [rbp-30h]
  unsigned __int64 v10; // [rsp+20h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 == 84 )
  {
    v5 = *(_QWORD *)(qword_2CA1698 + 1648);
    v6 = node2ea(a4);
    ptr = nullptr;
    v9 = 0;
    get_ea_diffpos_name(&ptr, v6);
    sub_67D5A0(v5, nullptr, &v7, v6);
    sub_3573A0((char **)a1);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  return a1;
}

