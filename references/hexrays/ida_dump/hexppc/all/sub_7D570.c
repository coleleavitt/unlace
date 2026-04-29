unsigned __int64 __fastcall sub_7D570(__int64 a1, __int64 *a2)
{
  __int64 *v3; // r15
  __int64 *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v12[0] = __readfsqword(0x28u);
  sub_7BF00(a2, *(_QWORD *)(a1 + 8));
  sub_7BF00(a2, *(_QWORD *)(a1 + 16));
  sub_7BF00(a2, *(_QWORD *)(a1 + 24));
  sub_7C310(a2, (_BYTE *)(a1 + 32));
  sub_7BEA0(a2, *(_DWORD *)(a1 + 48));
  v3 = *(__int64 **)(a1 + 40);
  v4 = &v3[2 * *(_QWORD *)(a1 + 48)];
  while ( v4 != v3 )
  {
    v5 = *v3;
    v6 = -*v3;
    if ( *v3 > 0 )
      v6 = *v3;
    v3 += 2;
    *(_QWORD *)&v7 = v5;
    *((_QWORD *)&v7 + 1) = v6;
    sub_7BF00(a2, v7 >> 63);
    v8 = pack_dd(&v11, v12, *((unsigned __int8 *)v3 - 8));
    sub_7BD20(a2, (__int64)&v11, v8 - (_QWORD)&v11);
    v9 = pack_dd(&v11, v12, *((unsigned int *)v3 - 1));
    sub_7BD20(a2, (__int64)&v11, v9 - (_QWORD)&v11);
  }
  return sub_7BEA0(a2, *(_DWORD *)(a1 + 64));
}
