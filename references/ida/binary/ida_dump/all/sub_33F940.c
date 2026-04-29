__int64 __fastcall sub_33F940(int a1)
{
  unsigned int *v1; // rbx
  __int64 module_data; // rbp
  __int64 v3; // rax
  __int16 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // r12d
  unsigned __int64 v8; // rdx
  int v9; // ecx
  bool v10; // r13
  const char *v11; // r8
  size_t v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rsi
  unsigned int *v17; // r8
  __int16 v18; // si
  unsigned int v19; // ecx
  int v20; // eax
  _BYTE *v21; // rdx
  char v22; // cl
  char v23; // al
  const char *src; // [rsp+18h] [rbp-90h]
  unsigned __int16 v26; // [rsp+2Eh] [rbp-7Ah] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  void *v29; // [rsp+50h] [rbp-58h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v1 = (unsigned int *)*(&off_4E59E0 + a1);
  module_data = get_module_data();
  v28 = 0;
  v3 = qvector_reserve();
  v27 = v3;
  v4 = 1;
  v5 = 0;
  v26 = 0;
  v6 = module_data + 608;
  *(_QWORD *)&v28 = 31;
  *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_424970);
  *(__m128i *)(v3 + 14) = _mm_load_si128((const __m128i *)&xmmword_4249A0);
  *(_BYTE *)(v27 + 30) = 0;
  while ( 1 )
  {
    v7 = v5 + 1;
    v8 = (int)v1[v5];
    v9 = *(unsigned __int8 *)(v6 + (v8 >> 3));
    if ( _bittest(&v9, v8 & 7) )
      v26 |= v4;
    v10 = 1;
    if ( (unsigned __int64)v7 <= 0xF )
      v10 = v1[v7] == 58;
    v11 = off_4E37E0[v8];
    v30 = 0;
    v29 = nullptr;
    if ( v11 )
    {
      src = v11;
      v12 = strlen(v11);
      v29 = (void *)qvector_reserve();
      *(_QWORD *)&v30 = v12 + 1;
      memmove(v29, src, v12);
      *((_BYTE *)v29 + v12) = 0;
    }
    strrpl();
    if ( v10 )
      break;
    sub_FAAD0(&v27);
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    v4 *= 2;
    v5 = v7;
  }
  sub_FAAD0(&v27);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  v13 = v28;
  if ( (_QWORD)v28 )
  {
    v14 = v28 + 1;
    v15 = v28 + 2;
    v16 = v27;
    v13 = v28 - 1;
    if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v28 + 2) )
      goto LABEL_16;
  }
  else
  {
    v16 = v27;
    v15 = 3;
    v14 = 2;
    if ( *((_QWORD *)&v28 + 1) >= 3u )
      goto LABEL_16;
  }
  v27 = qvector_reserve();
  v16 = v27;
LABEL_16:
  *(_QWORD *)&v28 = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_WORD *)(v27 + v13) = 2570;
  if ( (unsigned int)sub_33CF00(v27, &v26) )
  {
    v17 = v1 + 16;
    v18 = 1;
    do
    {
      v19 = *v1;
      if ( *v1 == 58 )
        break;
      v20 = 1 << (v19 & 7);
      v21 = (_BYTE *)(v6 + ((unsigned __int64)v19 >> 3));
      v22 = v20 | *v21;
      v23 = *v21 & ~(_BYTE)v20;
      if ( ((unsigned __int16)v18 & v26) != 0 )
        v23 = v22;
      ++v1;
      v18 *= 2;
      *v21 = v23;
    }
    while ( v1 != v17 );
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return 0;
}
