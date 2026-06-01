__int64 __fastcall sub_6C7150(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        char *a5,
        char *a6,
        double a7,
        double a8,
        __int64 a9,
        char a10)
{
  char v13; // r14
  char v14; // al
  char *v15; // rax
  char *v16; // r13
  char *v17; // rdi
  char *j; // r14
  char *v19; // rbp
  void *v20; // rdi
  void *v21; // rdi
  unsigned int v22; // ebp
  unsigned __int64 v23; // rax
  size_t v24; // rax
  size_t v25; // r13
  char **v27; // r13
  char *v28; // rdi
  char *v29; // rdi
  __int64 v30; // rdx
  char *i; // r14
  char *v32; // rbp
  void *v33; // rdi
  void *v34; // rdi
  char v35; // cl
  char **v36; // rax
  int v37; // eax
  char **v38; // rax
  void *v39; // rdi
  size_t v40; // rdx
  __int64 v41; // rax
  char **v42; // rbp
  int v43; // eax
  char *sa; // [rsp+8h] [rbp-60h]
  char *sb; // [rsp+8h] [rbp-60h]
  char v48; // [rsp+10h] [rbp-58h]
  __int64 v49; // [rsp+18h] [rbp-50h]
  __int64 v50; // [rsp+18h] [rbp-50h]
  size_t v51; // [rsp+18h] [rbp-50h]
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  v13 = *a5;
  v14 = *a5 & 0x3F;
  ptr[1] = (void *)__readfsqword(0x28u);
  if ( v14 == 45 )
  {
    sub_64D850(ptr, (__int64)a5, (__int64)a6, 0, nullptr, nullptr);
    if ( !ptr[0] )
    {
LABEL_16:
      v23 = sub_6B9860(a1, a4, 0, 0);
      *(_QWORD *)(a3 + 24) = v23;
      if ( v23 == -1 )
      {
        v48 = 0;
        v22 = 0;
LABEL_23:
        if ( !a10 )
          return v22;
        goto LABEL_41;
      }
      if ( a4 && (v24 = strlen(a4), (v25 = v24) != 0) )
      {
        v39 = *(void **)a3;
        v40 = v24 + 1;
        if ( *(_QWORD *)(a3 + 16) < v24 + 1 )
        {
          v51 = v24 + 1;
          v41 = qvector_reserve(a3, *(_QWORD *)a3, v40, 1);
          v40 = v51;
          *(_QWORD *)a3 = v41;
          v39 = (void *)v41;
        }
        *(_QWORD *)(a3 + 8) = v40;
        memmove(v39, a4, v25);
        *(_BYTE *)(*(_QWORD *)a3 + v25) = 0;
      }
      else
      {
        *(_QWORD *)(a3 + 8) = 0;
      }
      *(_BYTE *)(a3 + 32) = v13;
      if ( !a10 )
        return 1;
      v38 = sub_6C6D30((char **)(a3 + 64), (unsigned __int64 *)(a3 + 24));
      sub_6B92B0((__int64)v38, a1[1], (__int64)a5, (__int64)a6);
LABEL_51:
      v35 = 0;
      v22 = 1;
      goto LABEL_42;
    }
    sub_6B9A50(a3, a1, a4, (__int64 *)ptr[0], 1);
    if ( a10 )
    {
      v42 = sub_6C6D30((char **)(a3 + 64), (unsigned __int64 *)(a3 + 24));
      if ( (*((_BYTE *)ptr[0] + 52) & 7) != 0 )
        v43 = 1 << ((*((_BYTE *)ptr[0] + 52) & 7) - 1);
      else
        v43 = (unsigned __int8)getinf(61);
      *((_BYTE *)v42 + 10) = 0;
      *v42 = (char *)v43;
      *((_WORD *)v42 + 4) = 0;
      if ( a9 == -1 )
      {
        v27 = (char **)ptr[0];
        v48 = 0;
        if ( !ptr[0] )
          goto LABEL_51;
        goto LABEL_28;
      }
    }
    else if ( a9 == -1 )
    {
      v27 = (char **)ptr[0];
      v48 = 0;
      if ( !ptr[0] )
        return 1;
      goto LABEL_28;
    }
    v27 = (char **)ptr[0];
    if ( (*((_BYTE *)ptr[0] + 52) & 7) != 0 )
    {
      v37 = 1 << ((*((_BYTE *)ptr[0] + 52) & 7) - 1);
    }
    else
    {
      LOBYTE(v37) = getinf(61);
      v27 = (char **)ptr[0];
      v37 = (unsigned __int8)v37;
    }
    if ( v37 == a9 )
    {
      v48 = 1;
      if ( !v27 )
        goto LABEL_40;
    }
    else
    {
      v48 = 0;
      if ( !v27 )
      {
LABEL_14:
        v48 = 0;
        v22 = 1;
        goto LABEL_23;
      }
    }
LABEL_28:
    v28 = v27[3];
    if ( v28 )
    {
      v27[4] = nullptr;
      qfree(v28);
    }
    v29 = *v27;
    if ( *v27 )
    {
      sb = v27[1];
      if ( sb )
      {
        v30 = 0;
        for ( i = nullptr; i != sb; ++i )
        {
          v32 = &v29[v30];
          v33 = *(void **)&v29[v30 + 24];
          if ( v33 )
          {
            *((_QWORD *)v32 + 4) = 0;
            v49 = v30;
            qfree(v33);
            v30 = v49;
          }
          v34 = *(void **)v32;
          if ( *(_QWORD *)v32 )
          {
            *((_QWORD *)v32 + 1) = 0;
            v50 = v30;
            qfree(v34);
            v30 = v50;
          }
          v29 = *v27;
          v30 += 56;
        }
      }
      v27[1] = nullptr;
      qfree(v29);
    }
    qfree(v27);
LABEL_40:
    v22 = 1;
    if ( !a10 )
      return v22;
LABEL_41:
    v35 = v48;
LABEL_42:
    sub_6C6FA0(a3, a1, *(_QWORD *)(a3 + 24), v35);
    return v22;
  }
  if ( (v13 & 0x2F) != 0xD )
    goto LABEL_16;
  v15 = sub_653670(*a1, a2, nullptr, a5, a6, nullptr, nullptr, nullptr);
  v16 = v15;
  if ( !v15 )
    goto LABEL_16;
  sub_6C1860(a3, a1, a4, (__int64)v15, 1, a7, a8);
  if ( a10 )
  {
    v36 = sub_6C6D30((char **)(a3 + 64), (unsigned __int64 *)(a3 + 24));
    sub_6B91C0((__int64)v36, (__int64)v16);
    v17 = *(char **)v16;
    if ( *(_QWORD *)v16 )
      goto LABEL_6;
    qfree(v16);
    goto LABEL_51;
  }
  v17 = *(char **)v16;
  if ( *(_QWORD *)v16 )
  {
LABEL_6:
    sa = *((char **)v16 + 1);
    if ( sa )
    {
      for ( j = nullptr; j != sa; ++j )
      {
        v19 = &v17[144 * (_QWORD)j];
        clear_tinfo_t(v19 + 64);
        v20 = *((void **)v19 + 5);
        if ( v20 )
        {
          *((_QWORD *)v19 + 6) = 0;
          qfree(v20);
        }
        v21 = *((void **)v19 + 2);
        if ( v21 )
        {
          *((_QWORD *)v19 + 3) = 0;
          qfree(v21);
        }
        v17 = *(char **)v16;
      }
    }
    *((_QWORD *)v16 + 1) = 0;
    qfree(v17);
    qfree(v16);
    goto LABEL_14;
  }
  qfree(v16);
  return 1;
}
