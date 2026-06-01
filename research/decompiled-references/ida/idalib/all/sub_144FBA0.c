void __fastcall sub_144FBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  __int16 v8; // ax
  char v9; // r15
  const char *v10; // rcx
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rsi
  void *v14; // rdi
  int v15; // ecx
  __int64 v16; // rdi
  void *v17; // [rsp+0h] [rbp-A8h] BYREF
  signed __int64 v18; // [rsp+8h] [rbp-A0h]
  _BYTE v19[16]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v20[17]; // [rsp+20h] [rbp-88h] BYREF

  v7 = *(_DWORD *)a4;
  sub_14634E0(a2, a4);
  v8 = *(_WORD *)(a4 + 16);
  if ( v8 == 14 )
  {
    v9 = 0;
  }
  else
  {
    if ( v8 != 22 )
    {
      sub_FC70B0((__int64)v20, *(_QWORD *)(a2 + 48), v7, 1182);
      sub_AE9DF0(v20, *(int *)(a1 + 40), 2u);
      sub_AEA040((__int64)v20);
      return;
    }
    v9 = 1;
    sub_14634E0(a2, a4);
  }
  v19[0] = 0;
  v10 = "pragma warning";
  v18 = 0;
  v17 = v19;
  v11 = *(_DWORD *)(a1 + 40);
  if ( v11 != 1 )
  {
    v10 = "pragma message";
    if ( v11 )
      v10 = "pragma error";
  }
  if ( !(unsigned __int8)sub_1464000(a2, a4, &v17, v10, 1) )
    goto LABEL_12;
  v12 = *(_WORD *)(a4 + 16);
  if ( v9 )
  {
    if ( v12 != 23 )
    {
      v13 = *(_QWORD *)(a2 + 48);
LABEL_11:
      sub_FC70B0((__int64)v20, v13, *(_DWORD *)a4, 1182);
      sub_AE9DF0(v20, *(int *)(a1 + 40), 2u);
      sub_AEA040((__int64)v20);
      goto LABEL_12;
    }
    sub_14634E0(a2, a4);
    v12 = *(_WORD *)(a4 + 16);
  }
  v13 = *(_QWORD *)(a2 + 48);
  if ( v12 != 2 )
    goto LABEL_11;
  v15 = 1181;
  if ( *(_DWORD *)(a1 + 40) != 2 )
    v15 = 1408;
  sub_FC70B0((__int64)v20, v13, v7, v15);
  sub_AEC220(v20, v17, v18);
  sub_AEA040((__int64)v20);
  v16 = *(_QWORD *)(a2 + 1192);
  if ( !v16 )
  {
LABEL_12:
    v14 = v17;
    if ( v17 == v19 )
      return;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, void *, signed __int64))(*(_QWORD *)v16
                                                                                                  + 152LL))(
    v16,
    v7,
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 56),
    *(unsigned int *)(a1 + 40),
    *(_QWORD *)(*(_QWORD *)v16 + 152LL),
    v17,
    v18);
  v14 = v17;
  if ( v17 == v19 )
    return;
LABEL_13:
  operator delete(v14);
}
