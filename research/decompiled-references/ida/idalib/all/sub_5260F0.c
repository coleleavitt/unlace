unsigned __int64 __fastcall sub_5260F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r14
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbp
  __int64 i; // r13
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-B0h]
  _BYTE v22[88]; // [rsp+20h] [rbp-98h] BYREF
  int v23[2]; // [rsp+78h] [rbp-40h]

  *(_QWORD *)v23 = __readfsqword(0x28u);
  sub_7BEFF0(&ptr, a2, "$ scriptsnippets", 0, 0);
  if ( ptr != (void *)-1LL )
  {
    sub_42D210((__int64)v22, *(_QWORD **)(a2 + 1672));
    v5 = *(_QWORD *)(a2 + 1784);
    if ( !*(_DWORD *)(v5 + 64) )
      *(_DWORD *)(v5 + 64) = sub_524CE0(*(__int64 **)(a2 + 1784));
    ptr = nullptr;
    v21 = 0;
    sub_7BF130(v5 + 8, a2, &ptr);
    v8 = a3[1];
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v8 + 1) )
    {
      v19 = qvector_reserve(a3, v9, v8 + 1, 24);
      *a3 = v19;
      v8 = a3[1];
      v9 = v19;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_42D250((__int64)v22, *(_QWORD *)(v5 + 8), nullptr, 1, v6, v7);
    sub_35A790((char **)v10);
    v13 = *(_QWORD *)(v5 + 16);
    for ( i = v13 + 72LL * *(_QWORD *)(v5 + 24); i != v13; v13 += 72 )
    {
      v16 = a3[1];
      v17 = *a3;
      if ( a3[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(a3, v17, v16 + 1, 24);
        *a3 = v18;
        v16 = a3[1];
        v17 = v18;
      }
      v15 = v17 + 24 * v16;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++a3[1];
      sub_42D250((__int64)v22, *(_QWORD *)(v13 + 56), nullptr, 1, v11, v12);
      sub_35A790((char **)v15);
    }
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
  }
  return *(_QWORD *)v23 - __readfsqword(0x28u);
}
