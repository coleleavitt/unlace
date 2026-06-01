__int64 __fastcall sub_E031C0(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(void *); // rbx
  __int64 (__fastcall *v3)(); // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  void (__fastcall ***v6)(void *); // rax
  __int64 result; // rax
  void (__fastcall **v8)(void *); // [rsp+8h] [rbp-20h]

  v2 = sub_DFF530(a1);
  v3 = (__int64 (__fastcall *)())(*v2)[17];
  if ( v3 != sub_E0F590 )
    return ((__int64 (__fastcall *)(void (__fastcall ***)(void *), __int64))v3)(v2, a2);
  v4 = (__int64)v2[7];
  v5 = *(_QWORD *)(v4 + 312);
  if ( !v5 )
  {
    v8 = v2[7];
    sub_DFBCB0(v4);
    v4 = (__int64)v8;
    v5 = (__int64)v8[39];
  }
  v6 = sub_DFF530(v4);
  result = sub_DE2610(v5, (__int64)v6, a2);
  if ( !result )
    return sub_160A100(v2, a2);
  return result;
}

