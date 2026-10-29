unsigned __int64 __fastcall sub_13F2240(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, const void *a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax
  int v13; // [rsp+0h] [rbp-38h]
  const void *v14; // [rsp+8h] [rbp-30h]

  v8 = 8 * a6 + 40;
  v9 = a1[16];
  a1[26] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[17] >= v8 + v10 && v9 )
  {
    a1[16] = v8 + v10;
  }
  else
  {
    v14 = a5;
    v13 = a6;
    v12 = sub_986170((__int64)(a1 + 16), 8 * a6 + 40, 8 * a6 + 40, 3, (__int64)a5, a6);
    a5 = v14;
    LODWORD(a6) = v13;
    v10 = v12;
  }
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = a3;
  *(_QWORD *)(v10 + 16) = a4;
  *(_QWORD *)(v10 + 24) = a2;
  *(_DWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 36) = a6;
  if ( v8 != 40 )
    memmove((void *)(v10 + 40), a5, v8 - 40);
  return v10;
}
