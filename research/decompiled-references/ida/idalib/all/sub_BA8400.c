unsigned __int64 __fastcall sub_BA8400(__int64 a1, _QWORD *a2, __int64 a3, _BYTE *a4, bool *a5, __int64 a6)
{
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r15
  bool v15; // al
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx

  v8 = a2;
  *a4 = 0;
  *a5 = 0;
  if ( (*(_BYTE *)(a1 + 58) & 2) != 0 )
  {
    a2 = (_QWORD *)a3;
    if ( a3 )
    {
      a2 = (_QWORD *)sub_A82070((__int64)v8, a3, 0, (__int64)a4, (__int64)a5, a6);
      v11 = sub_A74EC0((__int64)v8, (__int64)a2);
      goto LABEL_4;
    }
    v23 = sub_A8A250(v8);
    v24 = *(_QWORD *)(v23 + 48);
    if ( v24 )
      goto LABEL_15;
  }
  else
  {
    v23 = sub_A8A180(a2);
    v24 = *(_QWORD *)(v23 + 48);
    if ( v24 )
    {
LABEL_15:
      v11 = v24 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  a2 = (_QWORD *)v23;
  v11 = sub_A7AA70((__int64)v8, v23, v9, v10, v12, v13);
LABEL_4:
  if ( (*(_BYTE *)(v8[290] + 107LL) & 4) == 0 )
    return v11;
  v14 = v11 & 7;
  if ( (*(_BYTE *)(a1 + 58) & 2) == 0 )
  {
    *a4 = 1;
    return v14 | 1 | v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_7;
  v25 = sub_B8C3D0(a1, (__int64)a2, v9, v10, v12, v13);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( v26 < v27 )
  {
    v28 = v26;
    while ( 1 )
    {
      v26 = v28;
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 263 )
        break;
      v28 += 8LL;
      if ( v27 == v28 )
        goto LABEL_7;
    }
LABEL_28:
    v15 = v26 != v27;
    goto LABEL_8;
  }
  if ( v26 != v27 )
  {
    while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 263 )
    {
      v27 += 8LL;
      if ( v26 == v27 )
        goto LABEL_7;
    }
    goto LABEL_28;
  }
LABEL_7:
  v15 = 0;
LABEL_8:
  v16 = v11 & 7;
  *a5 = v15;
  LOBYTE(v16) = v14 | 0x80;
  v17 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v11 & 8) != 0 )
  {
    v16 |= *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
    v17 = (_QWORD *)*v17;
  }
  v11 = sub_A70C40((__int64)v8, (__int64)v17, v16);
  if ( (unsigned int)sub_BA8080(a1, (__int64)v17, v18, v19, v20, v21) != 3 && !*a5 )
  {
    *a4 = 1;
    return v11 & 7 | 1 | v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return v11;
}
