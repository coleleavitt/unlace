__int64 __fastcall sub_33D640(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // r8d
  int v10; // r9d
  __m128 v11; // xmm0
  int v12; // r15d
  void **p_src; // rsi
  __int64 v14; // rcx
  _BYTE *v15; // rdi
  __int64 v16; // r8
  _BYTE *v17; // rdx
  _BYTE *v18; // rax
  unsigned __int64 v19; // r9
  _BYTE *v20; // rsi
  const char *v21; // rsi
  double v22; // xmm4_8
  double v23; // xmm5_8
  int v24; // eax
  __int64 v25; // rbx
  char *v27; // rdi
  unsigned __int8 v28; // bl
  size_t v29; // rax
  size_t v30; // rbx
  __int64 v31; // rbp
  __int16 aflags; // ax
  void *v33; // r12
  void *v34; // rdi
  void *v35; // rdi
  size_t v36; // r13
  __int64 v37; // r8
  size_t v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-4D0h]
  unsigned __int64 v41; // [rsp+0h] [rbp-4D0h]
  size_t v42; // [rsp+0h] [rbp-4D0h]
  size_t v43; // [rsp+0h] [rbp-4D0h]
  __int64 v44; // [rsp+8h] [rbp-4C8h]
  __int64 v45; // [rsp+8h] [rbp-4C8h]
  __int64 v46; // [rsp+8h] [rbp-4C8h]
  __int64 v47; // [rsp+8h] [rbp-4C8h]
  __int64 v48; // [rsp+10h] [rbp-4C0h] BYREF
  unsigned __int16 v49; // [rsp+26h] [rbp-4AAh] BYREF
  void *dest; // [rsp+28h] [rbp-4A8h] BYREF
  __int128 v51; // [rsp+30h] [rbp-4A0h]
  void *src; // [rsp+48h] [rbp-488h] BYREF
  __int128 v53; // [rsp+50h] [rbp-480h]
  void *v54; // [rsp+68h] [rbp-468h] BYREF
  __int128 v55; // [rsp+70h] [rbp-460h]
  char s[1032]; // [rsp+88h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+490h] [rbp-40h]

  v48 = a1;
  v57 = __readfsqword(0x28u);
  v49 = 2;
  dest = nullptr;
  src = nullptr;
  v51 = 0;
  v53 = 0;
  if ( get_ea_name(&src, a1, 64, 0) > 0 )
  {
    v31 = v53;
    if ( (unsigned __int64)v53 > 1 )
    {
      v33 = src;
      v34 = dest;
      if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)v53 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v53, 1);
        v34 = dest;
      }
      *(_QWORD *)&v51 = v31;
      memmove(v34, v33, v31 - 1);
      *((char *)dest + v31 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v51 = 0;
    }
    aflags = get_aflags(v48);
    v49 = sub_33C9A0(v48, (aflags & 0x4000) != 0);
  }
  v11 = 0;
  v54 = nullptr;
  v55 = 0;
  if ( v48 != -1 )
  {
    s[0] = 0;
    v28 = getinf(48);
    setinf(48, v28 | 1u);
    ea2str(s, 1024, v48);
    setinf(48, v28);
    v29 = strlen(s);
    v30 = v29;
    if ( v29 )
    {
      v35 = v54;
      v36 = v29 + 1;
      if ( *((_QWORD *)&v55 + 1) < v29 + 1 )
      {
        v54 = (void *)qvector_reserve(&v54, v54, v29 + 1, 1);
        v35 = v54;
      }
      *(_QWORD *)&v55 = v36;
      memmove(v35, s, v30);
      *((_BYTE *)v54 + v30) = 0;
    }
    else
    {
      *(_QWORD *)&v55 = 0;
    }
  }
  v12 = v49;
  do
  {
    while ( 1 )
    {
      p_src = &v54;
      if ( !(unsigned int)sub_507F10(1149, (unsigned int)&v54, (unsigned int)&dest, (unsigned int)&v49, v9, v10) )
        goto LABEL_26;
      v14 = v51;
      if ( (unsigned __int64)v51 > 1 )
      {
        v15 = dest;
        v16 = v51 - 1;
        v17 = (char *)dest + v51 - 1;
        v18 = v17;
        if ( dest < v17 )
        {
          while ( *(v18 - 1) == 32 )
          {
            if ( dest == --v18 )
              goto LABEL_35;
          }
          v16 = v18 - (_BYTE *)dest;
          if ( v18 != dest )
            goto LABEL_11;
LABEL_35:
          if ( !dest )
          {
LABEL_17:
            v20 = v15;
            while ( *v20 == 32 )
            {
              if ( v17 == ++v20 )
              {
                *v15 = *v17;
                v27 = (char *)dest;
                goto LABEL_38;
              }
            }
            if ( v15 >= v20 )
              goto LABEL_21;
            v46 = v17 - v20;
            v42 = v17 - v20 + 1;
            memmove(v15, v20, v42);
            v37 = v46;
            v20 = dest;
            v38 = v42;
            v27 = (char *)dest;
            if ( v46 )
            {
              v39 = v51;
              if ( (unsigned __int64)v51 < v42 )
              {
                if ( *((_QWORD *)&v51 + 1) < v42 )
                {
                  dest = (void *)qvector_reserve(&dest, dest, v42, 1);
                  v27 = (char *)dest;
                  v37 = v46;
                  v39 = v51;
                  v38 = v42;
                }
                v47 = v37;
                v43 = v38;
                memset(&v27[v39], 0, v38 - v39);
                v20 = dest;
                v37 = v47;
                *(_QWORD *)&v51 = v43;
              }
              else if ( v42 != (_QWORD)v51 )
              {
                *(_QWORD *)&v51 = v42;
              }
              v20[v37] = 0;
              goto LABEL_21;
            }
LABEL_38:
            if ( v27 )
            {
              *(_QWORD *)&v51 = 0;
              *(double *)v11.m128_u64 = qfree(v27, v20);
              dest = nullptr;
              *((_QWORD *)&v51 + 1) = 0;
            }
            goto LABEL_21;
          }
          *(_QWORD *)&v51 = 0;
          *(double *)v11.m128_u64 = qfree(dest, (const char *)&v54);
          dest = nullptr;
          *((_QWORD *)&v51 + 1) = 0;
        }
        else
        {
LABEL_11:
          v19 = v16 + 1;
          if ( (unsigned __int64)v51 < v16 + 1 )
          {
            if ( *((_QWORD *)&v51 + 1) < v19 )
            {
              v45 = v16;
              v41 = v16 + 1;
              dest = (void *)qvector_reserve(&dest, dest, v16 + 1, 1);
              v14 = v51;
              v15 = dest;
              v16 = v45;
              v19 = v41;
            }
            v40 = v19;
            v44 = v16;
            memset(&v15[v14], 0, v19 - v14);
            v18 = (char *)dest + v44;
            *(_QWORD *)&v51 = v40;
          }
          else if ( (_QWORD)v51 != v16 + 1 )
          {
            *(_QWORD *)&v51 = v16 + 1;
          }
          *v18 = 0;
        }
        if ( (unsigned __int64)v51 <= 1 )
          goto LABEL_21;
        v15 = dest;
        v17 = (char *)dest + v51 - 1;
        if ( dest >= v17 )
          goto LABEL_21;
        goto LABEL_17;
      }
LABEL_21:
      v21 = &s1;
      if ( (_QWORD)v55 )
        v21 = (const char *)v54;
      if ( (unsigned __int8)str2ea(&v48, v21, xmmword_8CC810) )
        break;
      sub_17CE30(1150);
    }
    p_src = &src;
    v24 = sub_33CC20(v48, (const char *)&src, (__int64)&dest, v12, &v49, 0, v11, a3, a4, a5, v22, v23, a8, a9);
  }
  while ( !v24 );
  if ( v24 != 1 )
  {
LABEL_26:
    v25 = -1;
    goto LABEL_27;
  }
  v25 = v48;
LABEL_27:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, (const char *)p_src);
  }
  if ( src )
  {
    *(_QWORD *)&v53 = 0;
    qfree(src, (const char *)p_src);
  }
  if ( dest )
  {
    *(_QWORD *)&v51 = 0;
    qfree(dest, (const char *)p_src);
  }
  return v25;
}
