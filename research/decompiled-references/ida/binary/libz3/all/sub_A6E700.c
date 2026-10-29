__int64 __fastcall sub_A6E700(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // r14d
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  struct _Unwind_Exception *v17; // rsi
  __int64 v18; // rdi
  struct _Unwind_Exception *v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]

  v7 = a1[1];
  result = *(_QWORD *)(v7 + 1576);
  if ( result )
  {
    v9 = *(_DWORD *)(result - 4);
    result = *a1;
    v20 = nullptr;
    v21 = result;
    if ( v9 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_1380690((int)v7 + 1168, v10, (int)&v20, a4, a5, a6, v20);
        v12 = sub_186B270(0x38u);
        sub_13478B0(v12, *a1, *(unsigned int *)(v11 + 32));
        sub_1349280(v12, (_DWORD)v20, v13, v14, v15, v16);
        result = sub_135F980(a1[9], v11, v12);
        if ( v9 == ++v10 )
          break;
        v7 = a1[1];
      }
      v17 = v20;
      v18 = v21;
      if ( v20 )
      {
        if ( LODWORD(v20->exception_cleanup)-- == 1 )
          return sub_15D7BC0(v18, v17);
      }
    }
  }
  return result;
}

