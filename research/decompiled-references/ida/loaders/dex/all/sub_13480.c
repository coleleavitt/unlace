__int64 __fastcall sub_13480(int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  int dword; // eax
  __int64 v7; // rdx
  bool v8; // cf
  unsigned __int64 v9; // rdx
  __int64 v10; // r14
  unsigned int word; // r12d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  const char *v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = a3 + 4;
  create_data(a3, 0x20000000, 4, -1);
  set_cmt(a3, "Count of types in item", 0);
  dword = get_dword(a3, "Count of types in item", v5);
  v7 = (unsigned int)(2 * dword);
  v8 = __CFADD__(v4, v7);
  v9 = v4 + v7;
  if ( dword < 0 || v8 || a3 < *((_QWORD *)a1 + 21) || *((_QWORD *)a1 + 22) < v9 )
    return -1;
  if ( dword )
  {
    v10 = v4 + 2LL * (unsigned int)dword;
    do
    {
      word = (unsigned __int16)get_word(v4);
      create_data(v4, 0x10000000, 2, -1);
      v13 = num_flag();
      set_op_type(v4, v13, 0);
      v14 = *a1;
      v15 = *((_QWORD *)a1 + 1);
      v20 = nullptr;
      v21 = 0;
      v16 = (unsigned int)(v14 - 1);
      if ( v16 >= *(_QWORD *)(v15 + 56) )
        sub_59F0();
      sub_8BD0((__int64)&v20, *(_QWORD *)(*(_QWORD *)(v15 + 48) + 8 * v16), word, 0x55u);
      v17 = s1;
      if ( (_QWORD)v21 )
        v17 = v20;
      sub_13370(v4, (__int64)"Type: (0x%x) '%s'", word, v17);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
      v4 += 2;
    }
    while ( v10 != v4 );
  }
  else
  {
    v10 = a3 + 4;
  }
  if ( (((_BYTE)v10 - (_BYTE)a3) & 3) != 0 )
  {
    v18 = v10;
    v19 = 4 - (((unsigned __int8)v10 - (unsigned __int8)a3) & 3);
    v10 += v19;
    create_align(v18, v19, 4);
  }
  return v10;
}

