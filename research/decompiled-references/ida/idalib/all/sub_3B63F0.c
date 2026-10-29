__int64 __fastcall sub_3B63F0(__int64 a1, unsigned __int8 a2)
{
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  size_t v8; // r13
  const char *v9; // rsi
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // r13d
  int v20; // r15d
  const char *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // r13d
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ebx
  __int64 v31; // rbp
  __int64 v32; // rax
  const char *v33; // rdi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  void *v37; // r13
  void *v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // [rsp+Ch] [rbp-ECh]
  void *v41; // [rsp+10h] [rbp-E8h] BYREF
  __int128 v42; // [rsp+18h] [rbp-E0h]
  void *v43; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v44; // [rsp+38h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-A8h] BYREF
  void *src; // [rsp+58h] [rbp-A0h]
  __int128 v47; // [rsp+60h] [rbp-98h]
  __m128i v48; // [rsp+70h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-78h]
  __int64 v50; // [rsp+88h] [rbp-70h]
  __int64 v51; // [rsp+90h] [rbp-68h]
  __int64 v52; // [rsp+98h] [rbp-60h]
  __int64 v53; // [rsp+A0h] [rbp-58h]
  __int64 v54; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+B8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v5 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[35])(
                    bpt_kernel_interface,
                    a1 + 32);
  v6 = (__int64)v5;
  if ( !v5 )
    return 0;
  v7 = *v5;
  src = nullptr;
  v47 = 0;
  v8 = *(_QWORD *)(v6 + 16);
  v45 = v7;
  if ( v8 )
  {
    *((_QWORD *)&v47 + 1) = v8;
    src = (void *)qalloc_or_throw(v8);
    memcpy(src, *(const void **)(v6 + 8), v8);
    *(_QWORD *)&v47 = v8;
  }
  v9 = haystack;
  v10 = *(_QWORD *)(a1 + 16) == 0;
  v49 = *(_QWORD *)(v6 + 48);
  v11 = *(_QWORD *)(v6 + 56);
  v48 = _mm_loadu_si128((const __m128i *)(v6 + 32));
  v50 = v11;
  v51 = *(_QWORD *)(v6 + 64);
  v52 = *(_QWORD *)(v6 + 72);
  v53 = *(_QWORD *)(v6 + 80);
  v54 = *(_QWORD *)(v6 + 88);
  if ( !v10 )
    v9 = *(const char **)(a1 + 8);
  sub_3AEB40(v6, v9);
  v12 = *(_DWORD *)(a1 + 72);
  v41 = nullptr;
  v42 = 0;
  v13 = -1;
  v14 = v12 >> 28;
  v15 = (v12 >> 4) & 1;
  if ( *(_DWORD *)(v6 + 44) != 3 )
    v13 = *(_QWORD *)(v6 + 56);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, void **, __int64, __int64))(*(_QWORD *)qword_2C819A8 + 96LL))(
          qword_2C819A8,
          v6,
          v13,
          &v41,
          v15,
          v14);
  if ( v16 <= 0 )
  {
LABEL_27:
    *(_DWORD *)(v6 + 72) = v52;
    if ( (__int64 *)v6 != &v45 )
    {
      v31 = v47;
      if ( (unsigned __int64)v47 > 1 )
      {
        v37 = src;
        v38 = *(void **)(v6 + 8);
        if ( *(_QWORD *)(v6 + 24) < (unsigned __int64)v47 )
        {
          v39 = qvector_reserve(v6 + 8, *(_QWORD *)(v6 + 8), v47, 1);
          *(_QWORD *)(v6 + 8) = v39;
          v38 = (void *)v39;
        }
        *(_QWORD *)(v6 + 16) = v31;
        memmove(v38, v37, v31 - 1);
        *(_BYTE *)(*(_QWORD *)(v6 + 8) + v31 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v6 + 16) = 0;
      }
    }
    *(_DWORD *)(v6 + 76) &= ~0x20u;
    *(_DWORD *)(v6 + 80) = v53;
    *(_DWORD *)(v6 + 64) = v51;
    sub_368890();
  }
  v19 = *(_DWORD *)(a1 + 72);
  v20 = v19;
  LODWORD(v21) = v19 & 0x10;
  v22 = ((unsigned int)v21 >> 4) & 1;
  if ( v16 != 2 && (v19 & 0x10) != 0 )
    sub_368890();
  if ( !dbg || (*(_BYTE *)(dbg + 34LL) & 4) != 0 )
  {
    LODWORD(v23) = *(_DWORD *)(v6 + 72);
    if ( ((v19 & 0x10) != 0) == (unsigned __int8)(v23 & 0x10) >> 4 )
    {
      if ( (*(_DWORD *)(v6 + 72) & 0x10) == 0 )
        goto LABEL_16;
    }
    else
    {
      if ( (v19 & 0x10) == 0 )
        goto LABEL_14;
      v23 = (unsigned int)v23 | 0x10;
      *(_DWORD *)(v6 + 72) = v23;
      if ( (*(_BYTE *)(v6 + 76) & 0x18) != 0 )
        goto LABEL_52;
      v19 = *(_DWORD *)(a1 + 72);
    }
    v32 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v6 + 16) )
    {
      v21 = *(const char **)(v6 + 8);
      v33 = haystack;
      if ( !v32 )
        goto LABEL_47;
    }
    else
    {
      v21 = haystack;
      if ( !v32 )
        goto LABEL_16;
    }
    v33 = *(const char **)(a1 + 8);
