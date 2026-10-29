/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002C3E0
// Address: 0x000000014002C3E0

//----- (000000014002C3E0) ----------------------------------------------------
__int64 __fastcall sub_14002C3E0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v6; // r12
  const char *v7; // r15
  unsigned __int64 v8; // rdi
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  void *v13; // rax
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  size_t v16; // rdx
  size_t v17; // rbx
  __int64 v18; // rax
  size_t v19; // rdi
  size_t v20; // rbx
  char *v21; // rax
  char *v22; // rsi
  const char ***v23; // rbx
  const char *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rbx
  size_t v27; // rax
  size_t v28; // r14
  void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // xmm6
  const char *v34; // rdx
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int128 v38; // [rsp+28h] [rbp-59h] BYREF
  __int64 v39; // [rsp+38h] [rbp-49h]
  char *Str; // [rsp+48h] [rbp-39h] BYREF
  size_t v41; // [rsp+50h] [rbp-31h]
  unsigned __int64 v42; // [rsp+58h] [rbp-29h]
  char v43[24]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v44; // [rsp+78h] [rbp-9h] BYREF
  size_t v45; // [rsp+88h] [rbp+7h]
  __int128 v46; // [rsp+90h] [rbp+Fh]

  v6 = 0;
  sub_140020E30((__int64 *)a1, (__int64)&Str, a3);
  v7 = Str1;
  v8 = v42;
  if ( !*(_BYTE *)(v42 + 25) )
  {
    v9 = Str1;
    if ( *(_QWORD *)(v42 + 40) )
      v9 = *(const char **)(v42 + 32);
    v10 = Str1;
    if ( *(_QWORD *)(a3 + 8) )
      v10 = *(const char **)a3;
    if ( strcmp(v10, v9) >= 0 && v8 != *(_QWORD *)a1 )
    {
      v11 = *(int *)(v8 + 56);
      v12 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v11);
      if ( *(_DWORD *)(v12 + 136) )
      {
        LODWORD(v11) = -1;
      }
      else
      {
        sub_14002D230(*(_QWORD *)(*(_QWORD *)a2 + 8 * v11));
        *(_DWORD *)(v12 + 136) = -1;
      }
      return (int)v11;
    }
  }
  v13 = nullptr;
  Str = nullptr;
  v41 = 0;
  v14 = 0;
  v42 = 0;
  v15 = *(_QWORD *)(a1 + 32);
  v16 = 0;
  if ( v15 )
  {
    Str = (char *)sub_14005AAA0(*(_QWORD *)(a1 + 32));
    v42 = v15;
    memcpy(Str, *(const void **)(a1 + 24), v15);
    v41 = v15;
    v16 = v15;
    v14 = v42;
    v13 = Str;
  }
  v17 = v16 - 1;
  if ( !v16 )
    v17 = 0;
  if ( v17 + 2 > v14 )
  {
    v13 = sub_14005ABE0((__int64)&Str, v13, v17 + 2, 1u);
    Str = (char *)v13;
  }
  v41 = v17 + 2;
  *((_BYTE *)v13 + v17) = 46;
  Str[v17 + 1] = 0;
  v18 = *(_QWORD *)(a3 + 8);
  v19 = v18 - 1;
  if ( !v18 )
    v19 = 0;
  if ( v19 )
  {
    if ( v41 )
      v20 = v41 - 1;
    else
      v20 = 0;
    if ( v20 + v19 + 1 <= v42 )
    {
      v21 = Str;
    }
    else
    {
      v21 = (char *)sub_14005ABE0((__int64)&Str, Str, v20 + v19 + 1, 1u);
      Str = v21;
    }
    v41 = v20 + v19 + 1;
    v21[v20 + v19] = 0;
    memcpy(&Str[v20], *(const void **)a3, v19);
  }
  if ( v41 )
  {
    v22 = Str;
    if ( !Str )
    {
LABEL_36:
      v25 = operator new(0x90u);
      v26 = (__int64)v25;
      if ( v25 )
      {
        *v25 = 0;
        v25[1] = 0;
        v25[2] = 0;
        v25[4] = 0;
        v25[5] = 0;
        v25[6] = 0;
        v25[8] = 0;
        v25[9] = 0;
        v25[10] = 0;
        v25[11] = 0;
        v25[12] = 0;
        v25[13] = 0;
        v25[14] = 0;
        v25[15] = 0;
        v25[16] = 0;
      }
      else
      {
        v26 = 0;
      }
      if ( v22 && (v27 = strlen(v22)) != 0 )
        sub_140001810(v26, v22, v27);
      else
        *(_QWORD *)(v26 + 8) = 0;
      v11 = *(_QWORD *)(a2 + 8);
      if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a2 + 16) )
        *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v11 + 1, 8u);
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * (*(_QWORD *)(a2 + 8))++) = v26;
      goto LABEL_49;
    }
  }
  else
  {
    v22 = (char *)Str1;
  }
  v11 = *(_QWORD *)(a2 + 8) - 1LL;
  if ( v11 < 0 )
    goto LABEL_36;
  v23 = (const char ***)(*(_QWORD *)a2 + 8 * v11);
  while ( 1 )
  {
    v24 = Str1;
    if ( (*v23)[1] )
      v24 = **v23;
    if ( !strcmp(v24, v22) )
      break;
    --v23;
    if ( --v11 < 0 )
      goto LABEL_36;
  }
  v26 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v11);
  if ( *(_DWORD *)(v26 + 136) )
  {
    LODWORD(v11) = -1;
    goto LABEL_50;
  }
  sub_14002D230(*(_QWORD *)(*(_QWORD *)a2 + 8 * v11));
