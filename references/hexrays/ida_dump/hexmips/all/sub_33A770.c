__int64 sub_33A770()
{
  __int64 module_data; // r12
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  const char *v4; // r8
  size_t v5; // rbp
  const char *v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  char v11; // cl
  char v12; // al
  char v13; // cl
  char v14; // cl
  char v15; // al
  char v16; // cl
  const char *src; // [rsp+8h] [rbp-90h]
  __int16 v19; // [rsp+1Eh] [rbp-7Ah] BYREF
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-70h]
  void *v22; // [rsp+40h] [rbp-58h] BYREF
  __int128 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4CF8F8);
  v21 = 0;
  v20 = 0;
  v1 = qvector_reserve(&v20, 0, 45, 1);
  v20 = v1;
  v2 = 0;
  *(_QWORD *)&v21 = 45;
  *(__m128i *)v1 = _mm_load_si128((const __m128i *)&xmmword_4073B0);
  v19 = 0;
  *(__m128i *)(v1 + 16) = _mm_load_si128((const __m128i *)&xmmword_4073C0);
  *(__m128i *)(v1 + 28) = _mm_load_si128((const __m128i *)&xmmword_4073D0);
  *(_BYTE *)(v20 + 44) = 0;
  do
  {
    v3 = *(unsigned __int8 *)(module_data + 728);
    if ( _bittest(&v3, v2) )
      v19 |= 1 << v2;
    v4 = off_4C60E0[v2];
    v22 = nullptr;
    v23 = 0;
    if ( v4 )
    {
      src = v4;
      v5 = strlen(v4);
      v22 = (void *)qvector_reserve(&v22, 0, v5 + 1, 1);
      *(_QWORD *)&v23 = v5 + 1;
      memmove(v22, src, v5);
      *((_BYTE *)v22 + v5) = 0;
      v4 = (const char *)v22;
    }
    strrpl(v4, 58, 32);
    v6 = (const char *)&unk_3FC793;
    if ( v2 == 1 )
      v6 = ">";
    sub_F68D0(&v20, (__int64)"<%s:C>%s\n", (const char *)v22, v6);
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22);
    }
    v7 = v2 + 1;
    v2 = 1;
  }
  while ( v7 != 2 );
  v8 = v21;
  v9 = 3;
  if ( (_QWORD)v21 )
  {
    v7 = v21 + 1;
    v9 = v21 + 2;
    v8 = v21 - 1;
  }
  v10 = v20;
  if ( *((_QWORD *)&v21 + 1) < v9 )
  {
    v20 = qvector_reserve(&v20, v20, v9, 1);
    v10 = v20;
  }
  *(_QWORD *)&v21 = v9;
  *(_BYTE *)(v10 + v7) = 0;
  *(_WORD *)(v20 + v8) = 2570;
  if ( (unsigned int)sub_337FF0(v20, &v19) )
  {
    v11 = *(_BYTE *)(module_data + 728);
    v12 = v11 | 1;
    v13 = v11 & 0xFE;
    if ( (v19 & 1) == 0 )
      v12 = v13;
    v14 = v12;
    v15 = v12 & 0xFD;
    v16 = v14 | 2;
    if ( (v19 & 2) != 0 )
      v15 = v16;
    *(_BYTE *)(module_data + 728) = v15;
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return 0;
}
