unsigned __int64 __fastcall sub_456EB0(__int64 a1)
{
  int v1; // ebp
  const char *v2; // rdx
  const char *v4; // rbx
  char v5; // al
  double v6; // xmm0_8
  char *v7; // r9
  double v8; // xmm1_8
  size_t v9; // rbx
  int v10; // r8d
  int i; // r13d
  __int64 v12; // r9
  __int64 v13; // r15
  _BYTE *v14; // rsi
  __int64 v15; // rbx
  char *v16; // rbx
  int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // r15
  _BYTE *v20; // rsi
  __int64 v21; // rbx
  char *v22; // rbx
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // rdx
  size_t v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  const char *v36; // rdx
  _QWORD *v37; // r13
  __int64 v38; // rbx
  size_t v39; // r15
  __int64 v40; // r8
  const char *v41; // rdx
  const char *v42; // rdx
  size_t v43; // rbx
  int v44; // [rsp+0h] [rbp-98h]
  __int64 v45; // [rsp+0h] [rbp-98h]
  __int64 v46; // [rsp+0h] [rbp-98h]
  __int64 v47; // [rsp+0h] [rbp-98h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int128 v50; // [rsp+18h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  __int128 v52; // [rsp+38h] [rbp-60h]
  char v53[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v1 = (int)QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self || !*(_QWORD *)(a1 + 16) )
    return v54 - __readfsqword(0x28u);
  switch ( *(_BYTE *)(a1 + 24) )
  {
    case 2:
      v4 = "Downloading";
      break;
    case 3:
      v4 = "Uploading";
      break;
    case 4:
      v4 = "Calculating MD5";
      break;
    case 5:
      v4 = "Checking files";
      break;
    case 6:
      v4 = "Converting files";
      break;
    case 7:
      v4 = "Building deltas";
      break;
    default:
      v4 = "Transferring";
      break;
  }
  pretty_print_size(v53, 8, *(_QWORD *)(a1 + 8));
  v50 = 0;
  v5 = *(_BYTE *)(a1 + 24);
  v6 = (double)(int)*(_QWORD *)(a1 + 8) * 100.0;
  v7 = "bytes";
  v8 = (double)(int)*(_QWORD *)(a1 + 16);
  src = nullptr;
  if ( (unsigned __int8)(v5 - 5) <= 1u )
    v7 = "files";
  sub_169A50((__int64 *)&src, (__int64)"%s %s/%s %s (%.2f%%)\n", v4, v53, a1 + 25, v7, v6 / v8);
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 > 1 )
  {
    v51 = 0;
    v52 = 0;
    v23 = (void *)qalloc_or_throw(v9);
    v24 = *(const void **)(a1 + 40);
    v51 = (__int64)v23;
    *((_QWORD *)&v52 + 1) = v9;
    memcpy(v23, v24, v9);
    v25 = (unsigned int)(v9 - 41);
    *(_QWORD *)&v52 = v9;
    v26 = v9 - 1;
    if ( (int)v9 - 41 <= 0 )
      goto LABEL_55;
    v27 = v51;
    v28 = 0;
    if ( *(_BYTE *)(v51 + 1) == 58 )
    {
      v25 += 2LL;
      v28 = 2;
    }
    v29 = v28;
    if ( v25 < v26 )
    {
      v43 = v26 - v25;
      memmove((void *)(v51 + v28), (const void *)(v51 + v25), v26 - v25);
      v29 = v28 + v43;
      v27 = v51;
    }
    if ( *((_QWORD *)&v52 + 1) < v29 + 1 )
    {
      v27 = qvector_reserve(&v51, v27, v29 + 1, 1);
      v51 = v27;
    }
    *(_QWORD *)&v52 = v29 + 1;
    *(_BYTE *)(v27 + v29) = 0;
    v30 = v51;
    if ( (_QWORD)v52 )
    {
      v31 = v52 + 3;
      v32 = v52 - 1;
      v33 = v52 + 2;
      if ( *((_QWORD *)&v52 + 1) >= (unsigned __int64)(v52 + 3) )
        goto LABEL_44;
    }
    else
    {
      if ( *((_QWORD *)&v52 + 1) > 3u )
      {
        *(_QWORD *)&v52 = 4;
        v32 = 0;
        *(_BYTE *)(v51 + 3) = 0;
        goto LABEL_46;
      }
      v32 = 0;
      v31 = 4;
      v33 = 3;
    }
    v47 = v33;
    v51 = qvector_reserve(&v51, v51, v31, 1);
    v33 = v47;
    v30 = v51;
LABEL_44:
    *(_QWORD *)&v52 = v31;
    *(_BYTE *)(v30 + v33) = 0;
    if ( v28 < v32 )
    {
      v34 = v32;
      v32 = v28;
      memmove((void *)(v28 + v51 + 3), (const void *)(v28 + v51), v34 - v28);
    }
LABEL_46:
    v35 = v32 + v51;
    *(_WORD *)v35 = -32542;
    *(_BYTE *)(v35 + 2) = -90;
    if ( !(_QWORD)v52 )
    {
      v36 = &s1;
      goto LABEL_56;
    }
LABEL_55:
    v36 = (const char *)v51;
LABEL_56:
    sub_16FAA0((__int64 *)&src, (__int64)"File: %s\n", v36);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51, "File: %s\n", v42);
    }
  }
  v10 = 40LL * *(_QWORD *)(a1 + 8) / *(_QWORD *)(a1 + 16);
  if ( v10 <= 0 )
  {
    v17 = 1;
    while ( 1 )
    {
LABEL_32:
      v21 = v50;
      if ( (_QWORD)v50 )
      {
        v18 = v50 + 2;
        v19 = v50 + 3;
        v20 = src;
        v21 = v50 - 1;
        if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 3) )
          goto LABEL_34;
      }
      else
      {
        v20 = src;
        v19 = 4;
        v18 = 3;
        if ( *((_QWORD *)&v50 + 1) < 4u )
        {
LABEL_34:
          v45 = v18;
          src = (void *)qvector_reserve(&src, v20, v19, 1);
          v18 = v45;
          v20 = src;
        }
      }
      *(_QWORD *)&v50 = v19;
      ++v17;
      v20[v18] = 0;
      v22 = (char *)src + v21;
      *(_WORD *)v22 = -26910;
      v22[2] = -111;
      if ( v17 == 41 )
        goto LABEL_4;
    }
  }
  for ( i = 0; ; ++i )
  {
    v15 = v50;
    if ( (_QWORD)v50 )
    {
      v12 = v50 + 2;
      v13 = v50 + 3;
      v14 = src;
      v15 = v50 - 1;
      if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 3) )
        goto LABEL_18;
    }
    else
    {
      v14 = src;
      v13 = 4;
      v12 = 3;
      if ( *((_QWORD *)&v50 + 1) >= 4u )
        goto LABEL_18;
    }
    v48 = v12;
    v44 = v10;
    src = (void *)qvector_reserve(&src, v14, v13, 1);
    v12 = v48;
    v14 = src;
    v10 = v44;
