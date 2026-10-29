__int64 __fastcall sub_17BA6C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // ecx
  bool v12; // al
  unsigned int v13; // ecx
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  size_t v24; // rax
  size_t v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // [rsp+0h] [rbp-128h]
  __int64 v28; // [rsp+0h] [rbp-128h]
  __int64 v29; // [rsp+8h] [rbp-120h] BYREF
  bool v30; // [rsp+1Eh] [rbp-10Ah] BYREF
  unsigned __int8 v31; // [rsp+1Fh] [rbp-109h] BYREF
  void *v32[2]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v33[16]; // [rsp+30h] [rbp-F8h] BYREF
  void *v34[2]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v35[16]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v36[200]; // [rsp+60h] [rbp-C8h] BYREF

  v29 = a2;
  if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
  {
    v5 = sub_B72C70(a3);
    if ( v5 == sub_B72C70(v29) )
    {
      v6 = v29;
      v7 = *(_QWORD *)(v29 + 8) & 7LL;
      if ( *(char *)(v29 + 29) >= 0 )
        goto LABEL_4;
      goto LABEL_38;
    }
    v18 = *(_QWORD *)(a3 + 8) & 7LL;
    if ( *(char *)(a3 + 29) < 0 )
    {
      if ( v18 )
      {
        v19 = sub_B8C660(a3);
        v20 = v29;
        goto LABEL_35;
      }
    }
    else if ( v18 )
    {
      v19 = *(_QWORD *)(a3 - 8);
      v20 = v29;
LABEL_35:
      *(_QWORD *)(v29 - 8) = v19;
      sub_1A39AF0(a1, v20);
      return 0;
    }
    v20 = v29;
    v19 = 0;
    goto LABEL_35;
  }
  v6 = a2;
  v7 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( *(char *)(a2 + 29) >= 0 )
  {
LABEL_4:
    if ( v7 )
      v8 = *(_QWORD *)(v6 - 8);
    else
      v8 = 0;
LABEL_6:
    v9 = *(_QWORD *)(a3 + 8) & 7LL;
    if ( *(char *)(a3 + 29) >= 0 )
      goto LABEL_7;
LABEL_40:
    if ( v9 )
    {
      v10 = sub_B8C660(a3);
      if ( v8 )
        goto LABEL_9;
      goto LABEL_42;
    }
LABEL_58:
    if ( !v8 )
      return 0;
    if ( *(_DWORD *)(v8 + 36) != 7 )
      goto LABEL_60;
    v8 = *(_QWORD *)(v8 + 40);
    goto LABEL_65;
  }
LABEL_38:
  v8 = 0;
  if ( !v7 )
    goto LABEL_6;
  v8 = sub_B8C660(v6);
  v9 = *(_QWORD *)(a3 + 8) & 7LL;
  if ( *(char *)(a3 + 29) < 0 )
    goto LABEL_40;
LABEL_7:
  if ( !v9 )
    goto LABEL_58;
  v10 = *(_QWORD *)(a3 - 8);
  if ( v8 )
  {
LABEL_9:
    if ( *(_DWORD *)(v8 + 36) != 7 )
    {
      if ( v10 )
        goto LABEL_11;
LABEL_60:
      v23 = *(_DWORD *)(v8 + 36);
      if ( v23 > 7 )
        return 0;
      v12 = ((1LL << v23) & 0xBC) != 0;
      v30 = v12;
LABEL_62:
      v31 = 0;
      v10 = 0;
      if ( v12 )
        goto LABEL_23;
      return 0;
    }
    v8 = *(_QWORD *)(v8 + 40);
    if ( v10 )
    {
LABEL_11:
      if ( *(_DWORD *)(v10 + 36) != 7 )
        goto LABEL_12;
      goto LABEL_57;
    }
LABEL_65:
    if ( !v8 )
      return 0;
    goto LABEL_60;
  }
