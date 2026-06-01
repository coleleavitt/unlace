__int64 __fastcall sub_3BC590(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v11; // rbx
  const char *v12; // rsi
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v22; // rax
  size_t v23; // r15
  size_t v24; // r8
  __int64 v25; // r9
  int v26; // r15d
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  double v29; // xmm0_8
  size_t v30; // r14
  const char *v31; // rdx
  char *v32; // r15
  unsigned int v33; // eax
  double v34; // xmm4_8
  double v35; // xmm5_8
  unsigned __int8 v36; // al
  const void *v37; // r9
  void *v38; // rax
  __int64 *v39; // [rsp+0h] [rbp-F8h]
  const void *v40; // [rsp+8h] [rbp-F0h]
  __int64 v41; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-E0h] BYREF
  void *src; // [rsp+20h] [rbp-D8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-D0h]
  const char *v45; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+48h] [rbp-B0h]
  char *s1; // [rsp+60h] [rbp-98h] BYREF
  __int128 v48; // [rsp+68h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-78h] BYREF
  __int128 v50; // [rsp+88h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  __int128 v52; // [rsp+A0h] [rbp-58h]
  int v53; // [rsp+B0h] [rbp-48h]
  char v54; // [rsp+B4h] [rbp-44h]
  unsigned __int64 v55; // [rsp+B8h] [rbp-40h]

  v11 = (int)a3;
  v55 = __readfsqword(0x28u);
  v41 = 0;
  copy_tinfo_t(&v41, a2, a3);
  v12 = (_BYTE *)(&qword_28 + 5);
  src = nullptr;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0x80;
  *(_OWORD *)n = 0;
  v50 = 0;
  v52 = 0;
  v13 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v41, 45, &v49) || v11 >= (unsigned __int64)v50 )
    goto LABEL_3;
  v22 = 56 * v11 + v49;
  if ( (void **)v22 != &src )
  {
    v23 = *(_QWORD *)(v22 + 8);
    if ( v23 && (v24 = v23 - 1, v23 != 1) )
    {
      v37 = *(const void **)v22;
      v38 = src;
      if ( n[1] < v23 )
      {
        v40 = v37;
        LOBYTE(v39) = v23 - 1;
        v38 = (void *)qvector_reserve(&src, src, v23, 1);
        v37 = v40;
        v24 = v23 - 1;
        src = v38;
      }
      n[0] = v23;
      memmove(v38, v37, v24);
      *((char *)src + v23 - 1) = 0;
    }
    else
    {
      n[0] = 0;
    }
  }
  v26 = (unsigned int)sub_3BB450(
                        (__int64)"Rename enum member\n\n%/Enum:  %A\n\n<~N~ame :q::40::>\n<~V~alue:N2::40::>",
                        (__int64)&v49);
  v45 = nullptr;
  v46 = 0;
  if ( (v41 & 0x100) != 0 )
  {
    v39 = (__int64 *)&v45;
    get_tinfo_pdata(&v45, v41, 8);
    if ( (unsigned __int64)v46 > 0x51 )
      sub_3B5F80((__int64 *)&v45);
  }
  v29 = 0.0;
  s1 = nullptr;
  v48 = 0;
  v30 = n[0];
  v42 = *(_QWORD *)(v49 + 56 * v11 + 48);
  if ( n[0] )
  {
    s1 = (char *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v48 + 1) = v30;
    memcpy(s1, src, v30);
    *(_QWORD *)&v48 = v30;
  }
  v31 = &::s1;
  if ( (_QWORD)v46 )
    v31 = v45;
  v12 = (const char *)sub_3B55B0;
  if ( !(unsigned int)sub_1697D0(
                        v26,
                        (__int64)sub_3B55B0,
                        (__int64)v31,
                        (__int64)&s1,
                        (__int64)&v42,
                        v25,
                        (__m128)0LL,
                        a5,
                        a6,
                        a7,
                        v27,
                        v28,
                        a10,
                        a11,
                        (char)v39) )
    goto LABEL_39;
  if ( n[0] )
  {
    v12 = (const char *)src;
    if ( !(_QWORD)v48 )
    {
      if ( *(_BYTE *)src )
      {
        v32 = (char *)&::s1;
        goto LABEL_31;
      }
LABEL_39:
      v32 = s1;
      v13 = 1;
      goto LABEL_32;
    }
  }
  else
  {
    v12 = &::s1;
    if ( !(_QWORD)v48 )
      goto LABEL_39;
  }
  v32 = s1;
  if ( !strcmp(s1, v12) )
  {
    v13 = 1;
    goto LABEL_32;
  }
LABEL_31:
  v33 = set_tinfo_property4(&v41, 22, v11, v32, 0, 0);
  v12 = (const char *)v33;
  v36 = sub_3AC490(a1, v33, (__int64)"Renaming failed", (__m128)0LL, a5, a6, a7, v34, v35, a10, a11);
  v32 = s1;
  v13 = v36;
LABEL_32:
  if ( v32 )
  {
    *(_QWORD *)&v48 = 0;
    v29 = qfree(v32, v12);
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v12, v29);
  }
LABEL_3:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, v12);
  }
  v14 = v49;
  if ( v49 )
  {
    v15 = v50;
    if ( (_QWORD)v50 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v14 + v16);
        v19 = *(_QWORD *)(v14 + v16 + 24);
        if ( v19 )
        {
          v18[4] = 0;
          qfree(v19, v12);
        }
        v20 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v20, v12);
        }
        ++v17;
        v14 = v49;
        v16 += 56;
      }
      while ( v15 != v17 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v14, v12);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v12);
  }
  clear_tinfo_t(&v41);
  return v13;
}
