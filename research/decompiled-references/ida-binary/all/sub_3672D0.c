__int64 __fastcall sub_3672D0(int a1, unsigned int a2, unsigned int a3)
{
  int *v3; // rbx
  int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __m128i si128; // xmm0
  __int64 v8; // rdx
  const char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rdi
  int v14; // [rsp+14h] [rbp-13Ch] BYREF
  __int64 (__fastcall **v15)(); // [rsp+18h] [rbp-138h] BYREF
  int v16; // [rsp+20h] [rbp-130h]
  unsigned int v17; // [rsp+24h] [rbp-12Ch]
  __int128 v18; // [rsp+28h] [rbp-128h]
  __int64 v19; // [rsp+38h] [rbp-118h]
  const char *v20; // [rsp+40h] [rbp-110h]
  int v21; // [rsp+48h] [rbp-108h]
  __m128i v22; // [rsp+50h] [rbp-100h]
  int v23; // [rsp+60h] [rbp-F0h]
  _BYTE v24[72]; // [rsp+68h] [rbp-E8h] BYREF
  int v25; // [rsp+C8h] [rbp-88h] BYREF
  int v26; // [rsp+CCh] [rbp-84h]
  char v27; // [rsp+D0h] [rbp-80h]
  __int64 v28; // [rsp+D8h] [rbp-78h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-70h]
  __int64 v30; // [rsp+F0h] [rbp-60h]
  __int128 v31; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v32; // [rsp+110h] [rbp-40h]

  v3 = &v25;
  v32 = __readfsqword(0x28u);
  v18 = -1;
  v15 = (__int64 (__fastcall **)())&stru_86F6A0;
  v17 = a2 == 0 ? 1795 : 259;
  v16 = -16777212;
  v19 = 0;
  v20 = nullptr;
  v21 = 1;
  v23 = -1;
  v4 = (int *)v24;
  v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_8674E8), (__m128i)(unsigned __int64)&off_8672C8);
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &v25 != v4 );
  v25 = 0;
  if ( ((v17 >> 19) & 0x3F) != 0 )
  {
    if ( HIBYTE(v16) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a3, v17, a2, 0.0);
      BUG();
    }
    HIBYTE(v16) = ((v17 >> 19) & 0x3F) - 1;
    v17 &= 0xFE07FFFF;
  }
  v26 = a2;
  v27 = a3;
  v15 = enc_chooser_t___vtable;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v31 = 0;
  v5 = qvector_reserve(&v28, 0, 20, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD260);
  v28 = v5;
  *(_QWORD *)&v29 = 20;
  *(__m128i *)v5 = si128;
  *(_DWORD *)(v5 + 15) = 1936158313;
  *(_BYTE *)(v28 + 19) = 0;
  v8 = (unsigned int)v26;
  if ( v26 <= 2 )
  {
    if ( v26 <= 0 )
      goto LABEL_8;
  }
  else if ( v26 != 4 )
  {
LABEL_8:
    v26 = 0;
    goto LABEL_9;
  }
  sub_16FAA0(&v28, (__int64)" (%d-bit)", 8 * v26);
LABEL_9:
  v9 = &s1;
  if ( (_QWORD)v29 )
    v9 = (const char *)v28;
  v20 = v9;
  v14 = a1;
  v10 = sub_4AED50(&v15, &v14, v8, v6);
  if ( v10 < 0 || v10 >= (unsigned __int64)v31 )
    v11 = -1;
  else
    v11 = *(_DWORD *)(v30 + 4 * v10);
  v15 = enc_chooser_t___vtable;
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    *(double *)si128.m128i_i64 = qfree(v30, (const char *)&v14);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    *(double *)si128.m128i_i64 = qfree(v28, (const char *)&v14, *(double *)si128.m128i_i64);
  }
  v15 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v12 = *((_QWORD *)v3 - 3);
    v3 -= 6;
    if ( v12 )
    {
      *((_QWORD *)v3 + 1) = 0;
      *(double *)si128.m128i_i64 = qfree(v12, (const char *)&v14, *(double *)si128.m128i_i64);
    }
  }
  while ( v3 != (int *)v24 );
  return v11;
}
