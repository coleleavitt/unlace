__int64 __fastcall sub_46FF00(__int64 a1, __int64 a2, int a3, void *a4)
{
  __int64 v4; // r15
  __int64 v8; // rdi
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rsi
  const char *v13; // rsi
  size_t v14; // rdi
  void *v15; // rax
  const void *v16; // rsi
  int v17; // r9d
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // rdi
  void *v22; // rax
  const void *v23; // rsi
  int v24; // r9d
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v29; // rdi
  void *v30; // rax
  const void *v31; // rsi
  int v32; // r9d
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+10h] [rbp-78h] BYREF
  void *v37; // [rsp+18h] [rbp-70h] BYREF
  __int64 v38; // [rsp+20h] [rbp-68h] BYREF
  __int64 v39; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v8 = *(int *)(a2 + 4LL * a3 + 16);
  v42 = __readfsqword(0x28u);
  v10 = switch_dbctx(v8);
  v11 = (unsigned int)sub_3C5DC0(*(_QWORD *)(v10 + 1672), (unsigned __int64)a4);
  sub_3D0A60(*(__int64 **)(v10 + 1672), a4, v11 & unk_23AD870 | *(_DWORD *)a1 & ~(unk_23AD870 | unk_23AD874));
  if ( (*(_BYTE *)a1 & 1) != 0 && (v12 = *(_QWORD *)(a1 + 8), v12 != -1) )
    set_source_linnum(a4, v12);
  else
    del_source_linnum(a4);
  v13 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v13 = *(const char **)(a1 + 16);
  set_manual_insn(a4, v13);
  if ( (*(_DWORD *)a1 & 0x2000800) != 0 )
  {
    v36 = 0;
    if ( *(_QWORD *)(a1 + 48) <= 1u )
    {
      clear_tinfo_t(&v36);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 48);
      ptr = nullptr;
      v41 = 0;
      v15 = (void *)qalloc_or_throw(v14);
      v16 = *(const void **)(a1 + 40);
      ptr = v15;
      *((_QWORD *)&v41 + 1) = v14;
      memcpy(v15, v16, v14);
      *(_QWORD *)&v41 = v14;
      if ( a3 != -1 )
      {
        v18 = *(_DWORD *)(a1 + 136);
        if ( a3 != v18 )
        {
          sub_498010(a2, (unsigned int)&ptr, v18, a3, 1, v17);
          switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
        }
      }
      v37 = ptr;
      v19 = 0;
      if ( *(_QWORD *)(a1 + 96) > 1u )
        v19 = *(_QWORD *)(a1 + 88);
      v38 = v19;
      v20 = 0;
      if ( *(_QWORD *)(a1 + 120) > 1u )
        v20 = *(_QWORD *)(a1 + 112);
      v39 = v20;
      deserialize_tinfo(&v36, 0, &v37, &v38, &v39, 0);
      if ( ptr )
      {
        *(_QWORD *)&v41 = 0;
        qfree(ptr);
      }
    }
    set_tinfo(a4, &v36);
    if ( (*(_BYTE *)(a1 + 1) & 8) == 0 )
      clr_abits(a4, 2048);
    clear_tinfo_t(&v36);
  }
  else
  {
    set_tinfo(a4, 0);
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x10) != 0 )
  {
    v36 = 0;
    if ( *(_QWORD *)(a1 + 152) <= 1u )
    {
      clear_tinfo_t(&v36);
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 152);
      ptr = nullptr;
      v41 = 0;
      v22 = (void *)qalloc_or_throw(v21);
      v23 = *(const void **)(a1 + 144);
      ptr = v22;
      *((_QWORD *)&v41 + 1) = v21;
      memcpy(v22, v23, v21);
      *(_QWORD *)&v41 = v21;
      if ( a3 != -1 )
      {
        v25 = *(_DWORD *)(a1 + 240);
        if ( a3 != v25 )
        {
          sub_498010(a2, (unsigned int)&ptr, v25, a3, 1, v24);
          switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
        }
      }
      v37 = ptr;
      v26 = 0;
      if ( *(_QWORD *)(a1 + 200) > 1u )
        v26 = *(_QWORD *)(a1 + 192);
      v38 = v26;
      v27 = 0;
      if ( *(_QWORD *)(a1 + 224) > 1u )
        v27 = *(_QWORD *)(a1 + 216);
      v39 = v27;
      deserialize_tinfo(&v36, 0, &v37, &v38, &v39, 0);
      if ( ptr )
      {
        *(_QWORD *)&v41 = 0;
        qfree(ptr);
      }
    }
    set_op_tinfo(a4, 0, &v36);
    clear_tinfo_t(&v36);
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
      return set_item_color(a4, *(unsigned int *)(a1 + 352));
    }
  }
  v36 = 0;
  if ( *(_QWORD *)(a1 + 256) <= 1u )
  {
    clear_tinfo_t(&v36);
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 256);
    ptr = nullptr;
    v41 = 0;
    v30 = (void *)qalloc_or_throw(v29);
    v31 = *(const void **)(a1 + 248);
    ptr = v30;
    *((_QWORD *)&v41 + 1) = v29;
    memcpy(v30, v31, v29);
    *(_QWORD *)&v41 = v29;
    if ( a3 != -1 )
    {
      v33 = *(_DWORD *)(a1 + 344);
      if ( a3 != v33 )
      {
        sub_498010(a2, (unsigned int)&ptr, v33, a3, 1, v32);
        switch_dbctx(*(int *)(a2 + 4 * v4 + 16));
      }
    }
    v37 = ptr;
    v34 = 0;
    if ( *(_QWORD *)(a1 + 304) > 1u )
      v34 = *(_QWORD *)(a1 + 296);
    v38 = v34;
    v35 = 0;
    if ( *(_QWORD *)(a1 + 328) > 1u )
      v35 = *(_QWORD *)(a1 + 320);
    v39 = v35;
    deserialize_tinfo(&v36, 0, &v37, &v38, &v39, 0);
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
    }
  }
  set_op_tinfo(a4, 1, &v36);
  clear_tinfo_t(&v36);
  return set_item_color(a4, *(unsigned int *)(a1 + 352));
}
