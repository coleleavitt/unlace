__int64 __fastcall sub_819280(_QWORD *a1, __int64 *a2, unsigned int *a3, size_t a4)
{
  __int64 v6; // r13
  unsigned int v8; // r15d
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 (*v21)(); // rax
  char *v22; // rsi
  char *v24; // rsi
  char *v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rax
  char *v29; // rsi
  char *v30; // rdi
  __int64 *v31; // [rsp+0h] [rbp-C0h]
  int v32; // [rsp+Ch] [rbp-B4h]
  __int64 v33; // [rsp+10h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-B0h]
  int v35; // [rsp+24h] [rbp-9Ch] BYREF
  void *v36; // [rsp+28h] [rbp-98h] BYREF
  __int128 v37; // [rsp+30h] [rbp-90h]
  void *v38; // [rsp+48h] [rbp-78h] BYREF
  __int128 v39; // [rsp+50h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-58h] BYREF
  __int128 v41; // [rsp+70h] [rbp-50h]
  unsigned __int64 v42; // [rsp+80h] [rbp-40h]

  v6 = a1[1];
  v31 = a2;
  v42 = __readfsqword(0x28u);
  v37 = 0;
  v36 = nullptr;
  v38 = nullptr;
  v39 = 0;
  if ( v6 )
  {
    a2 = nullptr;
    v36 = (void *)qvector_reserve(&v36, 0, v6, 4);
    memset((char *)v36 + 4 * v37, 0, 4 * (v6 - v37));
    *(_QWORD *)&v37 = v6;
    v26 = v39;
    v27 = a1[1];
    if ( (unsigned __int64)v39 < v27 )
    {
      v29 = (char *)v38;
      if ( *((_QWORD *)&v39 + 1) < v27 )
      {
        v38 = (void *)qvector_reserve(&v38, v38, a1[1], 8);
        v26 = v39;
        v29 = (char *)v38;
      }
      v30 = &v29[8 * v26];
      a2 = nullptr;
      memset(v30, 0, 8 * (v27 - v26));
      *(_QWORD *)&v39 = v27;
      v27 = a1[1];
    }
    else if ( v27 != (_QWORD)v39 )
    {
      *(_QWORD *)&v39 = a1[1];
    }
    v28 = 0;
    if ( v27 )
    {
      do
      {
        *((_DWORD *)v36 + v28) = *(_DWORD *)(a1[2] + 4 * v28);
        *((_QWORD *)v38 + v28) = v28;
        ++v28;
      }
      while ( v28 < a1[1] );
    }
  }
  v8 = 0;
  ptr = nullptr;
  v32 = 0;
  v41 = 0;
  if ( (_QWORD)v37 )
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
        v18 = (v17 + 999 - v16) / 0x3E8;
        a3[6] = v18;
        v9 = (unsigned int)v18;
      }
      v10 = qwait_for_handles(&v35, v36, (unsigned int)v37, 0, v9);
      v8 = v10;
      if ( v10 < 0 )
      {
        winerr(v10);
        sub_819190(v31);
        goto LABEL_29;
      }
      if ( !v10 && v35 == -1 )
      {
LABEL_28:
        v8 = -1;
        goto LABEL_29;
      }
      v11 = v41;
      if ( (unsigned __int64)v41 < a4 )
      {
        v22 = (char *)ptr;
        if ( *((_QWORD *)&v41 + 1) < a4 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, a4, 1);
          v11 = v41;
          v22 = (char *)ptr;
        }
        memset(&v22[v11], 0, a4 - v11);
        *(_QWORD *)&v41 = a4;
      }
      else if ( a4 != (_QWORD)v41 )
      {
        *(_QWORD *)&v41 = a4;
      }
      a2 = (__int64 *)ptr;
      v12 = qpipe_read(*((_DWORD *)v36 + v35), ptr, a4);
      v8 = v12;
      if ( v12 > 0 )
      {
        v19 = v41;
        v20 = v12;
        if ( (unsigned __int64)v41 < v12 )
        {
          v24 = (char *)ptr;
          if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)v12 )
          {
            v34 = v12;
            ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
            v19 = v41;
            v24 = (char *)ptr;
            v20 = v34;
          }
          v25 = &v24[v19];
          a2 = nullptr;
          v33 = v20;
          memset(v25, 0, v20 - v19);
          *(_QWORD *)&v41 = v33;
        }
        else if ( v12 != (_QWORD)v41 )
        {
          *(_QWORD *)&v41 = v12;
        }
        v21 = *(__int64 (**)())(*a1 + 16LL);
        if ( v21 != sub_818AE0 )
        {
          a2 = *((__int64 **)v38 + v35);
          if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, void **))v21)(a1, a2, &ptr) )
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
          sub_819190(v31);
          v32 = 1;
        }
        memmove((char *)v36 + 4 * v35, (char *)v36 + 4 * v35 + 4, 4 * (v37 - v35) - 4);
        *(_QWORD *)&v37 = v37 - 1;
        v13 = (__int64 *)((char *)v38 + 8 * v35);
        a2 = v13 + 1;
        memmove(v13, v13 + 1, 8 * (v39 - v35) - 8);
        *(_QWORD *)&v39 = v39 - 1;
      }
    }
    while ( (_QWORD)v37 );
    if ( !v32 )
      v8 = 0;
LABEL_29:
    if ( ptr )
    {
      *(_QWORD *)&v41 = 0;
      qfree(ptr);
    }
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v8;
}

