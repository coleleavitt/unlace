__int64 __fastcall sub_6340B0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  bool v8; // zf
  int v10; // eax
  size_t v11; // rcx
  const char *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  const char *v16; // rsi
  __int64 (*v17)(); // rax
  const char *v18; // rdi
  int v19; // eax
  void *v20; // rdx
  __int64 v21; // rdx
  const char *v22; // rdi
  const char *v23; // rbp
  size_t v24; // r14
  int v25; // ecx
  const char *v26; // r15
  char *v27; // rbp
  const char *v28; // r13
  __int64 v29; // rcx
  unsigned __int8 v30; // [rsp+Fh] [rbp-69h]
  unsigned int v31; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 48) == 0;
  v34 = __readfsqword(0x28u);
  if ( v8 && *(_QWORD *)(a1 + 48) == -1 && *(_QWORD *)(a1 + 88) > 1u )
    sub_7BF040(a1 + 48, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 80), 0);
  v10 = *(_DWORD *)(a2 + 56);
  if ( (v10 & 0x30) != 0 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    v12 = haystack;
    if ( v11 )
      v12 = *(const char **)a3;
    return sub_633D90(a1, a2, v12, v11, a5, a6);
  }
  if ( (v10 & 0x4070) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 64) )
    {
      v15 = *(_QWORD *)(a3 + 8);
LABEL_26:
      v21 = *(_QWORD *)(a2 + 24);
      if ( !v21 || (v21 & (v21 - 1)) != 0 )
      {
        v22 = haystack;
        if ( v15 )
          v22 = *(const char **)a3;
        v20 = (void *)strtoull(v22, nullptr, (v10 & 0x80) == 0 ? 16 : 10);
        goto LABEL_31;
      }
LABEL_12:
      if ( (v10 & 0x8000) == 0 )
      {
        if ( !v15 )
        {
LABEL_17:
          if ( !under_debugger )
            interr(2014);
          BUG();
        }
        v23 = *(const char **)a3;
        if ( strcmp(v23, "true") )
        {
          v19 = strcmp(v23, "false");
LABEL_16:
          v20 = nullptr;
          if ( v19 )
            goto LABEL_17;
LABEL_31:
          v32 = v20;
          return sub_633E60(a1, a2, (__int64)v20, v15, a5, a6);
        }
      }
      else
      {
        if ( !v15 )
          goto LABEL_17;
        v18 = *(const char **)a3;
        if ( **(_BYTE **)a3 != 111 || v18[1] != 110 || v18[2] )
        {
          v19 = strcmp(v18, "off");
          goto LABEL_16;
        }
      }
      v20 = &dword_0 + 1;
      goto LABEL_31;
    }
LABEL_8:
    switch_dbctx(*(int *)(a1 + 8));
    v14 = *(_QWORD *)(a1 + 64);
    v15 = *(_QWORD *)(a3 + 8);
    v16 = haystack;
    v17 = *(__int64 (**)())(*(_QWORD *)v14 + 56LL);
    if ( v15 )
      v16 = *(const char **)a3;
    if ( v17 != sub_47C6A0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, void **, __int64, const char *))v17)(v14, &v32, a2, v16) )
        return sub_633E60(a1, a2, (__int64)v32, v29, a5, a6);
      v15 = *(_QWORD *)(a3 + 8);
    }
    v10 = *(_DWORD *)(a2 + 56);
    if ( (v10 & 0x4000) != 0 )
      goto LABEL_12;
    goto LABEL_26;
  }
  if ( (v10 & 0x4000) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 64) )
    {
      v15 = *(_QWORD *)(a3 + 8);
      goto LABEL_12;
    }
    goto LABEL_8;
  }
  v24 = *(_QWORD *)(a3 + 8);
  v32 = nullptr;
  v33 = 0;
  if ( v24 && (v24 = (v24 - 1) >> 1) != 0 )
  {
    v32 = (void *)qvector_reserve(&v32, 0, v24, 1);
    memset((char *)v32 + v33, 0, v24 - v33);
    v26 = *(const char **)a3;
    v27 = (char *)v32;
    *(_QWORD *)&v33 = v24;
    v28 = (char *)v32 + v24;
    if ( v32 != (char *)v32 + v24 )
    {
      do
      {
        v31 = 0;
        if ( (unsigned int)qsscanf((_DWORD)v26, (unsigned int)"%02X", (unsigned int)&v31, v25, a5, a6) != 1 )
          break;
        if ( v31 > 0xFF )
          break;
        *v27++ = v31;
        LODWORD(v26) = (_DWORD)v26 + 2;
      }
      while ( v28 != v27 );
      v24 = v33;
      v28 = (const char *)v32;
    }
  }
  else
  {
    v28 = nullptr;
  }
  result = sub_633D90(a1, a2, v28, v24, a5, a6);
  if ( v32 )
  {
    v30 = result;
    *(_QWORD *)&v33 = 0;
    qfree(v32);
    return v30;
  }
  return result;
}
