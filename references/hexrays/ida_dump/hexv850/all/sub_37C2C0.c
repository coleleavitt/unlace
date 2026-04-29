unsigned __int64 __fastcall sub_37C2C0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *exception; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rdi
  unsigned __int64 *v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 i; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r12
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  _BYTE *v28; // rcx
  char v29; // cl
  char v30; // dl
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 *v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rsi
  __int64 v42; // rbp
  void *v43; // rdi
  unsigned __int64 **v44; // [rsp+0h] [rbp-98h]
  _QWORD *v45; // [rsp+8h] [rbp-90h]
  unsigned __int64 v46; // [rsp+10h] [rbp-88h]
  __int64 **v50; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v51; // [rsp+38h] [rbp-60h] BYREF
  __m128i v52; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v46 = a3 - a2;
  v44 = (unsigned __int64 **)(a1 + 1);
  v7 = (_QWORD *)a1[1];
  if ( v7 && (v8 = *v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    v9 = a1[1];
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      while ( 1 )
      {
        v28 = *(_BYTE **)(v8 + 8);
        if ( *(_QWORD *)(v8 + 24) < a2 )
          v28 = *(_BYTE **)(v8 + 16);
        else
          v9 = v8;
        if ( (*v28 & 2) != 0 )
          break;
        v8 = (unsigned __int64)v28;
      }
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = 0;
  v11 = 0;
  if ( (_QWORD *)v9 == v7 )
    goto LABEL_14;
  do
  {
    if ( *(_QWORD *)(v9 + 24) >= a2 + a4 )
      break;
    v12 = (__int64 *)(*(_QWORD *)(v9 + 24) + v46);
    v51 = v12;
    v50 = &v51;
    if ( !v11 )
    {
      v11 = qalloc(96);
      v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
      if ( !v11 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      memset((void *)v11, 0, 0x60u);
      *(__m128i *)(v11 + 8) = v37;
      *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_8:
      v52.m128i_i64[0] = v11;
      v52.m128i_i64[1] = v10;
      v13 = sub_37C020(&v52, (unsigned __int64 *)v11, 1, (__int64 **)&v50);
      v10 = v52.m128i_i64[1];
      v11 = v52.m128i_i64[0];
      v14 = (unsigned __int64 *)v13;
      v15 = (unsigned __int64 *)(v13 + 24);
      goto LABEL_9;
    }
    if ( !v10 )
      goto LABEL_8;
    v29 = 1;
    v14 = (unsigned __int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v14 = (unsigned __int64 *)v11;
      v30 = 1;
LABEL_39:
      v52.m128i_i64[0] = v11;
      v52.m128i_i64[1] = v10;
      v31 = sub_37C020(&v52, v14, v30, (__int64 **)&v50);
      v10 = v52.m128i_i64[1];
      v11 = v52.m128i_i64[0];
      v14 = (unsigned __int64 *)v31;
      v15 = (unsigned __int64 *)(v31 + 24);
      goto LABEL_9;
    }
    while ( 1 )
    {
      v32 = v14[3];
      v15 = v14 + 3;
      if ( (unsigned __int64)v12 < v32 )
      {
        v33 = (unsigned __int64 *)v14[1];
        v29 = 1;
        goto LABEL_43;
      }
      if ( v32 >= (unsigned __int64)v12 )
        break;
      v33 = (unsigned __int64 *)v14[2];
      v29 = 0;
LABEL_43:
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_44;
      v14 = v33;
    }
    if ( !v14 )
    {
LABEL_44:
      v30 = v29;
      goto LABEL_39;
    }
LABEL_9:
    sub_3663C0(v14 + 4, v9 + 32);
    copy_tinfo_t(v15 + 7, v9 + 80);
    *((_DWORD *)v15 + 16) = *(_DWORD *)(v9 + 88);
    *((_DWORD *)v15 + 17) = *(_DWORD *)(v9 + 92);
    v16 = *(_QWORD *)v9;
    v17 = v9;
    if ( (*(_QWORD *)v9 & 2) == 0 )
    {
      v17 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v34 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v34 & 2) == 0 )
        {
          v35 = v9;
          do
          {
            if ( *(_QWORD *)(v17 + 16) != v35 )
              break;
            v35 = v17;
            v36 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            v17 = v36;
          }
          while ( (v34 & 2) == 0 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v17 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v17 = i;
      }
    }
    sub_373D00(v44, (__int64 *)v9);
    v9 = v17;
  }
  while ( v17 != a1[1] );
LABEL_14:
  if ( !v10 )
  {
    sub_366800(a1 + 9, a2, a3, a4, a5);
    if ( !v11 )
      return v53 - __readfsqword(0x28u);
    goto LABEL_30;
  }
  if ( v11 )
  {
    v45 = *(_QWORD **)(v11 + 8);
    if ( v45 != (_QWORD *)v11 )
    {
      do
      {
LABEL_17:
        while ( 1 )
        {
          v51 = v45 + 3;
          v19 = sub_378CD0((__m128i *)v44, v45 + 3, &v51);
          v20 = v19 + 24;
          sub_3663C0((_QWORD *)(v19 + 32), (__int64)(v45 + 4));
          copy_tinfo_t(v20 + 56, v45 + 10);
          *(_DWORD *)(v20 + 64) = *((_DWORD *)v45 + 22);
          *(_DWORD *)(v20 + 68) = *((_DWORD *)v45 + 23);
          if ( (*v45 & 2) == 0 )
            break;
LABEL_21:
          if ( v45 == (_QWORD *)v11 )
            goto LABEL_22;
        }
        v21 = (_QWORD *)v45[2];
        if ( (*(_BYTE *)v21 & 2) == 0 )
        {
          while ( (*(_BYTE *)v21[1] & 2) == 0 )
            v21 = (_QWORD *)v21[1];
          v45 = v21;
          goto LABEL_21;
        }
        v38 = (_QWORD *)(*v45 & 0xFFFFFFFFFFFFFFFCLL);
        v39 = *v38;
        if ( (*v38 & 2) == 0 )
        {
          v40 = v45;
          while ( (_QWORD *)v38[2] == v40 )
          {
            v40 = v38;
            v41 = v39 & 0xFFFFFFFFFFFFFFFCLL;
            v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v39 & 2) != 0 )
            {
              v45 = (_QWORD *)v41;
              if ( v41 != v11 )
                goto LABEL_17;
              goto LABEL_22;
            }
            v38 = (_QWORD *)v41;
          }
        }
        v45 = v38;
      }
      while ( v38 != (_QWORD *)v11 );
    }
  }
