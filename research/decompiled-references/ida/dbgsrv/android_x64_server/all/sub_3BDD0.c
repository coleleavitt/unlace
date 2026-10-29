/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BDD0
// Address: 0x000000000003BDD0

//----- (000000000003BDD0) ----------------------------------------------------
__int64 __fastcall sub_3BDD0(__int64 a1, signed int a2, __int64 a3, char a4)
{
  void *v4; // rbx
  char *v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  _DWORD *v14; // rdx
  signed int v15; // eax
  bool v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rdx
  bool v19; // cc
  __int64 v20; // rcx
  const void *v21; // rsi
  void *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rcx
  int *v29; // rax
  char *v30; // rax
  __int64 v32; // [rsp+8h] [rbp-80h] BYREF
  __int64 v33; // [rsp+10h] [rbp-78h]
  char v34; // [rsp+18h] [rbp-70h]
  void *dest[4]; // [rsp+1Ch] [rbp-6Ch] BYREF
  __int128 v36; // [rsp+3Ch] [rbp-4Ch]
  int v37; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v38; // [rsp+50h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  v9 = sub_3C720(a1, a2);
  v10 = *(_DWORD **)(a1 + 1080);
  v11 = *(_QWORD *)(a1 + 1088);
  v12 = 4 * v11;
  v13 = v10;
  if ( 4 * v11 )
  {
    v13 = *(_DWORD **)(a1 + 1080);
    while ( *v13 != a2 )
    {
      ++v13;
      v12 -= 4;
      if ( !v12 )
        goto LABEL_8;
    }
  }
  v14 = &v10[v11];
  if ( v13 == v14 )
  {
LABEL_8:
    v15 = sub_4C880(a1, &v32, a2, -1);
    if ( v15 == -1 )
    {
      v29 = (int *)__errno(a1);
      v30 = winerr(*v29);
      LODWORD(v4) = 0;
      sub_391F0(a1, "Finish attaching to %d thread: %s\n", a2, v30);
      return (unsigned int)v4;
    }
    if ( v15 != a2 || (v32 & 0x7F) != 0x7F )
      goto LABEL_14;
    v16 = (v32 & 0xFF00) == 4864;
    if ( *(_BYTE *)(a1 + 1150) )
      v16 = (v32 & 0xFFFF0000) == 0x800000;
    if ( !v16 )
    {
LABEL_14:
      v17 = a1 + 1040;
      v18 = *(_QWORD *)(a1 + 1040);
      do
      {
        if ( *(_DWORD *)(v18 + 32) >= a2 )
          v17 = v18;
        v18 = *(_QWORD *)(v18 + 8LL * (*(_DWORD *)(v18 + 32) < a2));
      }
      while ( v18 );
      v19 = *(_DWORD *)(v17 + 32) <= a2;
      v20 = v17 + 40;
      if ( !v19 )
        v20 = 0;
      *(_BYTE *)(v20 + 24) = 1;
      if ( v15 > 0 )
        sub_3C8D0((_QWORD *)a1, v15, v32);
    }
  }
  else
  {
    memmove(v13, v13 + 1, ((char *)(v14 - 1) - (char *)v13) & 0xFFFFFFFFFFFFFFFCLL);
    --*(_QWORD *)(a1 + 1088);
  }
  v32 = 0xFFFFFFFFLL;
  v33 = -1;
  v34 = 0;
  v36 = 0;
  memset(dest, 0, sizeof(dest));
  v37 = 0;
  set_debug_event_code((__int64)&v32, 3);
  if ( (unsigned __int64)(((__int64)dest[0] & 0xFFFFFFF) - 9) >= 2 && ((__int64)dest[0] & 0xFFFFFFF) != 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(3297);
    BUG();
  }
  if ( v9 + 32 != (char *)dest + 4 )
  {
    v4 = *((void **)v9 + 5);
    if ( (unsigned __int64)v4 < 2 )
    {
      *(void **)((char *)&dest[1] + 4) = nullptr;
    }
    else
    {
      v21 = *((const void **)v9 + 4);
      v22 = *(void **)((char *)dest + 4);
      if ( *(void **)((char *)&dest[2] + 4) < v4 )
      {
        v22 = qvector_reserve((__int64)dest + 4, *(char **)((char *)dest + 4), (unsigned __int64)v4, 1u);
        *(void **)((char *)dest + 4) = v22;
      }
      *(void **)((char *)&dest[1] + 4) = v4;
      memmove(v22, v21, (size_t)v4 - 1);
      (*(char **)((char *)dest + 4))[(unsigned __int64)v4 - 1] = 0;
    }
  }
  LODWORD(v32) = *(_DWORD *)(a1 + 1140);
  HIDWORD(v32) = a2;
  if ( a4 )
    a3 = ptrace(PTRACE_PEEKUSER, (unsigned int)a2, 128, 0);
  v33 = a3;
  v34 = 1;
  if ( ((__int64)dest[0] & 0xFFFFFFF) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 152);
    if ( !v23 )
    {
      sub_48AB0(a1 + 120);
      v23 = *(_QWORD *)(a1 + 152);
    }
    v24 = v23 / 0x38;
    v25 = *(_QWORD *)(a1 + 128);
    v26 = 0;
    v27 = *(_QWORD *)(v25 + 8 * (v23 / 0x38));
    v28 = v27 + 72 * (v23 % 0x38);
    if ( *(_QWORD *)(a1 + 136) != v25 )
      v26 = v28;
    if ( v26 == v27 )
      v26 = *(_QWORD *)(v25 + 8 * v24 - 8) + 4032LL;
    *(_QWORD *)(v26 - 72) = 0xFFFFFFFFLL;
    *(_QWORD *)(v26 - 64) = -1;
    *(_BYTE *)(v26 - 56) = 0;
    *(_DWORD *)(v26 - 52) = 0;
    copy_debug_event(v26 - 72, (__int64)&v32);
    *(__m128i *)(a1 + 152) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_FE0B0);
    *(_BYTE *)(a1 + 1228) = 0;
  }
  free_debug_event((__int64)&v32);
  LOBYTE(v4) = 1;
  return (unsigned int)v4;
}
// 3C113: variable 'v4' is possibly undefined
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// FE0B0: using guessed type __int128 xmmword_FE0B0;
// 158B40: using guessed type __int64 under_debugger;
