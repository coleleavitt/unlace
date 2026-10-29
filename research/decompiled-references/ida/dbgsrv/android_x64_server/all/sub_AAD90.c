/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AAD90
// Address: 0x00000000000AAD90

//----- (00000000000AAD90) ----------------------------------------------------
__int64 __fastcall sub_AAD90(__int64 a1, unsigned int a2, const void *a3, size_t a4, _QWORD *a5, size_t *a6)
{
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned int v13; // eax
  size_t v14; // r13
  void *v15; // r14
  void *v16; // rsi
  unsigned int v17; // ebp
  void *ptr[3]; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+40h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  sub_AB1F0((__int64)ptr, 39);
  v8 = pack_dd(&src, (unsigned __int64)&src + 5, a2);
  sub_56350((__int64)ptr, &src, v8 - (_BYTE *)&src);
  if ( HIDWORD(a4) )
  {
    if ( !(_BYTE)under_debugger )
      interr(5);
    BUG();
  }
  v9 = pack_dd(&src, (unsigned __int64)&src + 5, a4);
  sub_56350((__int64)ptr, &src, v9 - (_BYTE *)&src);
  sub_56350((__int64)ptr, a3, a4);
  v10 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, 39, ptr);
  if ( !v10 )
  {
    v17 = -1;
    goto LABEL_13;
  }
  v11 = *v10;
  src = (char *)v10 + 5;
  v23 = (unsigned __int64)v10 + v11 + 5;
  v12 = unpack_dd((unsigned __int64 *)&src, v23);
  v13 = unpack_dd((unsigned __int64 *)&src, v23);
  v14 = v13;
  if ( a5 )
  {
    if ( v13 )
    {
      v15 = qalloc(v13);
      *a5 = v15;
      if ( v15 )
      {
        v16 = src;
        v17 = -1;
        if ( (char *)src + v14 < src || (unsigned __int64)src + v14 > v23 )
          goto LABEL_13;
        src = (char *)src + v14;
        memcpy(v15, v16, v14);
      }
    }
  }
  if ( a6 )
    *a6 = v14;
  qfree(v10);
  v17 = v12;
LABEL_13:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v17;
}
// AAEE6: conditional instruction was optimized away because r14.8!=0
// 158B40: using guessed type __int64 under_debugger;
