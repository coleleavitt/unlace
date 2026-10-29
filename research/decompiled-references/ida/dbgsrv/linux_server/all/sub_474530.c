/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474530
// Address: 0x0000000000474530

//----- (0000000000474530) ----------------------------------------------------
__int64 __fastcall sub_474530(
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
  __m128 v9; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rbx
  _BYTE *v18; // rsi
  unsigned __int64 v19; // r13
  char **v20; // r12
  void *v21; // rdi
  void *v22; // rdi
  bool v23; // zf
  char *v24; // rsi
  char *v25; // r13
  void *v26; // rax
  char *v27; // rsi
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  unsigned int v35; // ebx
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v38; // [rsp+8h] [rbp-460h]
  char file[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+428h] [rbp-40h]

  v9 = 0;
  v40 = __readfsqword(0x28u);
  ptr = nullptr;
  v38 = 0;
  if ( !(unsigned __int8)sub_4837D0("OPENSSL_LIBRARY_PATH", (__int64)&ptr) )
    goto LABEL_8;
  if ( (dword_4C94E4 & 0x100000) != 0 )
  {
    if ( (_QWORD)v38 )
      *(double *)v9.m128_u64 = sub_470E00(
                                 (int)"TLS: using OpenSSL library path override \"%s\"\n",
                                 (__int64)ptr,
                                 v11,
                                 v12,
                                 v13,
                                 v14,
                                 (__m128)0LL,
                                 a3,
                                 a4,
                                 a5,
                                 v15,
                                 v16,
                                 a8,
                                 a9,
                                 (char)ptr);
    else
      *(double *)v9.m128_u64 = sub_470E00(
                                 (int)"TLS: using OpenSSL library path override \"%s\"\n",
                                 (__int64)s1,
                                 v11,
                                 v12,
                                 v13,
                                 v14,
                                 (__m128)0LL,
                                 a3,
                                 a4,
                                 a5,
                                 v15,
                                 v16,
                                 a8,
                                 a9,
                                 (char)ptr);
  }
  v17 = v38;
  v18 = ptr;
  if ( !(_QWORD)v38 )
  {
    v19 = 2;
    if ( *((_QWORD *)&v38 + 1) >= 2u )
      goto LABEL_7;
LABEL_27:
    ptr = sub_481540((__int64)&ptr, ptr, v19, 1u);
    v18 = ptr;
    goto LABEL_7;
  }
  if ( (_QWORD)v38 != 1 && *((char *)ptr + v38 - 2) == 47 )
    goto LABEL_8;
  v19 = v38 + 1;
  v17 = v38 - 1;
  if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
    goto LABEL_27;
LABEL_7:
  *(_QWORD *)&v38 = v19;
  v18[v17] = 47;
  *((_BYTE *)ptr + v17 + 1) = 0;
LABEL_8:
  v20 = off_4C4140;
  while ( 1 )
  {
    v21 = *(void **)(a1 + 32);
    if ( v21 )
      dlclose(v21);
    v22 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    if ( v22 )
      dlclose(v22);
    v23 = (_QWORD)v38 == 0;
    *(_QWORD *)(a1 + 24) = 0;
    v24 = (char *)s1;
    v25 = *v20;
    if ( !v23 )
      v24 = (char *)ptr;
    sub_4821A0(file, v24, 1024);
    sub_4822E0(file, "libcrypto", 1024);
    sub_4822E0(file, ".so", 1024);
    sub_4822E0(file, v25, 1024);
    v26 = dlopen(file, 2);
    *(_QWORD *)(a1 + 24) = v26;
    if ( v26 )
    {
      v27 = (char *)s1;
      if ( (_QWORD)v38 )
        v27 = (char *)ptr;
      sub_4821A0(file, v27, 1024);
      sub_4822E0(file, "libssl", 1024);
      sub_4822E0(file, ".so", 1024);
      sub_4822E0(file, v25, 1024);
      v28 = dlopen(file, 2);
      *(_QWORD *)(a1 + 32) = v28;
      if ( v28 )
        break;
    }
    if ( ++v20 == &off_4C4170 )
    {
      v35 = 0;
      goto LABEL_21;
    }
  }
  if ( *v25 && (dword_4C94E4 & 0x100000) != 0 )
    sub_470E00(
      (int)"TLS: loaded \"%s\"\n",
      (__int64)file,
      v29,
      v30,
      v31,
      v32,
      v9,
      a3,
      a4,
      a5,
      v33,
      v34,
      a8,
      a9,
      (char)ptr);
  v35 = 1;
LABEL_21:
  if ( ptr )
  {
    *(_QWORD *)&v38 = 0;
    j__free(ptr);
  }
  return v35;
}
// 4745A8: variable 'v11' is possibly undefined
// 4745A8: variable 'v12' is possibly undefined
// 4745A8: variable 'v13' is possibly undefined
// 4745A8: variable 'v14' is possibly undefined
// 4745A8: variable 'v15' is possibly undefined
// 4745A8: variable 'v16' is possibly undefined
// 4747ED: variable 'v29' is possibly undefined
// 4747ED: variable 'v30' is possibly undefined
// 4747ED: variable 'v31' is possibly undefined
// 4747ED: variable 'v32' is possibly undefined
// 4747ED: variable 'v33' is possibly undefined
// 4747ED: variable 'v34' is possibly undefined
// 4C4140: using guessed type char *off_4C4140[5];
// 4C4170: using guessed type char *off_4C4170;
// 4C94E4: using guessed type int dword_4C94E4;
