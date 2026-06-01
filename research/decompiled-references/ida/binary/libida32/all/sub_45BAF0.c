__int64 __fastcall sub_45BAF0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v8; // rdi
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rsi
  const char *v13; // rsi
  size_t v14; // rdi
  void *v15; // rax
  const void *v16; // rsi
  int v17; // r9d
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rsi
  size_t v22; // rdi
  void *v23; // rax
  const void *v24; // rsi
  int v25; // r9d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v30; // rdi
  void *v31; // rax
  const void *v32; // rsi
  int v33; // r9d
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+10h] [rbp-78h] BYREF
  void *v38; // [rsp+18h] [rbp-70h] BYREF
  __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v8 = *(int *)(a2 + 4LL * a3 + 16);
  v43 = __readfsqword(0x28u);
  v10 = switch_dbctx(v8);
  v11 = sub_3C0CC0(*(_QWORD *)(v10 + 1480), a4);
  sub_3CB100(*(__int64 **)(v10 + 1480), a4, v11 & unk_2389830 | *(_DWORD *)a1 & ~(unk_2389830 | unk_2389834));
  if ( (*(_BYTE *)a1 & 1) != 0 && (v12 = *(unsigned int *)(a1 + 4), (_DWORD)v12 != -1) )
    set_source_linnum(a4, v12);
  else
    del_source_linnum(a4);
  v13 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v13 = *(const char **)(a1 + 8);
  set_manual_insn();
  if ( (*(_DWORD *)a1 & 0x2000800) != 0 )
  {
    v37 = 0;
    if ( *(_QWORD *)(a1 + 40) <= 1u )
    {
      clear_tinfo_t(&v37);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 40);
      ptr = nullptr;
      v42 = 0;
      v15 = (void *)qalloc_or_throw(v14, v13);
      v16 = *(const void **)(a1 + 32);
      ptr = v15;
      *((_QWORD *)&v42 + 1) = v14;
      memcpy(v15, v16, v14);
      *(_QWORD *)&v42 = v14;
      if ( a3 != -1 )
      {
        v18 = *(_DWORD *)(a1 + 128);
        if ( a3 != v18 )
        {
          sub_483310(a2, (unsigned int)&ptr, v18, a3, 1, v17);
          switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
        }
      }
      v38 = ptr;
      v19 = 0;
      if ( *(_QWORD *)(a1 + 88) > 1u )
        v19 = *(_QWORD *)(a1 + 80);
      v39 = v19;
      v20 = 0;
      if ( *(_QWORD *)(a1 + 112) > 1u )
        v20 = *(_QWORD *)(a1 + 104);
      v40 = v20;
      deserialize_tinfo(&v37, 0, &v38, &v39, &v40, 0);
      if ( ptr )
      {
        *(_QWORD *)&v42 = 0;
        qfree(ptr);
      }
    }
    v21 = (const char *)&v37;
    set_tinfo(a4, &v37);
    if ( (*(_BYTE *)(a1 + 1) & 8) == 0 )
    {
      v21 = (_BYTE *)(elf_gnu_hash_indexes + 1368);
      clr_abits(a4, 2048);
    }
    clear_tinfo_t(&v37);
  }
  else
  {
    v21 = nullptr;
    set_tinfo(a4, 0);
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x10) != 0 )
  {
    v37 = 0;
    if ( *(_QWORD *)(a1 + 144) <= 1u )
    {
      clear_tinfo_t(&v37);
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 144);
      ptr = nullptr;
      v42 = 0;
      v23 = (void *)qalloc_or_throw(v22, v21);
      v24 = *(const void **)(a1 + 136);
      ptr = v23;
      *((_QWORD *)&v42 + 1) = v22;
      memcpy(v23, v24, v22);
      *(_QWORD *)&v42 = v22;
      if ( a3 != -1 )
      {
        v26 = *(_DWORD *)(a1 + 232);
        if ( a3 != v26 )
        {
          sub_483310(a2, (unsigned int)&ptr, v26, a3, 1, v25);
          switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
        }
      }
      v38 = ptr;
      v27 = 0;
      if ( *(_QWORD *)(a1 + 192) > 1u )
        v27 = *(_QWORD *)(a1 + 184);
      v39 = v27;
      v28 = 0;
      if ( *(_QWORD *)(a1 + 216) > 1u )
        v28 = *(_QWORD *)(a1 + 208);
      v40 = v28;
      deserialize_tinfo(&v37, 0, &v38, &v39, &v40, 0);
      if ( ptr )
      {
        *(_QWORD *)&v42 = 0;
        qfree(ptr);
      }
    }
    set_op_tinfo(a4, 0, &v37);
    clear_tinfo_t(&v37);
    if ( (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
      goto LABEL_32;
  }
  else
  {
    set_op_tinfo(a4, 0, 0);
    if ( (*(_BYTE *)(a1 + 1) & 0x20) == 0 )
    {
LABEL_32:
      set_op_tinfo(a4, 1, 0);
      return set_item_color(a4, *(unsigned int *)(a1 + 344));
    }
  }
  v37 = 0;
  if ( *(_QWORD *)(a1 + 248) <= 1u )
  {
    clear_tinfo_t(&v37);
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 248);
    ptr = nullptr;
    v42 = 0;
    v31 = (void *)qalloc_or_throw(v30, nullptr);
    v32 = *(const void **)(a1 + 240);
    ptr = v31;
    *((_QWORD *)&v42 + 1) = v30;
    memcpy(v31, v32, v30);
    *(_QWORD *)&v42 = v30;
    if ( a3 != -1 )
    {
      v34 = *(_DWORD *)(a1 + 336);
      if ( a3 != v34 )
      {
        sub_483310(a2, (unsigned int)&ptr, v34, a3, 1, v33);
        switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
      }
    }
    v38 = ptr;
    v35 = 0;
    if ( *(_QWORD *)(a1 + 296) > 1u )
      v35 = *(_QWORD *)(a1 + 288);
    v39 = v35;
    v36 = 0;
    if ( *(_QWORD *)(a1 + 320) > 1u )
      v36 = *(_QWORD *)(a1 + 312);
    v40 = v36;
    deserialize_tinfo(&v37, 0, &v38, &v39, &v40, 0);
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      qfree(ptr);
    }
  }
  set_op_tinfo(a4, 1, &v37);
  clear_tinfo_t(&v37);
  return set_item_color(a4, *(unsigned int *)(a1 + 344));
}

