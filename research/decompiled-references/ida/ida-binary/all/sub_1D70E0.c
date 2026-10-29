_QWORD *__fastcall sub_1D70E0(_QWORD *a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // r13
  signed int v6; // r15d
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // xmm0_8
  _BYTE *v12; // rax
  int v13; // edx
  _BYTE *v15; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // [rsp+8h] [rbp-60h]
  _BYTE *v18; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v20 = __readfsqword(0x28u);
  if ( a4 <= 0 )
  {
    *a1 = 0;
    a1[1] = 0x100000001LL;
    v16 = (_BYTE *)operator new[](1u);
    *a1 = v16;
    *v16 = 0;
  }
  else
  {
    v6 = a4 + 1;
    HIDWORD(v19) = 1;
    v8 = (_BYTE *)operator new[](1u);
    *v8 = 0;
    v9 = v8;
    if ( v6 > 0 )
    {
      v15 = (_BYTE *)operator new[](v6);
      *v15 = *v9;
      if ( v9 )
      {
        v17 = v15;
        operator delete[](v9);
        v15 = v17;
      }
      v9 = v15;
    }
    else
    {
      v6 = 1;
    }
    v10 = *a2;
    v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v6), 224).m128i_u64[0];
    v12 = v9;
    do
    {
      v13 = a3 - (_DWORD)v9 + (_DWORD)v12++;
      *(v12 - 1) = *(_BYTE *)(v10 + v13);
    }
    while ( &v9[v4] != v12 );
    v9[v4] = 0;
    *a1 = 0;
    a1[1] = 0;
    v18 = v9;
    v19 = v11;
    sub_1CAEC0((__int64)a1, (__int64)&v18);
    if ( v9 )
      operator delete[](v9);
  }
  return a1;
}
