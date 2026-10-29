unsigned __int64 __fastcall sub_16CA0(__int64 *a1)
{
  __int64 v1; // rax
  size_t v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // r15
  __int64 v6; // rbp
  size_t v7; // r12
  void *v8; // r13
  __int64 v9; // rax
  size_t v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r8
  char *v13; // rsi
  __int64 v14; // rax
  size_t v15; // r10
  unsigned __int64 v16; // r11
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  void *v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rax
  _BYTE *v25; // rsi
  size_t v26; // r12
  void *v27; // rbp
  unsigned __int64 v28; // rdi
  char v29; // dl
  char *v31; // rsi
  __int64 v32; // rax
  __int8 *v33; // [rsp+0h] [rbp-140h]
  __int64 *p_ptr; // [rsp+8h] [rbp-138h]
  unsigned __int64 v35; // [rsp+10h] [rbp-130h]
  size_t n; // [rsp+18h] [rbp-128h]
  __int64 v37; // [rsp+20h] [rbp-120h]
  void *v38; // [rsp+28h] [rbp-118h] BYREF
  __int128 v39; // [rsp+30h] [rbp-110h]
  void *v40; // [rsp+48h] [rbp-F8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-F0h]
  void *ptr; // [rsp+68h] [rbp-D8h] BYREF
  size_t v43[3]; // [rsp+70h] [rbp-D0h]
  _BYTE v44[96]; // [rsp+88h] [rbp-B8h] BYREF
  __m128i src; // [rsp+E8h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+100h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v33 = &src.m128i_i8[5];
  v38 = nullptr;
  v40 = nullptr;
  v39 = 0;
  v41 = 0;
  v1 = sub_28E10(&src, &src.m128i_u8[5]) - (_QWORD)&src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v41;
    v4 = v41 + v1;
    if ( __CFADD__((_QWORD)v41, v1) )
    {
      if ( (unsigned __int64)v41 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v41 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v41 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)v40 + v3, &src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)v40;
    v32 = v41;
    if ( *((_QWORD *)&v41 + 1) < v4 )
    {
      v40 = (void *)sub_29E60(&v40, v40, v4, 1);
      v31 = (char *)v40;
      v32 = v41;
    }
    memset(&v31[v32], 0, v4 - v32);
    *(_QWORD *)&v41 = v4;
    goto LABEL_6;
  }
LABEL_7:
  v5 = *a1;
  p_ptr = (__int64 *)&ptr;
  v6 = *a1 + 280 * a1[1];
  if ( *a1 != v6 )
  {
    while ( 1 )
    {
      while ( !*(_QWORD *)(v5 + 8) )
      {
LABEL_9:
        v5 += 280;
        if ( v6 == v5 )
          goto LABEL_32;
      }
      *(_OWORD *)v43 = 0;
      ptr = nullptr;
      sub_14F90(p_ptr, v5 + 24, v5 + 256, v5, 3);
      v7 = v43[0];
      v8 = ptr;
      if ( v43[0] > 0xFFFFFFFF )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(5, v5 + 24);
        BUG();
      }
      v9 = sub_28E10(&src, v33) - (_QWORD)&src;
      v10 = v9;
      if ( v9 )
        break;
LABEL_21:
      if ( !v7 )
        goto LABEL_30;
      v15 = v41;
      v16 = v41 + v7;
      if ( __CFADD__((_QWORD)v41, v7) )
      {
        if ( (unsigned __int64)v41 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v41 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v41 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_29;
        }
        v16 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v17 = (char *)v40;
      v18 = v41;
      if ( *((_QWORD *)&v41 + 1) < v16 )
      {
        n = v41;
        v35 = v16;
        v40 = (void *)sub_29E60(&v40, v40, v16, 1);
        v17 = (char *)v40;
        v15 = n;
        v18 = v41;
        v16 = v35;
      }
      n = v15;
      v35 = v16;
      memset(&v17[v18], 0, v16 - v18);
      v15 = n;
      *(_QWORD *)&v41 = v35;
LABEL_29:
      memcpy((char *)v40 + v15, v8, v7);
LABEL_30:
      if ( !ptr )
        goto LABEL_9;
      v43[0] = 0;
      v5 += 280;
      j__free(ptr);
      if ( v6 == v5 )
        goto LABEL_32;
    }
    v11 = v41;
    v12 = v41 + v9;
    if ( __CFADD__((_QWORD)v41, v9) )
    {
      if ( (unsigned __int64)v41 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v41 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v41 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_20;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)v40;
    v14 = v41;
    if ( *((_QWORD *)&v41 + 1) < v12 )
    {
      v37 = v41;
      n = v10;
      v35 = v12;
      v40 = (void *)sub_29E60(&v40, v40, v12, 1);
      v13 = (char *)v40;
      v11 = v37;
      v14 = v41;
      v10 = n;
      v12 = v35;
    }
    v37 = v11;
    n = v10;
    v35 = v12;
    memset(&v13[v14], 0, v12 - v14);
    v10 = n;
    v11 = v37;
    *(_QWORD *)&v41 = v35;
LABEL_20:
    memcpy((char *)v40 + v11, &src, v10);
    goto LABEL_21;
  }
LABEL_32:
  v19 = v41;
  v20 = v40;
  memset(v44, 0, 0x58u);
  sub_28350(v44);
  sub_28A60(v44, v20, v19);
  sub_28CA0(&src, v44);
  v21 = v41;
  v22 = v41 + 16;
  v23 = v41 + 16;
  if ( (unsigned __int64)v41 >= 0xFFFFFFFFFFFFFFF0LL )
  {
    v23 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( *((_QWORD *)&v41 + 1) < v22 )
  {
    v40 = (void *)sub_29E60(&v40, v40, v41 + 16, 1);
    memset((char *)v40 + v41, 0, v22 - v41);
  }
  else
  {
    memset((char *)v40 + v41, 0, 0x10u);
  }
  *(_QWORD *)&v41 = v23;
  *(__m128i *)((char *)v40 + v21) = _mm_load_si128(&src);
  v24 = v39;
  v25 = v38;
  v26 = v41;
  v27 = v40;
  LOBYTE(ptr) = 2;
  v28 = v39 + 1;
  if ( &ptr >= v38 && &ptr < (void **)((char *)v38 + *((_QWORD *)&v39 + 1)) )
  {
    if ( *((_QWORD *)&v39 + 1) < v28 )
    {
      v38 = (void *)sub_29E60(&v38, v38, v39 + 1, 1);
      v25 = v38;
      v24 = v39;
    }
    v25[v24] = 2;
  }
  else
  {
    if ( *((_QWORD *)&v39 + 1) < v28 )
    {
      v38 = (void *)sub_29E60(&v38, v38, v39 + 1, 1);
      v25 = v38;
      v29 = (char)ptr;
      v24 = v39;
    }
    else
    {
      v29 = 2;
    }
    v25[v24] = v29;
  }
  *(_QWORD *)&v39 = v39 + 1;
  sub_16680((__int64 *)&v38, 2, v27, v26);
  if ( (dword_7BCA4 & 0x200) != 0 )
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"Encrypt borrowed licenses, size=%zu\n", (size_t)v39);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    j__free(v40);
  }
  sub_2F470("Offline", 1, v38, v39, 0, 0);
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    j__free(v38);
  }
  return v46 - __readfsqword(0x28u);
}

