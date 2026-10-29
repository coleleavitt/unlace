unsigned __int64 __fastcall sub_67ADC0(_QWORD *a1, unsigned int *a2)
{
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  char *v8; // r12
  __int64 i; // rax
  char *v10; // r8
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  __int64 v20; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  size_t v23; // r15
  size_t v24; // r8
  unsigned __int64 v25; // r9
  char *v26; // r15
  char *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r10
  size_t v31; // r8
  unsigned __int64 v32; // r11
  char *v33; // rsi
  __int64 v34; // rax
  char *v35; // rsi
  __int64 v36; // rax
  char *v37; // [rsp+0h] [rbp-88h]
  size_t v38; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v42; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  char v44; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v45[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1[6];
  v4 = (char *)a1[5];
  v45[0] = __readfsqword(0x28u);
  v6 = *a2;
  v7 = 4 * v3;
  v8 = v4;
  for ( i = (4 * v3) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v10 = &v8[4 * (i >> 1)];
      if ( *(_DWORD *)v10 >= (unsigned int)v6 )
        break;
      v8 = v10 + 4;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v11 = v8;
  if ( v8 == &v4[v7] )
    return v45[0] - __readfsqword(0x28u);
  do
  {
    v12 = *(unsigned int *)v11;
    if ( (unsigned int)v12 >= a2[1] )
      break;
    v6 = *a1;
    v7 = (__int64)(a1 + 1);
    v11 += 4;
    sub_79BB90(a1 + 1, *a1, v12, 340);
    v12 = a1[6];
  }
  while ( v11 != (char *)(a1[5] + 4 * v12) );
  if ( v8 >= v11 )
    return v45[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v42 = 0;
  if ( !(unsigned __int8)must_journal(v7, v6, v12) )
  {
    v15 = (v11 - v8) >> 2;
    goto LABEL_12;
  }
  v17 = pack_dq(src, v45, (__int64)&v8[-a1[5]] >> 2, v13, v14) - (_QWORD)src;
  v19 = v17;
  if ( v17 )
  {
    v20 = v42;
    v21 = v42 + v17;
    if ( __CFADD__((_QWORD)v42, v17) )
    {
      if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_22:
        memcpy((char *)ptr + v20, src, v19);
        goto LABEL_23;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = (char *)ptr;
    v34 = v42;
    if ( *((_QWORD *)&v42 + 1) < v21 )
    {
      v37 = (char *)v21;
      v38 = v19;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v33 = (char *)ptr;
      v19 = v38;
      v34 = v42;
      v21 = (unsigned __int64)v37;
    }
    v38 = v19;
    v37 = (char *)v21;
    memset(&v33[v34], 0, v21 - v34);
    v19 = v38;
    *(_QWORD *)&v42 = v37;
    goto LABEL_22;
  }
LABEL_23:
  v15 = (v11 - v8) >> 2;
  v22 = pack_dq(src, v45, v15, v18, v19) - (_QWORD)src;
  v23 = v22;
  if ( v22 )
  {
    v24 = v42;
    v25 = v42 + v22;
    if ( __CFADD__((_QWORD)v42, v22) )
    {
      if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_28:
        memcpy((char *)ptr + v24, src, v23);
        goto LABEL_29;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v35 = (char *)ptr;
    v36 = v42;
    if ( *((_QWORD *)&v42 + 1) < v25 )
    {
      v37 = (char *)v25;
      v38 = v42;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v35 = (char *)ptr;
      v24 = v38;
      v36 = v42;
      v25 = (unsigned __int64)v37;
    }
    v38 = v24;
    v37 = (char *)v25;
    memset(&v35[v36], 0, v25 - v36);
    v24 = v38;
    *(_QWORD *)&v42 = v37;
    goto LABEL_28;
  }
LABEL_29:
  v26 = v8;
  v37 = &v44;
  do
  {
    v29 = pack_dd(src, v37, *(unsigned int *)v26) - (_QWORD)src;
    v31 = v29;
    if ( v29 )
    {
      v30 = v42;
      v32 = v42 + v29;
      if ( __CFADD__((_QWORD)v42, v29) )
      {
        if ( (unsigned __int64)v42 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v42 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v42 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
          memcpy((char *)ptr + v30, src, v31);
          goto LABEL_34;
        }
        v32 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v27 = (char *)ptr;
      v28 = v42;
      if ( *((_QWORD *)&v42 + 1) < v32 )
      {
        v40 = v42;
        n = v31;
        v38 = v32;
        ptr = (void *)qvector_reserve(&ptr, ptr, v32, 1);
        v27 = (char *)ptr;
        v30 = v40;
        v28 = v42;
        v31 = n;
        v32 = v38;
      }
      v40 = v30;
      n = v31;
      v38 = v32;
      memset(&v27[v28], 0, v32 - v28);
      v31 = n;
      v30 = v40;
      *(_QWORD *)&v42 = v38;
      goto LABEL_33;
    }
LABEL_34:
    v26 += 4;
  }
  while ( v26 != v11 );
  add_undo_record(173, ptr, v42);
LABEL_12:
  if ( ptr )
  {
    *(_QWORD *)&v42 = 0;
    qfree(ptr);
  }
  memmove(v8, v11, a1[5] + 4LL * a1[6] - (_QWORD)v11);
  a1[6] -= v15;
  return v45[0] - __readfsqword(0x28u);
}

