unsigned __int64 __fastcall sub_A7B0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v14; // r8d
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v21 = __readfsqword(0x28u);
  v6 = xmmword_20548 - a2;
  if ( v4 < v6 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) < v6 )
    {
      v19 = qvector_reserve(a1 + 16, v16, v6, 2);
      v4 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v19;
      v16 = v19;
    }
    memset((void *)(v16 + 2 * v4), 0, 2 * (v6 - v4));
    *(_QWORD *)(a1 + 24) = v6;
  }
  else if ( v6 != v4 )
  {
    *(_QWORD *)(a1 + 24) = v6;
  }
  memcpy(*(void **)(a1 + 16), (const void *)(qword_20540 + 2 * v3), 2 * v6);
  *(_BYTE *)a1 = 1;
  v7 = qalloc_or_throw(32);
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(v7 + 24) = &qword_21890;
  v8 = *(unsigned __int64 **)(a1 + 8);
  v9 = *v8;
  v10 = v8[2];
  v11 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - **(_QWORD **)(a3 + 192)) >> 4);
  v12 = v8[1];
  v13 = v12 + 1;
  v20 = v11;
  v14 = v11;
  if ( (unsigned __int64)&v20 >= v9 && (unsigned __int64)&v20 < v9 + 4 * v10 )
  {
    if ( v10 < v13 )
    {
      v18 = qvector_reserve(v8, v9, v12 + 1, 4);
      *v8 = v18;
      v9 = v18;
      v12 = v8[1];
    }
    *(_DWORD *)(v9 + 4 * v12) = v11;
  }
  else
  {
    if ( v10 < v13 )
    {
      v17 = qvector_reserve(v8, v9, v12 + 1, 4);
      v14 = v20;
      *v8 = v17;
      v9 = v17;
      v12 = v8[1];
    }
    *(_DWORD *)(v9 + 4 * v12) = v14;
  }
  ++v8[1];
  return v21 - __readfsqword(0x28u);
}
