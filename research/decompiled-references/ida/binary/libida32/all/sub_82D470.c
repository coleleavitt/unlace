unsigned __int64 __fastcall sub_82D470(char *a1, char *a2, __int64 a3)
{
  char *v4; // rbp
  char *v6; // r13
  char *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  _BYTE *v18; // rsi
  const char *v19; // rdx
  const char *v20; // rbp
  int user_idadir; // eax
  int v22; // r9d
  void *v23; // [rsp+0h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v4 = a2;
  v6 = a1 + 1032;
  v26 = __readfsqword(0x28u);
  *(_QWORD *)a1 = qmutex_create();
  memset(a1 + 1032, 0, 0x1000u);
  v7 = a1 + 8;
  *(_OWORD *)(a1 + 5128) = 0;
  *(_OWORD *)(a1 + 5144) = 0;
  *(_OWORD *)(a1 + 5160) = 0;
  *(_OWORD *)(a1 + 5176) = 0;
  *(_OWORD *)(a1 + 5192) = 0;
  *(_OWORD *)(a1 + 5208) = 0;
  *(_OWORD *)(a1 + 5224) = 0;
  *(_OWORD *)(a1 + 5240) = 0;
  *(_OWORD *)(a1 + 5256) = 0;
  *(_OWORD *)(a1 + 5272) = 0;
  *(_OWORD *)(a1 + 5288) = 0;
  *(_OWORD *)(a1 + 5304) = 0;
  *(_OWORD *)(a1 + 5320) = 0;
  *(_OWORD *)(a1 + 5336) = 0;
  *(_OWORD *)(a1 + 5352) = 0;
  *(_OWORD *)(a1 + 5368) = 0;
  *(_OWORD *)(a1 + 5384) = 0;
  *(_OWORD *)(a1 + 5400) = 0;
  *(_OWORD *)(a1 + 5416) = 0;
  *(_OWORD *)(a1 + 5432) = 0;
  *(_OWORD *)(a1 + 5448) = 0;
  *(_OWORD *)(a1 + 5464) = 0;
  *(_OWORD *)(a1 + 5480) = 0;
  *(_OWORD *)(a1 + 5496) = 0;
  *(_OWORD *)(a1 + 5512) = 0;
  *(_OWORD *)(a1 + 5528) = 0;
  *(_OWORD *)(a1 + 5544) = 0;
  *(_OWORD *)(a1 + 5560) = 0;
  *(_OWORD *)(a1 + 5576) = 0;
  *(_OWORD *)(a1 + 5592) = 0;
  *(_OWORD *)(a1 + 5608) = 0;
  *((_QWORD *)a1 + 709) = a1 + 5656;
  *((_QWORD *)a1 + 710) = a1 + 5656;
  if ( !a2 )
    v4 = "ida";
  a1[5640] = 0;
  *((_DWORD *)a1 + 1414) = 0;
  *((_QWORD *)a1 + 708) = 0;
  *((_QWORD *)a1 + 711) = 0;
  *((_QWORD *)a1 + 712) = -1;
  *((_QWORD *)a1 + 713) = 0;
  *((_DWORD *)a1 + 1428) = -1;
  *((_QWORD *)a1 + 715) = 0;
  *((_DWORD *)a1 + 1432) = 0;
  *(_OWORD *)(a1 + 5624) = 0;
  qstrncpy(v7, v4, 1024);
  v23 = nullptr;
  qgetenv("IDAREG_SPEC");
  if ( a3 )
  {
    qstrncpy(v6, a3, 4096);
  }
  else
  {
    ptr = nullptr;
    v25 = 0;
    v12 = strlen(a1 + 8);
    v13 = v12 + 1;
    v14 = v12;
    ptr = (void *)qvector_reserve(&ptr, 0, v12 + 1, 1);
    *(_QWORD *)&v25 = v13;
    memmove(ptr, a1 + 8, v14);
    *((_BYTE *)ptr + v14) = 0;
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v17 = v25 + 3;
      v16 = v25 + 4;
      v15 = v25 - 1;
    }
    else
    {
      v16 = 5;
      v17 = 4;
    }
    v18 = ptr;
    if ( *((_QWORD *)&v25 + 1) < v16 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v18 = ptr;
    }
    *(_QWORD *)&v25 = v16;
    v19 = haystack;
    v18[v17] = 0;
    *(_DWORD *)((char *)ptr + v15) = 1734701614;
    if ( (_QWORD)v25 )
      v19 = (const char *)ptr;
    if ( !getsysfile(v6, 4096, v19, 0) )
    {
      v20 = haystack;
      if ( (_QWORD)v25 )
        LODWORD(v20) = (_DWORD)ptr;
      user_idadir = get_user_idadir();
      qmakepath((int)v6, 4096, user_idadir, (int)v20, 0, v22, 0);
    }
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      qfree(ptr);
    }
  }
  v8 = qword_2CAD040;
  qmutex_lock(qword_2CAD040);
  v9 = xmmword_2CAD028;
  if ( !(_QWORD)xmmword_2CAD028 )
  {
    qatexit(sub_82DA60);
    v9 = xmmword_2CAD028;
  }
  ptr = a1;
  v10 = qword_2CAD020;
  if ( *((_QWORD *)&xmmword_2CAD028 + 1) < (unsigned __int64)(v9 + 1) )
  {
    qword_2CAD020 = qvector_reserve(&qword_2CAD020, qword_2CAD020, v9 + 1, 8);
    v10 = qword_2CAD020;
    v9 = xmmword_2CAD028;
  }
  *(_QWORD *)(v10 + 8 * v9) = a1;
  *(_QWORD *)&xmmword_2CAD028 = xmmword_2CAD028 + 1;
  qmutex_unlock(v8);
  if ( v23 )
    qfree(v23);
  return v26 - __readfsqword(0x28u);
}

