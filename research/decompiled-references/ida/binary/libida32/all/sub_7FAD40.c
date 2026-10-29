__int64 __fastcall sub_7FAD40(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rsi
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  __int64 *v15; // r13
  _BYTE *v16; // rbp
  size_t v17; // r14
  size_t v18; // rdi
  size_t v19; // rbx
  const void *v20; // rsi
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  _BYTE v24[9]; // [rsp+Eh] [rbp-3Ah] BYREF
  char v25; // [rsp+17h] [rbp-31h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 1328);
  v6 = *(__int64 **)(a1 + 728);
  v26 = __readfsqword(0x28u);
  v8 = *(_BYTE *)(v5 + 4LL * a3 + 1);
  v9 = v6[1];
  if ( v9 == v6[2] )
  {
    v23 = sub_7F8CB0(a1, (__int64)v6);
    v6 = v23;
    if ( !v23 )
      return 12;
    *(_QWORD *)(a1 + 728) = v23;
    v9 = v23[1];
  }
  v10 = *v6;
  v6[1] = v9 + 1;
  *(_BYTE *)(v10 + v9) = a3;
  if ( !v8 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = 10;
    do
    {
      --v13;
      v14 = v12 | 0x80;
      v12 >>= 7;
      v24[v13] = v14;
    }
    while ( v12 );
    v15 = *(__int64 **)(a1 + 728);
    v25 &= ~0x80u;
    v16 = &v24[v13];
    v17 = 10 - v13;
    v18 = v15[1];
    do
    {
      v21 = v15[2];
      if ( v21 == v18 )
      {
        v22 = sub_7F8CB0(a1, (__int64)v15);
        v15 = v22;
        if ( !v22 )
          return 12;
        *(_QWORD *)(a1 + 728) = v22;
        v21 = v22[2];
        v18 = v22[1];
      }
      v19 = v21 - v18;
      v20 = v16;
      if ( v19 > v17 )
        v19 = v17;
      v16 += v19;
      memcpy((void *)(*v15 + v18), v20, v19);
      v18 = v19 + v15[1];
      v15[1] = v18;
      v17 -= v19;
    }
    while ( v17 );
  }
  return 0;
}

