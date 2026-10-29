void __fastcall sub_13FB900(__int64 a1, __int64 a2)
{
  void *v2; // r12
  __int64 v4; // rbp
  void *v5; // rdi
  int v6; // r13d
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (void *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 80, v7);
  sub_13FB7C0((__int64 *)a1, v4);
  v5 = *(void **)a1;
  v6 = v7[0];
  if ( v5 != v2 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v6;
}