LABEL_49:
  *(_DWORD *)(v26 + 136) = -1;
  *(_DWORD *)(v26 + 24) = 0;
LABEL_50:
  v44 = 0;
  v45 = 0;
  v28 = *(_QWORD *)(a3 + 8);
  if ( v28 )
  {
    v29 = sub_14005AAA0(*(_QWORD *)(a3 + 8));
    *(_QWORD *)&v44 = v29;
    v6 = v28;
    v45 = v28;
    memcpy(v29, *(const void **)a3, v28);
    *((_QWORD *)&v44 + 1) = v28;
  }
  else
  {
    v28 = *((_QWORD *)&v44 + 1);
    v29 = (void *)v44;
  }
  LODWORD(v46) = v11;
  v30 = sub_140020E30((__int64 *)a1, (__int64)v43, (__int64)&v44);
  v33 = *(_OWORD *)v30;
  v39 = *(_QWORD *)(v30 + 16);
  if ( *(_BYTE *)(v39 + 25) )
    goto LABEL_59;
  v34 = Str1;
  if ( *(_QWORD *)(v39 + 40) )
    v34 = *(const char **)(v39 + 32);
  if ( v28 )
    v7 = (const char *)v29;
  if ( strcmp(v7, v34) < 0 )
  {
LABEL_59:
    if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
      unknown_libname_1(v32, v31);
    v35 = *(_QWORD *)a1;
    v36 = (__int64 *)operator new(0x40u);
    v36[4] = (__int64)v29;
    v29 = nullptr;
    v36[5] = v28;
    v36[6] = v6;
    *((_DWORD *)v36 + 14) = v11;
    *v36 = v35;
    v36[1] = v35;
    v36[2] = v35;
    *((_WORD *)v36 + 12) = 0;
    v38 = v33;
    sub_140003FC0((_QWORD *)a1, (__int64)&v38, (__int64)v36);
  }
  if ( v29 )
    j_free(v29);
  if ( Str )
  {
    v41 = 0;
    j_free(Str);
  }
  return (int)v11;
}
// 14002C7FF: variable 'v32' is possibly undefined
// 14002C7FF: variable 'v31' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
