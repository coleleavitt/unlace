unsigned __int64 __fastcall sub_69AD20(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rax
  char *v4; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  char *v8; // r12
  __int64 i; // rax
  char *v10; // r8
  char *v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v14; // rax
  size_t v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  size_t v19; // r14
  size_t v20; // r9
  unsigned __int64 v21; // r10
  char *v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r10
  size_t v27; // r8
  unsigned __int64 v28; // r11
  char *v29; // rsi
  __int64 v30; // rax
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-88h]
  size_t v34; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v38; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _QWORD v40[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1[6];
  v4 = (char *)a1[5];
  v40[0] = __readfsqword(0x28u);
  v6 = *a2;
  v7 = 8 * v3;
  v8 = v4;
  for ( i = (__int64)(8 * v3) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v10 = &v8[8 * (i >> 1)];
      if ( *(_QWORD *)v10 >= v6 )
        break;
      v8 = v10 + 8;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v11 = v8;
  if ( v8 == &v4[v7] )
    return v40[0] - __readfsqword(0x28u);
  do
  {
    v12 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 >= a2[1] )
      break;
    v6 = *a1;
    v7 = (__int64)(a1 + 1);
    v11 += 8;
    sub_7BEF80(a1 + 1, *a1, v12, 340);
    v12 = a1[6];
  }
  while ( v11 != (char *)(a1[5] + 8 * v12) );
  if ( v8 >= v11 )
    return v40[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v38 = 0;
  if ( !(unsigned __int8)must_journal(v7, v6, v12) )
  {
    v33 = (v11 - v8) >> 3;
    goto LABEL_12;
  }
  v14 = pack_dq(src, v40, (__int64)&v8[-a1[5]] >> 3) - (_QWORD)src;
  v15 = v14;
  if ( v14 )
  {
    v16 = v38;
    v17 = v38 + v14;
    if ( __CFADD__((_QWORD)v38, v14) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_22:
        memcpy((char *)ptr + v16, src, v15);
        goto LABEL_23;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = (char *)ptr;
    v30 = v38;
    if ( *((_QWORD *)&v38 + 1) < v17 )
    {
      v33 = v17;
      v34 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
      v29 = (char *)ptr;
      v15 = v34;
      v30 = v38;
      v17 = v33;
    }
    v34 = v15;
    v33 = v17;
    memset(&v29[v30], 0, v17 - v30);
    v15 = v34;
    *(_QWORD *)&v38 = v33;
    goto LABEL_22;
  }
LABEL_23:
  v33 = (v11 - v8) >> 3;
  v18 = pack_dq(src, v40, v33) - (_QWORD)src;
  v19 = v18;
  if ( v18 )
  {
    v20 = v38;
    v21 = v38 + v18;
    if ( __CFADD__((_QWORD)v38, v18) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_28:
        memcpy((char *)ptr + v20, src, v19);
        goto LABEL_29;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)ptr;
    v32 = v38;
    if ( *((_QWORD *)&v38 + 1) < v21 )
    {
      n = v38;
      v34 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v31 = (char *)ptr;
      v20 = n;
      v32 = v38;
      v21 = v34;
    }
    n = v20;
    v34 = v21;
    memset(&v31[v32], 0, v21 - v32);
    v20 = n;
    *(_QWORD *)&v38 = v34;
    goto LABEL_28;
  }
LABEL_29:
  v22 = v8;
  do
  {
    v25 = pack_dq(src, v40, *(_QWORD *)v22) - (_QWORD)src;
    v27 = v25;
    if ( v25 )
    {
      v26 = v38;
      v28 = v38 + v25;
      if ( __CFADD__((_QWORD)v38, v25) )
      {
        if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
          memcpy((char *)ptr + v26, src, v27);
          goto LABEL_34;
        }
        v28 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v23 = (char *)ptr;
      v24 = v38;
      if ( *((_QWORD *)&v38 + 1) < v28 )
      {
        v36 = v38;
        n = v27;
        v34 = v28;
        ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
        v23 = (char *)ptr;
        v26 = v36;
        v24 = v38;
        v27 = n;
        v28 = v34;
      }
      v36 = v26;
      n = v27;
      v34 = v28;
      memset(&v23[v24], 0, v28 - v24);
      v27 = n;
      v26 = v36;
      *(_QWORD *)&v38 = v34;
      goto LABEL_33;
    }
LABEL_34:
    v22 += 8;
  }
  while ( v22 != v11 );
  add_undo_record(173, ptr, v38);
LABEL_12:
  if ( ptr )
  {
    *(_QWORD *)&v38 = 0;
    qfree(ptr);
  }
  memmove(v8, v11, a1[5] + 8 * a1[6] - (_QWORD)v11);
  a1[6] -= v33;
  return v40[0] - __readfsqword(0x28u);
}
