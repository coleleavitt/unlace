/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B630
// Address: 0x000000010006B630

//----- (000000010006B630) ----------------------------------------------------
__int64 __fastcall sub_10006B630(__int64 a1, void **a2, void *a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  size_t v6; // r12
  void *v7; // r13
  unsigned int v8; // r15d
  void *v9; // rsi
  unsigned int v10; // r14d
  unsigned int v12; // [rsp+Ch] [rbp-54h]
  size_t v13; // [rsp+10h] [rbp-50h] BYREF
  void *v14; // [rsp+18h] [rbp-48h] BYREF
  void *__src; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  __src = a3;
  v16 = a4;
  v12 = unpack_dd((unsigned __int64 *)&__src, a4);
  v5 = unpack_dd((unsigned __int64 *)&__src, v16);
  v6 = v5;
  if ( v5 )
  {
    v7 = qalloc(v5);
    if ( !v7 )
      return 2;
  }
  else
  {
    v7 = nullptr;
  }
  v9 = __src;
  v8 = 1;
  if ( (char *)__src + v6 >= __src && (unsigned __int64)__src + v6 <= v16 )
  {
    __src = (char *)__src + v6;
    memcpy(v7, v9, v6);
    if ( v7 )
    {
      v14 = nullptr;
      v13 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, size_t *))(a1 + 40))(
              a1,
              v12,
              v7,
              v6,
              &v14,
              &v13);
      qfree(v7);
      sub_100032FE0(a2, v10);
      sub_10005ACB0(a2, v14, v13);
      qfree(v14);
      return 0;
    }
  }
  return v8;
}
