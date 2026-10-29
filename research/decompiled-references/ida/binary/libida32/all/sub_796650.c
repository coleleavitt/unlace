char *__fastcall sub_796650(
        __int64 a1,
        unsigned int a2,
        char *a3,
        size_t *a4,
        unsigned int a5,
        __int16 a6,
        unsigned int *a7)
{
  unsigned int v7; // r14d
  unsigned int v9; // ebx
  size_t v10; // rbp
  unsigned int v11; // eax
  size_t v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  int v15; // r12d
  unsigned __int16 *v16; // rax
  char *v18; // r12
  int v19; // r14d
  unsigned int v21; // eax
  __int64 v22; // rdi
  unsigned __int16 *v23; // rax
  __int64 v24; // rdx
  size_t v25; // r13
  size_t v26; // rcx
  size_t v27; // r12
  void *v28; // rdi
  __int16 v29; // [rsp+0h] [rbp-68h]
  __int16 v30; // [rsp+0h] [rbp-68h]
  unsigned __int32 v31; // [rsp+0h] [rbp-68h]
  unsigned __int32 v32; // [rsp+0h] [rbp-68h]
  __int16 v33; // [rsp+0h] [rbp-68h]
  char v34; // [rsp+Bh] [rbp-5Dh]
  char v35; // [rsp+Bh] [rbp-5Dh]
  unsigned __int16 *v36; // [rsp+10h] [rbp-58h]
  char *dest; // [rsp+18h] [rbp-50h]
  __int16 desta; // [rsp+18h] [rbp-50h]
  size_t v39; // [rsp+20h] [rbp-48h]

  v7 = a2;
  v9 = a5;
  if ( a4 && a3 )
  {
    v10 = *a4;
    if ( (*a4 & 0x8000000000000000LL) != 0LL )
    {
      if ( !under_debugger )
        interr(1225);
      goto LABEL_49;
    }
    if ( a2 == -1 )
      return nullptr;
    if ( (a6 & 0x100) != 0 && (a6 &= ~0x100u, unk_2CAA7A8) )
    {
      v29 = a6;
      v11 = unk_2CAA7A8(a5);
      dest = a3;
      a6 = v29;
      v12 = 0;
      v9 = v11;
    }
    else
    {
      dest = a3;
      v12 = 0;
    }
    goto LABEL_22;
  }
  if ( a2 == -1 )
    return nullptr;
  if ( (a6 & 0x100) != 0 )
  {
    a6 &= ~0x100u;
    if ( unk_2CAA7A8 )
    {
      v30 = a6;
      v13 = unk_2CAA7A8(a5);
      a6 = v30;
      v9 = v13;
      if ( !a3 )
        goto LABEL_12;
      return nullptr;
    }
  }
  if ( a3 )
    return nullptr;
LABEL_12:
  v14 = v9;
  v31 = _byteswap_ulong(a2);
  v15 = a6 & 0x800;
  v34 = a6;
  v10 = 0;
  desta = a6;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 48) = v31;
    *(_BYTE *)(a1 + 52) = v34;
    if ( v15 )
      *(_BYTE *)(a1 + 53) = v14;
    else
      *(_DWORD *)(a1 + 53) = _byteswap_ulong(v14);
    *(_WORD *)(a1 + 45) = v15 == 0 ? 10 : 7;
    v16 = (unsigned __int16 *)sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
    if ( !v16 )
      break;
    ++v14;
    v10 += *(unsigned __int16 *)((char *)v16 + *v16 + 2);
  }
  v7 = a2;
  if ( a4 )
    *a4 = v10;
  v33 = desta;
  dest = (char *)qalloc(v10);
  if ( !dest )
    return nullptr;
  a6 = v33;
  v12 = v10;
LABEL_22:
  if ( !v10 )
    return nullptr;
  v35 = a6;
  v39 = v12;
  v18 = dest;
  v32 = _byteswap_ulong(v7);
  v19 = a6 & 0x800;
  v36 = (unsigned __int16 *)(a1 + 45);
  do
  {
    v21 = v9++;
    *(_DWORD *)(a1 + 48) = v32;
    *(_BYTE *)(a1 + 52) = v35;
    if ( v19 )
      *(_BYTE *)(a1 + 53) = v9 - 1;
    else
      *(_DWORD *)(a1 + 53) = _byteswap_ulong(v21);
    v22 = *(_QWORD *)a1;
    *(_WORD *)(a1 + 45) = v19 == 0 ? 10 : 7;
    v23 = (unsigned __int16 *)sub_723E90(v22, v36);
    if ( !v23 )
      break;
    v24 = *v23;
    v25 = *(unsigned __int16 *)((char *)v23 + v24 + 2);
    if ( v10 < v25 )
    {
      if ( !v39 )
      {
        memcpy(v18, (char *)v23 + v24 + 4, v10);
        v26 = 0;
        v18 += v10;
        goto LABEL_30;
      }
      if ( !under_debugger )
        interr(1230);
LABEL_49:
      BUG();
    }
    v28 = v18;
    v18 += v25;
    memcpy(v28, (char *)v23 + v24 + 4, v25);
    v10 -= v25;
  }
  while ( v10 );
  v26 = v39;
LABEL_30:
  v27 = v18 - dest;
  if ( a4 )
    *a4 = v27;
  if ( a7 )
    *a7 = v9;
  if ( v26 && v26 != v27 )
  {
    if ( !under_debugger )
      interr(1231);
    goto LABEL_49;
  }
  return dest;
}

