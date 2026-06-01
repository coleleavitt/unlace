__int64 __fastcall sub_F09830(__int64 a1, __int64 a2)
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

  v3 = sub_971800(*(_QWORD *)(a1 + 1096), " ");
  v4 = sub_C70A70((_WORD *)a2);
  v5 = sub_971800(v3, v4);
  v6 = sub_971800(v5, "<");
  v13 = **(_QWORD **)(a2 + 24);
  sub_F546C0(v14, &v13);
  v7 = sub_22581D0(v6, v14[0], v14[1]);
  v8 = sub_971800(v7, ">");
  v9 = sub_971800(v8, " <");
  v10 = sub_BD6210((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
  sub_971800(v9, v10);
  if ( v14[0] != &v15 )
    operator delete(v14[0]);
  v11 = *(_QWORD *)(a1 + 1096);
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_F02F90(v11, a2);
    v11 = *(_QWORD *)(a1 + 1096);
  }
  return sub_971800(v11, ">");
}

