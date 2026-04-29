__int64 __fastcall sub_27860(const __m128i *a1)
{
  int v1; // eax
  _DWORD *v3; // rdi
  unsigned int v4; // r15d
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r12
  __m128i v8; // xmm0
  char v9; // al
  __int64 v10; // rdi
  unsigned int v11; // eax
  char *v12; // rdi
  int v13; // eax
  char *v14; // rdi
  unsigned int v15; // eax
  _BYTE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 result; // rax
  _BYTE *v22; // rax
  __m128i v23; // xmm0
  char v24; // dl
  int v25; // eax
  char v26; // [rsp+0h] [rbp-128h]
  char *v27; // [rsp+8h] [rbp-120h]
  __m128i v28; // [rsp+10h] [rbp-118h] BYREF
  unsigned int *v29; // [rsp+20h] [rbp-108h]
  const __m128i *v30; // [rsp+28h] [rbp-100h]
  __int64 v31; // [rsp+38h] [rbp-F0h] BYREF
  char *s1; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-E0h]
  __m128i v34; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE *v35; // [rsp+70h] [rbp-B8h]
  unsigned int v36; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+84h] [rbp-A4h]
  __int128 v38; // [rsp+90h] [rbp-98h]
  __int64 v39; // [rsp+A0h] [rbp-88h]
  __int64 v40; // [rsp+B0h] [rbp-78h]
  __m128i v41[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-40h]

  v1 = a1->m128i_i32[2];
  v43 = __readfsqword(0x28u);
  v3 = (_DWORD *)a1->m128i_i64[0];
  v31 = 0;
  v28.m128i_i32[3] = v1;
  sub_24510(v3, v1, 0, (int *)&v31);
  v4 = v31;
  v5 = HIDWORD(v31);
  v42 = 0;
  memset(v41, 0, sizeof(v41));
  v6 = a1->m128i_i64[0];
  if ( (unsigned int)v31 >= HIDWORD(v31) )
    return 0;
  v7 = v6 + 232;
  v8.m128i_i64[0] = 0;
  while ( 1 )
  {
    *(__int64 *)((char *)v41[0].m128i_i64 + 4) = v8.m128i_i64[0];
    v9 = sub_227B0(v6, v7, (v4 & 0xFFFFFF) - 1, (__int64)v41);
    v8 = _mm_loadl_epi64((const __m128i *)((char *)v41[0].m128i_i64 + 4));
    if ( !v9 )
    {
LABEL_3:
      if ( ++v4 >= v5 )
        return 0;
      goto LABEL_4;
    }
    v10 = a1->m128i_i64[0];
    s1 = 0;
    v33 = 0;
    v27 = (char *)v8.m128i_i64[0];
    v11 = sub_230E0(v10, _mm_cvtsi128_si32(v8), (__int64 *)&s1);
    v12 = s1;
    v8.m128i_i64[0] = (__int64)v27;
    if ( v11 > 7 )
    {
      if ( (_QWORD)v33 )
      {
        v27 = s1;
        v28.m128i_i64[0] = v8.m128i_i64[0];
        v13 = strcmp(s1, "value__");
        v12 = v27;
        v8 = _mm_loadl_epi64(&v28);
        if ( !v13 )
          break;
      }
    }
LABEL_12:
    if ( !v12 )
      goto LABEL_3;
    ++v4;
    v27 = (char *)v8.m128i_i64[0];
    *(_QWORD *)&v33 = 0;
    qfree();
    v8.m128i_i64[0] = (__int64)v27;
    if ( v4 >= v5 )
      return 0;
LABEL_4:
    v6 = a1->m128i_i64[0];
  }
  v14 = (char *)a1->m128i_i64[0];
  v30 = &v34;
  v34.m128i_i32[0] = 0;
  v27 = v14;
  v15 = sub_231F0((__int64)v14, _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229)), v34.m128i_i32, 3u);
  v29 = &v36;
  v36 = 0;
  v16 = (_BYTE *)sub_23020((__int64)v27, 3u, v15, &v36);
  if ( v16 )
  {
    v20 = v34.m128i_u32[0];
    v8.m128i_i64[0] = v28.m128i_i64[0];
    if ( v36 >= v34.m128i_i32[0] )
      goto LABEL_17;
    v12 = s1;
    goto LABEL_12;
  }
  v20 = 0;
LABEL_17:
  if ( *v16 != 6 )
    sub_DA00((__int64)"Expected field signature for field %x", v28.m128i_u32[3], v20, v17, v18, v19, v26);
  v22 = v16 + 1;
  v23 = _mm_loadl_epi64(a1);
  LOBYTE(v36) = 0;
  v37 = 0;
  v35 = &v22[v20];
  v34 = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)v22);
  v39 = 0;
  v40 = 0;
  v38 = 0;
  v24 = sub_27280(v30, (__int64)v29);
  v25 = 0;
  if ( v24 )
    v25 = HIDWORD(v37);
  LODWORD(v27) = v25;
  sub_21A20((__int64)v29);
  result = (unsigned int)v27;
  if ( s1 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
    return (unsigned int)v27;
  }
  return result;
}
