// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_1A464F(__int64 a1, __int64 a2, int a3, __int64 a4, void *a5, __int64 (__fastcall *a6)(void *))
{
  __int64 *v6; // rbp
  void *v7; // r13
  signed __int64 v8; // rax
  _QWORD *v9; // rsi
  int v10; // ebx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  void *savedregs; // [rsp+60h] [rbp+0h]

  v6 = &v14;
  v7 = savedregs;
  v8 = 4294967274LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = (_QWORD *)(a2 - 16);
      v9[1] = a4;
      *v9 = a1;
      v8 = sys_clone(a3, (unsigned __int64)v9, a5, v7);
      if ( !v8 )
      {
        v6 = nullptr;
        v8 = sys_exit(a6(a5));
      }
    }
  }
  *(v6 - 5) = v8;
  if ( (unsigned __int64)*(v6 - 5) > 0xFFFFFFFFFFFFF000LL )
  {
    v10 = -*((_DWORD *)v6 - 10);
    *__errno_location() = v10;
    *(v6 - 5) = -1;
  }
  return *(v6 - 5);
}

