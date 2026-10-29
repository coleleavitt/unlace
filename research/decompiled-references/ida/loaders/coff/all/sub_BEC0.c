__int64 __fastcall sub_BEC0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  bool v9; // al
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD v14[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 385);
  v14[3] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = ~(_DWORD)a4 & v7 & (a2 + (int)a4);
  if ( v8 == -1 )
  {
    if ( a3 )
      return find_free_chunk(v8, a3, a4);
  }
  else
  {
    v9 = v8 == 0;
    if ( a3 != -1 )
      v9 = v7 - v8 >= a3;
    if ( !v9 )
      return find_free_chunk(v8, a3, a4);
  }
  v10 = (unsigned __int64 *)rangeset_t_lower_bound(a1 + 401, v8);
  v11 = *(_QWORD *)(a1 + 401) + 16LL * *(_QWORD *)(a1 + 409);
  if ( (unsigned __int64 *)v11 != v10 )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( v8 >= *v10 && v10[1] >= a3 + v8 )
        break;
      v10 += 2;
      if ( v10 == (unsigned __int64 *)v11 )
        return find_free_chunk(v8, a3, a4);
    }
    v14[0] = *v10;
    v14[1] = a3 + v12;
    if ( getseg(*v10) && !(unsigned __int8)set_segm_end(*v10, *v10, 1) )
    {
      if ( !under_debugger )
        interr(20024);
LABEL_19:
      BUG();
    }
    if ( !(unsigned __int8)rangeset_t_sub(a1 + 401, v14) )
    {
      if ( !under_debugger )
        interr(20025);
      goto LABEL_19;
    }
  }
  return find_free_chunk(v8, a3, a4);
}

