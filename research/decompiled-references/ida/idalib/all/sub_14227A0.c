void __fastcall sub_14227A0(__int64 a1, int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  char v4; // [rsp+Fh] [rbp-99h] BYREF
  int v5[4]; // [rsp+10h] [rbp-98h] BYREF
  __int16 v6; // [rsp+20h] [rbp-88h]
  char v7; // [rsp+22h] [rbp-86h]
  void *v8[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-68h] BYREF

  sub_FC70B0((__int64)v8, *(_QWORD *)(a1 + 48), *a2, 1241);
  sub_AEA040((__int64)v8);
  sub_14634E0(a1, v5);
  if ( (unsigned __int16)(v6 - 14) > 1u )
  {
    sub_FC70B0((__int64)v8, *(_QWORD *)(a1 + 48), v5[0], 1154);
    sub_AEA040((__int64)v8);
    if ( v6 == 2 )
      return;
LABEL_10:
    sub_141A820(a1, (unsigned int *)v8);
    return;
  }
  if ( (v7 & 0x20) != 0 )
  {
    sub_FC70B0((__int64)v8, *(_QWORD *)(a1 + 48), v5[0], 29);
    sub_AEA040((__int64)v8);
    goto LABEL_10;
  }
  sub_1421C50(a1, (__int64)"ident", 0);
  if ( *(_QWORD *)(a1 + 1192) )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v3 = *(_QWORD *)(a1 + 88);
    v4 = 0;
    sub_13D35F0((__int64)v8, (__int64)v5, v3, v2, &v4);
    if ( !v4 )
      (*(void (__fastcall **)(_QWORD, _QWORD, void *, void *))(**(_QWORD **)(a1 + 1192) + 104LL))(
        *(_QWORD *)(a1 + 1192),
        (unsigned int)*a2,
        v8[0],
        v8[1]);
    if ( v8[0] != &v9 )
      operator delete(v8[0]);
  }
}
