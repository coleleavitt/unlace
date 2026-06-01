__int64 __fastcall sub_16A89A0(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4, int *a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // r9
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rsi
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // al
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rcx
  bool v35; // zf
  unsigned int v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  int v39; // [rsp+14h] [rbp-44h]
  __int64 v40; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v5 + 47) & 0x20) == 0 && (*(_BYTE *)(v5 + 96) & 0x10) == 0 )
    return 0;
  v7 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 42 )
  {
    v38 = a3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
      return 0;
    v23 = sub_F63050(v8, a2, a3, a4);
    a3 = v38;
    v8 = v23;
    if ( !v23 )
      return 0;
  }
  v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)v9;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 42 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) != 42 )
      return 0;
    v10 = sub_F63050(v10, a2, v24, a4);
    if ( !v10 )
      return 0;
  }
  v11 = *(_QWORD *)(v10 + 32);
  v12 = *(_QWORD *)(v8 + 32);
  LODWORD(v13) = 0;
  v14 = *(_QWORD **)(a1 + 248);
  v15 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v15 & 8) != 0 )
    v13 = *(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL));
  LODWORD(v16) = 0;
  v17 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v17 & 8) != 0 )
    v16 = *(__int64 *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL));
  v18 = (unsigned int)v16 >> 9;
  v19 = ((unsigned int)v13 | ((unsigned __int8)v11 | (unsigned __int8)v15) & 7) >> 9;
  v20 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
  if ( v18 != (_DWORD)v19 )
  {
    v40 = *(_QWORD *)(a1 + 248);
    v39 = v18;
    v37 = v19;
    v21 = sub_F56A30(v19, v18, v40);
    v19 = v37;
    if ( !v21 && !sub_F56A30(v39, v37, v40) )
    {
      *a4 = 3281;
      return 3;
    }
    v17 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
    v14 = *(_QWORD **)(a1 + 248);
    v20 = v17 & 7;
  }
  v25 = sub_A72780(v14, v20 | v12 & 7 | v17 & 0xFFFFFFFFFFFFFFF8LL, v20, v19, (__int64)a5);
  v29 = sub_A72780(
          *(_QWORD **)(a1 + 248),
          *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v11) & 7,
          v26,
          v27,
          v28);
  if ( (*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v25) & 7) != (*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v29) & 7) )
    return 0;
  v30 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v30 & 8) != 0 )
  {
    LODWORD(v34) = 0;
    v31 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
    v33 = (*(_DWORD *)((char *)&qword_18 + (v30 & 0xFFFFFFFFFFFFFFF0LL))
         | ((unsigned __int8)v12 | (unsigned __int8)v30) & 7u) >> 9;
    if ( (v31 & 8) == 0 )
    {
LABEL_27:
      v35 = (unsigned int)v34 >> 9 == v33;
      v32 = 5;
      if ( !v35 )
        v32 = 63;
      goto LABEL_24;
    }
LABEL_26:
    v34 = *(__int64 *)((char *)&qword_18 + (v31 & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_27;
  }
  v31 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
  v32 = 5;
  if ( (v31 & 8) != 0 )
  {
    v33 = 0;
    goto LABEL_26;
  }
LABEL_24:
  *a5 = v32;
  return 1;
}
