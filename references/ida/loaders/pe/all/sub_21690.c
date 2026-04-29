__int64 __fastcall sub_21690(__int64 a1, int a2, _DWORD **a3, _DWORD *a4, unsigned int a5, unsigned int *a6, int a7)
{
  _DWORD *v10; // rbx
  _DWORD *v11; // rdi
  _BOOL8 (__fastcall *v12)(_DWORD *, _DWORD *, unsigned int, unsigned int *); // rax
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edx
  _QWORD *v19; // rax
  int v20; // ecx
  unsigned int v21; // [rsp+Ch] [rbp-3Ch]

  v10 = a4;
  if ( a4 )
    *a4 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = *a3;
  if ( *a3 )
  {
    v12 = *(_BOOL8 (__fastcall **)(_DWORD *, _DWORD *, unsigned int, unsigned int *))(*(_QWORD *)v11 + 16LL);
    if ( v12 != sub_212A0 )
      return v12(v11, a4, a5, a6);
    v13 = v11[2];
    v14 = v11[4];
    v15 = v11[3];
  }
  else
  {
    v21 = a5;
    v19 = (_QWORD *)operator new(0x18u);
    a5 = v21;
    v11 = v19;
    v13 = (a7 + 1) | (a2 << 24);
    v20 = *(_DWORD *)(a1 + 40LL * a2 + 76);
    *a3 = v19;
    *v19 = off_327F0;
    v15 = v13;
    v14 = v20 - a7;
    *((_QWORD *)v11 + 1) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v13), 224).m128i_u64[0];
    v11[4] = v14;
  }
  v16 = v14 + v13 - v15;
  if ( v16 <= a5 )
    a5 = v16;
  v17 = a5 + v15;
  if ( v15 < a5 + v15 )
  {
    do
      *v10++ = v15++;
    while ( v15 != v17 );
    v11[3] = v15;
  }
  *a6 = a5;
  return a5 == 0;
}
