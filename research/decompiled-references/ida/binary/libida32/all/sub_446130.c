unsigned __int64 __fastcall sub_446130(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // r13
  void *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rdi
  void (*v19)(); // rax
  unsigned int v20; // ebp
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // r9
  unsigned int v24; // ebp
  char v25; // al
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rdi
  void (*v32)(); // rax
  __int64 v33; // rbp
  const char *v34; // r13
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v41; // [rsp+8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+18h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 72) == -1;
  v42 = __readfsqword(0x28u);
  if ( v4 )
  {
    v38 = switch_dbctx(*(int *)(a1 + 8));
    v39 = a1 + 72;
    if ( *(_QWORD *)(a1 + 48) )
      sub_79BC40(v39, v38, *(_QWORD *)(a1 + 40), 0);
    else
      sub_79BC40(v39, v38, haystack, 0);
  }
  v6 = *(_DWORD *)(a1 + 88);
  v7 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 8) != 0 )
  {
    v27 = *(int *)(a2 + 8);
    ptr = nullptr;
    v41 = 0;
    v28 = switch_dbctx(v27);
    v29 = *(unsigned __int8 *)(a2 + 92);
    v30 = a2 + 72;
    if ( (*(_BYTE *)(a2 + 88) & 0x20) != 0 )
      sub_79BAE0(v30, v28, &ptr, 1, a3, (unsigned int)v29 | 0x400);
    else
      sub_79B6F0(v30, v28, &ptr, a3, v29);
    v31 = *(_QWORD *)(a2 + 80);
    if ( v7 != -1 )
    {
      if ( v31 )
      {
        v32 = *(void (**)())(*(_QWORD *)v31 + 64LL);
        if ( v32 != nullsub_46 )
          ((void (__fastcall *)(__int64, void **, _QWORD, _QWORD, _QWORD))v32)(
            v31,
            &ptr,
            *(_QWORD *)(a2 + 64),
            *(unsigned int *)(a2 + 12),
            v7);
      }
    }
    v33 = v41;
    v34 = haystack;
    if ( (_QWORD)v41 )
      v34 = (const char *)ptr;
    v35 = switch_dbctx(*(int *)(a1 + 8));
    v36 = *(unsigned __int8 *)(a1 + 92);
    v37 = a1 + 72;
    if ( (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
      sub_79BB40(v37, v35, v34, v33, a3, v36);
    else
      sub_79B440(v37, v35, a3, v34, v33, v36);
    v13 = ptr;
    if ( ptr )
      goto LABEL_7;
  }
  else if ( (v6 & 0x30) != 0 )
  {
    ptr = nullptr;
    v41 = 0;
    sub_445FE0(a2, (__int64 *)&ptr, a3, v7);
    v8 = v41;
    v9 = ptr;
    v10 = switch_dbctx(*(int *)(a1 + 8));
    v11 = *(unsigned __int8 *)(a1 + 92);
    v12 = a1 + 72;
    if ( (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
      sub_79BB40(v12, v10, v9, v8, a3, v11);
    else
      sub_79B440(v12, v10, a3, v9, v8, v11);
    v13 = ptr;
    if ( ptr )
    {
LABEL_7:
      *(_QWORD *)&v41 = 0;
      qfree(v13);
    }
  }
  else
  {
    v14 = switch_dbctx(*(int *)(a2 + 8));
    v15 = *(unsigned __int8 *)(a2 + 92);
    if ( (*(_BYTE *)(a2 + 89) & 0x10) != 0 )
    {
      BYTE1(v15) = 16;
      v16 = (unsigned __int8)sub_79B3A0(a2 + 72, v14, a3, v15);
    }
    else
    {
      v16 = sub_79B3A0(a2 + 72, v14, a3, v15);
    }
    v17 = *(_DWORD *)(a2 + 88);
    if ( (v17 & 0x2000) != 0 )
      --v16;
    LODWORD(ptr) = v16;
    if ( (v17 & 4) != 0 )
      LODWORD(ptr) = a3 + (_DWORD)ptr;
    if ( (v17 & 0x200) != 0 )
      LODWORD(ptr) = node2ea((unsigned int)ptr);
    v18 = *(_QWORD *)(a2 + 80);
    if ( v7 != -1 )
    {
      if ( v18 )
      {
        v19 = *(void (**)())(*(_QWORD *)v18 + 56LL);
        if ( v19 != nullsub_45 )
          ((void (__fastcall *)(__int64, void **, _QWORD, _QWORD, _QWORD))v19)(
            v18,
            &ptr,
            *(_QWORD *)(a2 + 64),
            *(unsigned int *)(a2 + 12),
            v7);
      }
    }
    v20 = (unsigned int)ptr;
    v21 = switch_dbctx(*(int *)(a1 + 8));
    v22 = *(_DWORD *)(a1 + 88);
    if ( (v22 & 4) != 0 )
      v20 -= a3;
    if ( (v22 & 0x200) != 0 )
    {
      v20 = ea2node(v20);
      v22 = *(_DWORD *)(a1 + 88);
    }
    v23 = *(unsigned __int8 *)(a1 + 92);
    v24 = v20 - (((v22 & 0x2000) == 0) - 1);
    if ( (v22 & 0x1000) != 0 )
    {
      LOBYTE(ptr) = v24;
      v25 = sub_79B440(a1 + 72, v21, a3, &ptr, 1, v23);
    }
    else
    {
      LODWORD(ptr) = v24;
      v25 = sub_79B440(a1 + 72, v21, a3, &ptr, 4, v23);
    }
    if ( !v25 )
    {
      if ( !under_debugger )
        interr(2019);
      BUG();
    }
  }
  *(_BYTE *)(a1 + 94) = 1;
  return v42 - __readfsqword(0x28u);
}

