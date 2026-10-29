unsigned __int64 __fastcall sub_194310(
        __int64 a1,
        char *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        void (__fastcall ***a8)(_QWORD, __int64),
        unsigned int a9)
{
  char *v10; // rax
  __int64 v14; // rdx
  void (*v15)(void); // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  int v18; // eax
  int v19; // r14d
  unsigned __int64 v21; // r14
  void *v22; // r15
  _QWORD *v23; // rax
  __int64 v25; // [rsp+8h] [rbp-70h]
  void *v26; // [rsp+10h] [rbp-68h] BYREF
  __m128i v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v10 = a4;
  v14 = *(_QWORD *)a1;
  v29 = __readfsqword(0x28u);
  v15 = *(void (**)(void))(v14 + 392);
  if ( v15 != nullsub_121 )
  {
    v25 = a5;
    v15();
    a5 = v25;
    v10 = a4;
  }
  v16 = *(_QWORD *)(a1 + 2520);
  *(_DWORD *)(a1 + 1920) |= 0x200u;
  if ( (*(_BYTE *)(v16 + 12) & 4) != 0 )
  {
    v17 = (_QWORD *)(v16 + a5);
    if ( ((unsigned __int8)v10 & 1) != 0 )
      v10 = *(char **)&v10[*v17 - 1];
    v18 = ((__int64 (__fastcall *)(_QWORD *, __int64))v10)(v17, a6);
  }
  else
  {
    v18 = sub_1920D0(a6, v16, a2, a3);
  }
  v19 = v18;
  if ( a8 )
    (**a8)(a8, a6);
  if ( (a9 & 0x10) != 0 )
    *(_BYTE *)(a1 + 2120) = 0;
  if ( v19 == 1 )
  {
    v21 = *(_QWORD *)(a6 + 8);
    v22 = nullptr;
    v28 = -1;
    v27 = 0;
    if ( v21 )
    {
      v22 = (void *)qalloc_or_throw();
      memcpy(v22, *(const void **)a6, 8 * v21);
    }
    v26 = v22;
    v27 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
    sub_193E90(a1, a7, (__int64)&v26, a9);
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 424LL))(a1, a7, a9);
    sub_17F170(a1 + 160, v23, 1);
    if ( v22 )
      qfree();
  }
  *(_DWORD *)(a1 + 1920) &= ~0x200u;
  return v29 - __readfsqword(0x28u);
}