LABEL_22:
  sub_366800(a1 + 3, a2, a3, a4, a5);
  sub_366800(a1 + 9, a2, a3, a4, v22);
  if ( v11 )
  {
    v23 = *(_QWORD *)v11;
    v24 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
LABEL_30:
      qfree(v11);
      return v53 - __readfsqword(0x28u);
    }
    v25 = *(_BYTE **)(v24 + 8);
    if ( (*v25 & 2) != 0 )
    {
      v26 = *(_BYTE **)(v24 + 16);
      if ( (*v26 & 2) != 0 )
        goto LABEL_70;
    }
    else
    {
      sub_366660((__int64)v25);
      v26 = *(_BYTE **)(v24 + 16);
      if ( (*v26 & 2) != 0 )
        goto LABEL_27;
    }
    sub_366660((__int64)v26);
LABEL_27:
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
LABEL_28:
      if ( v23 > 3 )
        qfree(v24);
      goto LABEL_30;
    }
LABEL_70:
    clear_tinfo_t(v24 + 80);
    v42 = *(_QWORD *)(v24 + 48);
    while ( v42 )
    {
      sub_365B50(*(_QWORD **)(v42 + 24));
      v43 = (void *)v42;
      v42 = *(_QWORD *)(v42 + 16);
      operator delete(v43, 0x28u);
    }
    *(_QWORD *)v24 |= 2uLL;
    goto LABEL_28;
  }
  return v53 - __readfsqword(0x28u);
}
