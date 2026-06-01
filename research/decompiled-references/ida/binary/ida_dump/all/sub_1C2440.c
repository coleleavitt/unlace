__int64 __fastcall sub_1C2440(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  _DWORD *v10; // r12
  _QWORD *v11; // rdi
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-98h]
  _QWORD *v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]

  copy_argloc();
  LOWORD(v14) = a3;
  v15 = nullptr;
  HIWORD(v14) = a4;
  v16 = 0;
  if ( a3 < (unsigned __int64)a4 )
  {
    v15 = (_QWORD *)qvector_reserve();
    *v15 = a3;
    v15[1] = a4;
    v16 = 1;
  }
  if ( (unsigned __int8)rangeset_t_sub2() )
  {
    if ( 16 * v16 )
    {
      if ( !under_debugger )
        sub_383060(51459);
      BUG();
    }
    v11 = v15;
    ++*(_DWORD *)(a1 + 24);
  }
  else
  {
    v7 = *(__int64 **)(a1 + 8);
    copy_argloc();
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v13 = qvector_reserve();
      *v7 = v13;
      v8 = v7[1];
      v9 = v13;
    }
    v10 = (_DWORD *)(v9 + 24 * v8);
    *v10 = 0;
    copy_argloc();
    v10[4] = v14;
    ++v7[1];
    cleanup_argloc();
    v11 = v15;
  }
  if ( v11 )
    qfree();
  cleanup_argloc();
  return 0;
}
