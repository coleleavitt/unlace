__int64 __fastcall Z3_mk_rec_func_decl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // r14d
  int v7; // r13d
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // r12
  char v12; // [rsp+Fh] [rbp-51h]
  __int64 v13; // [rsp+18h] [rbp-48h] BYREF
  char v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]

  v6 = a4;
  v7 = a3;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v12 = v8;
  if ( v8 )
    sub_295B60(a1, a2, a3, a4);
  v13 = a2;
  v9 = *(_QWORD *)(a1 + 584);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_16302C0((unsigned int)&v14, v9, (unsigned int)&v13, v7, v6, a5, 0);
  v10 = *(_QWORD *)(v15 + 72);
  sub_251FD0(a1, v10);
  if ( v12 )
  {
    sub_2BB620(v10);
    byte_1C7EBA0 = 1;
  }
  return v10;
}

