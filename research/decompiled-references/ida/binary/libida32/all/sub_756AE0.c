unsigned __int64 __fastcall sub_756AE0(__int64 a1, unsigned int a2, char *a3)
{
  char v3; // r13
  const char *v4; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int *v8; // r14
  __int64 v9; // rax
  unsigned int *v10; // r12
  const char *v11; // rsi
  unsigned int v12; // r11d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // rax
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]
  void *v23; // [rsp+10h] [rbp-78h]
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  unsigned int v25; // [rsp+2Bh] [rbp-5Dh] BYREF
  unsigned __int8 v26; // [rsp+2Fh] [rbp-59h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v3 = *a3;
  v29 = __readfsqword(0x28u);
  v4 = a3;
  if ( !a2 && !v3 )
  {
    v25 = dword_2CAA5E2;
    v26 = byte_2CAA5E6;
    return ((unsigned __int64)v26 << 32) | v25;
  }
  if ( v3 == 46 && !a3[1] )
  {
    v25 = a2;
    v26 = 1;
    return ((unsigned __int64)v26 << 32) | v25;
  }
  if ( a3[strlen(a3) - 1] != 47 )
  {
    if ( !v3 )
    {
      v25 = dword_2CAA5D8;
      v26 = byte_2CAA5DC;
      return ((unsigned __int64)v26 << 32) | v25;
    }
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v6 + 176LL * a2;
    v8 = *(unsigned int **)(v7 + 24);
    v22 = v7;
    v9 = *(_QWORD *)(v7 + 32);
    v10 = (unsigned int *)((char *)v8 + 5 * v9);
    if ( v8 == v10 )
    {
      v23 = nullptr;
      goto LABEL_14;
    }
    if ( *((_BYTE *)v8 + 4) )
    {
      v23 = nullptr;
      v24 = 0;
      goto LABEL_31;
    }
    v23 = nullptr;
    if ( (*(_BYTE *)(v22 + 164) & 4) != 0 )
      goto LABEL_14;
    v24 = 0;
    goto LABEL_46;
  }
  sub_755A50((__int64 *)&ptr, v4);
  v4 = (const char *)ptr;
  v23 = ptr;
  v24 = v28;
  if ( !v28 || !*(_BYTE *)ptr )
  {
LABEL_22:
    v25 = dword_2CAA5D8;
    v26 = byte_2CAA5DC;
    goto LABEL_28;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v18 = v6 + 176LL * a2;
  v8 = *(unsigned int **)(v18 + 24);
  v22 = v18;
  v9 = *(_QWORD *)(v18 + 32);
  v10 = (unsigned int *)((char *)v8 + 5 * v9);
  if ( v8 != v10 )
  {
    if ( *((_BYTE *)v8 + 4) )
    {
      v4 = (const char *)ptr;
      while ( 1 )
      {
LABEL_31:
        v19 = haystack;
        v20 = v6 + 176LL * *v8;
        if ( *(_QWORD *)(v20 + 8) )
          v19 = *(const char **)v20;
        if ( !strcmp(v19, v4) )
          break;
        if ( (unsigned int *)((char *)v8 + 5) == v10 )
          goto LABEL_26;
        if ( *((_BYTE *)v8 + 9) )
        {
          v8 = (unsigned int *)((char *)v8 + 5);
        }
        else
        {
          if ( (*(_BYTE *)(v22 + 164) & 4) != 0 )
            goto LABEL_26;
          v8 = (unsigned int *)((char *)v8 + 10);
          if ( v8 == v10 )
            goto LABEL_26;
          while ( !*((_BYTE *)v8 + 4) )
          {
            v8 = (unsigned int *)((char *)v8 + 5);
            if ( v8 == v10 )
              goto LABEL_26;
          }
          if ( v8 == v10 )
            goto LABEL_26;
        }
      }
      v25 = *v8;
      v26 = *((_BYTE *)v8 + 4);
      goto LABEL_28;
    }
    v4 = (const char *)ptr;
    if ( (*(_BYTE *)(v22 + 164) & 4) == 0 )
    {
LABEL_46:
      v8 = (unsigned int *)((char *)v8 + 5);
      if ( v9 != 1 )
      {
        while ( !*((_BYTE *)v8 + 4) )
        {
          v8 = (unsigned int *)((char *)v8 + 5);
          if ( v8 == v10 )
            goto LABEL_26;
        }
      }
      if ( v8 != v10 )
        goto LABEL_31;
    }
  }
LABEL_26:
  if ( v24 <= 1 )
  {
LABEL_14:
    sub_756780((__int64)&ptr, a1, a2, 1);
    v11 = haystack;
    if ( v28 )
      v11 = (const char *)ptr;
    v12 = (*(__int64 (__fastcall **)(_QWORD, const char *, const char *))(**(_QWORD **)(a1 + 40) + 24LL))(
            *(_QWORD *)(a1 + 40),
            v11,
            v4);
    if ( v12 != -1 )
    {
      if ( (*(_BYTE *)(v22 + 164) & 4) != 0 )
      {
        v13 = *(_QWORD *)(v22 + 24);
        v14 = *(_QWORD *)(v22 + 32);
        v25 = v12;
        v26 = 0;
        v15 = sub_7534D0(v13, v13 + 5 * v14, (__int64)&v25);
        if ( v17 != v15 && v16 == *(_DWORD *)v15 && !*(_BYTE *)(v15 + 4) )
        {
LABEL_54:
          v25 = v16;
          v26 = 0;
          if ( ptr )
          {
            v28 = 0;
            qfree(ptr);
          }
          goto LABEL_28;
        }
      }
      else if ( sub_7539C0((_QWORD *)(v22 + 48), v12) )
      {
        goto LABEL_54;
      }
    }
    if ( ptr )
    {
      v28 = 0;
      qfree(ptr);
    }
    goto LABEL_22;
  }
  v25 = dword_2CAA5DD;
  v26 = byte_2CAA5E1;
LABEL_28:
  if ( v23 )
    qfree(v23);
  return ((unsigned __int64)v26 << 32) | v25;
}

