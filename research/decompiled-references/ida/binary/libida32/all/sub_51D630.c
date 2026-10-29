__int64 __fastcall sub_51D630(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, unsigned __int8 a6, _QWORD *a7)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rbp
  int v15; // r11d
  unsigned int v16; // r9d
  char v17; // r11
  char v18; // r8
  __int64 v19; // rbx
  char v20; // r8
  unsigned __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rsi
  int v24; // ebp
  int v25; // r15d
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // r13
  const char *v33; // rsi
  __int64 v34; // rax
  int v35; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  char v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+18h] [rbp-50h]
  char v43; // [rsp+18h] [rbp-50h]
  char v44; // [rsp+1Ch] [rbp-4Ch]
  unsigned __int8 v45; // [rsp+1Ch] [rbp-4Ch]
  int v47; // [rsp+28h] [rbp-40h]
  char v48; // [rsp+2Eh] [rbp-3Ah]
  unsigned __int8 v49; // [rsp+2Fh] [rbp-39h]

  v10 = a2[1];
  if ( v10 )
  {
    v11 = v10 + 1;
    v12 = a2[1];
    v13 = *a2;
    --v10;
    if ( a2[2] >= v11 )
      goto LABEL_3;
  }
  else
  {
    v13 = *a2;
    v12 = 1;
    v11 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
  }
  v41 = v12;
  v37 = qvector_reserve(a2, v13, v11, 1);
  v12 = v41;
  *a2 = v37;
  v13 = v37;
LABEL_3:
  a2[1] = v11;
  *(_BYTE *)(v13 + v10) = a5;
  *(_BYTE *)(*a2 + v12) = 0;
  v14 = *(_QWORD *)(a1 + 32);
  if ( !v14 )
    v14 = *(_QWORD *)(a1 + 8);
  if ( !(unsigned __int8)sub_692E60(a2, (unsigned int)v14, *(_QWORD *)(a1 + 8) == 0) )
    return 0;
  v15 = *(_DWORD *)(a1 + 48);
  if ( (*(_BYTE *)(a1 + 52) & 4) != 0 )
    v15 = *(_DWORD *)(a1 + 48) | 0x20;
  v40 = v15;
  v16 = sub_51D400(a2, a6, v15, a7, 0);
  if ( !(_BYTE)v16 )
    return 0;
  v17 = v40;
  v18 = *(_BYTE *)(a1 + 52) & 0x67;
  if ( !(_DWORD)v14 && (*(_BYTE *)(a1 + 52) & 0x10) != 0 || *(_QWORD *)(a1 + 32) )
  {
    v19 = a2[1];
    v20 = v18 | 0x90;
    if ( !v19 )
      goto LABEL_39;
  }
  else
  {
    v19 = a2[1];
    v20 = v18 | 0x80;
    if ( !v19 )
    {
LABEL_39:
      v23 = *a2;
      v22 = 1;
      v21 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_13;
      goto LABEL_40;
    }
  }
  v21 = v19 + 1;
  v22 = v19;
  v23 = *a2;
  --v19;
  if ( a2[2] >= v21 )
    goto LABEL_13;
LABEL_40:
  v45 = v16;
  v43 = v20;
  v38 = qvector_reserve(a2, v23, v21, 1);
  v16 = v45;
  v20 = v43;
  *a2 = v38;
  v17 = v40;
  v23 = v38;
LABEL_13:
  a2[1] = v21;
  *(_BYTE *)(v23 + v19) = v20;
  *(_BYTE *)(*a2 + v22) = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v24 = 0;
    v25 = 0;
    v42 = 0;
    v26 = 0;
    v27 = 0;
    v47 = 0;
    v44 = v17;
    v48 = v20;
    v49 = v16;
    while ( 1 )
    {
      v32 = *(_QWORD *)a1 + 56 * v27;
      if ( a3 )
      {
        v33 = haystack;
        if ( *(_QWORD *)(v32 + 8) )
          v33 = *(const char **)v32;
        if ( !(unsigned __int8)sub_6891C0(a3, v33) )
          return 0;
      }
      if ( a4 && !(unsigned __int8)sub_689540(a4, v32 + 24) )
        return 0;
      if ( v26 )
      {
        v26 -= v26 > 0;
      }
      else if ( (v48 & 0x10) != 0 )
      {
        v28 = v47;
        if ( (unsigned __int64)v47 >= *(_QWORD *)(a1 + 32) )
          return 0;
        ++v47;
        v29 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v28);
        if ( !v29 || !(unsigned __int8)sub_692580(a2, v29) )
          return 0;
        v30 = *(_QWORD *)(v32 + 48);
        v26 = v29 - 1;
        v31 = (unsigned int)v30;
        v32 = HIDWORD(v30);
        goto LABEL_20;
      }
      v34 = *(_QWORD *)(v32 + 48);
      v35 = v42;
      v42 = v34;
      v31 = (unsigned int)(v34 - v35);
      LODWORD(v32) = HIDWORD(v34) - v25;
      v25 = HIDWORD(v34);
LABEL_20:
      if ( !(unsigned __int8)sub_6926A0(a2, v31)
        || (v44 & 0x20) != 0 && !(unsigned __int8)sub_6926A0(a2, (unsigned int)v32) )
      {
        return 0;
      }
      v27 = ++v24;
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 8) )
        return v49;
    }
  }
  return v16;
}

