__int64 __fastcall sub_1FBEC00(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax

  v8 = a2 + 8;
  if ( !a2 )
    v8 = nullptr;
  sub_1FB71F0(a1, v8, a3, a4, a5, a6);
  sub_1FBE940(a1, (__int64)a2);
  v13 = a1 + 1;
  v14 = (__int64 *)(a2[10] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[10] & 4) != 0 )
    v14 = (__int64 *)*v14;
  sub_1F9A760(v13, v14, v9, v10, v11, v12);
  sub_9B9C90(a1[3], ((__int64)a2[10] >> 2) & 1);
  v19 = a2[10];
  if ( (v19 & 4) != 0 )
    sub_1F85840(a1[2], a1[1], *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 8), (_QWORD *)a1[3], v17, v18);
  v20 = sub_B7A5B0(a2, 0, v15, v16, v17);
  return sub_1F92A90(a1[2], v20, a1[3]);
}
