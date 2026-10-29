_BOOL8 __fastcall sub_45A440(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v6; // ecx
  char *v7; // rdi
  _BOOL8 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // eax
  char *v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rdi
  void (*v22)(); // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdi
  void (*v32)(); // rax
  void *v33; // rbp
  const char *v34; // rsi
  char *v35; // rdi
  char *s1; // [rsp+0h] [rbp-68h] BYREF
  __int128 v37; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v39; // [rsp+28h] [rbp-40h]
  unsigned __int64 v40; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 88);
  v40 = __readfsqword(0x28u);
  if ( (v4 & 8) != 0 )
  {
    v23 = *(int *)(a1 + 8);
    s1 = nullptr;
    v37 = 0;
    v24 = switch_dbctx(v23);
    v25 = *(unsigned __int8 *)(a1 + 92);
    v26 = a1 + 72;
    if ( (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
      sub_7BEED0(v26, v24, &s1, 1, a3, (unsigned int)v25 | 0x400);
    else
      sub_7BEA80(v26, v24, &s1, a3, v25);
    v27 = *(int *)(a2 + 8);
    v28 = *(_DWORD *)(a1 + 12);
    ptr = nullptr;
    v39 = 0;
    v29 = switch_dbctx(v27);
    v30 = *(unsigned __int8 *)(a2 + 92);
    if ( (*(_BYTE *)(a2 + 88) & 0x20) != 0 )
      sub_7BEED0(a2 + 72, v29, &ptr, 1, a3, (unsigned int)v30 | 0x400);
    else
      sub_7BEA80(a2 + 72, v29, &ptr, a3, v30);
    v31 = *(_QWORD *)(a2 + 80);
    if ( v28 != -1 )
    {
      if ( v31 )
      {
        v32 = *(void (**)())(*(_QWORD *)v31 + 64LL);
        if ( v32 != nullsub_67 )
          ((void (__fastcall *)(__int64, void **, _QWORD, _QWORD, _QWORD))v32)(
            v31,
            &ptr,
            *(_QWORD *)(a2 + 64),
            *(unsigned int *)(a2 + 12),
            v28);
      }
    }
    v33 = ptr;
    v34 = (const char *)ptr;
    if ( !(_QWORD)v39 )
      v34 = haystack;
    v35 = (char *)haystack;
    if ( (_QWORD)v37 )
      v35 = s1;
    v8 = strcmp(v35, v34) != 0;
    if ( v33 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v33);
    }
    v7 = s1;
    if ( s1 )
    {
LABEL_12:
      *(_QWORD *)&v37 = 0;
      qfree(v7);
    }
  }
  else if ( (v4 & 0x30) != 0 )
  {
    s1 = nullptr;
    v37 = 0;
    sub_459E80(a1, (__int64 *)&s1, a3, 0xFFFFFFFF);
    v6 = *(_DWORD *)(a1 + 12);
    v39 = 0;
    ptr = nullptr;
    sub_459E80(a2, (__int64 *)&ptr, a3, v6);
    v7 = s1;
    v8 = 1;
    if ( (_QWORD)v37 == (_QWORD)v39 )
    {
      if ( (_QWORD)v37 )
      {
        v9 = 0;
        while ( s1[v9] == *((_BYTE *)ptr + v9) )
        {
          if ( (_QWORD)v37 == ++v9 )
            goto LABEL_53;
        }
        v8 = 1;
      }
      else
      {
LABEL_53:
        v8 = 0;
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v39 = 0;
      qfree(ptr);
      v7 = s1;
    }
    if ( v7 )
      goto LABEL_12;
  }
  else
  {
    v11 = switch_dbctx(*(int *)(a1 + 8));
    v12 = *(unsigned __int8 *)(a1 + 92);
    if ( (*(_BYTE *)(a1 + 89) & 0x10) != 0 )
    {
      BYTE1(v12) = 16;
      v13 = (unsigned __int8)sub_7BE710(a1 + 72, v11, a3, v12);
    }
    else
    {
      v13 = sub_7BE710(a1 + 72, v11, a3, v12);
    }
    v14 = *(_DWORD *)(a1 + 88);
    v15 = (char *)(((v14 & 0x2000) == 0) + v13 - 1);
    if ( (v14 & 4) != 0 )
      v15 += a3;
    if ( (v14 & 0x200) != 0 )
      v15 = (char *)node2ea(v15);
    v16 = *(_DWORD *)(a1 + 12);
    v17 = switch_dbctx(*(int *)(a2 + 8));
    v18 = *(unsigned __int8 *)(a2 + 92);
    if ( (*(_BYTE *)(a2 + 89) & 0x10) != 0 )
    {
      BYTE1(v18) = 16;
      v19 = (unsigned __int8)sub_7BE710(a2 + 72, v17, a3, v18);
    }
    else
    {
      v19 = sub_7BE710(a2 + 72, v17, a3, v18);
    }
    v20 = *(_DWORD *)(a2 + 88);
    if ( (v20 & 0x2000) != 0 )
      --v19;
    ptr = (void *)v19;
    if ( (v20 & 4) != 0 )
      ptr = (char *)ptr + a3;
    if ( (v20 & 0x200) != 0 )
      ptr = (void *)node2ea(ptr);
    v21 = *(_QWORD *)(a2 + 80);
    if ( v16 != -1 )
    {
      if ( v21 )
      {
        v22 = *(void (**)())(*(_QWORD *)v21 + 56LL);
        if ( v22 != nullsub_66 )
          ((void (__fastcall *)(__int64, void **, _QWORD, _QWORD, _QWORD))v22)(
            v21,
            &ptr,
            *(_QWORD *)(a2 + 64),
            *(unsigned int *)(a2 + 12),
            v16);
      }
    }
    return ptr != v15;
  }
  return v8;
}