LABEL_47:
    v40 = v23;
    v34 = strcmp(v33, v21);
    v23 = v40;
    if ( !v34 )
      goto LABEL_16;
LABEL_53:
    v24 = v19 & 8;
    goto LABEL_17;
  }
  if ( (v19 & 0x10) != 0 )
    sub_368890();
  LODWORD(v23) = *(_DWORD *)(v6 + 72);
  if ( (v23 & 0x10) == 0 )
    goto LABEL_15;
LABEL_14:
  v23 = (unsigned int)v23 & 0xFFFFFFEF;
  *(_DWORD *)(v6 + 72) = v23;
  if ( (*(_BYTE *)(v6 + 76) & 0x18) != 0 )
  {
LABEL_52:
    v19 = *(_DWORD *)(a1 + 72);
    goto LABEL_53;
  }
LABEL_15:
  v19 = *(_DWORD *)(a1 + 72);
LABEL_16:
  v24 = v19 & 8;
  v23 = ((unsigned int)v23 >> 3) & 1;
  if ( (_BYTE)v23 != (unsigned __int8)(v24 >> 3)
    || *(_DWORD *)(a1 + 80) != *(_DWORD *)(v6 + 80)
    || *(_DWORD *)(a1 + 64) != *(_DWORD *)(v6 + 64) )
  {
LABEL_17:
    if ( v24 || (LODWORD(v21) = 0, v25 = sub_3B59C0(v6, 0, v23, v22, v17, v18), v25 == 1) )
      v25 = sub_3B4CE0(v6, (int)v21, v23, v22, v17, v18);
    if ( v25 <= 0 )
    {
LABEL_26:
      sub_35A910((__int64 *)&v41);
      goto LABEL_27;
    }
    *(_DWORD *)(v6 + 68) = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(v6 + 72) = *(_DWORD *)(v6 + 72) & 8 | v20 & 0xFFFFFFF7;
    *(_DWORD *)(v6 + 80) = *(_DWORD *)(a1 + 80);
    v26 = *(unsigned int *)(a1 + 64);
    *(_DWORD *)(v6 + 64) = v26;
    if ( (*(_BYTE *)(a1 + 72) & 8) != 0 )
    {
      LODWORD(v21) = 1;
      v35 = sub_3B59C0(v6, 1u, v26, v22, v17, v18);
      if ( v35 != 1 )
        goto LABEL_50;
    }
    else if ( v25 != 1 )
    {
      goto LABEL_22;
    }
    v35 = sub_3B2700(v6, (int)v21);
LABEL_50:
    if ( v35 > 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  v36 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(v6 + 72) = v20;
  *(_DWORD *)(v6 + 68) = v36;
  *(_DWORD *)(v6 + 80) = *(_DWORD *)(a1 + 80);
LABEL_22:
  v27 = qword_2C819A8;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)qword_2C819A8 + 16LL))(
    qword_2C819A8,
    2,
    v6,
    0,
    (2 * a2) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(qword_2CCB598 + 1576) + 308LL));
  if ( !a2 )
  {
    if ( (unsigned __int8)must_journal(v27, 2, v28) )
    {
      v44 = 0;
      v43 = nullptr;
      sub_3ACE90((__int64 *)&v43, 0, (__int64)&v45, nullptr);
      sub_3ACE90((__int64 *)&v43, 0, a1, nullptr);
      add_undo_record(192, v43, v44);
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
    }
  }
  v29 = 1;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( src )
  {
    *(_QWORD *)&v47 = 0;
    qfree(src);
  }
  return v29;
}
