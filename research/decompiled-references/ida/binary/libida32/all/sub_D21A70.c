__int64 __fastcall sub_D21A70(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // rax
  __int64 v7; // r13
  void *v8; // rbx
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  void *v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+1Ch] [rbp-3Ch]
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]

  v6.m128i_i64[0] = sub_D21170(a1, a2, a3, a4, a5, a6);
  v7 = a1[22];
  v10 = v6;
  v8 = (void *)*(unsigned __int16 *)sub_DFDA20(v7, 8);
  sub_DFDA50(v7, 8);
  v12 = 16;
  v11 = v8;
  v13 = 0;
  sub_21E30A0(&v14, &v11, a2);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  sub_CE8850((void **)&v10, (__int64)&v14);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v10);
  return 1;
}

