__int64 __fastcall sub_DC6290(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rbp
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 **v17; // r12
  __int64 v18; // rsi
  _BOOL8 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int8 **v26; // rax
  unsigned __int8 **v27; // rbp
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int8 **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // [rsp+8h] [rbp-40h] BYREF
  __int64 v38; // [rsp+14h] [rbp-34h] BYREF
  char v39; // [rsp+1Ch] [rbp-2Ch]

  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !a3 || (v6 = v5, (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0) )
  {
    v37 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v26 = (unsigned __int8 **)sub_E33D20(a1, &v37, 2417, 0);
    v27 = v26;
    if ( v26 )
    {
      sub_AE9DF0(v26, 2, 2u);
      v28 = sub_E32240(a1);
      v29 = 3;
      v30 = (*(_BYTE *)(v28 + 1) & 8) != 0;
LABEL_15:
      sub_AE9DF0(v27, v30, v29);
      v31 = sub_E20720(*(_QWORD *)(a1 + 400), a2);
      v39 = 1;
      v38 = v31;
      sub_AEC610((__int64 *)v27, &v38);
      return 1;
    }
    sub_E32240(a1);
LABEL_18:
    sub_E20720(*(_QWORD *)(a1 + 400), a2);
    return 1;
  }
  v7 = *(_DWORD *)(v6 + 24);
  if ( !v7 || v7 == 2 )
  {
    if ( *(_QWORD *)(v6 + 32) )
      goto LABEL_8;
LABEL_20:
    if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 2) != 0 )
      return 1;
    v37 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v33 = (unsigned __int8 **)sub_E33D20(a1, &v37, 2417, 0);
    v27 = v33;
    if ( v33 )
    {
      sub_AE9DF0(v33, 3, 2u);
      v29 = 1;
      v30 = (__int64)"'void *'";
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( v7 != 3 && !*(_QWORD *)(v6 + 40) && !*(_QWORD *)v6 )
    goto LABEL_20;
LABEL_8:
  if ( !sub_E21DE0(a1, "allocate", 8) )
  {
    v8 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 2) == 0
      || (v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 104LL))(
                           *(_QWORD *)(a1 + 24),
                           a2),
          v13 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11, v12),
          v14 = sub_CFE250(v6, a2),
          !(unsigned __int8)sub_AC0070(v9, v14, v13, v15, v16)) )
    {
      v17 = (unsigned __int8 **)sub_E33C90(a1, v8, 2421, 0);
      v18 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8LL);
      if ( v17 )
      {
        sub_AE9DF0(v17, v18, 8u);
        v19 = (*(_BYTE *)(sub_E32240(a1) + 2) & 2) != 0;
        sub_AE9DF0(v17, v19, 3u);
        v20 = sub_CFE250(v6, v19);
        v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v20) & 7;
        sub_AE9DF0(v17, v21, 8u);
        v25 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), v21, v22, v23, v24);
        sub_AE9DF0(v17, v25, 8u);
      }
      else
      {
        sub_E32240(a1);
        sub_CFE250(v6, v18);
        sub_F68450(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), v18, v34, v35, v36);
      }
    }
  }
  return 1;
}
