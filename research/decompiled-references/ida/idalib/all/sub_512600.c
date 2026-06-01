unsigned __int64 __fastcall sub_512600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v8; // r12
  char *v9; // rdi
  char *v10; // rdx
  __int64 v11; // rax
  size_t v12; // r8
  __int64 v13; // r15
  unsigned __int64 v14; // r9
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // r15
  size_t v19; // r8
  unsigned __int64 v20; // r9
  char *v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v26; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v28[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v29[8]; // [rsp+38h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  if ( (int)a3 <= 0 )
    return v29[0] - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1760);
  v4 = a3;
  v5 = (int)a3;
  if ( (unsigned __int64)(int)a3 >= *(_QWORD *)(v3 + 152) )
    return v29[0] - __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    v26 = 0;
    ptr = nullptr;
    v11 = pack_dd(src, v28, v4) - (_QWORD)src;
    v12 = v11;
    if ( !v11 )
      goto LABEL_17;
    v13 = v26;
    v14 = v26 + v11;
    if ( __CFADD__((_QWORD)v26, v11) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = (char *)ptr;
    v16 = v26;
    if ( *((_QWORD *)&v26 + 1) < v14 )
    {
      v23 = v14;
      n = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v15 = (char *)ptr;
      v12 = n;
      v16 = v26;
      v14 = v23;
    }
    n = v12;
    v23 = v14;
    memset(&v15[v16], 0, v14 - v16);
    v12 = n;
    *(_QWORD *)&v26 = v23;
LABEL_16:
    memcpy((char *)ptr + v13, src, v12);
LABEL_17:
    v17 = pack_dq(src, v29, a2) - (_QWORD)src;
    v18 = v17;
    if ( !v17 )
      goto LABEL_23;
    v19 = v26;
    v20 = v26 + v17;
    if ( __CFADD__((_QWORD)v26, v17) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = (char *)ptr;
    v22 = v26;
    if ( *((_QWORD *)&v26 + 1) < v20 )
    {
      v23 = v20;
      n = v26;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
      v21 = (char *)ptr;
      v19 = n;
      v22 = v26;
      v20 = v23;
    }
    n = v19;
    v23 = v20;
    memset(&v21[v22], 0, v20 - v22);
    v19 = n;
    *(_QWORD *)&v26 = v23;
LABEL_22:
    memcpy((char *)ptr + v19, src, v18);
LABEL_23:
    add_undo_record(128, ptr, v26);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
  }
  v8 = *(_QWORD *)(v3 + 144) + 56 * v5;
  v9 = *(char **)(v8 + 24);
  v10 = &v9[8 * *(_QWORD *)(v8 + 32)];
  if ( v9 == v10 )
    goto LABEL_25;
  while ( *(_QWORD *)v9 != a2 )
  {
    v9 += 8;
    if ( v10 == v9 )
      goto LABEL_25;
  }
  if ( v10 == v9 )
  {
LABEL_25:
    if ( !under_debugger )
      interr(1248);
    BUG();
  }
  memmove(v9, v9 + 8, v10 - v9 - 8);
  --*(_QWORD *)(v8 + 32);
  return sub_512070(v3, v4);
}
