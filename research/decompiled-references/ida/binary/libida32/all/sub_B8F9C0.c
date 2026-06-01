void __fastcall sub_B8F9C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  _QWORD *v7; // rcx
  _QWORD *v8; // [rsp+8h] [rbp-40h] BYREF
  void *v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_971800(*a1, "using ");
  sub_B4EFB0(a2, v2);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    sub_B8E960((const char **)a1, a2, 0, v3, v4, v5);
  v6 = sub_971800(*a1, " = ");
  v7 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = (_QWORD *)*v7;
  sub_F54860(v9, &v8, a1 + 1);
  sub_22581D0(v6, v9[0], v9[1]);
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
}

