__int64 __fastcall sub_689B40(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r12
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n; // [rsp+8h] [rbp-70h]
  _QWORD v14[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int16 v18; // [rsp+40h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 144);
  if ( !v3 )
    return sub_690460(a3);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v17 = *(_QWORD *)(a1 + 144);
    v15[0] = "-Wno-";
    v16 = v5;
    v18 = 1283;
    sub_25F1F70(&src, v15);
    v6 = sub_6905C0(src, n);
    v7 = src;
    *a2 = v6;
    a2[1] = v8;
    if ( v7 != v14 )
      operator delete(v7, v14[0] + 1LL);
    v3 = *(_QWORD *)(a1 + 144);
  }
  v9 = *(_QWORD *)(a1 + 136);
  v15[0] = "-W";
  v16 = v9;
  v17 = v3;
  v18 = 1283;
  sub_25F1F70(&src, v15);
  v10 = sub_6905C0(src, n);
  if ( src != v14 )
    operator delete(src, v14[0] + 1LL);
  return v10;
}

