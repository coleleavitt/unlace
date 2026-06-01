__int64 __fastcall sub_758A0(
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rbx
  _BYTE *v17; // rsi
  __int64 v18; // r13
  char **v19; // r12
  void *v20; // rdi
  void *v21; // rdi
  bool v22; // zf
  const char *v23; // rsi
  char *v24; // r13
  void *v25; // rax
  const char *v26; // rsi
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  unsigned int v34; // ebx
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v37; // [rsp+8h] [rbp-460h]
  char file[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v39; // [rsp+428h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  ptr = nullptr;
  v37 = 0;
  if ( !(unsigned __int8)sub_98D10("OPENSSL_LIBRARY_PATH") )
    goto LABEL_8;
  if ( (dword_1671A4 & 0x100000) != 0 )
  {
    if ( (_QWORD)v37 )
      sub_2A380(
        (int)"TLS: using OpenSSL library path override \"%s\"\n",
        (__int64)ptr,
        v10,
        v11,
        v12,
        v13,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v14,
        v15,
        a8,
        a9,
        (char)ptr);
    else
      sub_2A380(
        (int)"TLS: using OpenSSL library path override \"%s\"\n",
        (__int64)haystack,
        v10,
        v11,
        v12,
        v13,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v14,
        v15,
        a8,
        a9,
        (char)ptr);
  }
  v16 = v37;
  v17 = ptr;
  if ( !(_QWORD)v37 )
  {
    v18 = 2;
    if ( *((_QWORD *)&v37 + 1) >= 2u )
      goto LABEL_7;
LABEL_27:
    ptr = (void *)sub_96080(&ptr, ptr, v18, 1);
    v17 = ptr;
    goto LABEL_7;
  }
  if ( (_QWORD)v37 != 1 && *((char *)ptr + v37 - 2) == 47 )
    goto LABEL_8;
  v18 = v37 + 1;
  v16 = v37 - 1;
  if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
    goto LABEL_27;
LABEL_7:
  *(_QWORD *)&v37 = v18;
  v17[v16] = 47;
  *((_BYTE *)ptr + v16 + 1) = 0;
LABEL_8:
  v19 = off_1637A0;
  while ( 1 )
  {
    v20 = *(void **)(a1 + 32);
    if ( v20 )
      dlclose(v20);
    v21 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    if ( v21 )
      dlclose(v21);
    v22 = (_QWORD)v37 == 0;
    *(_QWORD *)(a1 + 24) = 0;
    v23 = haystack;
    v24 = *v19;
    if ( !v22 )
      v23 = (const char *)ptr;
    sub_976E0(file, v23, 1024);
    sub_97820(file, "libcrypto", 1024);
    sub_97820(file, ".so", 1024);
    sub_97820(file, v24, 1024);
    v25 = dlopen(file, 2);
    *(_QWORD *)(a1 + 24) = v25;
    if ( v25 )
    {
      v26 = haystack;
      if ( (_QWORD)v37 )
        v26 = (const char *)ptr;
      sub_976E0(file, v26, 1024);
      sub_97820(file, "libssl", 1024);
      sub_97820(file, ".so", 1024);
      sub_97820(file, v24, 1024);
      v27 = dlopen(file, 2);
      *(_QWORD *)(a1 + 32) = v27;
      if ( v27 )
        break;
    }
    if ( ++v19 == &off_1637D0 )
    {
      v34 = 0;
      goto LABEL_21;
    }
  }
  if ( *v24 && (dword_1671A4 & 0x100000) != 0 )
    sub_2A380(
      (int)"TLS: loaded \"%s\"\n",
      (__int64)file,
      v28,
      v29,
      v30,
      v31,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v32,
      v33,
      a8,
      a9,
      (char)ptr);
  v34 = 1;
LABEL_21:
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    j__free(ptr);
  }
  return v34;
}

