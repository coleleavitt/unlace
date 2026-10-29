void __fastcall sub_4E1AE0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r13
  __int64 v4; // rax
  int v5; // edi
  _DWORD *v6; // rdx
  unsigned int v7; // r9d
  __int64 v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // r10
  _DWORD *v11; // rsi
  _DWORD *i; // rbx
  int v13; // eax
  char *v14; // rcx
  _BYTE *v15; // rdx
  size_t v16; // r15
  _BYTE *v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // rbx
  int v25; // eax
  char *v26; // rcx
  _BYTE *v27; // rdx
  size_t v28; // r15
  _QWORD *v29; // rax
  int v30; // eax
  unsigned __int64 v31; // rdi
  _BYTE *v32; // rsi
  unsigned __int64 v33; // rdi
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v35; // [rsp+0h] [rbp-68h]
  _QWORD *v36; // [rsp+8h] [rbp-60h]
  _QWORD *v37; // [rsp+8h] [rbp-60h]
  void *v38; // [rsp+10h] [rbp-58h] BYREF
  char *v39; // [rsp+18h] [rbp-50h]
  _QWORD dest[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (unsigned int *)(a2 + 16);
  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 76);
  v6 = *(_DWORD **)(a2 + 16);
  LOBYTE(dest[0]) = 0;
  v7 = v4 - 1;
  v38 = dest;
  v39 = nullptr;
  v8 = 48 * v4;
  v9 = &v6[12 * v4];
  v10 = 12LL * (((_DWORD)v4 - 1) & (unsigned int)v5);
  v11 = &v6[v10];
  if ( v10 != 12 * v4 )
  {
    for ( i = &v6[v10]; v9 != i; i += 12 )
    {
      v13 = i[1];
      if ( v13 == 2 )
      {
        if ( v5 == *i && v5 == i[2] )
        {
LABEL_8:
          v14 = nullptr;
          v15 = dest;
          if ( &v38 == (void **)(i + 4) )
            goto LABEL_15;
          v16 = *((_QWORD *)i + 3);
          if ( v16 > 0xF )
          {
            if ( (v16 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            if ( v16 <= 0x1D )
            {
              v34 = 30;
              v31 = 31;
            }
            else
            {
              v34 = *((_QWORD *)i + 3);
              v31 = v16 + 1;
              if ( (__int64)(v16 + 1) < 0 )
                std::__throw_bad_alloc();
            }
            v36 = (_QWORD *)operator new(v31);
            sub_233E40((__int64)&v38);
            v18 = v36;
            v38 = v36;
            dest[0] = v34;
            v17 = *((_BYTE **)i + 2);
          }
          else
          {
            if ( !v16 )
              goto LABEL_13;
            v17 = *((_BYTE **)i + 2);
            v18 = dest;
            if ( v16 == 1 )
            {
              LOBYTE(dest[0]) = *v17;
LABEL_13:
              v19 = dest;
LABEL_14:
              v39 = (char *)v16;
              *((_BYTE *)v19 + v16) = 0;
              v15 = v38;
              v14 = v39;
LABEL_15:
              sub_4DC570(v2, *(_DWORD *)(a1 + 80), v15, v14);
              goto LABEL_16;
            }
          }
          memcpy(v18, v17, v16);
          v19 = v38;
          goto LABEL_14;
        }
      }
      else if ( !v13 )
      {
        goto LABEL_27;
      }
    }
  }
  if ( v6 != v11 )
  {
    i = v6;
    while ( 1 )
    {
      v20 = i[1];
      if ( v20 != 2 )
        break;
      if ( v5 == *i )
      {
        if ( v5 == i[2] )
          goto LABEL_8;
        i += 12;
        if ( v11 == i )
          goto LABEL_27;
      }
      else
      {
LABEL_22:
        i += 12;
        if ( v11 == i )
          goto LABEL_27;
      }
    }
    if ( !v20 )
      goto LABEL_27;
    goto LABEL_22;
  }
LABEL_27:
  v21 = *(_DWORD *)(a1 + 80);
  v22 = 48LL * (v21 & v7);
  v23 = &v6[(unsigned __int64)v22 / 4];
  v24 = &v6[(unsigned __int64)v22 / 4];
  if ( v8 == v22 )
  {
LABEL_39:
    if ( v6 != v23 )
    {
      while ( 1 )
      {
        v30 = v6[1];
        if ( v30 == 2 )
        {
          if ( v21 == *v6 && v21 == v6[2] )
          {
            v24 = v6;
            goto LABEL_34;
          }
        }
        else if ( !v30 )
        {
          return;
        }
        v6 += 12;
        if ( v23 == v6 )
          return;
      }
    }
    return;
  }
  while ( 1 )
  {
    v25 = v24[1];
    if ( v25 != 2 )
    {
      if ( !v25 )
        return;
      goto LABEL_30;
    }
    if ( v21 == *v24 && v21 == v24[2] )
      break;
LABEL_30:
    v24 += 12;
    if ( v9 == v24 )
      goto LABEL_39;
  }
LABEL_34:
  v26 = nullptr;
  v27 = dest;
  if ( &v38 != (void **)(v24 + 4) )
  {
    v28 = *((_QWORD *)v24 + 3);
    if ( v28 > 0xF )
    {
      if ( (v28 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v28 > 0x1D )
      {
        v35 = *((_QWORD *)v24 + 3);
        v33 = v28 + 1;
        if ( (__int64)(v28 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v35 = 30;
        v33 = 31;
      }
      v37 = (_QWORD *)operator new(v33);
      sub_233E40((__int64)&v38);
      v29 = v37;
      v38 = v37;
      dest[0] = v35;
      v32 = *((_BYTE **)v24 + 2);
    }
    else
    {
      v29 = dest;
      if ( !v28 )
        goto LABEL_37;
      v32 = *((_BYTE **)v24 + 2);
      if ( v28 == 1 )
      {
        LOBYTE(dest[0]) = *v32;
        v29 = v38;
        goto LABEL_37;
      }
    }
    memcpy(v29, v32, v28);
    v29 = v38;
LABEL_37:
    v39 = (char *)v28;
    *((_BYTE *)v29 + v28) = 0;
    v5 = *(_DWORD *)(a1 + 76);
    v27 = v38;
    v26 = v39;
  }
  sub_4DC570(v2, v5, v27, v26);
LABEL_16:
  if ( v38 != dest )
    operator delete(v38, dest[0] + 1LL);
}

