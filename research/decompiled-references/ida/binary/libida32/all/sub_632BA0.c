unsigned __int64 __fastcall sub_632BA0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  const char *v5; // r15
  int v8; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // r10d
  unsigned int v17; // r10d
  __int64 v18; // rax
  size_t v19; // rax
  char *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r15
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  _QWORD *v26; // rbx
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rbx
  char *v31; // rax
  void *v32; // rdi
  __int64 v34; // rsi
  size_t v35; // rax
  __int64 v36; // rcx
  const char *v37; // rax
  unsigned __int8 v38; // al
  const char **v39; // r13
  const char *v40; // rsi
  const char *v41; // rdx
  int v42; // esi
  int v43; // eax
  unsigned int v44; // [rsp+4h] [rbp-10Ch]
  unsigned int v45; // [rsp+10h] [rbp-100h]
  const char *v46; // [rsp+10h] [rbp-100h]
  int v47; // [rsp+18h] [rbp-F8h]
  unsigned int v48; // [rsp+18h] [rbp-F8h]
  unsigned int v49; // [rsp+18h] [rbp-F8h]
  const char **v50; // [rsp+18h] [rbp-F8h]
  __int64 v52; // [rsp+28h] [rbp-E8h]
  void *v53; // [rsp+30h] [rbp-E0h] BYREF
  __int128 v54; // [rsp+38h] [rbp-D8h]
  int v55; // [rsp+48h] [rbp-C8h]
  __int16 v56; // [rsp+4Ch] [rbp-C4h]
  char v57; // [rsp+4Eh] [rbp-C2h]
  void *v58; // [rsp+50h] [rbp-C0h]
  __int128 v59; // [rsp+58h] [rbp-B8h]
  void *s; // [rsp+68h] [rbp-A8h]
  __int64 v61; // [rsp+70h] [rbp-A0h]
  void *v62; // [rsp+78h] [rbp-98h]
  __int64 v63; // [rsp+80h] [rbp-90h]
  int v64; // [rsp+88h] [rbp-88h]
  __int64 v65; // [rsp+90h] [rbp-80h]
  void *v66[2]; // [rsp+98h] [rbp-78h] BYREF
  __int128 v67; // [rsp+A8h] [rbp-68h]
  void *ptr; // [rsp+B8h] [rbp-58h]
  __int128 v69; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v70; // [rsp+D8h] [rbp-38h]

  v5 = (const char *)(a3 + 4);
  v8 = *(char *)(a3 + 4);
  v70 = __readfsqword(0x28u);
  if ( (_BYTE)v8 == 35 )
  {
    v10 = a3 + 5;
    if ( !*(_BYTE *)(a3 + 5) )
      goto LABEL_9;
  }
  else
  {
    v10 = a3 + 5;
    if ( !(_BYTE)v8 )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  v11 = 0;
  do
  {
    ++v10;
    v11 = v8 ^ __ROL4__(v11, 5);
    v8 = *(char *)(v10 - 1);
  }
  while ( *(_BYTE *)(v10 - 1) );
LABEL_5:
  v12 = *(_QWORD *)(a2 + 32);
  v13 = (unsigned int *)(*(_QWORD *)(a2 + 24) + 4LL * (int)(v11 % *(_DWORD *)(a2 + 16)));
  v14 = *v13;
  while ( 1 )
  {
    v15 = v14 & 0x7FFFFFFF;
    if ( (_DWORD)a3 - (_DWORD)v12 == (_DWORD)v15 )
      break;
    v13 = (unsigned int *)(v12 + v15);
    v14 = *(_DWORD *)(v12 + v15);
    if ( v14 == 0x7FFFFFFF )
    {
      if ( !under_debugger )
        interr(138);
LABEL_67:
      BUG();
    }
  }
  *v13 = v14 & 0x80000000 | *(_DWORD *)a3 & 0x7FFFFFFF;
LABEL_9:
  v16 = *(_DWORD *)(a2 + 8);
  v56 = 0;
  v53 = nullptr;
  v17 = v16 & 2;
  v55 = -1;
  v57 = 0;
  v58 = nullptr;
  s = v66;
  v61 = 1;
  v62 = nullptr;
  v63 = 0;
  v64 = 1065353216;
  v65 = 0;
  ptr = nullptr;
  v54 = 0;
  v59 = 0;
  *(_OWORD *)v66 = 0;
  v67 = 0;
  v69 = 0;
  if ( !a4 )
  {
    v34 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == *(_QWORD *)(a1 + 8) )
    {
      v45 = v17;
      v47 = v34;
      v35 = strlen(v5);
      v36 = 0x200020002000LL;
      v17 = v45;
      v37 = &v5[v35];
      if ( _bittest64(&v36, *((unsigned __int8 *)v37 + 5)) )
      {
        v44 = v45;
        v42 = (_DWORD)v37 + 5;
        v46 = &v37[strlen(v37 + 5) + 6];
        v43 = strlen(v46);
        sub_6A6250(a1, v47, (unsigned int)&v53, (_DWORD)v5, v42, (_DWORD)v46 + v43 + 1, -1, 0);
        v17 = v44;
      }
      if ( v17 && (v56 & 0x2F) == 0xD
        || (v48 = v17, sub_6996B0(a1, *(_QWORD *)a2, v5, v17 >> 1), v17 = v48, (v56 & 0x2F) == 0xD) )
      {
        v49 = v17;
        v38 = sub_69A8C0(a1);
        sub_69F790(&v53, a1, v38 ^ 1u);
        v17 = v49;
      }
    }
  }
  if ( v17 )
  {
    v18 = *(unsigned int *)&v5[strlen(v5) + 1];
    if ( !(_DWORD)v18 || (unsigned int)v18 >= *(_DWORD *)(a2 + 48) )
    {
      if ( !under_debugger )
        interr(139);
      goto LABEL_67;
    }
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v18) = -1;
  }
  v19 = sub_62A040((const char *)a3);
  sub_629B20(a2, a3, v19 - a3);
  if ( !a4 )
  {
    if ( *(_QWORD *)(a2 + 64) )
    {
      qfree(*(void **)(a2 + 56));
      qfree(*(void **)(a2 + 64));
      *(_QWORD *)(a2 + 72) = 0;
      *(_OWORD *)(a2 + 56) = 0;
    }
    if ( (v56 & 0x3F) == 0x2D )
    {
      if ( (_QWORD)v59 )
      {
        v50 = (const char **)((char *)v58 + 32 * v59);
        if ( v50 != v58 )
        {
          v39 = (const char **)v58;
          do
          {
            v40 = haystack;
            if ( v39[1] )
              v40 = *v39;
            if ( *(_QWORD *)(*(_QWORD *)a2 + 56LL) )
            {
              v52 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
              v41 = sub_631E40(v52, v40, 0);
              if ( v41 )
                sub_6331E0(a1, v52, v41, 0);
            }
            v39 += 4;
          }
          while ( v50 != v39 );
        }
      }
    }
  }
  sub_69B160(a1, &v53);
  v20 = (char *)ptr;
  if ( ptr )
  {
    v21 = v69;
    if ( (_QWORD)v69 )
    {
      v22 = 0;
      do
      {
        v23 = &v20[128 * v22];
        clear_tinfo_t(v23 + 64);
        v24 = *((void **)v23 + 5);
        if ( v24 )
        {
          *((_QWORD *)v23 + 6) = 0;
          qfree(v24);
        }
        v25 = *((void **)v23 + 2);
        if ( v25 )
        {
          *((_QWORD *)v23 + 3) = 0;
          qfree(v25);
        }
        v20 = (char *)ptr;
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v69 = 0;
    qfree(v20);
  }
  if ( v66[1] )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66[1]);
  }
  v26 = v62;
  if ( v62 )
  {
    do
    {
      v27 = v26;
      v26 = (_QWORD *)*v26;
      operator delete(v27, 0x20u);
    }
    while ( v26 );
  }
  memset(s, 0, 8 * v61);
  v63 = 0;
  v62 = nullptr;
  if ( s != v66 )
    operator delete(s, 8 * v61);
  v28 = (char *)v58;
  if ( v58 )
  {
    v29 = v59;
    if ( (_QWORD)v59 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[32 * v30];
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          qfree(v32);
          v28 = (char *)v58;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v28);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return v70 - __readfsqword(0x28u);
}

