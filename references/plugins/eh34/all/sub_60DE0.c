__int64 __fastcall sub_60DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  const char *v8; // rsi
  unsigned __int8 v9; // dl
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v13; // r15
  __int64 (__fastcall *hexdsp)(__int64, const char *, __int64, _QWORD, _QWORD **, _QWORD, __int64); // rax
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  bool v18; // zf
  _DWORD *v20; // r12
  __m128i v21; // xmm0
  size_t v22; // r12
  void *v23; // rcx
  void *v24; // rax
  void (__fastcall *v25)(__int64, _DWORD *); // rax
  int v26; // eax
  unsigned int v27; // [rsp+10h] [rbp-90h]
  unsigned int v28; // [rsp+14h] [rbp-8Ch]
  __int64 v29; // [rsp+20h] [rbp-80h] BYREF
  __m128i v30; // [rsp+28h] [rbp-78h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-60h] BYREF
  __int64 v32; // [rsp+48h] [rbp-58h]
  __int128 v33; // [rsp+50h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-38h]

  v8 = *(const char **)(a3 + 8);
  v9 = *(_BYTE *)(a2 + 188);
  v10 = *(_DWORD *)(a2 + 184);
  v11 = *(_DWORD *)(a4 + 72);
  v34 = __readfsqword(0x28u);
  v32 = 0;
  v27 = v10;
  v13 = 2 * (v9 ^ 1u) + 1;
  v28 = v11;
  v33 = 0;
  v31 = a5;
  hexdsp = (__int64 (__fastcall *)(__int64, const char *, __int64, _QWORD, _QWORD **, _QWORD, __int64))get_hexdsp(a1, v8);
  v15 = hexdsp(424, v8, a3, v28, &v31, v27, v13);
  v18 = *(_BYTE *)(a2 + 168) == 0;
  *(_DWORD *)(a2 + 296) = v15;
  if ( v18 )
  {
    if ( v15 == -22 )
    {
      v20 = *(_DWORD **)(a4 + 56);
      if ( v20 && *v20 == 56 )
      {
        v25 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(424, v8);
        v25(343, v20);
        v26 = *(_DWORD *)(a4 + 24);
        BYTE1(v26) &= ~2u;
        LOBYTE(v26) = v26 | 0x80;
        *(_DWORD *)(a4 + 24) = v26;
        *(_DWORD *)a1 = 1;
        *(_BYTE *)(a1 + 24) = 0;
      }
      else
      {
        sub_64B50(
          (unsigned int)&v29,
          *(_QWORD *)(a2 + 32),
          (unsigned int)"transact_inline_request(%a): bad tail instruction, should not happen",
          *a5,
          v16,
          v17);
        v21 = _mm_loadu_si128(&v30);
        *(_QWORD *)a1 = v29;
        *(_BYTE *)(a1 + 24) = 1;
        *(__m128i *)(a1 + 8) = v21;
      }
    }
    else if ( v15 )
    {
      if ( v15 != -29 )
        nullsub_42(*(_QWORD *)(a3 + 8), "c:\\temp\\hrdebug-bad-inline.txt");
      *(_DWORD *)a1 = 2;
      *(_BYTE *)(a1 + 24) = 0;
    }
    else
    {
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a2 + 152);
    v23 = nullptr;
    if ( v22 )
    {
      v24 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 152));
      v23 = memcpy(v24, *(const void **)(a2 + 144), v22);
    }
    *(_QWORD *)a1 = v23;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return a1;
}
