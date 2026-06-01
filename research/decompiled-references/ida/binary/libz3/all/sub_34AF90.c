__int64 __fastcall sub_34AF90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+8h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 320);
  if ( v6 )
  {
    sub_1374250(&v14, v6, a3);
    result = sub_135F9B0(v6, *(_QWORD *)(a2 + 16), v14);
    v8 = v14;
    if ( v14 )
    {
      v9 = v15;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        result = sub_15D7BC0(v9, v8);
    }
  }
  v11 = *(_QWORD *)(a1 + 136);
  if ( v11 )
  {
    sub_1374250(&v14, v11, a3);
    result = sub_135F9B0(v11, *(_QWORD *)(a2 + 16), v14);
    v12 = v14;
    if ( v14 )
    {
      v13 = v15;
      v10 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v10 )
        return sub_15D7BC0(v13, v12);
    }
  }
  return result;
}

