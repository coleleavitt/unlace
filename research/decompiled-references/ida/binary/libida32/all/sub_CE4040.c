__int64 __fastcall sub_CE4040(__int64 a1, char a2, _QWORD *a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  int v7; // eax
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // rbp
  unsigned __int8 v10; // dl
  __int64 v11; // rsi
  unsigned __int8 **v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 **v25; // rbx
  __int64 v26; // rsi
  _BOOL8 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // [rsp+0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+Ch] [rbp-34h] BYREF
  char v39; // [rsp+14h] [rbp-2Ch]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = a1 + 384;
  v5 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a3;
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 560), 48);
  if ( !a2 || (*(_BYTE *)(sub_E0E500(v4) + 1) & 8) == 0 )
  {
    v37 = sub_DFB160(*(_QWORD *)(a1 + 784), v5);
    v12 = (unsigned __int8 **)sub_E0FFE0(v4, &v37, 2417, 0);
    v9 = v12;
    if ( v12 )
    {
      sub_AC60B0(v12, 2, 2u);
      v13 = sub_E0E500(v4);
      v10 = 3;
      v11 = (*(_BYTE *)(v13 + 1) & 8) != 0;
      goto LABEL_15;
    }
    sub_E0E500(v4);
LABEL_18:
    sub_DFC9E0(*(_QWORD *)(a1 + 784), v5);
    return 1;
  }
  v7 = *(_DWORD *)(v6 + 24);
  if ( !v7 || v7 == 2 )
  {
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_10;
LABEL_20:
    if ( !sub_DFE0A0(v4, "allocate", 8) )
    {
      v15 = v5;
      v16 = sub_DFB220(*(_QWORD *)(a1 + 784));
      if ( (*(_BYTE *)(sub_E0E500(v4) + 2) & 2) == 0
        || (v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 104LL))(
                              *(_QWORD *)(a1 + 408),
                              v5),
            v21 = sub_F44710(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5, v18, v19, v20),
            v22 = sub_CDA510(v6, v15),
            !(unsigned __int8)sub_A9C330(v17, v22, v21, v23, v24)) )
      {
        v25 = (unsigned __int8 **)sub_E0FF50(v4, v16, 2421, 0);
        v26 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 8LL);
        if ( v25 )
        {
          sub_AC60B0(v25, v26, 8u);
          v27 = (*(_BYTE *)(sub_E0E500(v4) + 2) & 2) != 0;
          sub_AC60B0(v25, v27, 3u);
          v28 = sub_CDA510(v6, v27);
          v29 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v28) & 7;
          sub_AC60B0(v25, v29, 8u);
          v33 = sub_F44710(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), v29, v30, v31, v32);
          sub_AC60B0(v25, v33, 8u);
        }
        else
        {
          sub_E0E500(v4);
          sub_CDA510(v6, v26);
          sub_F44710(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), v26, v34, v35, v36);
        }
      }
    }
    return 1;
  }
  if ( v7 == 3 || *(_QWORD *)(v6 + 40) || *(_QWORD *)v6 )
    goto LABEL_20;
LABEL_10:
  if ( (*(_BYTE *)(sub_E0E500(v4) + 2) & 2) == 0 )
  {
    v37 = sub_DFB160(*(_QWORD *)(a1 + 784), v5);
    v8 = (unsigned __int8 **)sub_E0FFE0(v4, &v37, 2417, 0);
    v9 = v8;
    if ( v8 )
    {
      sub_AC60B0(v8, 3, 2u);
      v10 = 1;
      v11 = (__int64)"'void *'";
LABEL_15:
      sub_AC60B0(v9, v11, v10);
      v14 = sub_DFC9E0(*(_QWORD *)(a1 + 784), v5);
      v39 = 1;
      v38 = v14;
      sub_AC88D0((__int64 *)v9, &v38);
      return 1;
    }
    goto LABEL_18;
  }
  return 1;
}

