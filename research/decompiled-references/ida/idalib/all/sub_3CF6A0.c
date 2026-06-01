__int64 __fastcall sub_3CF6A0(_QWORD *a1, void **a2, unsigned int *a3, unsigned int a4)
{
  void **v4; // r12
  unsigned int *v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rcx
  int v9; // eax
  char v11; // r15
  void *v12; // rdx
  __int64 v13; // rax
  size_t v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rsi
  _BYTE *v21; // r10
  __int64 v22; // rax
  size_t v23; // r9
  __int64 v24; // r11
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  size_t v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // r11
  char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // [rsp+Ch] [rbp-8Ch]
  _BYTE *v35; // [rsp+10h] [rbp-88h]
  size_t n; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h]
  _BYTE *v38; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v40; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v42[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v43[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a3;
  v6 = (_QWORD *)a1[2];
  v34 = a4;
  v43[0] = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  a2 = (void **)*a2;
  v7 = a1 + 1;
  do
  {
    while ( 1 )
    {
      v8 = v6[2];
      a3 = (unsigned int *)v6[3];
      if ( v6[4] < (unsigned __int64)a2 )
        break;
      v7 = v6;
      v6 = (_QWORD *)v6[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = (_QWORD *)v6[3];
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == v7 )
  {
LABEL_11:
    v7 = a1 + 1;
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  if ( (void **)v7[4] != a2 )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    {
LABEL_9:
      v9 = *v5;
      ptr = *v4;
      LODWORD(v40) = v9;
      sub_3CF5E0(a1, v7, (__int64)&ptr);
      return 1;
    }
    goto LABEL_12;
  }
  if ( *((_DWORD *)v7 + 10) != *v5 )
  {
    v11 = must_journal(a1, a2, a3);
    if ( !v11 )
      goto LABEL_37;
LABEL_13:
    v12 = *v4;
    v40 = 0;
    ptr = nullptr;
    v13 = pack_dq(src, v43, v12) - (_QWORD)src;
    v14 = v13;
    if ( !v13 )
      goto LABEL_19;
    v15 = v40;
    v16 = v40 + v13;
    if ( __CFADD__((_QWORD)v40, v13) )
    {
      if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = (char *)ptr;
    v18 = v40;
    if ( *((_QWORD *)&v40 + 1) < v16 )
    {
      v37 = v40;
      n = v14;
      v35 = (_BYTE *)v16;
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v17 = (char *)ptr;
      v15 = v37;
      v18 = v40;
      v14 = n;
      v16 = (unsigned __int64)v35;
    }
    v37 = v15;
    n = v14;
    v35 = (_BYTE *)v16;
    memset(&v17[v18], 0, v16 - v18);
    v14 = n;
    v15 = v37;
    *(_QWORD *)&v40 = v35;
LABEL_18:
    memcpy((char *)ptr + v15, src, v14);
LABEL_19:
    v19 = v40;
    v20 = ptr;
    if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v40 + 1, 1);
      v20 = ptr;
      v19 = v40;
    }
    v20[v19] = v11;
    v21 = v42;
    *(_QWORD *)&v40 = v40 + 1;
    if ( !v11
      || (v35 = v42, v22 = pack_dd(src, v42, *((unsigned int *)v7 + 10)) - (_QWORD)src, v21 = v42, (v23 = v22) == 0) )
    {
LABEL_28:
      v26 = pack_dd(src, v21, *v5) - (_QWORD)src;
      v27 = v26;
      if ( !v26 )
        goto LABEL_34;
      v28 = v40;
      v29 = v40 + v26;
      if ( __CFADD__((_QWORD)v40, v26) )
      {
        if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_33;
        }
        v29 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v30 = (char *)ptr;
      v31 = v40;
      if ( *((_QWORD *)&v40 + 1) < v29 )
      {
        v37 = v40;
        n = v27;
        v35 = (_BYTE *)v29;
        ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
        v30 = (char *)ptr;
        v28 = v37;
        v31 = v40;
        v27 = n;
        v29 = (unsigned __int64)v35;
      }
      v37 = v28;
      n = v27;
      v35 = (_BYTE *)v29;
      memset(&v30[v31], 0, v29 - v31);
      v27 = n;
      v28 = v37;
      *(_QWORD *)&v40 = v35;
LABEL_33:
      memcpy((char *)ptr + v28, src, v27);
LABEL_34:
      add_undo_record(v34, ptr, v40);
      if ( ptr )
      {
        *(_QWORD *)&v40 = 0;
        qfree(ptr);
      }
      if ( !v11 )
        goto LABEL_9;
LABEL_37:
      *((_DWORD *)v7 + 10) = *v5;
      return 1;
    }
    v24 = v40;
    v25 = v40 + v22;
    if ( __CFADD__((_QWORD)v40, v22) )
    {
      if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
        v35 = v21;
        memcpy((char *)ptr + v24, src, v23);
        v21 = v35;
        goto LABEL_28;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v40;
    if ( *((_QWORD *)&v40 + 1) < v25 )
    {
      v38 = v35;
      v37 = v40;
      n = v23;
      v35 = (_BYTE *)v25;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v32 = (char *)ptr;
      v21 = v38;
      v33 = v40;
      v24 = v37;
      v23 = n;
      v25 = (unsigned __int64)v35;
    }
    v38 = v21;
    v37 = v24;
    n = v23;
    v35 = (_BYTE *)v25;
    memset(&v32[v33], 0, v25 - v33);
    v23 = n;
    v24 = v37;
    v21 = v38;
    *(_QWORD *)&v40 = v35;
    goto LABEL_27;
  }
  return 0;
}
