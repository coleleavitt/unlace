__int64 __fastcall sub_62F900(_QWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v7; // r12
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]

  result = sub_64AF30(a1[1]);
  if ( (_BYTE)result )
  {
    v7 = *a1;
    v18 = 0;
    v8 = *(_DWORD *)(v7 + 712);
    v19 = v7;
    *(_DWORD *)(v7 + 712) = 1;
    sub_62E310((__int64)a1, a2, &v18, a3, a4, a5);
    v9 = v18;
    v10 = v19;
    result = sub_15DE060(*a1, v18, v11, v12, v13);
    v14 = *a1;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v15 = *(_QWORD *)(a2 + 48);
    if ( v15 )
    {
      v16 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v16 )
      {
        v17 = result;
        sub_15D7BC0(v14, v15);
        result = v17;
      }
    }
    *(_QWORD *)(a2 + 48) = result;
    if ( v9 )
    {
      v16 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( v16 )
        result = sub_15D7BC0(v10, v9);
    }
    *(_DWORD *)(v7 + 712) = v8;
  }
  return result;
}