LABEL_18:
    *(_QWORD *)&v50 = v13;
    v14[v12] = 0;
    v16 = (char *)src + v15;
    *(_WORD *)v16 = -26910;
    v16[2] = -120;
    if ( v10 == i + 1 )
      break;
  }
  v17 = i + 2;
  if ( v17 <= 40 )
    goto LABEL_32;
LABEL_4:
  if ( *(_BYTE *)(a1 + 64) )
  {
    v2 = &s1;
    if ( (_QWORD)v50 )
      v2 = (const char *)src;
    sub_456DF0(v1 + 16, (int)"%s", v2);
    goto LABEL_8;
  }
  v37 = src;
  if ( (_QWORD)v50 )
  {
    v38 = v50 + 8;
    v39 = v50 - 1;
    v40 = v50 + 7;
    if ( *((_QWORD *)&v50 + 1) >= (unsigned __int64)(v50 + 8) )
    {
LABEL_50:
      *(_QWORD *)&v50 = v38;
      *((_BYTE *)v37 + v40) = 0;
      v37 = src;
      if ( v39 )
        memmove((char *)src + 8, src, v39);
      goto LABEL_52;
    }
LABEL_62:
    v46 = v40;
    src = (void *)qvector_reserve(&src, src, v38, 1);
    v40 = v46;
    v37 = src;
    goto LABEL_50;
  }
  if ( *((_QWORD *)&v50 + 1) <= 8u )
  {
    v39 = 0;
    v38 = 9;
    v40 = 8;
    goto LABEL_62;
  }
  *(_QWORD *)&v50 = 9;
  *((_BYTE *)src + 8) = 0;
LABEL_52:
  v41 = &s1;
  *v37 = 0xA59414C45444F4ELL;
  if ( (_QWORD)v50 )
    v41 = (const char *)src;
  sub_4341F0(v1 + 16, (int)"%s", v41);
  *(_BYTE *)(a1 + 64) = 1;
LABEL_8:
  if ( src )
  {
    *(_QWORD *)&v50 = 0;
    qfree(src, "%s");
  }
  return v54 - __readfsqword(0x28u);
}
