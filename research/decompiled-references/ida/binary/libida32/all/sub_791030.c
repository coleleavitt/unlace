__int64 __fastcall sub_791030(__int64 *a1, unsigned int a2, char *a3, signed __int64 a4, char a5)
{
  char *v5; // r12
  __int64 *v6; // rbp
  unsigned int v7; // r13d
  unsigned __int16 *v9; // rax
  __int64 v10; // r13
  void *v11; // rsi
  size_t v12; // rbx
  __int64 v13; // rdx
  size_t v14; // rcx
  __int64 v15; // rdi
  char *v16; // rsi
  unsigned __int16 *v17; // r13
  __int64 v18; // rdx
  unsigned int v20; // eax
  __int64 v21; // r13
  char v22; // al
  __int64 v23; // rax
  bool v24; // bl
  __int64 v25; // rdi
  unsigned __int16 *v26; // rax
  unsigned int v27; // eax
  char v28; // bl
  int v29; // eax
  __int64 v30; // rbx
  char v31; // bl
  __int64 v32; // rbx
  char v33; // al
  size_t v34; // [rsp+8h] [rbp-290h]
  size_t n; // [rsp+10h] [rbp-288h] BYREF
  __int64 v36; // [rsp+1Ch] [rbp-27Ch] BYREF
  __int64 v37; // [rsp+28h] [rbp-270h] BYREF
  void *ptr; // [rsp+30h] [rbp-268h] BYREF
  __int128 v39; // [rsp+38h] [rbp-260h]
  _BYTE v40[5]; // [rsp+4Bh] [rbp-24Dh] BYREF
  _BYTE src[520]; // [rsp+50h] [rbp-248h] BYREF
  unsigned __int64 v42; // [rsp+258h] [rbp-40h]

  LODWORD(v36) = a2;
  n = a4;
  v42 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v5 = a3;
  v6 = a1;
  if ( !a3 )
    v5 = (char *)&byte_22CD811;
  v7 = a2;
  if ( a4 <= 0 )
  {
    n = strlen(v5);
    if ( n <= 0x1FF )
      goto LABEL_6;
  }
  else if ( (unsigned __int64)a4 <= 0x1FF )
  {
    goto LABEL_6;
  }
  v23 = sub_78F800(*a1, (__int64)v40, v5, &n, 1);
  v7 = v36;
  v5 = (char *)v23;
LABEL_6:
  src[0] = 0;
  v37 = -1;
  v9 = sub_790DB0((__int64)a1, v7, &v37, 0);
  v10 = v37;
  v11 = v9;
  if ( !v9 )
    goto LABEL_15;
  if ( v37 <= 512 )
  {
    a1 = (__int64 *)src;
    __memcpy_chk();
LABEL_15:
    v12 = n;
    v14 = n;
    if ( v10 < 0 )
    {
      if ( !n )
      {
        v20 = v36;
        v21 = *v6;
        v13 = 6;
        *((_BYTE *)v6 + 52) = 78;
        *(_WORD *)((char *)v6 + 45) = 6;
        *((_DWORD *)v6 + 12) = _byteswap_ulong(v20);
        v22 = *(_BYTE *)(v21 + 5988);
LABEL_18:
        if ( v22 && (unsigned __int8)must_journal(a1, v11, v13) )
        {
          ptr = nullptr;
          v39 = 0;
          if ( (unsigned __int8)sub_71A170(v21, (__int64 *)((char *)v6 + 45), (__int64)&ptr) )
            add_undo_record(1, ptr, v39);
          if ( ptr )
          {
            *(_QWORD *)&v39 = 0;
            qfree(ptr);
          }
        }
        else
        {
          sub_71A170(v21, (__int64 *)((char *)v6 + 45), 0);
        }
        return 1;
      }
      goto LABEL_11;
    }
    v13 = v10;
    if ( v10 != n )
    {
LABEL_24:
      if ( !v14 )
        goto LABEL_25;
      goto LABEL_11;
    }
LABEL_43:
    v11 = v5;
    v34 = v14;
    v29 = memcmp(src, v5, v13);
    v14 = v34;
    if ( !v29 )
    {
      if ( !a5 )
        return 1;
      v37 = 0;
      if ( !v34 )
        goto LABEL_52;
      v15 = (__int64)v6 + 1086;
      v16 = v5;
      *(_WORD *)((char *)v6 + 1083) = v34 + 1;
      v17 = (unsigned __int16 *)((char *)v6 + 1083);
      memcpy((char *)v6 + 1086, v5, (int)v34);
      goto LABEL_47;
    }
    goto LABEL_24;
  }
  v12 = n;
  v37 = 512;
  qmemcpy(src, v9, 0x200u);
  v13 = n;
  if ( n == 512 )
  {
    v14 = 512;
    v10 = 512;
    goto LABEL_43;
  }
  v10 = 512;
  if ( n )
  {
    LODWORD(v14) = n;
LABEL_11:
    v15 = (__int64)v6 + 1086;
    v16 = v5;
    *(_WORD *)((char *)v6 + 1083) = v14 + 1;
    v17 = (unsigned __int16 *)((char *)v6 + 1083);
    memcpy((char *)v6 + 1086, v5, (int)v14);
    if ( !a5 )
    {
      v15 = *v6;
      v16 = (char *)v6 + 1083;
      if ( (unsigned __int64)sub_723E90(*v6, (unsigned __int16 *)((char *)v6 + 1083)) >= 2 )
        return 0;
    }
LABEL_47:
    v30 = *v6;
    if ( *(_BYTE *)(*v6 + 5988) && (unsigned __int8)must_journal(v15, v16, v18) )
    {
      v39 = 0;
      ptr = nullptr;
      v33 = sub_71CD80(v30, v17, 4, &v36, (__int64)&ptr);
      v11 = ptr;
      v31 = v33;
      add_undo_record(1, ptr, v39);
      if ( ptr )
      {
        *(_QWORD *)&v39 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v11 = v17;
      v31 = sub_71CD80(v30, v17, 4, &v36, 0);
    }
    if ( !v31 )
LABEL_36:
      sub_722BF0();
    v10 = v37;
LABEL_25:
    v12 = n;
    if ( v10 > 0 )
      goto LABEL_26;
LABEL_52:
    v27 = v36;
    goto LABEL_31;
  }
LABEL_26:
  v24 = v10 == 5 && src[0] == 0;
  if ( v24 )
  {
    sub_7902D0(*v6, (__int64)src);
    LODWORD(v10) = v37;
  }
  *(_WORD *)((char *)v6 + 1083) = v10 + 1;
  memcpy((char *)v6 + 1086, src, (int)v10);
  v25 = *v6;
  v11 = (char *)v6 + 1083;
  v26 = (unsigned __int16 *)sub_723E90(*v6, (unsigned __int16 *)((char *)v6 + 1083));
  if ( v26 )
    goto LABEL_29;
  if ( a5 || v24 || v40[v37 + 4] )
  {
LABEL_56:
    v12 = n;
    v27 = v36;
    goto LABEL_31;
  }
  --*(_WORD *)((char *)v6 + 1083);
  v25 = *v6;
  v11 = (char *)v6 + 1083;
  v26 = (unsigned __int16 *)sub_723E90(*v6, (unsigned __int16 *)((char *)v6 + 1083));
  if ( v26 )
  {
LABEL_29:
    v13 = (__int64)v26 + *v26 + 2;
    v27 = v36;
    if ( *(_DWORD *)(v13 + 2) != (_DWORD)v36 )
    {
      v12 = n;
      goto LABEL_31;
    }
    v32 = *v6;
    if ( *(_BYTE *)(*v6 + 5988) && (unsigned __int8)must_journal(v25, v11, v13) )
    {
      v11 = (char *)v6 + 1083;
      ptr = nullptr;
      v39 = 0;
      if ( (unsigned __int8)sub_71A170(v32, (__int64 *)((char *)v6 + 1083), (__int64)&ptr) )
      {
        v11 = ptr;
        add_undo_record(1, ptr, v39);
      }
      if ( ptr )
      {
        *(_QWORD *)&v39 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v11 = (char *)v6 + 1083;
      sub_71A170(v32, (__int64 *)((char *)v6 + 1083), 0);
    }
    goto LABEL_56;
  }
  v27 = v36;
  v12 = n;
LABEL_31:
  v21 = *v6;
  a1 = (_QWORD *)&byte_6;
  *((_BYTE *)v6 + 52) = 78;
  *(_WORD *)((char *)v6 + 45) = 6;
  *((_DWORD *)v6 + 12) = _byteswap_ulong(v27);
  v22 = *(_BYTE *)(v21 + 5988);
  if ( !v12 )
    goto LABEL_18;
  if ( v22 && (unsigned __int8)must_journal(6, v11, v13) )
  {
    v39 = 0;
    ptr = nullptr;
    v28 = sub_71CD80(v21, (unsigned __int16 *)((char *)v6 + 45), (unsigned __int16)v12, v5, (__int64)&ptr);
    add_undo_record(1, ptr, v39);
    if ( ptr )
    {
      *(_QWORD *)&v39 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v28 = sub_71CD80(v21, (unsigned __int16 *)((char *)v6 + 45), (unsigned __int16)v12, v5, 0);
  }
  if ( !v28 )
    goto LABEL_36;
  return 1;
}

