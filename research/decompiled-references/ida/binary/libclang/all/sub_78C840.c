__int64 __fastcall sub_78C840(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v7; // r13
  char v8; // cl
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // ebp
  char v20; // al
  __int64 v21; // rdx
  char v22; // cl
  _BYTE *v23; // rax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // edi
  char v28; // al
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-40h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h] BYREF
  __int64 v34[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v16 = sub_79A2B0(a2);
    v17 = *(_QWORD *)v16;
    v18 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
    if ( v17 < v18 )
    {
      while ( *(_WORD *)(*(_QWORD *)v17 + 32LL) != 230 )
      {
        v17 += 8LL;
        if ( v18 == v17 )
          goto LABEL_2;
      }
    }
    else
    {
      if ( v17 == v18 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 230 )
      {
        v18 += 8LL;
        if ( v17 == v18 )
          goto LABEL_2;
      }
    }
    if ( v17 != v18 )
      return 18;
  }
LABEL_2:
  if ( (a3 & 4) != 0 && (*(_BYTE *)(a2 + 32) & 7) != 0 )
    return *(_BYTE *)(a2 + 32) & 7 | 0x10u;
  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL | (2 * ((a3 >> 1) & 1 | (2 * (a3 & 1)))) | (a3 >> 2) & 1;
  v8 = *(_BYTE *)a1 & 1;
  if ( v8 )
  {
    v9 = a1 + 8;
    v10 = 7;
    v11 = ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 7;
    v12 = a1 + 8 + 16LL * (((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 9)) & 7);
    v13 = *(_QWORD *)v12;
    if ( v7 == *(_QWORD *)v12 )
    {
LABEL_7:
      v14 = v9 + 128;
      goto LABEL_8;
    }
LABEL_32:
    v29 = 1;
    while ( v13 != -1 )
    {
      v30 = v29 + 1;
      v31 = v10 & (v11 + v29);
      v11 = v31;
      v12 = v9 + 16 * v31;
      v13 = *(_QWORD *)v12;
      if ( v7 == *(_QWORD *)v12 )
      {
        if ( !v8 )
          goto LABEL_12;
        goto LABEL_7;
      }
      v29 = v30;
    }
    goto LABEL_23;
  }
  v15 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v15 )
    goto LABEL_23;
  v10 = v15 - 1;
  v11 = v10 & (v7 ^ (v7 >> 9));
  v12 = v9 + 16LL * v11;
  v13 = *(_QWORD *)v12;
  if ( v7 != *(_QWORD *)v12 )
    goto LABEL_32;
LABEL_12:
  v14 = v9 + 16LL * *(unsigned int *)(a1 + 16);
LABEL_8:
  if ( v14 != v12 )
    return *(unsigned __int8 *)(v12 + 8);
LABEL_23:
  v19 = sub_78ED00(a1, a2, a3, 0);
  *(_BYTE *)(a2 + 32) = v19 & 7 | *(_BYTE *)(a2 + 32) & 0xF8;
  v32 = v7;
  v20 = sub_786500(a1, &v32, &v33);
  v21 = v33;
  v22 = v20;
  v23 = (_BYTE *)(v33 + 8);
  if ( !v22 )
  {
    v24 = *(_DWORD *)a1;
    v34[0] = v33;
    v25 = (v24 >> 1) + 1;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v27 = 24;
      v26 = 8;
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 16);
      v27 = 3 * v26;
    }
    if ( 4 * v25 >= v27 )
    {
      v26 *= 2;
    }
    else if ( v26 >> 3 < v26 - (v25 + *(_DWORD *)(a1 + 4)) )
    {
LABEL_28:
      *(_DWORD *)a1 = *(_DWORD *)a1 & 1 | (2 * v25);
      if ( *(_QWORD *)v21 != -1 )
        --*(_DWORD *)(a1 + 4);
      v28 = *(_BYTE *)(v21 + 8);
      *(_QWORD *)v21 = v7;
      *(_BYTE *)(v21 + 8) = v28 & 0xC0 | 0x16;
      v23 = (_BYTE *)(v21 + 8);
      goto LABEL_31;
    }
    sub_78C340(a1, v26);
    sub_786500(a1, &v32, v34);
    v21 = v34[0];
    v25 = (*(_DWORD *)a1 >> 1) + 1;
    goto LABEL_28;
  }
LABEL_31:
  *v23 = v19;
  return v19;
}

