unsigned __int64 __fastcall sub_87EAE0(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  __int64 *v5; // r15
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
  __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  _BYTE *v23; // rsi
  size_t v24; // r12
  void *v25; // rbp
  unsigned __int64 v26; // rdi
  char v27; // dl
  char *v29; // rsi
  __int64 v30; // rax
  __int8 *v31; // [rsp+0h] [rbp-140h]
  __int64 *p_ptr; // [rsp+8h] [rbp-138h]
  unsigned __int64 v33; // [rsp+10h] [rbp-130h]
  size_t n; // [rsp+18h] [rbp-128h]
  __int64 v35; // [rsp+20h] [rbp-120h]
  void *v36; // [rsp+28h] [rbp-118h] BYREF
  __int128 v37; // [rsp+30h] [rbp-110h]
  void *v38; // [rsp+48h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+50h] [rbp-F0h]
  void *ptr; // [rsp+68h] [rbp-D8h] BYREF
  size_t v41[3]; // [rsp+70h] [rbp-D0h]
  _BYTE v42[96]; // [rsp+88h] [rbp-B8h] BYREF
  __m128i src; // [rsp+E8h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+100h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v31 = &src.m128i_i8[5];
  v36 = nullptr;
  v38 = nullptr;
  v37 = 0;
  v39 = 0;
  v1 = pack_dd(&src, &src.m128i_u8[5], 3) - (_QWORD)&src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v39;
    v4 = v39 + v1;
    if ( __CFADD__((_QWORD)v39, v1) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)v38 + v3, &src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = (char *)v38;
    v30 = v39;
    if ( *((_QWORD *)&v39 + 1) < v4 )
    {
      v38 = (void *)qvector_reserve(&v38, v38, v4, 1);
      v29 = (char *)v38;
      v30 = v39;
    }
    memset(&v29[v30], 0, v4 - v30);
    *(_QWORD *)&v39 = v4;
    goto LABEL_6;
  }
LABEL_7:
  v5 = *(__int64 **)a1;
  p_ptr = (__int64 *)&ptr;
  v6 = *(_QWORD *)a1 + 280LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v6 )
  {
    while ( 1 )
    {
      while ( !v5[1] )
      {
LABEL_9:
        v5 += 35;
        if ( (__int64 *)v6 == v5 )
          goto LABEL_32;
      }
      *(_OWORD *)v41 = 0;
      ptr = nullptr;
      sub_87CEA0(p_ptr, (__int64)(v5 + 3), (__int64)(v5 + 32), v5, 3u);
      v7 = v41[0];
      v8 = ptr;
      if ( v41[0] > 0xFFFFFFFF )
      {
        if ( !under_debugger )
          interr(5);
        BUG();
      }
      v9 = pack_dd(&src, v31, LODWORD(v41[0])) - (_QWORD)&src;
      v10 = v9;
      if ( v9 )
        break;
LABEL_21:
      if ( !v7 )
        goto LABEL_30;
      v15 = v39;
      v16 = v39 + v7;
      if ( __CFADD__((_QWORD)v39, v7) )
      {
        if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_29;
        }
        v16 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v17 = (char *)v38;
      v18 = v39;
      if ( *((_QWORD *)&v39 + 1) < v16 )
      {
        n = v39;
        v33 = v16;
        v38 = (void *)qvector_reserve(&v38, v38, v16, 1);
        v17 = (char *)v38;
        v15 = n;
        v18 = v39;
        v16 = v33;
      }
      n = v15;
      v33 = v16;
      memset(&v17[v18], 0, v16 - v18);
      v15 = n;
      *(_QWORD *)&v39 = v33;
LABEL_29:
      memcpy((char *)v38 + v15, v8, v7);
LABEL_30:
      if ( !ptr )
        goto LABEL_9;
      v41[0] = 0;
      v5 += 35;
      qfree(ptr);
      if ( (__int64 *)v6 == v5 )
        goto LABEL_32;
    }
    v11 = v39;
    v12 = v39 + v9;
    if ( __CFADD__((_QWORD)v39, v9) )
    {
      if ( (unsigned __int64)v39 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v39 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v39 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_20;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)v38;
    v14 = v39;
    if ( *((_QWORD *)&v39 + 1) < v12 )
    {
      v35 = v39;
      n = v10;
      v33 = v12;
      v38 = (void *)qvector_reserve(&v38, v38, v12, 1);
      v13 = (char *)v38;
      v11 = v35;
      v14 = v39;
      v10 = n;
      v12 = v33;
    }
    v35 = v11;
    n = v10;
    v33 = v12;
    memset(&v13[v14], 0, v12 - v14);
    v10 = n;
    v11 = v35;
    *(_QWORD *)&v39 = v33;
LABEL_20:
    memcpy((char *)v38 + v11, &src, v10);
    goto LABEL_21;
  }
LABEL_32:
  memset(v42, 0, 0x58u);
  MD5Init(v42);
  MD5Update();
  MD5Final(&src, v42);
  v19 = v39;
  v20 = v39 + 16;
  v21 = v39 + 16;
  if ( (unsigned __int64)v39 >= 0xFFFFFFFFFFFFFFF0LL )
  {
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( *((_QWORD *)&v39 + 1) < v20 )
  {
    v38 = (void *)qvector_reserve(&v38, v38, v39 + 16, 1);
    memset((char *)v38 + v39, 0, v20 - v39);
  }
  else
  {
    memset((char *)v38 + v39, 0, 0x10u);
  }
  *(_QWORD *)&v39 = v21;
  *(__m128i *)((char *)v38 + v19) = _mm_load_si128(&src);
  v22 = v37;
  v23 = v36;
  v24 = v39;
  v25 = v38;
  LOBYTE(ptr) = 2;
  v26 = v37 + 1;
  if ( &ptr >= v36 && &ptr < (void **)((char *)v36 + *((_QWORD *)&v37 + 1)) )
  {
    if ( *((_QWORD *)&v37 + 1) < v26 )
    {
      v36 = (void *)qvector_reserve(&v36, v36, v37 + 1, 1);
      v23 = v36;
      v22 = v37;
    }
    v23[v22] = 2;
  }
  else
  {
    if ( *((_QWORD *)&v37 + 1) < v26 )
    {
      v36 = (void *)qvector_reserve(&v36, v36, v37 + 1, 1);
      v23 = v36;
      v27 = (char)ptr;
      v22 = v37;
    }
    else
    {
      v27 = 2;
    }
    v23[v22] = v27;
  }
  *(_QWORD *)&v37 = v37 + 1;
  sub_87E4C0((__int64 *)&v36, 2, v25, v24);
  if ( (debug & 0x200) != 0 )
    sub_383DA0();
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  reg_bin_op("Offline", 1, v36, v37, 0, 0);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v44 - __readfsqword(0x28u);
}

