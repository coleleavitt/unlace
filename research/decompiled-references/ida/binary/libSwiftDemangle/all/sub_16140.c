unsigned __int64 __fastcall sub_16140(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r14
  __int16 v5; // cx
  unsigned int v6; // edx
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+8h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
    goto LABEL_19;
  v2 = *(_QWORD *)(a1 + 88);
  v3 = (unsigned int)(v1 - 1);
  v4 = *(_QWORD *)(v2 + 8 * v3);
  v5 = *(_WORD *)(v4 + 16);
  if ( v5 == 165 )
  {
    *(_DWORD *)(a1 + 96) = v3;
    if ( v1 == 1 )
    {
LABEL_19:
      sub_15540(a1, 0);
      sub_132E0(a1);
      return 0;
    }
    v6 = v1 - 2;
    v7 = *(_QWORD *)(v2 + 8LL * v6);
    LODWORD(v3) = v6;
    v5 = *(_WORD *)(v7 + 16);
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 8 * v3);
    v4 = 0;
  }
  if ( v5 != 221 )
    goto LABEL_19;
  *(_DWORD *)(a1 + 96) = v3;
  v8 = sub_15540(a1, v7);
  v9 = sub_132E0(a1);
  if ( !v7 )
    return 0;
  v10 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v10;
  if ( !v10 || (v11 = v10 + 24, v10 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v18 = v9;
    v14 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v14 < 0x20 )
      v14 = 32;
    *(_QWORD *)(a1 + 32) = v14;
    v15 = v14 + 8;
    v16 = malloc(v14 + 8);
    v17 = *(_QWORD *)(a1 + 24);
    v9 = v18;
    *(_QWORD *)(a1 + 24) = v16;
    *v16 = v17;
    v10 = ((unsigned __int64)v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v16 + v15;
    v11 = v10 + 24;
  }
  *(_QWORD *)(a1 + 8) = v11;
  *(_WORD *)(v10 + 16) = 209;
  *(_BYTE *)(v10 + 18) = 0;
  if ( v10 && v9 )
  {
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(v10 + 8) = 0;
    *(_BYTE *)(v10 + 18) = 3;
    if ( v8 )
      sub_C080(v10, v8, (_QWORD *)a1);
    sub_C080(v10, v7, (_QWORD *)a1);
    if ( v4 )
      sub_C080(v10, v4, (_QWORD *)a1);
  }
  else
  {
    v10 = 0;
  }
  v12 = sub_13F20((_QWORD *)a1, v10, v7);
  return sub_11680((_QWORD *)a1, v12);
}

