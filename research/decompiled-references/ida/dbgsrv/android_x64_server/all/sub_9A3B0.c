/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A3B0
// Address: 0x000000000009A3B0

//----- (000000000009A3B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_9A3B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 v3; // rbx
  const char *v4; // r14
  _BYTE *v5; // rax
  size_t v6; // rax
  size_t v7; // rbp
  const void *v8; // rbx
  _BYTE *v9; // rax
  int v10; // eax
  void *ptr; // [rsp+18h] [rbp-60h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  _BYTE v15[5]; // [rsp+36h] [rbp-42h] BYREF
  _BYTE v16[5]; // [rsp+3Bh] [rbp-3Dh] BYREF
  unsigned __int64 v17[7]; // [rsp+40h] [rbp-38h] BYREF

  v17[0] = __readfsqword(0x28u);
  if ( 56LL * *(_QWORD *)(a2 + 8) )
  {
    v2 = *(__int64 **)a2;
    while ( 1 )
    {
      v3 = *v2;
      v4 = s1;
      if ( v2[2] )
        v4 = (const char *)v2[1];
      sub_AB1F0((__int64)&ptr, 57);
      v5 = pack_dq(v15, (unsigned __int64)v17, v3 + 1);
      sub_56350((__int64)&ptr, v15, v5 - v15);
      if ( !v4 )
        v4 = &byte_EB522;
      v6 = strlen(v4);
      sub_56350((__int64)&ptr, v4, v6 + 1);
      v7 = v2[5];
      if ( HIDWORD(v7) )
      {
        if ( !(_BYTE)under_debugger )
          interr(5);
        BUG();
      }
      v8 = (const void *)v2[4];
      v9 = pack_dd(v15, (unsigned __int64)v16, v7);
      sub_56350((__int64)&ptr, v15, v9 - v15);
      sub_56350((__int64)&ptr, v8, v7);
      v10 = sub_A50B0(a1 + 192, (__int64)&ptr, -1, 0);
      if ( v10 < 0 )
        break;
      if ( v10 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 440) + 568LL))(*(_QWORD *)(a1 + 440), v2);
      if ( ptr )
      {
        v13 = 0;
        qfree(ptr);
        ptr = nullptr;
        v14 = 0;
      }
      v2 += 7;
      if ( v2 == (__int64 *)(*(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8)) )
        return __readfsqword(0x28u);
    }
    if ( ptr )
    {
      v13 = 0;
      qfree(ptr);
      ptr = nullptr;
      v14 = 0;
    }
  }
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
