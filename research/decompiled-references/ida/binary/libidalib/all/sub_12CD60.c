__int64 __fastcall sub_12CD60(int a1, int a2, char a3)
{
  int *v3; // rbx
  int *v4; // rax
  __int64 v5; // rax
  const char *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // rdi
  int v11; // [rsp+14h] [rbp-13Ch] BYREF
  __int64 (__fastcall **v12)(); // [rsp+18h] [rbp-138h] BYREF
  int v13; // [rsp+20h] [rbp-130h]
  unsigned int v14; // [rsp+24h] [rbp-12Ch]
  __int128 v15; // [rsp+28h] [rbp-128h]
  __int64 v16; // [rsp+38h] [rbp-118h]
  const char *v17; // [rsp+40h] [rbp-110h]
  int v18; // [rsp+48h] [rbp-108h]
  __m128i v19; // [rsp+50h] [rbp-100h]
  int v20; // [rsp+60h] [rbp-F0h]
  _BYTE v21[72]; // [rsp+68h] [rbp-E8h] BYREF
  int v22; // [rsp+C8h] [rbp-88h] BYREF
  int v23; // [rsp+CCh] [rbp-84h]
  char v24; // [rsp+D0h] [rbp-80h]
  __int64 v25; // [rsp+D8h] [rbp-78h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-70h]
  __int64 v27; // [rsp+F0h] [rbp-60h]
  __int128 v28; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v29; // [rsp+110h] [rbp-40h]

  v3 = &v22;
  v29 = __readfsqword(0x28u);
  v15 = -1;
  v12 = (__int64 (__fastcall **)())&stru_236898;
  v14 = a2 == 0 ? 1795 : 259;
  v13 = -16777212;
  v16 = 0;
  v17 = nullptr;
  v18 = 1;
  v20 = -1;
  v4 = (int *)v21;
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_232728), (__m128i)(unsigned __int64)&off_232500);
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 6;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( &v22 != v4 );
  v22 = 0;
  if ( ((v14 >> 19) & 0x3F) != 0 )
  {
    if ( HIBYTE(v13) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    HIBYTE(v13) = ((v14 >> 19) & 0x3F) - 1;
    v14 &= 0xFE07FFFF;
  }
  v23 = a2;
  v24 = a3;
  v12 = off_232450;
  v25 = 0;
  v27 = 0;
  v26 = 0;
  v28 = 0;
  v5 = qvector_reserve();
  v25 = v5;
  *(_QWORD *)&v26 = 20;
  *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_1D3680);
  *(_DWORD *)(v5 + 15) = 1936158313;
  *(_BYTE *)(v25 + 19) = 0;
  if ( v23 <= 2 )
  {
    if ( v23 <= 0 )
      goto LABEL_8;
  }
  else if ( v23 != 4 )
  {
LABEL_8:
    v23 = 0;
    goto LABEL_9;
  }
  sub_96630(&v25);
LABEL_9:
  v6 = s1;
  if ( (_QWORD)v26 )
    v6 = (const char *)v25;
  v17 = v6;
  v11 = a1;
  v7 = sub_198E60(&v12, &v11);
  if ( v7 < 0 || v7 >= (unsigned __int64)v28 )
    v8 = -1;
  else
    v8 = *(_DWORD *)(v27 + 4 * v7);
  v12 = off_232450;
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  v12 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    v9 = *((_QWORD *)v3 - 3);
    v3 -= 6;
    if ( v9 )
    {
      *((_QWORD *)v3 + 1) = 0;
      qfree();
    }
  }
  while ( v3 != (int *)v21 );
  return v8;
}

