__int64 __fastcall sub_F69E10(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  char v9; // al
  unsigned __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx

  v7 = a3;
  v8 = a2;
  v9 = *(_BYTE *)(a3 + 8) & 0x7F;
  if ( v9 == 18 )
  {
    if ( a3 == 48 )
      goto LABEL_16;
    v7 = *(_QWORD *)(a3 - 32) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 - 32) & 4) != 0 )
      v7 = *(_QWORD *)v7;
    v9 = *(_BYTE *)(v7 + 8) & 0x7F;
  }
  if ( v9 != 20 )
  {
    if ( v9 == 23 && v7 != 48 )
    {
      if ( *(_QWORD *)(v7 + 48) )
      {
        v10 = *(_QWORD *)(v7 + 40);
        if ( v10 )
        {
          v11 = *(unsigned __int8 *)(a2 + 16);
          if ( (_BYTE)v11 == 34 )
            goto LABEL_10;
          goto LABEL_20;
        }
      }
    }
LABEL_16:
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v10 = v7 - 48;
  if ( v7 == 48 || !sub_BAE550((__int64 *)(v7 - 48), a2, a3, a4, a5, a6) )
    goto LABEL_16;
  v11 = *(unsigned __int8 *)(a2 + 16);
  if ( (_BYTE)v11 == 34 )
  {
LABEL_10:
    v8 = sub_A5E7C0(v8, a2, a3, a4, a5);
    goto LABEL_11;
  }
LABEL_20:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v14 = sub_F62E70(a2);
    if ( v14 )
    {
      v8 = v14;
      goto LABEL_10;
    }
    v11 = *(unsigned __int8 *)(a2 + 16);
  }
  if ( (_BYTE)v11 == 11 )
    goto LABEL_24;
  v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) == 11 )
  {
    if ( sub_F62E70(a2) )
    {
LABEL_24:
      v15 = sub_B8C1B0(v7);
      v16 = sub_B8C330(v15);
      a2 = *(_QWORD *)(v16 + 19136);
      v8 = *(_QWORD *)(sub_A75AD0(v16, a2, nullptr, 0) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
        v8 = sub_F62E70(v8);
LABEL_11:
      if ( !v8 )
        goto LABEL_12;
      goto LABEL_30;
    }
    v11 = *(unsigned __int8 *)(a2 + 16);
  }
  if ( (unsigned int)(v11 - 35) > 1 )
  {
    v8 = sub_F635D0(a2);
    goto LABEL_11;
  }
LABEL_30:
  v17 = sub_9C7D40(v8, a2, v12, a4, a5);
  if ( !v17 )
    goto LABEL_12;
LABEL_33:
  if ( v10 != v17 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(v8 + 32);
      if ( (v21 & 8) == 0 )
      {
        sub_F69C40(v8, a2, v18, v19, v20);
        v21 = *(_QWORD *)(v8 + 32);
      }
      v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !v22 )
        goto LABEL_12;
      v8 = *(_QWORD *)v22;
      v23 = *(_QWORD *)v22;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v22 + 16LL) - 35 <= 1 )
      {
        v17 = sub_9C7D40(v23, a2, v18, v19, v20);
        goto LABEL_33;
      }
      v8 = sub_F62E70(v23);
      if ( v10 == sub_9C7D40(v8, a2, v24, v25, v26) )
      {
        if ( !v8 )
          goto LABEL_12;
        break;
      }
    }
  }
  if ( !(unsigned __int8)sub_F65FA0(v8) )
  {
LABEL_12:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
  v27 = sub_F672B0(v8);
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)a1 = v27;
  *(_QWORD *)(a1 + 8) = v28;
  return a1;
}
