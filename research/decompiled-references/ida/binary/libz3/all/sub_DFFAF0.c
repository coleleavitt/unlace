void __fastcall sub_DFFAF0(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, int, int, int, int, __int64); // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v24; // [rsp+18h] [rbp-48h] BYREF
  __int64 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+28h] [rbp-38h]

  sub_DFBCB0(a1);
  v12 = a1[37];
  v25 = 0;
  v13 = *(_QWORD *)(v12 + 928);
  if ( !v13 )
    v13 = v12;
  v26 = v13;
  v14 = *(void (__fastcall **)(__int64, int, int, int, int, __int64))(*a1 + 72LL);
  if ( v14 == sub_DFF760 )
  {
    v24 = 0;
    v15 = (unsigned int)sub_DFF530((__int64)a1);
    sub_160BF10(a3, v15, (unsigned int)&v24, a5, a6, (unsigned int)&v25, a7);
    sub_18572D0(&v24);
  }
  else
  {
    v14((__int64)a1, a3, a5, a6, (int)&v25, a7);
  }
  if ( a4 )
  {
    sub_DFBCB0(a1);
    v16 = sub_1638090(a1[37]);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v18 = v25;
    if ( v25 )
    {
      v19 = v26;
      v20 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v20 )
        sub_15D7BC0(v19, v18);
    }
    v25 = v17;
  }
  v24 = 0;
  sub_DFBCB0(a1);
  sub_16245D0(a2, v25, a1[37], &v24);
  sub_18572D0(&v24);
  v21 = v25;
  if ( v25 )
  {
    v22 = v26;
    v20 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v20 )
      sub_15D7BC0(v22, v21);
  }
}

