__int64 __fastcall sub_3B1BA0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // r12
  __int64 bpt_kernel_interface; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  size_t v12; // r13
  bool v13; // zf
  const char *v14; // rsi
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  int v22; // r13d
  int v23; // r15d
  const char *v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r13d
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned int v32; // ebx
  __int64 v34; // rbp
  __int64 v35; // rax
  const char *v36; // rdi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  void *v40; // r13
  void *v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // [rsp+Ch] [rbp-DCh]
  void *v44; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v45; // [rsp+18h] [rbp-D0h]
  void *v46; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-B0h]
  __int64 v48; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+58h] [rbp-90h]
  __int128 v50; // [rsp+60h] [rbp-88h]
  __int64 v51; // [rsp+70h] [rbp-78h]
  int v52; // [rsp+78h] [rbp-70h]
  __int64 v53; // [rsp+7Ch] [rbp-6Ch]
  __int64 v54; // [rsp+84h] [rbp-64h]
  __int64 v55; // [rsp+8Ch] [rbp-5Ch]
  __int64 v56; // [rsp+94h] [rbp-54h]
  __int64 v57; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = a2;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 280LL))(
                    bpt_kernel_interface,
                    a1 + 32);
  v10 = (__int64)v5;
  if ( !v5 )
    return 0;
  v11 = *v5;
  src = nullptr;
  v50 = 0;
  v12 = *(_QWORD *)(v10 + 16);
  v48 = v11;
  if ( v12 )
  {
    *((_QWORD *)&v50 + 1) = v12;
    src = (void *)qalloc_or_throw(v12, a1 + 32, v6, v7, v8, v9);
    memcpy(src, *(const void **)(v10 + 8), v12);
    *(_QWORD *)&v50 = v12;
  }
  v13 = *(_QWORD *)(a1 + 16) == 0;
  v14 = haystack;
  v51 = *(_QWORD *)(v10 + 32);
  v52 = *(_DWORD *)(v10 + 40);
  v53 = *(_QWORD *)(v10 + 44);
  v54 = *(_QWORD *)(v10 + 52);
  v55 = *(_QWORD *)(v10 + 60);
  v56 = *(_QWORD *)(v10 + 68);
  v57 = *(_QWORD *)(v10 + 76);
  if ( !v13 )
    v14 = *(const char **)(a1 + 8);
  sub_3AA420(v10, v14);
  v15 = *(_DWORD *)(a1 + 64);
  v44 = nullptr;
  v45 = 0;
  v16 = 0xFFFFFFFFLL;
  v17 = v15 >> 28;
  v18 = (v15 >> 4) & 1;
  if ( *(_DWORD *)(v10 + 40) != 3 )
    v16 = *(unsigned int *)(v10 + 52);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, void **, __int64, __int64))(*(_QWORD *)qword_2C57988 + 96LL))(
          qword_2C57988,
          v10,
          v16,
          &v44,
          v18,
          v17);
  if ( v19 <= 0 )
  {
LABEL_27:
    *(_DWORD *)(v10 + 64) = HIDWORD(v55);
    if ( (__int64 *)v10 != &v48 )
    {
      v34 = v50;
      if ( (unsigned __int64)v50 > 1 )
      {
        v40 = src;
        v41 = *(void **)(v10 + 8);
        if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)v50 )
        {
          v42 = qvector_reserve(v10 + 8, *(_QWORD *)(v10 + 8), v50, 1);
          *(_QWORD *)(v10 + 8) = v42;
          v41 = (void *)v42;
        }
        *(_QWORD *)(v10 + 16) = v34;
        memmove(v41, v40, v34 - 1);
        *(_BYTE *)(*(_QWORD *)(v10 + 8) + v34 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 16) = 0;
      }
    }
    *(_DWORD *)(v10 + 68) &= ~0x20u;
    *(_DWORD *)(v10 + 72) = HIDWORD(v56);
    *(_DWORD *)(v10 + 56) = HIDWORD(v54);
    sub_365330();
  }
  v22 = *(_DWORD *)(a1 + 64);
  v23 = v22;
  LODWORD(v24) = v22 & 0x10;
  v25 = ((unsigned int)v24 >> 4) & 1;
  if ( v19 != 2 && (v22 & 0x10) != 0 )
    sub_365330();
  if ( !dbg || (*(_BYTE *)(dbg + 34LL) & 4) != 0 )
  {
    LODWORD(v26) = *(_DWORD *)(v10 + 64);
    if ( ((v22 & 0x10) != 0) == (unsigned __int8)(v26 & 0x10) >> 4 )
    {
      if ( (*(_DWORD *)(v10 + 64) & 0x10) == 0 )
        goto LABEL_16;
    }
    else
    {
      if ( (v22 & 0x10) == 0 )
        goto LABEL_14;
      v26 = (unsigned int)v26 | 0x10;
      *(_DWORD *)(v10 + 64) = v26;
      if ( (*(_BYTE *)(v10 + 68) & 0x18) != 0 )
        goto LABEL_52;
      v22 = *(_DWORD *)(a1 + 64);
    }
    v35 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v10 + 16) )
    {
      v24 = *(const char **)(v10 + 8);
      v36 = haystack;
      if ( !v35 )
        goto LABEL_47;
    }
    else
    {
      v24 = haystack;
      if ( !v35 )
        goto LABEL_16;
    }
    v36 = *(const char **)(a1 + 8);
