__int64 __fastcall sub_E0F6F0(__int64 a1, __int64 a2, __int64 *a3)
{
  void (__fastcall ***v4)(void *); // r12
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  void (__fastcall ***v8)(void *); // rax
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  void (__fastcall **v14)(void *); // [rsp+8h] [rbp-30h]

  v4 = sub_DFF530(a1 - 104);
  v5 = (__int64 (__fastcall *)(__int64, __int64))(*v4)[17];
  if ( v5 != sub_E0F590 )
  {
    result = v5((__int64)v4, a2);
    v10 = result;
    goto LABEL_10;
  }
  v6 = (__int64)v4[7];
  v7 = *(_QWORD *)(v6 + 312);
  if ( !v7 )
  {
    v14 = v4[7];
    sub_DFBCB0(v6);
    v6 = (__int64)v14;
    v7 = (__int64)v14[39];
  }
  v8 = sub_DFF530(v6);
  result = sub_DE2610(v7, (__int64)v8, a2);
  v10 = result;
  if ( !result )
  {
    result = sub_160A100(v4, a2);
    v10 = result;
LABEL_10:
    if ( !v10 )
      goto LABEL_6;
  }
  ++*(_DWORD *)(v10 + 8);
LABEL_6:
  v11 = *a3;
  if ( *a3 && (v12 = a3[1], v13 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), v13) )
  {
    result = sub_15D7BC0(v12, v11);
    *a3 = v10;
  }
  else
  {
    *a3 = v10;
  }
  return result;
}

