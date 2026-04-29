__int64 __fastcall sub_218E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v8; // r12d
  int v9; // ebp
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  _DWORD *v15; // rdi
  _BOOL8 (__fastcall *v16)(_DWORD *, _DWORD *, unsigned int, unsigned int *); // rax
  unsigned int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // edx
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-2Ch]

  v8 = a3;
  v9 = a2;
  v10 = a5;
  if ( (_DWORD)a2 )
  {
    v11 = BYTE3(a2);
    if ( (unsigned int)a2 > 0x2CFFFFFF )
    {
      sub_215D0(a1, a2, a3, v11);
      return sub_21A20();
    }
    v12 = *(_DWORD *)(a1 + 40 * v11 + 76);
    v13 = (a2 & 0xFFFFFF) - 1;
    v14 = v13 + v8;
    if ( v12 <= v13 + v8 )
      v14 = v12;
    if ( v14 < v13 || v12 < v13 + v8 )
      return 2147500037LL;
  }
  v15 = *a4;
  if ( *a4 )
  {
    v16 = *(_BOOL8 (__fastcall **)(_DWORD *, _DWORD *, unsigned int, unsigned int *))(*(_QWORD *)v15 + 16LL);
    if ( v16 != sub_212A0 )
      return v16(v15, a5, a6, a7);
    v9 = v15[2];
    v8 = v15[4];
    v17 = v15[3];
  }
  else
  {
    v22 = a6;
    v21 = (_QWORD *)operator new(0x18u);
    a6 = v22;
    v15 = v21;
    *v21 = off_327B8;
    v17 = a2;
    v15[4] = v8;
    *a4 = v15;
    *((_QWORD *)v15 + 1) = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  }
  v18 = v8 + v9 - v17;
  if ( v18 <= a6 )
    a6 = v18;
  v19 = a6 + v17;
  if ( v17 < a6 + v17 )
  {
    do
      *v10++ = v17++;
    while ( v17 != v19 );
    v15[3] = v17;
  }
  *a7 = a6;
  return a6 == 0;
}
