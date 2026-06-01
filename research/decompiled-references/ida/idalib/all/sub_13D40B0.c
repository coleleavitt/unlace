__int64 __fastcall sub_13D40B0(__int64 a1, const char *a2, unsigned __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // r14
  size_t v6; // rbp
  char *v7; // rbx
  char v8; // al
  char v9; // al
  unsigned __int64 v10; // rax
  size_t v11; // rdx
  void *v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int64 *v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // r15
  char *v27; // rdx
  _QWORD *v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rbp
  __int64 v31; // r15
  unsigned __int64 v32; // r14
  _BYTE *v33; // rax
  unsigned __int64 v34; // rsi
  int v35; // r13d
  __int64 v36; // rsi
  int v37; // edx
  __int64 v38; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  char *src; // [rsp+8h] [rbp-90h]
  __int64 v43; // [rsp+10h] [rbp-88h]
  const char *v44; // [rsp+18h] [rbp-80h]
  size_t v45; // [rsp+20h] [rbp-78h]
  __int64 n; // [rsp+28h] [rbp-70h]
  unsigned int v48; // [rsp+34h] [rbp-64h]
  unsigned int v49; // [rsp+34h] [rbp-64h]
  __int64 *v50; // [rsp+38h] [rbp-60h]
  __int64 *v51; // [rsp+38h] [rbp-60h]
  __int64 *v52; // [rsp+48h] [rbp-50h] BYREF
  const char *v53; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v4 = a1;
  v6 = a3 - (_QWORD)a2;
  v7 = "/\\";
  src = (char *)a2;
  v8 = **(_BYTE **)(a1 + 136);
  v53 = a2;
  v9 = v8 & 0x20;
  v54 = a3 - (_QWORD)a2;
  if ( !v9 )
    v7 = "/";
  n = 2LL - (v9 == 0);
  v10 = sub_2247050(&v53, v7, n, -1);
  if ( v10 == -1 )
  {
    v44 = &byte_22F0C30;
    v12 = (void *)a2;
    v45 = j__strlen(&byte_22F0C30);
  }
  else
  {
    v11 = v54;
    if ( v10 < v54 )
      v11 = v10;
    v44 = v53;
    v45 = v11;
    src = (char *)&a2[v10 + 1];
    v6 = a3 - (_QWORD)src;
    v12 = src;
  }
  v13 = *(_QWORD *)(v4 + 8);
  v14 = sub_2244B30(v12, v6);
  v16 = sub_2244CB0(v13 + 552, src, v6, v14);
  v17 = (__int64 *)(*(_QWORD *)(v13 + 552) + 8LL * v16);
  if ( *v17 )
  {
    if ( *v17 != -8 )
    {
      sub_989490(&v52, v17, 0);
      v20 = *v52;
      v21 = *(_QWORD **)(*v52 + 8);
      if ( v21 )
        goto LABEL_23;
      goto LABEL_10;
    }
    --*(_DWORD *)(v13 + 568);
  }
  v25 = *(_QWORD *)(v13 + 576);
  *(_QWORD *)(v13 + 656) += v6 + 17;
  v26 = (_QWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v27 = (char *)v26 + v6 + 17;
  if ( *(_QWORD *)(v13 + 584) >= (unsigned __int64)v27 && v25 )
  {
    *(_QWORD *)(v13 + 576) = v27;
  }
  else
  {
    v51 = v17;
    v49 = v16;
    v41 = sub_986170(v13 + 576, v6 + 17, v6 + 17, 3, v15, (__int64)v17);
    v17 = v51;
    v16 = v49;
    v26 = (_QWORD *)v41;
  }
  v28 = v26 + 2;
  if ( v6 )
  {
    v50 = v17;
    v48 = v16;
    v40 = memcpy(v26 + 2, src, v6);
    v17 = v50;
    v16 = v48;
    v28 = v40;
  }
  *((_BYTE *)v28 + v6) = 0;
  *v26 = v6;
  v26[1] = 0;
  *v17 = (__int64)v26;
  ++*(_DWORD *)(v13 + 564);
  v29 = sub_22450D0(v13 + 552, v16);
  sub_989490(&v52, (__int64 *)(*(_QWORD *)(v13 + 552) + 8LL * v29), 0);
  v20 = *v52;
  v21 = *(_QWORD **)(*v52 + 8);
  if ( !v21 )
  {
LABEL_10:
    v22 = *(_QWORD *)(v13 + 672);
    if ( !v22
      || (v21 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v22 + 16LL))(v22, src, v6),
          (*(_QWORD *)(v20 + 8) = v21) == 0) )
    {
      v23 = *(_QWORD *)(v13 + 576);
      *(_QWORD *)(v13 + 656) += 24LL;
      v21 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v13 + 584) >= (unsigned __int64)(v21 + 3) && v23 )
        *(_QWORD *)(v13 + 576) = v21 + 3;
      else
        v21 = (_QWORD *)sub_986170(v13 + 576, 24, 24, 3, v18, v19);
      v24 = *v21 & 0xFFFFF80000000000LL;
      v21[1] = 0;
      *v21 = v24 | 0x1FFFC05;
      *(_QWORD *)(v20 + 8) = v21;
      v21[2] = v20;
    }
  }
LABEL_23:
  *(_QWORD *)(v13 + 976) = v21;
  v30 = *(_QWORD *)(v4 + 120);
  if ( a3 >= v30 )
  {
    LODWORD(v30) = a3;
  }
  else
  {
    v43 = v4;
    v31 = 9217;
    v32 = a3;
    do
    {
      v34 = (unsigned int)*(char *)(v32 + 1);
      if ( *(_BYTE *)(v32 + 1) > 0xDu )
      {
        ++v32;
        if ( (_DWORD)v34 == (a4 == 0 ? 34 : 62) )
          goto LABEL_32;
      }
      else
      {
        if ( _bittest64(&v31, v34) )
          goto LABEL_32;
        ++v32;
      }
      v33 = memchr(v7, v34, n);
      if ( v33 && v33 - v7 != -1 )
      {
LABEL_32:
        v35 = v32;
        v4 = v43;
        goto LABEL_33;
      }
    }
    while ( v32 != v30 );
    v4 = v43;
  }
  v35 = v30;
LABEL_33:
  v36 = *(_QWORD *)(v4 + 112);
  v37 = *(_DWORD *)(v4 + 128);
  v38 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v38 + 984) = v37 + (_DWORD)src - v36;
  *(_DWORD *)(v38 + 988) = v37 + v35 - v36;
  return sub_145C6C0(*(_QWORD *)(v4 + 8), v44, v45, a4);
}