LABEL_47:
    v43 = v26;
    v37 = strcmp(v36, v24);
    v26 = v43;
    if ( !v37 )
      goto LABEL_16;
LABEL_53:
    v27 = v22 & 8;
    goto LABEL_17;
  }
  if ( (v22 & 0x10) != 0 )
    sub_365330();
  LODWORD(v26) = *(_DWORD *)(v10 + 64);
  if ( (v26 & 0x10) == 0 )
    goto LABEL_15;
LABEL_14:
  v26 = (unsigned int)v26 & 0xFFFFFFEF;
  *(_DWORD *)(v10 + 64) = v26;
  if ( (*(_BYTE *)(v10 + 68) & 0x18) != 0 )
  {
LABEL_52:
    v22 = *(_DWORD *)(a1 + 64);
    goto LABEL_53;
  }
LABEL_15:
  v22 = *(_DWORD *)(a1 + 64);
LABEL_16:
  v27 = v22 & 8;
  v26 = ((unsigned int)v26 >> 3) & 1;
  if ( (_BYTE)v26 != (unsigned __int8)(v27 >> 3)
    || *(_DWORD *)(a1 + 72) != *(_DWORD *)(v10 + 72)
    || *(_DWORD *)(a1 + 56) != *(_DWORD *)(v10 + 56) )
  {
LABEL_17:
    if ( v27 || (LODWORD(v24) = 0, v28 = sub_3B1170(v10, 0, v26, v25, v20, v21), v28 == 1) )
      v28 = sub_3B04E0(v10, (int)v24, v26, v25, v20, v21);
    if ( v28 <= 0 )
    {
LABEL_26:
      sub_357520((__int64 *)&v44);
      goto LABEL_27;
    }
    *(_DWORD *)(v10 + 60) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(v10 + 64) = *(_DWORD *)(v10 + 64) & 8 | v23 & 0xFFFFFFF7;
    *(_DWORD *)(v10 + 72) = *(_DWORD *)(a1 + 72);
    v29 = *(unsigned int *)(a1 + 56);
    *(_DWORD *)(v10 + 56) = v29;
    if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
    {
      LODWORD(v24) = 1;
      v38 = sub_3B1170(v10, 1u, v29, v25, v20, v21);
      if ( v38 != 1 )
        goto LABEL_50;
    }
    else if ( v28 != 1 )
    {
      goto LABEL_22;
    }
    v38 = sub_3AE000(v10, (int)v24);
LABEL_50:
    if ( v38 > 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  v39 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(v10 + 64) = v23;
  *(_DWORD *)(v10 + 60) = v39;
  *(_DWORD *)(v10 + 72) = *(_DWORD *)(a1 + 72);
LABEL_22:
  v30 = qword_2C57988;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)qword_2C57988 + 16LL))(
    qword_2C57988,
    2,
    v10,
    0,
    (2 * v3) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(qword_2CA1698 + 1384) + 308LL));
  if ( !v3 )
  {
    if ( (unsigned __int8)must_journal(v30, 2, v31) )
    {
      v47 = 0;
      v46 = nullptr;
      sub_3A87B0((__int64 *)&v46, 0, (__int64)&v48, nullptr);
      sub_3A87B0((__int64 *)&v46, 0, a1, nullptr);
      add_undo_record(192, v46, v47);
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree(v46);
      }
    }
  }
  v32 = 1;
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    qfree(src);
  }
  return v32;
}

