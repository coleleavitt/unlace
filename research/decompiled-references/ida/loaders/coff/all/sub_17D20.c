unsigned __int64 __fastcall sub_17D20(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a2 )
  {
    sub_17C50(a1, a3);
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 == -1 )
    {
      v7 = *(_QWORD **)(a1 + 141);
      v8 = *(__int16 *)(a3 + 90);
      if ( v8 >= v7[1] )
        return v12 - __readfsqword(0x28u);
      if ( (__int16)v8 <= 0 )
        return v12 - __readfsqword(0x28u);
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(*v7 + 32 * v8 + 16) + *(_QWORD *)(a3 + 76);
      if ( !(unsigned __int8)((__int64 (*)(void))is_mapped)() )
        return v12 - __readfsqword(0x28u);
      goto LABEL_9;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 48);
  }
  if ( !(unsigned __int8)is_mapped(v4) )
    return v12 - __readfsqword(0x28u);
LABEL_9:
  v10 = -1;
  netnode_check(&v10, "$ toc", 0, 1);
  v9 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(get_ph(&v10, "$ toc") + 4) != 15 )
  {
    if ( !under_debugger )
      interr(10230);
    BUG();
  }
  sub_5F40(0xBB9u, v9, 0);
  v11 = 1;
  netnode_supset(v10, -2, &v11, 8, 65);
  set_name(*(_QWORD *)(a1 + 48), "TOC", 1281);
  return v12 - __readfsqword(0x28u);
}

