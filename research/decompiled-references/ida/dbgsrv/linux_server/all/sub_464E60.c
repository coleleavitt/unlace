/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464E60
// Address: 0x0000000000464E60

//----- (0000000000464E60) ----------------------------------------------------
__int64 __fastcall sub_464E60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // esi
  unsigned __int8 *v15; // r12
  unsigned __int8 *v16; // rbx
  int v17; // ebx
  char *v18; // rax
  char *v19; // rsi
  double v20; // xmm4_8
  double v21; // xmm5_8
  size_t v22; // rax
  size_t v23; // rbx
  unsigned int v24; // r15d
  char *v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  char *v28; // rax
  void *v29; // rdi
  unsigned __int64 v31; // r15
  void *v32; // rdi
  void *v33; // rax
  const char *v35; // [rsp+10h] [rbp-500h]
  const char *v36; // [rsp+18h] [rbp-4F8h]
  __int64 v37; // [rsp+20h] [rbp-4F0h]
  void *ptr; // [rsp+30h] [rbp-4E0h] BYREF
  __int128 v40; // [rsp+38h] [rbp-4D8h]
  __int64 (__fastcall **v41)(); // [rsp+50h] [rbp-4C0h] BYREF
  char s[1024]; // [rsp+58h] [rbp-4B8h] BYREF
  void *v43; // [rsp+458h] [rbp-B8h]
  __int64 v44; // [rsp+460h] [rbp-B0h]
  void *v45; // [rsp+470h] [rbp-A0h]
  __int64 v46; // [rsp+478h] [rbp-98h]
  void *v47; // [rsp+488h] [rbp-88h]
  __int64 v48; // [rsp+490h] [rbp-80h]
  void *v49; // [rsp+4A0h] [rbp-70h]
  __int64 v50; // [rsp+4A8h] [rbp-68h]
  __int64 v51; // [rsp+4C0h] [rbp-50h]
  int v52; // [rsp+4C8h] [rbp-48h]
  unsigned __int64 v53; // [rsp+4D8h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  v40 = 0;
  ptr = nullptr;
  v37 = a2 + 28;
  v35 = *(const char **)a2;
  v36 = (const char *)(a2 + 1062);
  v12 = *(unsigned __int16 *)(a2 + 36);
  if ( !(_WORD)v12 )
    goto LABEL_34;
  if ( (unsigned __int16)v12 <= 0xBu )
    return (unsigned int)-1;
  v13 = *(_DWORD *)(a2 + 38);
  v14 = *(_DWORD *)(a2 + 42);
  if ( *(_BYTE *)(a2 + 28) )
  {
    v13 = _byteswap_ulong(v13);
    v14 = _byteswap_ulong(v14);
  }
  if ( v12 < v13 + (unsigned __int64)v14 + 12 )
    return (unsigned int)-1;
  v15 = (unsigned __int8 *)(a2 + v13 + 50);
  if ( v14 )
  {
    v16 = &v15[v14];
    do
      sub_42A760(&ptr, "%02x", *v15++);
    while ( v16 != v15 );
    v17 = *(_DWORD *)(a2 + 24);
    if ( (_QWORD)v40 )
      v18 = (char *)ptr;
    else
      v18 = (char *)s1;
  }
  else
  {
LABEL_34:
    v17 = *(_DWORD *)(a2 + 24);
    v18 = (char *)s1;
  }
  v19 = (char *)s1;
  if ( *(_QWORD *)(a3 + 8) )
    v19 = *(char **)a3;
  sub_4161F0((__int64)&v41, v19, 0, v35, v36, 0, v18);
  v41 = off_4C3480;
  v51 = v37;
  v52 = v17;
  if ( (unsigned int)sub_413190(
                       (_BOOL8 (__fastcall ***)(__int64, int))&v41,
                       (__m128)0LL,
                       a5,
                       a6,
                       a7,
                       v20,
                       v21,
                       a10,
                       a11) )
  {
    if ( a1 )
    {
      v22 = strlen(s);
      v23 = v22;
      if ( v22 )
      {
        v31 = v22 + 1;
        v32 = *(void **)a1;
        if ( *(_QWORD *)(a1 + 16) < v22 + 1 )
        {
          v33 = sub_481540(a1, *(void **)a1, v31, 1u);
          *(_QWORD *)a1 = v33;
          v32 = v33;
        }
        *(_QWORD *)(a1 + 8) = v31;
        memmove(v32, s, v23);
        *(_BYTE *)(*(_QWORD *)a1 + v23) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
    }
    v24 = 0;
  }
  else
  {
    v24 = -1;
  }
  v41 = off_4C2120;
  if ( v49 )
  {
    v50 = 0;
    j__free(v49);
  }
  if ( v47 )
  {
    v48 = 0;
    j__free(v47);
  }
  if ( v45 )
  {
    v46 = 0;
    j__free(v45);
  }
  v25 = (char *)v43;
  if ( v43 )
  {
    v26 = v44;
    if ( v44 )
    {
      v27 = 0;
      do
      {
        v28 = &v25[24 * v27];
        v29 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          j__free(v29);
          v25 = (char *)v43;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    v44 = 0;
    j__free(v25);
  }
  if ( ptr )
  {
    *(_QWORD *)&v40 = 0;
    j__free(ptr);
  }
  return v24;
}
// 464FCB: variable 'v20' is possibly undefined
// 464FCB: variable 'v21' is possibly undefined
// 4C2120: using guessed type __int64 (__fastcall *off_4C2120[2])();
// 4C3480: using guessed type __int64 (__fastcall *off_4C3480[2])();
