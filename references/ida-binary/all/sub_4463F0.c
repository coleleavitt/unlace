__int64 __fastcall sub_4463F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  const char *v5; // rax
  const char *p_src; // rsi
  unsigned int v7; // ebx
  __int64 v9; // r13
  char v10; // dl
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // r12
  const char *v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbp
  const char *v21; // r14
  void *v22; // rdi
  const char *v23; // rdi
  char *v24; // rax
  __int64 v25; // rax
  char *s2; // [rsp+0h] [rbp-130h]
  char *v29; // [rsp+18h] [rbp-118h]
  size_t n; // [rsp+20h] [rbp-110h]
  __int64 v31; // [rsp+28h] [rbp-108h]
  __int64 v32; // [rsp+30h] [rbp-100h]
  __int64 v33; // [rsp+38h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+40h] [rbp-F0h]
  void *v35; // [rsp+58h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+60h] [rbp-D0h]
  void *src; // [rsp+78h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-B0h]
  int v39; // [rsp+90h] [rbp-A0h]
  __int64 v40; // [rsp+98h] [rbp-98h]
  __int128 v41; // [rsp+A0h] [rbp-90h]
  __int64 v42; // [rsp+B0h] [rbp-80h]
  __int128 v43; // [rsp+B8h] [rbp-78h]
  size_t v44; // [rsp+D8h] [rbp-58h]
  __int64 v45; // [rsp+E0h] [rbp-50h]
  int v46; // [rsp+E8h] [rbp-48h]
  char v47; // [rsp+ECh] [rbp-44h]
  unsigned __int64 v48; // [rsp+F0h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 8) == 0;
  v34 = 0;
  v5 = &s1;
  v33 = 0;
  v35 = nullptr;
  v36 = 0;
  if ( !v4 )
    v5 = *(const char **)a3;
  p_src = (const char *)&v35;
  v7 = sub_48E680(&v33, &v35, v5);
  if ( (_BYTE)v7 )
  {
    p_src = (const char *)&v33;
    src = nullptr;
    v38 = 0;
    v39 = 0;
    v7 = sub_442560((__int64 *)&src, (__int64)&v33);
    if ( !(_BYTE)v7 || (p_src = (const char *)&src, v9 = sub_4462E0(a1 + 424, (__int64)&src), v9 == a1 + 432) )
    {
      v7 = 0;
LABEL_35:
      if ( src )
      {
        *(_QWORD *)&v38 = 0;
        qfree(src, p_src);
      }
      goto LABEL_4;
    }
    n = v36;
    if ( (unsigned __int64)v36 > 1 )
    {
      p_src = (_BYTE *)(&dword_0 + 2);
      strrpl(v35, 2, 47);
      n = v36;
    }
    v10 = v7;
    v40 = 0;
    v29 = nullptr;
    v11 = v39;
    v42 = 0;
    v44 = 0;
    v41 = 0;
    v43 = 0;
    if ( n )
    {
      v24 = (char *)qalloc_or_throw(n);
      p_src = (const char *)v35;
      v29 = v24;
      v44 = n;
      memcpy(v24, v35, n);
      v10 = 0;
    }
    v12 = *(_QWORD *)(v9 + 72);
    v46 = v11;
    v13 = *(_QWORD *)(v9 + 64);
    v45 = 0;
    v47 = 0;
    v31 = v13;
    v32 = 88 * v12;
    v14 = 0x2E8BA2E8BA2E8BA3LL * ((88 * v12) >> 3);
    v15 = v29;
    if ( v10 )
      v15 = &s1;
    v16 = v14;
    s2 = (char *)v15;
    while ( v16 > 0 )
    {
      while ( 1 )
      {
        v17 = &s1;
        v18 = v13 + 88 * (v16 >> 1);
        if ( *(_QWORD *)(v18 + 56) )
          v17 = *(const char **)(v18 + 48);
        p_src = s2;
        if ( strcmp(v17, s2) >= 0 )
          break;
        v13 = v18 + 88;
        v16 = v16 - 1 - (v16 >> 1);
        if ( v16 <= 0 )
          goto LABEL_23;
      }
      v16 >>= 1;
    }
LABEL_23:
    if ( v13 == v32 + v31 )
      goto LABEL_40;
    v19 = *(_QWORD *)(v13 + 56);
    if ( n )
    {
      p_src = v29;
      v23 = &s1;
      if ( !v19 )
        goto LABEL_39;
    }
    else
    {
      p_src = &s1;
      if ( !v19 )
      {
LABEL_26:
        if ( a2 )
          *a2 = v13;
        if ( a4 )
        {
          v20 = v38;
          if ( (unsigned __int64)v38 < 2 )
          {
            *(_QWORD *)(a4 + 8) = 0;
          }
          else
          {
            v21 = (const char *)src;
            v22 = *(void **)a4;
            if ( *(_QWORD *)(a4 + 16) < (unsigned __int64)v38 )
            {
              v25 = qvector_reserve(a4, *(_QWORD *)a4, v38, 1);
              *(_QWORD *)a4 = v25;
              v22 = (void *)v25;
            }
            p_src = v21;
            *(_QWORD *)(a4 + 8) = v20;
            memmove(v22, v21, v20 - 1);
            *(_BYTE *)(*(_QWORD *)a4 + v20 - 1) = 0;
          }
          *(_DWORD *)(a4 + 24) = v39;
        }
        goto LABEL_41;
      }
    }
    v23 = *(const char **)(v13 + 48);
LABEL_39:
    if ( !strcmp(v23, p_src) )
      goto LABEL_26;
LABEL_40:
    v7 = 0;
LABEL_41:
    if ( v29 )
      qfree(v29, p_src);
    goto LABEL_35;
  }
LABEL_4:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, p_src);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, p_src);
  }
  return v7;
}
