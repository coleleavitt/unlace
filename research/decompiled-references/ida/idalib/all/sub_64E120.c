unsigned __int64 __fastcall sub_64E120(void **a1, __int64 a2, const char *a3, const char *a4, char a5, int a6)
{
  __int64 v10; // r14
  size_t v12; // r13
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  _BYTE *v19; // rax
  size_t v20; // r8
  __int64 v21; // r9
  size_t v22; // r10
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r10
  size_t v27; // r8
  unsigned __int64 v28; // r9
  char *v29; // rsi
  __int64 v30; // rax
  int v31; // [rsp+Ch] [rbp-9Ch]
  void *src; // [rsp+10h] [rbp-98h]
  _QWORD *v33; // [rsp+18h] [rbp-90h]
  void **p_ptr; // [rsp+20h] [rbp-88h]
  size_t v35; // [rsp+28h] [rbp-80h]
  size_t n; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v39; // [rsp+48h] [rbp-60h]
  _BYTE v40[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v41[8]; // [rsp+68h] [rbp-40h] BYREF

  v31 = a6;
  v41[0] = __readfsqword(0x28u);
  if ( a4 != nullptr && a3 != nullptr && a2 )
  {
    v10 = *(_QWORD *)(a2 + 72);
    src = *a1;
    v12 = strlen(a3);
    v13 = v12 + strlen(a4) + 4;
    if ( !(unsigned __int8)must_journal(a4, a2, v14)
      || (v15 = *((_QWORD *)src + 209), *(_QWORD *)v10) && *(_QWORD *)v10 != *(_QWORD *)(v15 + 8) )
    {
LABEL_7:
      v16 = sub_64B9F0(v10, v13);
      v17 = v16 + v13;
      v18 = qstpncpy(v16, a3, v13);
      *(_BYTE *)(v18 + 1) = a5;
      *(_BYTE *)(v18 + 2) = v31;
      qstpncpy(v18 + 3, a4, v17 - (v18 + 3));
      *(_DWORD *)(a2 + 32) |= 0x40u;
      return v41[0] - __readfsqword(0x28u);
    }
    ptr = nullptr;
    p_ptr = &ptr;
    v39 = 0;
    sub_64A030(v15, (__int64 *)&ptr, (__int64 *)v10, 0);
    v33 = v41;
    src = v40;
    v19 = (_BYTE *)pack_dd(v40, v41, *(unsigned int *)(v10 + 20));
    v20 = v19 - v40;
    if ( v19 == v40 )
    {
LABEL_14:
      v25 = pack_dd(src, v33, (unsigned int)v13) - (_QWORD)src;
      v26 = v25;
      if ( !v25 )
        goto LABEL_20;
      v27 = v39;
      v28 = v25 + v39;
      if ( __CFADD__(v25, (_QWORD)v39) )
      {
        if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_19;
        }
        v28 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v29 = (char *)ptr;
      v30 = v39;
      if ( *((_QWORD *)&v39 + 1) < v28 )
      {
        n = v26;
        v35 = v39;
        v33 = (_QWORD *)v28;
        ptr = (void *)qvector_reserve(p_ptr, ptr, v28, 1);
        v29 = (char *)ptr;
        v26 = n;
        v30 = v39;
        v27 = v35;
        v28 = (unsigned __int64)v33;
      }
      v35 = v26;
      p_ptr = (void **)v27;
      v33 = (_QWORD *)v28;
      memset(&v29[v30], 0, v28 - v30);
      v27 = (size_t)p_ptr;
      v26 = v35;
      *(_QWORD *)&v39 = v33;
LABEL_19:
      memcpy((char *)ptr + v27, src, v26);
LABEL_20:
      add_undo_record(142, ptr, v39);
      if ( ptr )
      {
        *(_QWORD *)&v39 = 0;
        qfree(ptr);
      }
      goto LABEL_7;
    }
    v21 = v39;
    v22 = v39 + v20;
    if ( __CFADD__((_QWORD)v39, v20) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_13;
      }
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = (char *)ptr;
    v24 = v39;
    if ( *((_QWORD *)&v39 + 1) < v22 )
    {
      v37 = v39;
      n = v20;
      v35 = v22;
      ptr = (void *)qvector_reserve(p_ptr, ptr, v22, 1);
      v23 = (char *)ptr;
      v21 = v37;
      v24 = v39;
      v20 = n;
      v22 = v35;
    }
    v37 = v21;
    n = v20;
    v35 = v22;
    memset(&v23[v24], 0, v22 - v24);
    v20 = n;
    v21 = v37;
    *(_QWORD *)&v39 = v35;
LABEL_13:
    memcpy((char *)ptr + v21, src, v20);
    goto LABEL_14;
  }
  return v41[0] - __readfsqword(0x28u);
}
