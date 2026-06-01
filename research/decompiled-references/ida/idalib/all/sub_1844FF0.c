bool __fastcall sub_1844FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v6 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(v6 + 8) & 7LL;
  v8 = v7 | (*(__int64 *)(v6 + 8) >> 3) & 1;
  if ( v8 )
    v6 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v7, v8, a5);
  v9 = sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, a5, a6);
  sub_7052B0((__int64 *)(v9[13] + 96LL), v9[13], v10, v11, v12, v13);
  return (*(_BYTE *)(v9[16] + 2LL) & 7) != 0;
}
