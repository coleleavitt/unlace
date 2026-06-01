void __fastcall sub_BE26B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi

  v7 = sub_186B270(0x68u);
  sub_13463D0(v7, *(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 72));
  *(_QWORD *)(a1 + 176) = v7;
  sub_A6F1C0(a2, v7);
  *(_BYTE *)(a1 + 248) = sub_BDF940(a1);
  sub_BE2160(a1);
  sub_BE0DB0(a1);
  sub_BE1FD0(a1);
  v12 = *(__int64 **)(a1 + 104);
  if ( v12 )
    sub_B56ED0(v12, v7, v8, v9, v10, v11, a7);
}

