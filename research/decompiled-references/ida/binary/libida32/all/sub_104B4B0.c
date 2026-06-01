__int64 __fastcall sub_104B4B0(__int64 a1, void *a2, size_t a3)
{
  size_t v5; // rsi
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // rax
  size_t v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+0h] [rbp-128h] BYREF
  __int16 v24; // [rsp+20h] [rbp-108h]
  _QWORD v25[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v26; // [rsp+50h] [rbp-D8h]
  _QWORD v27[4]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+80h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v30; // [rsp+B0h] [rbp-78h]
  void *v31; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+E4h] [rbp-44h]

  v5 = a3;
  v6 = a1 + 216;
  v7 = sub_227C0C0(a2, a3);
  if ( v7 || (v20 = sub_2293740(v6), v5 = v21, (v7 = sub_2278D80(v20, v21)) != 0) )
  {
    v8 = sub_227BE40(v7);
    v10 = v9;
    v11 = v8;
    v30 = 261;
    v29[0] = sub_2293970(v6);
    v29[1] = v12;
    v28 = 261;
    v27[0] = sub_2293860(v6, v5);
    v27[1] = v13;
    v14 = sub_22937A0(v6);
    v23[1] = v10;
    v26 = 261;
    v25[1] = v15;
    v24 = 261;
    v25[0] = v14;
    v23[0] = v11;
    ((void (__fastcall *)(void **, _QWORD *, _QWORD *, _QWORD *, _QWORD *))sub_2298210)(&v31, v23, v25, v27, v29);
    v16 = sub_227BE80(v7);
    v18 = sub_2278ED0(v16, v17);
    if ( v33 > 0x22 || (v22 = 0x7FE080000LL, LODWORD(v6) = 0, !_bittest64(&v22, v33)) )
      LOBYTE(v6) = v18 == 3;
    if ( v31 != &v32 )
    {
      operator delete(v31);
      return (unsigned int)v6;
    }
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}

