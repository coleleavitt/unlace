/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AAFC0
// Address: 0x00000000000AAFC0

//----- (00000000000AAFC0) ----------------------------------------------------
__int64 __fastcall sub_AAFC0(__int64 a1, __int64 a2, void *a3, unsigned __int64 a4)
{
  unsigned int v5; // r15d
  unsigned int v6; // eax
  size_t v7; // rbp
  void *v8; // r13
  unsigned int v9; // ebx
  void *v10; // rsi
  unsigned int v11; // ebp
  _BYTE *v12; // rax
  size_t v13; // rbp
  void *v14; // r12
  _BYTE *v15; // rax
  size_t v17; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  void *src; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+20h] [rbp-48h]
  _BYTE v21[5]; // [rsp+2Bh] [rbp-3Dh] BYREF
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF

  v22[0] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  src = a3;
  v20 = a4;
  v5 = unpack_dd((unsigned __int64 *)&src, a4);
  v6 = unpack_dd((unsigned __int64 *)&src, v20);
  v7 = v6;
  if ( v6 )
  {
    v8 = qalloc(v6);
    if ( !v8 )
      return 2;
  }
  else
  {
    v8 = nullptr;
  }
  v10 = src;
  v9 = 1;
  if ( (char *)src + v7 >= src && (unsigned __int64)src + v7 <= v20 )
  {
    src = (char *)src + v7;
    memcpy(v8, v10, v7);
    if ( v8 )
    {
      ptr = nullptr;
      v17 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, size_t *))(a1 + 40))(
              a1,
              v5,
              v8,
              v7,
              &ptr,
              &v17);
      qfree(v8);
      v12 = pack_dd(v21, (unsigned __int64)v22, v11);
      sub_56350(a2, v21, v12 - v21);
      v13 = v17;
      if ( HIDWORD(v17) )
      {
        if ( !(_BYTE)under_debugger )
          interr(5);
        BUG();
      }
      v14 = ptr;
      v15 = pack_dd(v21, (unsigned __int64)v22, v17);
      sub_56350(a2, v21, v15 - v21);
      sub_56350(a2, v14, v13);
      qfree(ptr);
      return 0;
    }
  }
  return v9;
}
// 158B40: using guessed type __int64 under_debugger;
