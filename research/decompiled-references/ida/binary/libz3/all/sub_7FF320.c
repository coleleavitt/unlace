__int64 __fastcall sub_7FF320(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  void *v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // r14d
  void *v11; // rdi
  char *v12; // rax
  __int64 v13; // r14
  void *v14; // rbx
  void *v16; // rdi
  void *v17; // rbx
  void *v18; // rax
  char *v19; // [rsp+0h] [rbp-78h]
  void *v20; // [rsp+0h] [rbp-78h]
  void *v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  void *v23; // [rsp+10h] [rbp-68h] BYREF
  int v24[2]; // [rsp+18h] [rbp-60h] BYREF
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  int v26[2]; // [rsp+28h] [rbp-50h] BYREF
  int v27[2]; // [rsp+30h] [rbp-48h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 160);
  v22 = a1 + 48;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v2 >= *(_DWORD *)(v3 - 4) )
        return 1;
      v4 = v3 + 56LL * v2;
      if ( *(_DWORD *)(v4 + 12) )
        break;
      v23 = nullptr;
      *(_QWORD *)v24 = 0;
      v25 = &dword_0 + 1;
      *(_QWORD *)v26 = 0;
      sub_182CBA0(qword_1C7F2C0, &v25);
      BYTE4(v25) &= ~1u;
      v16 = qword_1C7F2C0;
      LODWORD(v25) = 1;
      if ( (*(_BYTE *)(v4 + 28) & 1) != 0 || (BYTE4(v23) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v4 + 24, &v23) )
          goto LABEL_34;
      }
      else if ( *(_DWORD *)(v4 + 24) != (_DWORD)v23 )
      {
        goto LABEL_34;
      }
      if ( (*(_BYTE *)(v4 + 44) & 1) != 0 || (BYTE4(v25) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v16, v4 + 40, &v25) )
          goto LABEL_34;
      }
      else if ( *(_DWORD *)(v4 + 40) != (_DWORD)v25 )
      {
LABEL_34:
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v23);
        sub_182CBA0(v17, &v25);
        return 0;
      }
      ++v2;
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v23);
      sub_182CBA0(v20, &v25);
      if ( *(_DWORD *)(v4 + 12) )
        goto LABEL_5;
LABEL_23:
      v3 = *(_QWORD *)(a1 + 160);
      if ( !v3 )
        return 1;
    }
    ++v2;
LABEL_5:
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)v4 + 40LL * *(unsigned int *)(v4 + 8);
    if ( *(_QWORD *)v4 == v6 )
    {
      v18 = *(void **)v5;
    }
    else
    {
      while ( 1 )
      {
        v18 = *(void **)v5;
        if ( *(_QWORD *)v5 > 1u )
          break;
        if ( v6 == v5 + 40 )
        {
          v18 = *(void **)(v5 + 40);
          v5 = *(_QWORD *)v4 + 40LL * *(unsigned int *)(v4 + 8);
          break;
        }
        v5 += 40;
      }
    }
    v23 = v18;
    v7 = qword_1C7F2C0;
    *(_QWORD *)v24 = 0;
    v25 = nullptr;
    *(_QWORD *)v26 = 1;
    *(_QWORD *)v27 = 0;
    if ( (*(_BYTE *)(v5 + 12) & 1) != 0 )
    {
      v21 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v24, v5 + 8);
      v7 = v21;
    }
    else
    {
      v24[0] = *(_DWORD *)(v5 + 8);
    }
    if ( (*(_BYTE *)(v5 + 28) & 1) != 0 )
    {
      sub_182C690(v7, v26, v5 + 24);
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 24);
      LOBYTE(v26[1]) &= ~1u;
      v26[0] = v8;
    }
    v9 = *(_QWORD *)(a1 + 160);
    v10 = v2;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = v23;
        if ( v10 >= *(_DWORD *)(v9 - 4) )
          break;
        sub_7F9B10((__int64)v23, v9 + 56LL * v10, (__int64)v24, v4);
        v9 = *(_QWORD *)(a1 + 160);
        ++v10;
        if ( !v9 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v11 = v23;
    }
    sub_7F9B10((__int64)v11, v22, (__int64)v24, v4);
    sub_7F9B10((__int64)v23, a1 + 104, (__int64)v24, v4);
    v12 = *(char **)(a1 + 168);
    if ( v12 )
    {
      v19 = &v12[56 * *((unsigned int *)v12 - 1)];
      if ( v19 != v12 )
      {
        v13 = *(_QWORD *)(a1 + 168);
        do
        {
          sub_7F9B10((__int64)v23, v13, (__int64)v24, v4);
          v13 += 56;
        }
        while ( v19 != (char *)v13 );
      }
    }
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v24);
    sub_182CBA0(v14, v26);
    goto LABEL_23;
  }
  return 1;
}

