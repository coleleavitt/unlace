__int64 __fastcall sub_F2D570(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  void *v14[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF

  v3 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v4 = sub_C947B0((_WORD *)a2);
  v5 = sub_995540(v3, v4);
  v6 = sub_995540(v5, "<");
  v13 = **(_QWORD **)(a2 + 24);
  sub_F78400(v14, &v13);
  v7 = sub_227BF10(v6, v14[0], v14[1]);
  v8 = sub_995540(v7, ">");
  v9 = sub_995540(v8, " <");
  v10 = sub_BF9F50((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
  sub_995540(v9, v10);
  if ( v14[0] != &v15 )
    operator delete(v14[0]);
  v11 = *(_QWORD *)(a1 + 1096);
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_F26CD0(v11, a2);
    v11 = *(_QWORD *)(a1 + 1096);
  }
  return sub_995540(v11, ">");
}
