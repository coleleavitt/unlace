void __fastcall sub_15219D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // ax
  int v6; // r12d
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int8 *v12[13]; // [rsp+10h] [rbp-68h] BYREF

  sub_14634E0((__int64 *)a2, (int *)a4);
  v5 = *(_WORD *)(a4 + 16);
  if ( v5 == 2 )
  {
    sub_FC70B0((__int64)v12, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1868);
    sub_1520A40(v12, (__int64)"clang max_tokens_total");
    sub_1520C80(v12, 1);
    sub_1520A40(v12, (__int64)"integer");
    sub_AEA040((__int64)v12);
  }
  else
  {
    v6 = *(_DWORD *)a4;
    if ( v5 != 7 )
    {
LABEL_3:
      v7 = *(_QWORD *)(a2 + 48);
      v8 = 1858;
      v9 = v6;
LABEL_4:
      sub_FC70B0((__int64)v12, v7, v9, v8);
      sub_1520A40(v12, (__int64)"clang max_tokens_total");
      sub_AEA040((__int64)v12);
      return;
    }
    if ( !(unsigned __int8)sub_1463E50(a2, (int *)a4, &v11) )
    {
      v6 = *(_DWORD *)a4;
      goto LABEL_3;
    }
    if ( *(_WORD *)(a4 + 16) != 2 )
    {
      v9 = *(_DWORD *)a4;
      v7 = *(_QWORD *)(a2 + 48);
      v8 = 2202;
      goto LABEL_4;
    }
    v10 = v11;
    *(_DWORD *)(a2 + 1028) = v6;
    *(_DWORD *)(a2 + 1024) = v10;
  }
}
