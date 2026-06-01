void __fastcall sub_F2D830(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r13
  char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  void *v9[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF

  v2 = sub_995540(*(_QWORD *)(a1 + 1096), " functional cast to ");
  v8 = **(_QWORD **)(a2 + 24);
  sub_F78400(v9, &v8);
  v3 = sub_227BF10(v2, v9[0], v9[1]);
  v4 = sub_995540(v3, " <");
  v5 = sub_BF9F50((*(_WORD *)(a2 + 2) >> 3) & 0x7F);
  v6 = sub_995540(v4, v5);
  sub_995540(v6, ">");
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  if ( (*(_QWORD *)a2 & 0x8000000LL) != 0 )
  {
    v7 = (unsigned __int64 *)sub_BFA6D0(a2);
    sub_F2B230(a1, *v7);
  }
}
