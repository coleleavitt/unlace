__int64 __fastcall sub_6E6E70(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __int64 v16; // rbp
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  char v23; // dl
  char v24; // dl
  unsigned __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // r15
  __int64 v30; // r13
  bool v31; // cf
  char *v32; // r15
  __int64 v33; // rbp
  char *v34; // r14
  int v35; // r13d
  __int64 v36; // r12
  const char *v37; // rbx
  char v38; // dl
  unsigned int v39; // eax
  unsigned int v40; // r12d
  char *v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbx
  char *v44; // rax
  void *v45; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rbp
  const char *v50; // rsi
  __int64 v51; // r12
  int v52; // edx
  char v53; // al
  char v54; // al
  const char *v55; // rdx
  const char *v56; // rax
  char v57; // al
  const char *v58; // rcx
  _QWORD *v59; // [rsp+0h] [rbp-B8h]
  __int64 *v62; // [rsp+18h] [rbp-A0h]
  __int64 v63; // [rsp+30h] [rbp-88h]
  __int64 v64; // [rsp+38h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v66; // [rsp+48h] [rbp-70h]
  void *v67; // [rsp+60h] [rbp-58h] BYREF
  __int128 v68; // [rsp+68h] [rbp-50h]
  unsigned __int64 v69; // [rsp+78h] [rbp-40h]

  v16 = (__int64)a1;
  v69 = __readfsqword(0x28u);
  v18 = sub_6DB820(a1, a4, a5);
  v23 = *(_BYTE *)(a2 + 88) & 0xF;
  if ( (v18 & 0xFFFFFF0F) != 0 || v18 == 192 )
  {
    v24 = v23 | 0xC0;
  }
  else
  {
    v24 = v18 | v23;
    v18 = 0;
  }
  *(_BYTE *)(a2 + 88) = v24;
  v25 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(a2 + 28) = v18;
  v26 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v27 = *(unsigned __int8 *)(v26 + 16);
  if ( (unsigned int)(v27 - 25) <= 1 && v26 )
  {
    v28 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v29 = 0;
    if ( (_BYTE)v27 != 26 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v28 = sub_F63050(v26, a4, v27, v19, v20);
  if ( !v28 )
    return 0;
  v26 = *(_QWORD *)v25;
  v29 = 0;
  if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 26 && v26 )
LABEL_7:
    v29 = *(_BYTE *)(v26 + 19) >> 7;
LABEL_8:
  if ( (*(_BYTE *)(v28 + 21) & 1) != 0 )
    *(_DWORD *)(a2 + 24) |= 2u;
  if ( *(char *)(v16 + 121) < 0 )
    *(_DWORD *)(a2 + 24) |= 8u;
  v30 = *(_QWORD *)(v28 + 24);
  sub_6E4130((__int64 *)&v67, v16, v30, v19, a7, a8, a9, a10, v21, v22, a13, a14);
  v62 = (__int64 *)(a2 + 32);
  copy_tinfo_t(a2 + 32);
  clear_tinfo_t(&v67);
  if ( !*(_BYTE *)(a2 + 32) )
    return 0;
  v66 = 0;
  ptr = nullptr;
  sub_6DA320(v16, (__int64 *)&ptr, a4);
  sub_6DA320(v16, (__int64 *)&ptr, v30);
  if ( ptr != (char *)ptr + 24 * (_QWORD)v66 )
  {
    v31 = v29 == 0;
    v59 = (_QWORD *)v16;
    v32 = (char *)ptr + 24 * v66;
    v33 = a2;
    v34 = (char *)ptr;
    v35 = v31 ? -16 : -48;
    while ( 1 )
    {
      v36 = *((_QWORD *)v34 + 1);
      if ( !v36 )
        break;
      v37 = *(const char **)v34;
      if ( !strcmp(*(const char **)v34, "__usercall") )
      {
        v54 = *(_BYTE *)(v33 + 88);
        *(_DWORD *)(v33 + 28) = 0;
        *(_BYTE *)(v33 + 88) = v35 | v54 & 0xF;
      }
      else if ( !strcmp(v37, "__userpurge") )
      {
        v57 = *(_BYTE *)(v33 + 88);
        *(_DWORD *)(v33 + 28) = 0;
        *(_BYTE *)(v33 + 88) = v57 & 0xF | 0xE0;
      }
      else if ( (unsigned __int64)(v36 - 1) > 7 && !strncmp(v37, "__spoils", 8u) )
      {
        *(_DWORD *)(v33 + 24) |= 1u;
        v55 = haystack;
        if ( *((_QWORD *)v34 + 1) )
          v55 = *(const char **)v34;
        if ( !(unsigned __int8)sub_6FC970(*(_QWORD *)(*v59 + 1672LL), v33 + 64, v55) )
        {
          v56 = haystack;
          if ( *((_QWORD *)v34 + 1) )
            v56 = *(const char **)v34;
          sub_6DBD10(v59, a6, (__int64)"Illegal %s specification", v56);
LABEL_63:
          v40 = 0;
          goto LABEL_31;
        }
      }
      else if ( !strcmp(v37, "__near") )
      {
        *a3 |= 0x10u;
        *(_DWORD *)(v33 + 24) |= 0x40u;
      }
      else if ( !strcmp(v37, "__far") )
      {
        *a3 |= 0x20u;
        *(_DWORD *)(v33 + 24) |= 0x80u;
      }
      else
      {
        if ( strcmp(v37, "__pure") )
          goto LABEL_46;
        *(_DWORD *)(v33 + 24) |= 4u;
      }
LABEL_23:
      v34 += 24;
      if ( v32 == v34 )
      {
        a2 = v33;
        v16 = (__int64)v59;
        goto LABEL_25;
      }
    }
    v37 = haystack;
LABEL_46:
    v47 = v59[52];
    v48 = v47 + 24LL * v59[53];
    if ( v47 == v48 )
    {
LABEL_69:
      sub_6DE9E0(v59, v62, v37);
    }
    else
    {
      v63 = v33;
      v49 = v59[52];
      v64 = v49;
      while ( 1 )
      {
        v50 = haystack;
        if ( *(_QWORD *)(v49 + 8) )
          v50 = *(const char **)v49;
        if ( !strcmp(v37, v50) )
          break;
        v49 += 24;
        if ( v48 == v49 )
        {
          v33 = v63;
          goto LABEL_69;
        }
      }
      v51 = v49;
      v33 = v63;
      if ( v51 - v64 == -24 )
        goto LABEL_69;
      v52 = *(_DWORD *)(v59[55] - 0x5555555555555554LL * ((v51 - v64) >> 3));
      v53 = *(_BYTE *)(v63 + 88) & 0xF;
      if ( (v52 & 0xFFFFFF0F) != 0 || v52 == 192 )
      {
        *(_DWORD *)(v63 + 28) = v52;
        *(_BYTE *)(v63 + 88) = v53 | 0xC0;
      }
      else
      {
        *(_DWORD *)(v63 + 28) = 0;
        *(_BYTE *)(v63 + 88) = v52 | v53;
      }
    }
    goto LABEL_23;
  }
LABEL_25:
  v38 = *(_BYTE *)(a2 + 88);
  v39 = v38 & 0xF0;
  if ( (v38 & 0xF0) == 0xC0 )
    v39 = *(_DWORD *)(a2 + 28);
  if ( v39 <= 0x10 )
    v39 = getinf(99);
  if ( v39 - 208 <= 0x2F && (get_tinfo_property(*(_QWORD *)(a2 + 32), 2) & 0x3F) != 1 )
  {
    v67 = nullptr;
    v68 = 0;
    if ( !(unsigned __int8)sub_6DAD90(v16, a2 + 40, (__int64)v62, (__int64)&ptr, (char **)&v67) )
    {
      v58 = haystack;
      if ( (_QWORD)v68 )
        v58 = (const char *)v67;
      sub_6DBD10((_QWORD *)v16, a6, (__int64)"%s", v58);
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67);
      }
      goto LABEL_63;
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
  }
  v40 = 1;
LABEL_31:
  v41 = (char *)ptr;
  if ( ptr )
  {
    v42 = v66;
    if ( (_QWORD)v66 )
    {
      v43 = 0;
      do
      {
        v44 = &v41[24 * v43];
        v45 = *(void **)v44;
        if ( *(_QWORD *)v44 )
        {
          *((_QWORD *)v44 + 1) = 0;
          qfree(v45);
          v41 = (char *)ptr;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v66 = 0;
    qfree(v41);
  }
  return v40;
}