LABEL_42:
  if ( !v10 )
    return 0;
  if ( *(_DWORD *)(v10 + 36) != 7 )
  {
    v30 = 0;
LABEL_45:
    v21 = *(_DWORD *)(v10 + 36);
    if ( v21 > 7 )
      return 0;
    v8 = 0;
    if ( ((1LL << v21) & 0xBC) == 0 )
      return 0;
    goto LABEL_47;
  }
LABEL_57:
  v10 = *(_QWORD *)(v10 + 40);
LABEL_12:
  if ( v10 == v8 )
    return 0;
  if ( !v8 || !v10 )
  {
    if ( !v8 )
    {
      v30 = 0;
      if ( !v10 )
        return 0;
      goto LABEL_45;
    }
    v26 = *(_DWORD *)(v8 + 36);
    if ( v26 > 7 )
      goto LABEL_48;
    v12 = ((1LL << v26) & 0xBC) != 0;
    v30 = v12;
    if ( v10 )
      goto LABEL_20;
    goto LABEL_62;
  }
  v11 = *(_DWORD *)(v8 + 36);
  if ( v11 == 3 )
  {
    if ( a1[1366] == v10 )
      return 0;
  }
  else if ( v11 - 4 <= 1 )
  {
    goto LABEL_54;
  }
  if ( (unsigned int)(*(_DWORD *)(v10 + 36) - 4) <= 1 )
  {
LABEL_54:
    if ( sub_A956B0(a1[31], v8, v10) )
      return 0;
    v11 = *(_DWORD *)(v8 + 36);
    if ( v11 <= 7 )
      goto LABEL_19;
    goto LABEL_48;
  }
  if ( v11 > 7 )
  {
LABEL_48:
    v30 = 0;
    if ( !v10 )
      return 0;
    v22 = *(_DWORD *)(v10 + 36);
    if ( v22 > 7 || ((1LL << v22) & 0xBC) == 0 )
      return 0;
LABEL_47:
    v31 = 1;
    goto LABEL_23;
  }
LABEL_19:
  v12 = ((1LL << v11) & 0xBC) != 0;
  v30 = v12;
LABEL_20:
  v13 = *(_DWORD *)(v10 + 36);
  if ( v13 <= 7 && ((1LL << v13) & 0xBC) != 0 )
    goto LABEL_47;
  v31 = 0;
  if ( !v12 )
    return 0;
LABEL_23:
  v14 = a1 + 1;
  sub_168B9F0((__int64)v36, v14, *(_DWORD *)(v29 + 24), 0x1052u, 0);
  v15 = sub_17BA610((__int64)v36, &v29);
  v27 = sub_15890D0(v15, (unsigned __int8 *)&v30);
  if ( v30 )
  {
    sub_FEEE60((__int64)v32, (__int64 *)v8, 0);
  }
  else
  {
    v32[0] = v33;
    v25 = j__strlen(&byte_22F0C30);
    sub_179C260(v32, &byte_22F0C30, (__int64)(&byte_22F0C30 + v25));
  }
  v16 = sub_1682AF0(v27, (__int64)v32);
  v28 = sub_15890D0(v16, &v31);
  if ( v31 )
  {
    sub_FEEE60((__int64)v34, (__int64 *)v10, 0);
  }
  else
  {
    v34[0] = v35;
    v24 = j__strlen(&byte_22F0C30);
    sub_179C260(v34, &byte_22F0C30, (__int64)(&byte_22F0C30 + v24));
  }
  sub_1682AF0(v28, (__int64)v34);
  if ( v34[0] != v35 )
    operator delete(v34[0]);
  if ( v32[0] != v33 )
    operator delete(v32[0]);
  sub_15F7200(v36);
  sub_168B9F0((__int64)v36, v14, *(_DWORD *)(a3 + 24), 0x70u, 0);
  sub_15F7200(v36);
  sub_B88650(v29, 1);
  return 1;
}
