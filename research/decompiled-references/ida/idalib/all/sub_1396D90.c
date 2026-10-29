__int64 __fastcall sub_1396D90(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  void *v10; // r12
  bool v11; // zf
  __int64 v12; // rdx
  _QWORD *v13; // r12
  void *v14; // [rsp+0h] [rbp-30h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2408LL);
  if ( !result )
  {
    v3 = (_DWORD *)operator new(0x18u);
    sub_FD3570((__int64)v3);
    ++*v3;
    v4 = sub_227D6D0(v3, a2);
    v5 = *(_QWORD *)(a1 + 32);
    v6 = v4;
    v7 = operator new(0x50u);
    sub_13B38A0(v7, v6, v5, 0);
    v8 = *(_QWORD *)(a1 + 32);
    v14 = v3;
    ++*v3;
    v9 = operator new(0x3B90u);
    sub_FCA6E0(v9, (__int64 *)&v14, v8, v7, 1);
    v10 = v14;
    if ( v14 )
    {
      v11 = (*(_DWORD *)v14)-- == 1;
      if ( v11 )
      {
        sub_FD5580((__int64)v10);
        operator delete(v10, 0x18u);
      }
    }
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_QWORD **)(v12 + 2408);
    *(_QWORD *)(v12 + 2408) = v9;
    if ( v13 )
    {
      sub_FCAA60(v13);
      operator delete(v13, 0x3B90u);
    }
    v11 = (*v3)-- == 1;
    if ( v11 )
    {
      sub_FD5580((__int64)v3);
      operator delete(v3, 0x18u);
    }
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2408LL);
  }
  return result;
}
