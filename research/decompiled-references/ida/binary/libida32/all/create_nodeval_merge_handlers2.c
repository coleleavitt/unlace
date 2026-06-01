unsigned __int64 __fastcall create_nodeval_merge_handlers2(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 nodeval_merge_handler2; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v20; // [rsp+10h] [rbp-58h]
  int v22; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a7 )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 16LL);
    if ( v10 == sub_440BA0 )
    {
      v11 = 0;
      if ( *(int *)(v9 + 28) <= 0 )
        return v23 - __readfsqword(0x28u);
      while ( 1 )
      {
        v12 = switch_dbctx(*(int *)(v9 + 4 * v11 + 16));
        sub_79BBF0(&v22, v12, a4, 0, 0);
        if ( v22 != -1 )
          break;
        if ( *(_DWORD *)(v9 + 28) <= (int)++v11 )
          return v23 - __readfsqword(0x28u);
      }
    }
    else if ( !(unsigned __int8)v10(v9, a4) )
    {
      return v23 - __readfsqword(0x28u);
    }
  }
  v13 = a5;
  v14 = 0;
  if ( a6 )
  {
    do
    {
      nodeval_merge_handler2 = create_nodeval_merge_handler2();
      if ( a1 )
      {
        v16 = a1[1];
        v17 = *a1;
        if ( a1[2] < (unsigned __int64)(v16 + 1) )
        {
          v20 = nodeval_merge_handler2;
          v18 = qvector_reserve(a1, v17, v16 + 1, 8);
          nodeval_merge_handler2 = v20;
          *a1 = v18;
          v17 = v18;
          v16 = a1[1];
        }
        *(_QWORD *)(v17 + 8 * v16) = nodeval_merge_handler2;
        ++a1[1];
      }
      ++v14;
      v13 += 24;
    }
    while ( a6 != v14 );
  }
  return v23 - __readfsqword(0x28u);
}

