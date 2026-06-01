unsigned __int64 __fastcall sub_1E5F880(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // rbp
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  unsigned __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  _BYTE v20[72]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a3 + 16);
  v19 = 0x100000000LL;
  ptr = v20;
  sub_F5D760(&v17, v8, 0);
  v9 = (unsigned int)v19;
  v10 = v17;
  v11 = (unsigned int)v19 + 1LL;
  if ( v11 > HIDWORD(v19) )
  {
    v16 = v17;
    sub_2237220(&ptr, v20, v11, 8);
    v9 = (unsigned int)v19;
    v10 = v16;
  }
  *((_QWORD *)ptr + v9) = v10;
  v12 = *(_QWORD *)(a1 + 248);
  LODWORD(v19) = v19 + 1;
  v13 = sub_A76700(v12, a2, a3, a4, a5, v12, (__int64)ptr, (unsigned int)v19);
  if ( ptr != v20 )
    free(ptr);
  return v13;
}
