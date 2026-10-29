__int64 __fastcall sub_868430(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 *a5)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // rbx
  unsigned int *v14; // rbp
  __int64 result; // rax
  unsigned int v16; // eax
  __int64 *v17; // rdx
  __int64 *i; // rsi
  __int64 v19; // rcx
  unsigned int v20; // [rsp+8h] [rbp-70h]
  unsigned int v21; // [rsp+8h] [rbp-70h]
  unsigned int v22; // [rsp+8h] [rbp-70h]
  char v23; // [rsp+Fh] [rbp-69h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-48h]
  unsigned int v29; // [rsp+34h] [rbp-44h]

  *a4 = -1;
  v6 = *(_QWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a1 + 168);
  if ( !v6 )
  {
    if ( v7 )
    {
      *(_DWORD *)(v7 - 4) = 0;
      v16 = *a4;
      if ( *a4 != -1 )
        goto LABEL_37;
    }
    goto LABEL_43;
  }
  v8 = *(_DWORD *)(v6 - 4);
  v29 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 20LL);
  if ( !v7 )
  {
    if ( v8 )
      goto LABEL_4;
    goto LABEL_43;
  }
  *(_DWORD *)(v7 - 4) = 0;
  if ( !v8 )
  {
LABEL_36:
    v16 = *a4;
    if ( *a4 != -1 )
    {
LABEL_37:
      *(_DWORD *)(a3 + 32) = v16;
      result = 0;
      goto LABEL_38;
    }
LABEL_43:
    result = 0xFFFFFFFFLL;
    goto LABEL_38;
  }
LABEL_4:
  v9 = 0;
  while ( 1 )
  {
    v20 = (v9 + *(_DWORD *)(a3 + 32)) % v8;
    if ( v7 )
      v28 = *(_DWORD *)(v7 - 4);
    else
      v28 = 0;
    v12 = v6 + 40LL * v20;
    v13 = *(unsigned int **)v12;
    v24 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)v12 )
      ++v13[2];
    v14 = *(unsigned int **)(v12 + 16);
    v25 = *(_QWORD *)(v12 + 24);
    if ( v14 )
      ++v14[2];
    v23 = *(_BYTE *)(v12 + 32);
    result = sub_867AF0(a1, v29, a2, v13, v14, a5);
    if ( !(_DWORD)result )
      break;
    v10 = (_DWORD)result == 1;
    v11 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      if ( v11 )
        *(_DWORD *)(v11 - 4) = v28;
      if ( !v23 )
      {
LABEL_28:
        *(_DWORD *)(a3 + 32) = v20;
        result = 1;
        goto LABEL_29;
      }
    }
    else
    {
      if ( v11 )
        *(_DWORD *)(v11 - 4) = v28;
      if ( v23 )
        goto LABEL_28;
    }
LABEL_9:
    if ( v14 )
    {
      v10 = v14[2]-- == 1;
      if ( v10 )
        sub_15D7BC0(v25, v14);
    }
    if ( v13 && (v10 = v13[2] == 1, --v13[2], v10) )
    {
      ++v9;
      sub_15D7BC0(v24, v13);
      if ( v9 >= v8 )
        goto LABEL_36;
    }
    else if ( ++v9 >= v8 )
    {
      goto LABEL_36;
    }
    v6 = *(_QWORD *)(a3 + 8);
    v7 = *(_QWORD *)(a1 + 168);
  }
  if ( *a4 == -1 )
  {
    *a4 = v20;
    goto LABEL_9;
  }
  *a4 = -1;
LABEL_29:
  if ( v14 )
  {
    v10 = v14[2]-- == 1;
    if ( v10 )
    {
      v22 = result;
      sub_15D7BC0(v25, v14);
      result = v22;
    }
  }
  if ( v13 )
  {
    v10 = v13[2]-- == 1;
    if ( v10 )
    {
      v21 = result;
      sub_15D7BC0(v24, v13);
      result = v21;
    }
  }
LABEL_38:
  v17 = *(__int64 **)(a1 + 16);
  for ( i = &v17[*(unsigned int *)(a1 + 24)]; v17 != i; *(_BYTE *)(v19 + 6) &= ~1u )
    v19 = *v17++;
  *(_DWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  return result;
}

