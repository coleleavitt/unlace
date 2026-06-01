void __fastcall sub_4E0490(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // esi
  char *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r9
  char *v9; // rcx
  __int64 v10; // r9
  char *v11; // r8
  char *v12; // rbx
  int v13; // edx
  size_t v14; // r12
  _BYTE *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  int v18; // edx
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  void *v21; // [rsp+0h] [rbp-78h] BYREF
  size_t v22; // [rsp+8h] [rbp-70h]
  _QWORD dest[2]; // [rsp+10h] [rbp-68h] BYREF
  void *v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  char v26[72]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 88);
  v6 = *(char **)(a2 + 16);
  LOBYTE(dest[0]) = 0;
  v7 = v4 - 1;
  v21 = dest;
  v22 = 0;
  v4 *= 48;
  v8 = 3LL * (v5 & v7);
  v9 = &v6[v4];
  v10 = 16 * v8;
  v11 = &v6[v10];
  if ( v10 == v4 )
  {
LABEL_20:
    while ( v11 != v6 )
    {
      v18 = *((_DWORD *)v6 + 1);
      if ( v18 == 2 )
      {
        if ( v5 == *(_DWORD *)v6 && v5 == *((_DWORD *)v6 + 2) )
        {
          v12 = v6;
          goto LABEL_8;
        }
      }
      else if ( !v18 )
      {
        break;
      }
      v6 += 48;
    }
LABEL_15:
    v24 = v26;
    strcpy(v26, "mk_total");
    v25 = 8;
    sub_4DC570((unsigned int *)(a2 + 16), v5, v26, &byte_8);
    if ( v24 != v26 )
      operator delete(v24, *(_QWORD *)v26 + 1LL);
    goto LABEL_17;
  }
  v12 = &v6[v10];
  while ( 1 )
  {
    v13 = *((_DWORD *)v12 + 1);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_4;
    }
    if ( v5 == *(_DWORD *)v12 && v5 == *((_DWORD *)v12 + 2) )
      break;
LABEL_4:
    v12 += 48;
    if ( v9 == v12 )
      goto LABEL_20;
  }
LABEL_8:
  if ( &v21 == (void **)(v12 + 16) )
    return;
  v14 = *((_QWORD *)v12 + 3);
  if ( v14 > 0xF )
  {
    if ( (v14 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v14 <= 0x1D )
    {
      v19 = 30;
      v20 = 31;
    }
    else
    {
      v19 = *((_QWORD *)v12 + 3);
      v20 = v14 + 1;
      if ( (__int64)(v14 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v16 = (_QWORD *)operator new(v20);
    sub_233E40((__int64)&v21);
    v21 = v16;
    dest[0] = v19;
    v15 = *((_BYTE **)v12 + 2);
LABEL_32:
    memcpy(v16, v15, v14);
    v17 = v21;
    goto LABEL_14;
  }
  if ( !v14 )
    goto LABEL_13;
  v15 = *((_BYTE **)v12 + 2);
  v16 = dest;
  if ( v14 != 1 )
    goto LABEL_32;
  LOBYTE(dest[0]) = *v15;
LABEL_13:
  v17 = dest;
LABEL_14:
  v22 = v14;
  *((_BYTE *)v17 + v14) = 0;
LABEL_17:
  if ( v21 != dest )
    operator delete(v21, dest[0] + 1LL);
}

