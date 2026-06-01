__int64 __fastcall sub_A7C260(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  char *v15; // rax
  char *v16; // rdx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  __int64 *v22; // r14
  __int64 v23; // r12
  __int64 v24; // rbx
  void (__fastcall *v25)(__int64, __int64, __int64); // rax
  void *v26; // r15
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // rsi
  unsigned int v30; // esi
  unsigned int v31; // esi
  void *v32; // [rsp+0h] [rbp-48h]
  __int64 v33; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 48) )
  {
    v2 = *(char **)(a1 + 32);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 40);
    v5 = v2;
    v6 = &v2[16 * v4];
    if ( v2 == v6 )
      goto LABEL_19;
    do
    {
      while ( *((_DWORD *)v5 + 1) )
      {
        *((_DWORD *)v5 + 1) = 0;
        v5 += 16;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 16;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_19;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = 0;
      v8 = v7 >> 1;
      *(_DWORD *)(a1 + 40) = v8;
      v9 = sub_186B270(16LL * v8);
      if ( !v8 )
      {
LABEL_18:
        *(_QWORD *)(a1 + 32) = v9;
LABEL_19:
        *(_QWORD *)(a1 + 44) = 0;
        goto LABEL_20;
      }
      if ( v8 == 1 )
      {
        v11 = (_QWORD *)v9;
LABEL_17:
        *v11 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v31 = (unsigned int)v4 >> 1;
      *(_QWORD *)(a1 + 32) = 0;
      *(_DWORD *)(a1 + 40) = v31;
      v8 = v31;
      v9 = sub_186B270(16LL * v31);
    }
    v10 = (_QWORD *)v9;
    do
    {
      *v10 = 0;
      v10 += 4;
      *(v10 - 2) = 0;
    }
    while ( (_QWORD *)(v9 + 32LL * (v8 >> 1)) != v10 );
    if ( (v8 & 1) == 0 )
      goto LABEL_18;
    v11 = (_QWORD *)(v9 + 16LL * (v8 & 0x7FFFFFFE));
    goto LABEL_17;
  }
LABEL_20:
  if ( *(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 24) )
  {
    v12 = *(char **)(a1 + 8);
    v13 = 0;
    v14 = *(unsigned int *)(a1 + 16);
    v15 = v12;
    v16 = &v12[16 * v14];
    if ( v12 == v16 )
      goto LABEL_38;
    do
    {
      while ( *((_DWORD *)v15 + 1) )
      {
        *((_DWORD *)v15 + 1) = 0;
        v15 += 16;
        if ( v16 == v15 )
          goto LABEL_27;
      }
      v15 += 16;
      ++v13;
    }
    while ( v16 != v15 );
LABEL_27:
    if ( (unsigned int)v14 <= 0x10 || 3 * (int)v14 >= (unsigned int)(4 * v13) )
      goto LABEL_38;
    if ( v12 )
    {
      sub_186B220(v12);
      v17 = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v18 = v17 >> 1;
      *(_DWORD *)(a1 + 16) = v18;
      v19 = sub_186B270(16LL * v18);
      if ( !v18 )
      {
LABEL_37:
        *(_QWORD *)(a1 + 8) = v19;
LABEL_38:
        *(_QWORD *)(a1 + 20) = 0;
        goto LABEL_39;
      }
      if ( v18 == 1 )
      {
        v21 = (_QWORD *)v19;
LABEL_36:
        *v21 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      v30 = (unsigned int)v14 >> 1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = v30;
      v18 = v30;
      v19 = sub_186B270(16LL * v30);
    }
    v20 = (_QWORD *)v19;
    do
    {
      *v20 = 0;
      v20 += 4;
      *(v20 - 2) = 0;
    }
    while ( v20 != (_QWORD *)(v19 + 32LL * (v18 >> 1)) );
    if ( (v18 & 1) == 0 )
      goto LABEL_37;
    v21 = (_QWORD *)(v19 + 16LL * (v18 & 0x7FFFFFFE));
    goto LABEL_36;
  }
LABEL_39:
  v22 = *(__int64 **)(a1 + 64);
  v23 = v22[1];
  v33 = *v22;
  if ( *v22 != v23 )
  {
    v24 = *v22;
    do
    {
      while ( 1 )
      {
        v25 = *(void (__fastcall **)(__int64, __int64, __int64))(v24 + 56);
        if ( !v25 )
          break;
        v25(v24 + 40, v24 + 40, 3);
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24);
        v27 = v24 + 16;
        v24 += 72;
        sub_182CBA0(v26, v27);
        if ( v23 == v24 )
          goto LABEL_43;
      }
      v32 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v24);
      v29 = v24 + 16;
      v24 += 72;
      sub_182CBA0(v32, v29);
    }
    while ( v23 != v24 );
LABEL_43:
    v22[1] = v33;
  }
  result = sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 88;
  *(_QWORD *)(a1 + 144) = result;
  return result;
}

