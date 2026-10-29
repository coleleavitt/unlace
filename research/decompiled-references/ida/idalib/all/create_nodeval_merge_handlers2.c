unsigned __int64 __fastcall create_nodeval_merge_handlers2(
        __int64 *a1,
        __int64 *a2,
        int a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  _QWORD *nodeval_merge_handler2; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  _QWORD *v22; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a7 )
  {
    v10 = *a2;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 16LL);
    if ( v11 == sub_454920 )
    {
      v12 = 0;
      if ( *(int *)(v10 + 28) <= 0 )
        return v25 - __readfsqword(0x28u);
      while ( 1 )
      {
        v13 = switch_dbctx(*(int *)(v10 + 4 * v12 + 16));
        sub_7BEFF0(&v24, v13, a4, 0, 0);
        if ( v24 != -1 )
          break;
        if ( *(_DWORD *)(v10 + 28) <= (int)++v12 )
          return v25 - __readfsqword(0x28u);
      }
    }
    else if ( !(unsigned __int8)v11(v10, (__int64)a4) )
    {
      return v25 - __readfsqword(0x28u);
    }
  }
  v14 = a5;
  v15 = 0;
  if ( a6 )
  {
    do
    {
      nodeval_merge_handler2 = create_nodeval_merge_handler2(
                                 a2,
                                 *(_QWORD *)v14,
                                 a3,
                                 a4,
                                 *(_BYTE *)(v14 + 8),
                                 *(_DWORD *)(v14 + 12),
                                 *(_QWORD *)(v14 + 16),
                                 0);
      if ( a1 )
      {
        v17 = a1[1];
        v18 = *a1;
        if ( a1[2] < (unsigned __int64)(v17 + 1) )
        {
          v22 = nodeval_merge_handler2;
          v19 = qvector_reserve(a1, v18, v17 + 1, 8);
          nodeval_merge_handler2 = v22;
          *a1 = v19;
          v18 = v19;
          v17 = a1[1];
        }
        *(_QWORD *)(v18 + 8 * v17) = nodeval_merge_handler2;
        ++a1[1];
      }
      ++v15;
      v14 += 24;
    }
    while ( a6 != v15 );
  }
  return v25 - __readfsqword(0x28u);
}
