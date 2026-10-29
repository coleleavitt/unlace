__int64 __fastcall sub_1EB90(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rax
  size_t v6; // rax
  size_t v7; // r15
  const char *v8; // r15
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 result; // rax
  bool v12; // zf
  const char *v13; // rdi
  __int64 v14; // rax
  void *v15; // rdi
  size_t v16; // rdx
  __int64 v17; // rax
  const char *errdesc; // rax
  const char *v19; // r15
  size_t v20; // rax
  size_t v21; // r12
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-40h]
  const char *src; // [rsp+8h] [rbp-38h]
  void *srca; // [rsp+8h] [rbp-38h]

  *(_QWORD *)a1 = off_27D28;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v5 = (const char *)qtmpnam(0, 0);
  src = v5;
  if ( !v5 || (v6 = strlen(v5), (v7 = v6) == 0) )
  {
    *(_QWORD *)(a1 + 40) = 0;
LABEL_4:
    v8 = s1;
    goto LABEL_5;
  }
  v15 = *(void **)(a1 + 32);
  v16 = v6 + 1;
  if ( *(_QWORD *)(a1 + 48) < v6 + 1 )
  {
    v25 = v6 + 1;
    v17 = qvector_reserve(a1 + 32, *(_QWORD *)(a1 + 32), v16, 1);
    *(_QWORD *)(a1 + 32) = v17;
    v16 = v25;
    v15 = (void *)v17;
  }
  *(_QWORD *)(a1 + 40) = v16;
  memmove(v15, src, v7);
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + v7) = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    goto LABEL_4;
  v8 = *(const char **)(a1 + 32);
LABEL_5:
  srca = (void *)fopenWB(v8);
  if ( !srca )
  {
    errdesc = (const char *)get_errdesc(v8, 0xFFFFFFFFLL);
    v19 = errdesc;
    if ( !errdesc || (v20 = strlen(errdesc), (v21 = v20) == 0) )
    {
      *(_QWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 8) = -1;
      *(_DWORD *)(a1 + 16) = -1;
      goto LABEL_21;
    }
    v22 = *(void **)(a1 + 56);
    v23 = v20 + 1;
    if ( *(_QWORD *)(a1 + 72) < v20 + 1 )
    {
      v24 = qvector_reserve(a1 + 56, *(_QWORD *)(a1 + 56), v20 + 1, 1);
      *(_QWORD *)(a1 + 56) = v24;
      v22 = (void *)v24;
    }
    *(_QWORD *)(a1 + 64) = v23;
    memmove(v22, v19, v21);
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + v21) = 0;
    v9 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 80) = 0;
LABEL_8:
    *(_QWORD *)(a1 + 8) = -1;
    *(_DWORD *)(a1 + 16) = -1;
    if ( v9 )
    {
      v10 = *(const char **)(a1 + 56);
LABEL_10:
      result = sub_5860((__int64)"unzip error: %s\n", v10);
      *(_QWORD *)(a1 + 24) = 0;
      return result;
    }
LABEL_21:
    v10 = s1;
    goto LABEL_10;
  }
  if ( (unsigned int)zip_extract_archive_entry(a2, a3, 0, 1, srca, &j__qfwrite, a1 + 56) )
  {
    qfclose(srca);
    *(_DWORD *)(a1 + 80) = 0;
    v9 = *(_QWORD *)(a1 + 64);
    goto LABEL_8;
  }
  qfclose(srca);
  v12 = *(_QWORD *)(a1 + 40) == 0;
  *(_DWORD *)(a1 + 80) = 1;
  v13 = s1;
  if ( !v12 )
    v13 = *(const char **)(a1 + 32);
  v14 = open_linput(v13, 0);
  *(_QWORD *)(a1 + 24) = v14;
  result = qlsize(v14);
  *(_QWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 16) = 4096;
  return result;
}

