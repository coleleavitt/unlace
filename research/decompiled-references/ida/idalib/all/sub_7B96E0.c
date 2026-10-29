char *__fastcall sub_7B96E0(__int64 a1, __int64 a2, char *a3, size_t *a4, __int64 a5, __int16 a6, __int64 *a7)
{
  __int16 v8; // r13
  __int64 v10; // rbx
  size_t v11; // rbp
  __int64 v13; // rdi
  __int64 v14; // r14
  char *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int16 *v19; // rax
  __int64 v20; // rdx
  size_t v21; // r14
  void *v22; // rdi
  size_t v23; // r12
  void *v24; // rdi
  size_t v25; // [rsp+18h] [rbp-50h]
  char *dest; // [rsp+20h] [rbp-48h]

  v8 = a6;
  v10 = a5;
  if ( a4 && a3 )
  {
    v11 = *a4;
    if ( (*a4 & 0x8000000000000000LL) != 0LL )
    {
      if ( !under_debugger )
        interr(1225);
LABEL_51:
      BUG();
    }
    if ( a2 == -1 )
      return nullptr;
    if ( (a6 & 0x100) != 0 && (v8 = a6 & 0xFEFF, unk_2CD46C8) )
    {
      dest = a3;
      v25 = 0;
      v10 = unk_2CD46C8(a5);
    }
    else
    {
      dest = a3;
      v25 = 0;
    }
  }
  else
  {
    if ( a2 == -1 )
      return nullptr;
    if ( (a6 & 0x100) != 0 )
    {
      v8 = a6 & 0xFEFF;
      if ( unk_2CD46C8 )
        v10 = unk_2CD46C8(a5);
    }
    if ( a3 )
      return nullptr;
    v11 = sub_7B9360(a1, a2, v10, v8);
    if ( a4 )
      *a4 = v11;
    dest = (char *)qalloc(v11);
    if ( !dest )
      return nullptr;
    v25 = v11;
  }
  if ( !v11 )
    return nullptr;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v10;
  v15 = dest;
  v16 = v10 + 1;
  if ( v13 )
    goto LABEL_37;
LABEL_18:
  *(_WORD *)(a1 + 53) = 10;
  v17 = swap64(a2);
  *(_BYTE *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 56) = v17;
  v18 = *(_WORD *)(a1 + 53);
  if ( (v8 & 0x800) != 0 )
  {
    if ( v18 != 0xFFFF )
    {
      *(_BYTE *)(a1 + 65) = v14;
      *(_WORD *)(a1 + 53) = v18 + 1;
      goto LABEL_21;
    }
LABEL_50:
    abort();
  }
  if ( v18 + 8 > 0xFFFF )
    goto LABEL_50;
  *(_WORD *)(a1 + 53) = v18 + 8;
  *(_QWORD *)(a1 + 65) = swap64(v14);
LABEL_21:
  v13 = *(_QWORD *)(a1 + 8);
  if ( !v13 )
    v13 = *(_QWORD *)a1;
  while ( 1 )
  {
    v19 = (unsigned __int16 *)sub_7443D0(v13, (unsigned __int16 *)(a1 + 53));
    if ( !v19 )
      goto LABEL_27;
    v20 = *v19;
    v21 = *(unsigned __int16 *)((char *)v19 + v20 + 2);
    if ( v11 < v21 )
      break;
    v24 = v15;
    v15 += v21;
    memcpy(v24, (char *)v19 + v20 + 4, v21);
    v11 -= v21;
    if ( !v11 )
      goto LABEL_27;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v16++;
    if ( !v13 )
      goto LABEL_18;
LABEL_37:
    *(_BYTE *)(a1 + 60) = v8;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
    if ( (v8 & 0x800) != 0 )
    {
      *(_BYTE *)(a1 + 61) = v14;
      *(_WORD *)(a1 + 53) = 7;
    }
    else
    {
      *(_WORD *)(a1 + 53) = 10;
      *(_DWORD *)(a1 + 61) = _byteswap_ulong(v14);
    }
  }
  if ( v25 )
  {
    if ( !under_debugger )
      interr(1230);
    goto LABEL_51;
  }
  v22 = v15;
  v15 += v11;
  memcpy(v22, (char *)v19 + v20 + 4, v11);
LABEL_27:
  v23 = v15 - dest;
  if ( a4 )
    *a4 = v23;
  if ( a7 )
    *a7 = v16;
  if ( v25 && v25 != v23 )
  {
    if ( !under_debugger )
      interr(1231);
    goto LABEL_51;
  }
  return dest;
}
