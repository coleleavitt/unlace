_BYTE *__fastcall sub_FD0BB0(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbp
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rdi
  size_t v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 *v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r14
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  _BYTE *v34; // rdx
  char v35; // dl
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rdi
  _QWORD *v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  _QWORD *v43; // r15
  __int64 *v44; // rdi
  __int64 v45; // rcx
  _DWORD *v46; // rax
  _DWORD *v47; // rdx
  __int64 v48; // rcx
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  _DWORD v51[4]; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  char v54; // [rsp+20h] [rbp-48h]

  result = *(_BYTE **)a1;
  if ( **(_BYTE **)a1 )
    return result;
  *result = 1;
  v4 = sub_227D6D0(a1, a2);
  v5 = *(_QWORD *)(v4 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v5) > 4 )
  {
    *(_DWORD *)v5 = 1701603654;
    *(_BYTE *)(v5 + 4) = 32;
    *(_QWORD *)(v4 + 32) += 5LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "File ", 5);
  }
  v6 = sub_227B9B0(v4, *(_QWORD *)(a1 + 8));
  v7 = *(_QWORD *)(v6 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v6 + 24) - v7) > 8 )
  {
    *(_BYTE *)(v7 + 8) = 32;
    *(_QWORD *)v7 = 0x4449656C69463C20LL;
    *(_QWORD *)(v6 + 32) += 9LL;
  }
  else
  {
    v6 = sub_227BF10(v6, " <FileID ", 9);
  }
  v8 = sub_227B910(v6, **(unsigned int **)(a1 + 16));
  v11 = *(_QWORD *)(v8 + 32);
  v12 = v8;
  if ( (unsigned __int64)(*(_QWORD *)(v8 + 24) - v11) > 2 )
  {
    *(_BYTE *)(v11 + 2) = 32;
    *(_WORD *)v11 = 14910;
    *(_QWORD *)(v8 + 32) += 3LL;
  }
  else
  {
    v12 = sub_227BF10(v8, ">: ", 3);
  }
  v13 = *(_QWORD **)(a1 + 24);
  v14 = **(unsigned int **)(a1 + 16);
  LOBYTE(v51[0]) = 0;
  if ( (unsigned int)(v14 + 1) <= 1 )
    goto LABEL_34;
  if ( (int)v14 < 0 )
  {
    v36 = (unsigned int)(-2 - v14);
    v37 = *(_QWORD *)(v13[40] + 8LL * ((unsigned int)(-2 - v14) >> 6));
    if ( _bittest64(&v37, v36) )
    {
      v40 = (_QWORD *)(v13[34] + 8 * ((unsigned __int64)(int)v36 >> 5));
      if ( *v40 )
      {
        v15 = *v40 + 24 * (v36 & 0x1F);
        goto LABEL_11;
      }
      v44 = (__int64 *)(v13[36] & 0xFFFFFFFFFFFFFFF8LL);
      v45 = *v44;
      v44[10] += 768;
      v46 = (_DWORD *)((v45 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v44[1] >= (unsigned __int64)(v46 + 192) && v45 )
        *v44 = (__int64)(v46 + 192);
      else
        v46 = (_DWORD *)sub_986170((__int64)v44, 768, 768, 3, v9, v10);
      *v40 = v46;
      v47 = v46 + 192;
      do
      {
        *v46 = 0;
        v46 += 6;
        *((_OWORD *)v46 - 1) = 0;
        *((_QWORD *)v46 - 1) = 0;
      }
      while ( v46 != v47 );
      v38 = v51[0];
      v15 = *v40 + 24 * (v36 & 0x1F);
    }
    else
    {
      v15 = sub_101F930(v13, (unsigned int)v36, v51);
      v38 = v51[0];
    }
    if ( v38 )
    {
LABEL_34:
      sub_101D1C0(v51, v13);
      goto LABEL_14;
    }
  }
  else
  {
    v15 = v13[23] + 24 * v14;
  }
LABEL_11:
  if ( !v15 )
    goto LABEL_34;
  if ( *(char *)(v15 + 3) < 0 )
    goto LABEL_34;
  sub_101D9A0(v51, *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFF8LL, v13[1], v13[2], 0);
  if ( !v54 )
    goto LABEL_34;
LABEL_14:
  v16 = *(_DWORD **)(v12 + 32);
  v17 = n;
  v18 = (__int64)src;
  if ( *(_QWORD *)(v12 + 24) - (_QWORD)v16 < n )
  {
    v16 = (_DWORD *)v12;
    sub_227BF10(v12, src, n);
  }
  else if ( n )
  {
    memcpy(v16, src, n);
    *(_QWORD *)(v12 + 32) += v17;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) )
    goto LABEL_25;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = **(unsigned int **)(a1 + 16);
  v21 = sub_10239D0(v19, v20);
  v22 = sub_227D6D0(v19, v20);
  v23 = sub_995540(v22, " parent ");
  v24 = sub_227B9B0(v23, **(_QWORD **)(a1 + 8));
  v25 = sub_995540(v24, " <FileID ");
  v26 = (unsigned __int64)"> ";
  v27 = (__int64 *)sub_227B910(v25, (unsigned int)v21);
  sub_995540((__int64)v27, "> ");
  v30 = *(__int64 **)(a1 + 24);
  LOBYTE(v51[0]) = 0;
  if ( (unsigned int)(v21 + 1) <= 1 )
    goto LABEL_30;
  if ( (int)v21 < 0 )
  {
    v41 = (unsigned int)(-2 - v21);
    v42 = *(_QWORD *)(v30[40] + 8LL * ((unsigned int)(-2 - v21) >> 6));
    if ( _bittest64(&v42, v41) )
    {
      v43 = (_QWORD *)(v30[34] + 8 * ((unsigned __int64)(int)v41 >> 5));
      if ( *v43 )
      {
        v31 = *v43 + 24LL * ((-2 - (_BYTE)v21) & 0x1F);
        goto LABEL_21;
      }
      v27 = (__int64 *)(v30[36] & 0xFFFFFFFFFFFFFFF8LL);
      v48 = *v27;
      v27[10] += 768;
      v49 = (_DWORD *)((v48 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27[1] >= (unsigned __int64)(v49 + 192) && v48 )
      {
        *v27 = (__int64)(v49 + 192);
      }
      else
      {
        v26 = 768;
        v49 = (_DWORD *)sub_986170((__int64)v27, 768, 768, 3, v28, v29);
      }
      *v43 = v49;
      v50 = v49 + 192;
      do
      {
        *v49 = 0;
        v49 += 6;
        *((_OWORD *)v49 - 1) = 0;
        *((_QWORD *)v49 - 1) = 0;
      }
      while ( v49 != v50 );
      v30 = *(__int64 **)(a1 + 24);
      v35 = v51[0];
      v31 = *v43 + 24LL * ((-2 - (_BYTE)v21) & 0x1F);
    }
    else
    {
      v27 = v30;
      v26 = (unsigned int)v41;
      v31 = sub_101F930(v30, (unsigned int)v41, v51);
      v30 = *(__int64 **)(a1 + 24);
      v35 = v51[0];
    }
    if ( v35 )
    {
LABEL_30:
      v32 = 0;
      goto LABEL_24;
    }
  }
  else
  {
    v31 = v30[23] + 24LL * (unsigned int)v21;
  }
LABEL_21:
  if ( !v31 || *(char *)(v31 + 3) < 0 )
    goto LABEL_30;
  v32 = *(_DWORD *)v31 & 0x7FFFFFFF;
LABEL_24:
  v51[0] = v32 + HIDWORD(v21);
  v33 = sub_227D6D0(v27, v26);
  v16 = v51;
  v18 = v33;
  sub_101AC40(v51, v33, v30);
LABEL_25:
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 12LL) )
  {
    v39 = sub_227D6D0(v16, v18);
    sub_995540(v39, " has_local_transitions");
    result = (_BYTE *)sub_227D6D0(v39, " has_local_transitions");
    v34 = *((_BYTE **)result + 4);
    if ( *((_BYTE **)result + 3) == v34 )
      return (_BYTE *)sub_227BF10(result, "\n", 1);
  }
  else
  {
    result = (_BYTE *)sub_227D6D0(v16, v18);
    v34 = *((_BYTE **)result + 4);
    if ( *((_BYTE **)result + 3) == v34 )
      return (_BYTE *)sub_227BF10(result, "\n", 1);
  }
  *v34 = 10;
  ++*((_QWORD *)result + 4);
  return result;
}
