__int64 __fastcall sub_37E5B0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rdi
  char v5; // r12
  int v6; // eax
  __int64 v7; // rsi
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  _BOOL8 v14; // rsi
  char v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int item_end; // ebp
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  void (__fastcall *v23)(__int64, __int64, __int64); // rax
  __int64 func; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rsi
  const char *v29; // rcx
  __int64 fchunk; // rax
  void (__fastcall *v31)(__int64, __int64); // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v33; // [rsp+8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( a2 == 7 )
  {
    sub_37E480(a1);
    v7 = 0;
    sub_4B6F00(a1, 0);
    if ( (*(_BYTE *)(a1 + 529) & 0xC0) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 472);
      v22 = *(_QWORD *)a1;
      v7 = (__int64)" ";
      *(_DWORD *)(a1 + 144) |= 0x810u;
      v23 = *(void (__fastcall **)(__int64, __int64, __int64))(v22 + 136);
      if ( !*(_DWORD *)(v21 + 4) )
        v7 = (__int64)&unk_22AF0B5;
      v23(a1, v7, 0xFFFFFFFFLL);
    }
    return get_item_end(*(unsigned int *)(a1 + 16), v7, v9, v10);
  }
  v3 = a2;
  v4 = a2;
  v5 = is_spec_segm(a2);
  if ( !v5 )
  {
    v12 = *(_QWORD *)(a1 + 528) & 0x600LL;
    v13 = *(_DWORD *)(a1 + 144) & 4;
    if ( v13 )
    {
      v14 = 1;
      v13 = 4;
    }
    else
    {
      v14 = 1;
      if ( v12 != 1536 )
      {
        v5 = is_auto_enabled(v4, 1);
        if ( v5 )
        {
          v5 = is_planned_ea(*(unsigned int *)(a1 + 16));
          v13 = *(_DWORD *)(a1 + 144) & 4;
          v12 = *(_QWORD *)(a1 + 528) & 0x600LL;
          v14 = v5 != 0;
        }
        else
        {
          v14 = 0;
          v12 = *(_QWORD *)(a1 + 528) & 0x600LL;
          v13 = *(_DWORD *)(a1 + 144) & 4;
        }
      }
    }
    v15 = sub_55EB90(a1, v14, v13 >> 2, v12 == 1536);
    item_end = get_item_end(*(unsigned int *)(a1 + 16), v14, v16, v17);
    v19 = *(_DWORD *)(a1 + 144);
    if ( (v19 & 1) != 0 )
    {
      v20 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(a1 + 144) = v19 | 0x890;
      if ( !(unsigned __int8)is_manual_insn(v20) )
      {
        if ( !v15 )
          goto LABEL_16;
LABEL_35:
        if ( (unsigned __int8)getinf_flag(45, 16) )
          *(_DWORD *)(a1 + 144) |= 0x80000000;
        sub_375980(0x11u, a1);
        *(_DWORD *)(a1 + 144) &= ~0x80000000;
        if ( v5 )
          sub_39F7C0(*(unsigned int *)(a1 + 16));
        goto LABEL_18;
      }
    }
    else
    {
      sub_37E480(a1);
      if ( v15 )
      {
        if ( (*(_BYTE *)(a1 + 529) & 0xC0) != 0 )
          *(_DWORD *)(a1 + 144) |= 0x10u;
        sub_562630(a1);
        func = get_func(*(unsigned int *)(a1 + 16));
        sub_562100(a1, func);
        sub_683950(a1);
        v25 = *(unsigned int *)(a1 + 16);
        *(_DWORD *)(a1 + 144) |= 0x890u;
        if ( !(unsigned __int8)is_manual_insn(v25) )
          goto LABEL_35;
      }
      else
      {
        sub_560020(a1, 0);
        sub_683950(a1);
        sub_4B6F00(a1, 0);
        v26 = get_func(*(unsigned int *)(a1 + 16));
        sub_562100(a1, v26);
        v27 = *(unsigned int *)(a1 + 16);
        *(_DWORD *)(a1 + 144) |= 0x890u;
        if ( !(unsigned __int8)is_manual_insn(v27) )
        {
LABEL_16:
          *(_DWORD *)(a1 + 56) = (unsigned __int8)sub_3C4B50(a1, 0);
          if ( !sub_375980(0x14u, a1, 0) )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 344LL))(a1, 0);
LABEL_18:
          if ( *(_DWORD *)(a1 + 108) == -1 && *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) != 8 )
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 136LL))(a1, 0, 0x80000000LL);
          if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
          {
            sub_683950(a1);
            if ( (getinf(46) & 4) != 0
              && (~*(_WORD *)(a1 + 528) & 0x600) == 0
              && (unsigned __int8)is_basic_block_end(a1 + 212, 1) )
            {
              sub_37E050(a1, nullptr);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
            }
            fchunk = get_fchunk(*(unsigned int *)(a1 + 16));
            if ( fchunk && *(char *)(fchunk + 9) >= 0 && *(_DWORD *)(fchunk + 4) == item_end )
            {
              v31 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 480) + 200LL);
              if ( v31 )
                v31(a1, fchunk);
              else
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, fchunk);
            }
          }
          return item_end;
        }
      }
    }
    v28 = *(unsigned int *)(a1 + 16);
    ptr = nullptr;
    v33 = 0;
    get_manual_insn(&ptr, v28);
    v29 = haystack;
    if ( (_QWORD)v33 )
      v29 = (const char *)ptr;
    sub_37CCC0((_QWORD *)a1, 0xFFFFFFFF, nullptr, v29, 0x16u);
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
    goto LABEL_18;
  }
  sub_37E480(a1);
  if ( a2 == 10 && (*(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) & 0xFFFFFFFD) != 0xD )
    sub_4B6F00(a1, 0);
  else
    sub_55F0A0(a1);
  v6 = *(_DWORD *)(a1 + 144);
  BYTE1(v6) &= ~8u;
  *(_DWORD *)(a1 + 144) = v6 | 0x1090;
  v7 = a1;
  *(_DWORD *)(a1 + 56) = (unsigned __int8)sub_3C4B50(a1, 0);
  if ( sub_375980(0x16u, a1, v3) )
  {
    v8 = getinf(9);
    if ( !v8 )
      return get_item_end(*(unsigned int *)(a1 + 16), v7, v9, v10);
  }
  else
  {
    v7 = v3;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 352LL))(a1, v3);
    v8 = getinf(9);
    if ( !v8 )
      return get_item_end(*(unsigned int *)(a1 + 16), v7, v9, v10);
  }
  return *(_DWORD *)(a1 + 16) + (unsigned int)v8;
}

