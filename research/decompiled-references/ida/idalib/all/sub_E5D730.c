void __fastcall sub_E5D730(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  size_t v7; // rdx
  size_t v8; // r13
  size_t v9; // rcx
  unsigned int v10; // r15d
  int v11; // eax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  size_t v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  unsigned int v19; // r10d
  size_t v20; // rax
  size_t v21; // rax
  unsigned int v22; // eax
  size_t v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  char v32; // dl
  _QWORD *v33; // rbx
  __int64 *v34; // rdi
  __int64 v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rdx
  char *s; // [rsp+0h] [rbp-B8h]
  void *s2; // [rsp+8h] [rbp-B0h]
  size_t na; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+10h] [rbp-A8h]
  char nb; // [rsp+10h] [rbp-A8h]
  unsigned int v43; // [rsp+18h] [rbp-A0h]
  unsigned int v44; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v45; // [rsp+1Ch] [rbp-9Ch]
  const char **v46; // [rsp+20h] [rbp-98h] BYREF
  __int64 v47; // [rsp+28h] [rbp-90h]
  char *v48; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v50; // [rsp+40h] [rbp-78h]
  unsigned int v51; // [rsp+44h] [rbp-74h]
  const char *v52; // [rsp+50h] [rbp-68h] BYREF
  __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]

  sub_1022900(&v48, *(_QWORD *)(a1 + 1224), a2, 1);
  v5 = *(_QWORD *)(a1 + 1224);
  s = v48;
  if ( a3 )
    v43 = sub_10228C0(v5, a2, 0);
  else
    v43 = sub_1022880(v5, a2, 0);
  s2 = (void *)sub_1020040(*(_QWORD *)(a1 + 1224), a2, 0);
  v8 = v7;
  if ( !s )
    return;
  v9 = *(_QWORD *)(a1 + 1224);
  v10 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFF) >= *(_DWORD *)(v9 + 476) && v10 < *(_DWORD *)(v9 + 480) )
  {
    v11 = *(_DWORD *)(v9 + 472);
  }
  else
  {
    na = *(_QWORD *)(a1 + 1224);
    v11 = sub_101D590(na);
    v9 = na;
  }
  LOBYTE(v52) = 0;
  if ( (unsigned int)(v11 + 1) <= 1 )
    goto LABEL_36;
  if ( v11 >= 0 )
  {
    v12 = (_DWORD *)(*(_QWORD *)(v9 + 184) + 24LL * (unsigned int)v11);
    goto LABEL_10;
  }
  v30 = (unsigned int)(-2 - v11);
  v31 = *(_QWORD *)(*(_QWORD *)(v9 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
  if ( _bittest64(&v31, v30) )
  {
    v33 = (_QWORD *)(*(_QWORD *)(v9 + 272) + 8 * ((unsigned __int64)(int)v30 >> 5));
    if ( *v33 )
    {
      v12 = (_DWORD *)(*v33 + 24 * (v30 & 0x1F));
      goto LABEL_10;
    }
    v34 = (__int64 *)(*(_QWORD *)(v9 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v35 = *v34;
    v34[10] += 768;
    v36 = (_DWORD *)((v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v34[1] >= (unsigned __int64)(v36 + 192) && v35 )
    {
      *v34 = (__int64)(v36 + 192);
    }
    else
    {
      nb = v30;
      v36 = (_DWORD *)sub_986170((__int64)v34, 768, 768, 3, v30, v6);
      LOBYTE(v30) = nb;
    }
    *v33 = v36;
    v37 = v36 + 192;
    do
    {
      *v36 = 0;
      v36 += 6;
      *((_OWORD *)v36 - 1) = 0;
      *((_QWORD *)v36 - 1) = 0;
    }
    while ( v36 != v37 );
    v32 = (char)v52;
    v12 = (_DWORD *)(*v33 + 24 * (v30 & 0x1F));
  }
  else
  {
    v12 = (_DWORD *)sub_101F930(v9, (unsigned int)v30, &v52);
    v32 = (char)v52;
  }
  if ( v32 )
  {
LABEL_36:
    v13 = 0;
    goto LABEL_12;
  }
LABEL_10:
  v13 = 0;
  if ( v12 )
    v13 = v10 - (*v12 & 0x7FFFFFFF);
LABEL_12:
  v53 = v13;
  LOWORD(v52) = 3;
  v14 = j__strlen("offset");
  v46 = &v52;
  v47 = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"offset", v14, (__int64)sub_E58580, &v46);
  sub_222B2A0(&v52);
  if ( v8 != *(_QWORD *)(a1 + 1280) || v8 && memcmp(*(const void **)(a1 + 1272), s2, v8) )
  {
    sub_E59830((__int64)&v52, (__int64)s2, v8);
    v16 = j__strlen("file");
    v46 = &v52;
    v47 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"file", v16, (__int64)sub_E58580, &v46);
    sub_222B2A0(&v52);
    v15 = v43;
    LOWORD(v52) = 3;
    goto LABEL_18;
  }
  v15 = v43;
  if ( *(_DWORD *)(a1 + 1304) != v43 )
  {
    LOWORD(v52) = 3;
LABEL_18:
    v53 = v15;
    v17 = j__strlen("line");
    v46 = &v52;
    v47 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"line", v17, (__int64)sub_E58580, &v46);
    sub_222B2A0(&v52);
  }
  n = j__strlen(s);
  if ( (v8 != n || v8 && memcmp(s, s2, v8))
    && (n != *(_QWORD *)(a1 + 1296) || n && memcmp(*(const void **)(a1 + 1288), s, n)) )
  {
    sub_E59830((__int64)&v52, (__int64)s, n);
    v18 = j__strlen("presumedFile");
    v46 = &v52;
    v47 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"presumedFile", v18, (__int64)sub_E58580, &v46);
    sub_222B2A0(&v52);
  }
  v19 = v49;
  if ( v43 != v49 && *(_DWORD *)(a1 + 1308) != v49 )
  {
    v44 = v49;
    LOWORD(v52) = 3;
    v53 = v49;
    v20 = j__strlen("presumedLine");
    v46 = &v52;
    v47 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"presumedLine", v20, (__int64)sub_E58580, &v46);
    sub_222B2A0(&v52);
    v19 = v44;
  }
  v45 = v19;
  LOWORD(v52) = 3;
  v53 = v50;
  v21 = j__strlen("col");
  v46 = &v52;
  v47 = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"col", v21, (__int64)sub_E58580, &v46);
  sub_222B2A0(&v52);
  v22 = sub_13DC0F0(a2, *(_QWORD *)(a1 + 1224), *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 2320LL));
  LOWORD(v52) = 3;
  v53 = v22;
  v23 = j__strlen("tokLen");
  v46 = &v52;
  v47 = a1 + 1048;
  sub_E585D0(a1 + 1048, (__int64)"tokLen", v23, (__int64)sub_E58580, &v46);
  sub_222B2A0(&v52);
  v24 = v51;
  *(_QWORD *)(a1 + 1280) = v8;
  *(_QWORD *)(a1 + 1272) = s2;
  *(_DWORD *)(a1 + 1308) = v45;
  v25 = *(_QWORD *)(a1 + 1224);
  *(_QWORD *)(a1 + 1288) = s;
  *(_QWORD *)(a1 + 1296) = n;
  *(_DWORD *)(a1 + 1304) = v43;
  sub_1022900(&v52, v25, v24, 1);
  sub_E5A030(a1, 1, v26, v27, v28, v29, v52, v53, v54);
}
