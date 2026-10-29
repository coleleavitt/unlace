__int64 __fastcall sub_83C640(_QWORD *a1, __int64 *a2, unsigned int *a3, size_t a4)
{
  __int64 v6; // r13
  unsigned int v8; // r15d
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 (*v20)(); // rax
  char *v21; // rsi
  char *v23; // rsi
  char *v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  char *v28; // rsi
  char *v29; // rdi
  __int64 *v30; // [rsp+0h] [rbp-C0h]
  int v31; // [rsp+Ch] [rbp-B4h]
  __int64 v32; // [rsp+10h] [rbp-B0h]
  __int64 v33; // [rsp+10h] [rbp-B0h]
  int v34; // [rsp+24h] [rbp-9Ch] BYREF
  void *v35; // [rsp+28h] [rbp-98h] BYREF
  __int128 v36; // [rsp+30h] [rbp-90h]
  void *v37; // [rsp+48h] [rbp-78h] BYREF
  __int128 v38; // [rsp+50h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-58h] BYREF
  __int128 v40; // [rsp+70h] [rbp-50h]
  unsigned __int64 v41; // [rsp+80h] [rbp-40h]

  v6 = a1[1];
  v30 = a2;
  v41 = __readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  v37 = nullptr;
  v38 = 0;
  if ( v6 )
  {
    a2 = nullptr;
    v35 = (void *)qvector_reserve(&v35, 0, v6, 4);
    memset((char *)v35 + 4 * v36, 0, 4 * (v6 - v36));
    *(_QWORD *)&v36 = v6;
    v25 = v38;
    v26 = a1[1];
    if ( (unsigned __int64)v38 < v26 )
    {
      v28 = (char *)v37;
      if ( *((_QWORD *)&v38 + 1) < v26 )
      {
        v37 = (void *)qvector_reserve(&v37, v37, a1[1], 8);
        v25 = v38;
        v28 = (char *)v37;
      }
      v29 = &v28[8 * v25];
      a2 = nullptr;
      memset(v29, 0, 8 * (v26 - v25));
      *(_QWORD *)&v38 = v26;
      v26 = a1[1];
    }
    else if ( v26 != (_QWORD)v38 )
    {
      *(_QWORD *)&v38 = a1[1];
    }
    v27 = 0;
    if ( v26 )
    {
      do
      {
        *((_DWORD *)v35 + v27) = *(_DWORD *)(a1[2] + 4 * v27);
        *((_QWORD *)v37 + v27) = v27;
        ++v27;
      }
      while ( v27 < a1[1] );
    }
  }
  v8 = 0;
  ptr = nullptr;
  v31 = 0;
  v40 = 0;
  if ( (_QWORD)v36 )
  {
    do
    {
      v14 = *a3;
      if ( (int)v14 < 0 )
      {
        v9 = a3[6];
      }
      else
      {
        v15 = qtime64(v14, a2);
        v16 = (unsigned int)v15 + 1000000 * HIDWORD(v15);
        v17 = *((_QWORD *)a3 + 2);
        if ( v16 + 10 >= v17 )
          goto LABEL_28;
        a3[6] = (v17 + 999 - v16) / 0x3E8;
        v9 = (v17 + 999 - v16) / 0x3E8;
      }
      v10 = qwait_for_handles(&v34, (int *)v35, v36, 0, v9);
      v8 = v10;
      if ( v10 < 0 )
      {
        winerr(v10);
        sub_83C550(v30);
        goto LABEL_29;
      }
      if ( !v10 && v34 == -1 )
      {
LABEL_28:
        v8 = -1;
        goto LABEL_29;
      }
      v11 = v40;
      if ( (unsigned __int64)v40 < a4 )
      {
        v21 = (char *)ptr;
        if ( *((_QWORD *)&v40 + 1) < a4 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, a4, 1);
          v11 = v40;
          v21 = (char *)ptr;
        }
        memset(&v21[v11], 0, a4 - v11);
        *(_QWORD *)&v40 = a4;
      }
      else if ( a4 != (_QWORD)v40 )
      {
        *(_QWORD *)&v40 = a4;
      }
      a2 = (__int64 *)ptr;
      v12 = qpipe_read(*((_DWORD *)v35 + v34), ptr, a4);
      v8 = v12;
      if ( v12 > 0 )
      {
        v18 = v40;
        v19 = v12;
        if ( (unsigned __int64)v40 < v12 )
        {
          v23 = (char *)ptr;
          if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)v12 )
          {
            v33 = v12;
            ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
            v18 = v40;
            v23 = (char *)ptr;
            v19 = v33;
          }
          v24 = &v23[v18];
          a2 = nullptr;
          v32 = v19;
          memset(v24, 0, v19 - v18);
          *(_QWORD *)&v40 = v32;
        }
        else if ( v12 != (_QWORD)v40 )
        {
          *(_QWORD *)&v40 = v12;
        }
        v20 = *(__int64 (**)())(*a1 + 16LL);
        if ( v20 != sub_83BEA0 )
        {
          a2 = *((__int64 **)v37 + v34);
          if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, void **))v20)(a1, a2, &ptr) )
          {
            v8 = -2;
            goto LABEL_29;
          }
        }
      }
      else
      {
        if ( v12 )
        {
          v8 = -v12;
          winerr(-v12);
          sub_83C550(v30);
          v31 = 1;
        }
        memmove((char *)v35 + 4 * v34, (char *)v35 + 4 * v34 + 4, 4 * (v36 - v34) - 4);
        *(_QWORD *)&v36 = v36 - 1;
        v13 = (__int64 *)((char *)v37 + 8 * v34);
        a2 = v13 + 1;
        memmove(v13, v13 + 1, 8 * (v38 - v34) - 8);
        *(_QWORD *)&v38 = v38 - 1;
      }
    }
    while ( (_QWORD)v36 );
    if ( !v31 )
      v8 = 0;
LABEL_29:
    if ( ptr )
    {
      *(_QWORD *)&v40 = 0;
      qfree(ptr);
    }
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return v8;
}
