void __fastcall sub_18F7970(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, __m128i a5, double a6)
{
  unsigned __int64 v8; // r12
  int v9; // ebp
  int v10; // eax
  __int64 *v11; // rsi
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 v22[3]; // [rsp+0h] [rbp-148h] BYREF
  void *v23; // [rsp+18h] [rbp-130h]
  __int64 v24; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-108h] BYREF
  char v26; // [rsp+48h] [rbp-100h]
  void *v27; // [rsp+58h] [rbp-F0h]
  __int64 v28; // [rsp+68h] [rbp-E0h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-B8h]
  __int64 v31[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v32; // [rsp+F8h] [rbp-50h]
  unsigned int v33; // [rsp+100h] [rbp-48h]
  char v34; // [rsp+104h] [rbp-44h]

  v8 = HIDWORD(a4);
  v9 = a4;
  v10 = sub_15F0EF0(a1, SHIDWORD(a4), 0, a5, a6);
  v11 = (__int64 *)(a1 + 8);
  if ( v9 >= 0 && (v8 & 0x80000000) == 0LL && (v12 = v10) != 0 )
  {
    sub_168CDE0((__int64)v29, v11, a2, a3, 0);
    sub_9EC740((__int64)v22, v9, "(", 1, 0);
    v21 = sub_1589170((__int64)v29, v22);
    sub_9EC740((__int64)&v25, v12, ")", 1, 0);
    sub_1589170(v21, &v25);
    if ( v27 != &v28 )
      operator delete(v27);
    if ( v23 != &v24 )
      operator delete(v23);
  }
  else
  {
    sub_168CDE0((__int64)v29, v11, a2, a3, 0);
    if ( v32 )
    {
      v25 = __PAIR64__(v8, v9);
      v26 = 1;
      sub_AEC610(v31, (__int64 *)&v25);
    }
    else if ( v34 )
    {
      v17 = sub_168B9E0(v29);
      v18 = v30;
      if ( v30 )
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v22[0] = v18;
      v19 = sub_1587BC0(v17, v22, v13, v14, v15, v16);
      v20 = *v19 + 32LL * v33;
      v25 = __PAIR64__(v8, v9);
      v26 = 1;
      sub_AEC610((__int64 *)(v20 + 8), (__int64 *)&v25);
    }
  }
  sub_15F7200(v29);
}
