unsigned __int64 __fastcall sub_1C16330(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbp
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax

  v9 = *(_QWORD *)(a3 + 40);
  if ( ((v9 >> 1) & 3) != 0 )
  {
    if ( ((*(__int64 *)(a3 + 40) >> 1) & 3) != 1 )
    {
      v23 = sub_A82070(a1[31], v9 & 0xFFFFFFFFFFFFFFF8LL, 0, a4, a5, a6);
      v15 = a1[92];
      v18 = 0;
      v17 = v23;
      goto LABEL_12;
    }
    v21 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *v21;
    if ( *(_BYTE *)(*v21 + 16) == 34 )
      goto LABEL_16;
    v24 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 34 )
    {
      v22 = sub_F63050(*v21, v21, v24, a4);
      if ( v22 )
      {
LABEL_16:
        v15 = a1[92];
        v17 = *(_QWORD *)(v22 + 32);
        v18 = 1;
        goto LABEL_12;
      }
      v21 = (__int64 *)(*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v15 = a1[92];
    v18 = 0;
    v17 = (__int64)v21;
    goto LABEL_12;
  }
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = (__int64 *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) != 34 )
    v12 = sub_F63050(*v11, v10, a3, a4);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 35;
  if ( (unsigned int)v14 > 1 )
    v13 = sub_F63050(v13, v10, v14, a4);
  v15 = a1[92];
  if ( !(*(_BYTE *)(v13 + 19) >> 2) )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EA )
    {
      if ( (unsigned __int8)sub_19D0110(v15, *(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v25 = sub_B8E070(a1[68]);
        v26 = a1[92];
        v27 = a1[31];
        v28 = sub_BA85D0(v25);
        v32 = sub_A82070(v27, v28, 0, v29, v30, v31);
        v18 = 0;
        v19 = a2;
        v15 = v26;
        v17 = v32;
        return sub_19D01C0(v15, v19, v17, v18, a5, a6);
      }
      v15 = a1[92];
    }
  }
  v17 = *(_QWORD *)(v12 + 32);
  v18 = 1;
LABEL_12:
  v19 = a2;
  return sub_19D01C0(v15, v19, v17, v18, a5, a6);
}
