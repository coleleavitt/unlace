__int64 __fastcall sub_183B590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // r14
  __int64 *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // al
  unsigned int v24; // ebx
  _QWORD *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // [rsp+0h] [rbp-48h]
  unsigned int v35; // [rsp+Ch] [rbp-3Ch]

  result = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(result + 13) & 0x20) == 0 )
    return result;
  v9 = *(_QWORD *)(a3 + 48);
  v10 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = v9;
  v12 = *v10;
  v13 = (unsigned int)*(unsigned __int8 *)(*v10 + 16) - 43;
  if ( (unsigned int)v13 <= 1 || (v12 = sub_1838000(v12, a2, v13, a4)) != 0 )
  {
    v14 = sub_9B4870(v12, a2, v13, a4, a5);
    v17 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(_QWORD *)v17;
    v19 = v14;
    v20 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v17 + 16LL) - 43;
    if ( (unsigned int)v20 > 1 )
      v18 = sub_F63050(v18, a2, v20, v15);
    v21 = sub_9B4870(v18, a2, v20, v15, v16);
    v10 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *v10;
    v11 = v21;
    v23 = *(_BYTE *)(*v10 + 16);
    goto LABEL_6;
  }
  v22 = *v10;
  v23 = *(_BYTE *)(*v10 + 16);
  if ( v23 == 42 )
    goto LABEL_13;
  v13 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 42 )
  {
    v22 = sub_F63050(*v10, a2, v13, v22);
    if ( v22 )
    {
LABEL_13:
      v28 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v29 = *(_QWORD *)(v22 + 32);
      v30 = *(_QWORD *)v28;
      if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) == 42 )
      {
LABEL_14:
        v11 = *(_QWORD *)(v30 + 32);
        v10 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_15;
      }
LABEL_30:
      v30 = sub_F63050(v30, a2, v13, v22);
      goto LABEL_14;
    }
    v22 = *v10;
    v23 = *(_BYTE *)(*v10 + 16);
  }
  if ( v23 == 33 )
  {
LABEL_29:
    v33 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v29 = *(_QWORD *)(v22 + 32);
    v30 = *(_QWORD *)v33;
    if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) == 33 )
      goto LABEL_14;
    goto LABEL_30;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 33 )
  {
LABEL_6:
    if ( v23 != 26 )
      goto LABEL_16;
    goto LABEL_7;
  }
  v22 = sub_F63050(v22, a2, v13, v22);
  if ( v22 )
    goto LABEL_29;
LABEL_15:
  v22 = *v10;
  if ( *(_BYTE *)(*v10 + 16) != 26 )
  {
LABEL_16:
    result = *(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) != 26 )
      return result;
    result = sub_F63050(v22, a2, v13, v22);
    if ( !result )
      return result;
    v22 = *v10;
    v24 = *(_DWORD *)(a2 + 24);
    if ( *(_BYTE *)(v22 + 16) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
        v22 = sub_F63050(v22, a2, v31, v22);
      else
        v22 = 0;
    }
    goto LABEL_8;
  }
LABEL_7:
  v24 = *(_DWORD *)(a2 + 24);
LABEL_8:
  v25 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v26 = *(unsigned int *)(a3 + 24);
  v27 = *v25;
  if ( *(_BYTE *)(*v25 + 16LL) == 26 )
    goto LABEL_9;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
  {
    v27 = 0;
LABEL_9:
    result = sub_18B1360(a1, v27, v26, v22, v24);
    if ( !(_BYTE)result )
      return result;
    return sub_B88650(a2, 1);
  }
  v35 = *(_DWORD *)(a3 + 24);
  v34 = v22;
  v32 = sub_F63050(*v25, v27, v26, v22);
  result = sub_18B1360(a1, v32, v35, v34, v24);
  if ( (_BYTE)result )
    return sub_B88650(a2, 1);
  return result;
}
