/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92470
// Address: 0x0000000000092470

//----- (0000000000092470) ----------------------------------------------------
unsigned __int64 __fastcall sub_92470(__int64 a1, __int64 a2, unsigned int a3, const char *a4, const char *a5)
{
  __int64 v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  void *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rax
  const char *v15; // rbx
  size_t v16; // rax
  void *v17; // rax
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h]
  unsigned __int64 v21; // [rsp+18h] [rbp-50h]
  _BYTE v22[5]; // [rsp+26h] [rbp-42h] BYREF
  char v23[5]; // [rsp+2Bh] [rbp-3Dh] BYREF
  _QWORD v24[7]; // [rsp+30h] [rbp-38h] BYREF

  v24[0] = __readfsqword(0x28u);
  if ( a3 == 1 )
  {
    v8 = a1 - 192;
    if ( !a1 )
      v8 = 0;
    a4 = (const char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 440) + 408LL))(*(_QWORD *)(v8 + 440));
  }
  sub_AB1F0((__int64)&ptr, 56);
  v9 = pack_dq(v22, (unsigned __int64)v24, a2 + 1);
  sub_56350((__int64)&ptr, v22, v9 - v22);
  v10 = pack_dd(v22, (unsigned __int64)v23, a3);
  sub_56350((__int64)&ptr, v22, v10 - v22);
  v11 = ptr;
  v12 = v20;
  v13 = v20 + 1;
  if ( a4 == a5 )
  {
    if ( v21 < v13 )
    {
      v11 = qvector_reserve((__int64)&ptr, (char *)ptr, v13, 1u);
      ptr = v11;
      v12 = v20;
    }
    *((_BYTE *)v11 + v12) = 1;
    ++v20;
    v15 = &byte_EB522;
    if ( a5 )
      v15 = a5;
    v16 = strlen(v15);
    sub_56350((__int64)&ptr, v15, v16 + 1);
  }
  else
  {
    if ( v21 < v13 )
    {
      v11 = qvector_reserve((__int64)&ptr, (char *)ptr, v13, 1u);
      ptr = v11;
      v12 = v20;
    }
    *((_BYTE *)v11 + v12) = 0;
    ++v20;
    v14 = pack_dq(v22, (unsigned __int64)v24, (__int64)(a4 + 1));
    sub_56350((__int64)&ptr, v22, v14 - v22);
  }
  v17 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, 56, &ptr);
  qfree(v17);
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
    ptr = nullptr;
    v21 = 0;
  }
  return __readfsqword(0x28u);
}
