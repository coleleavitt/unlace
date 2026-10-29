unsigned __int64 __fastcall sub_3D2C00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  unsigned int v7; // eax
  char *v8; // rdx
  char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v13; // [rsp+4h] [rbp-54h] BYREF
  unsigned int *v14; // [rsp+8h] [rbp-50h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v18 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1480);
  v15 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v15);
  v13 = v7;
  if ( a3 )
  {
    sub_3D28B0((__int64)(v6 + 295), v7);
    return v18 - __readfsqword(0x28u);
  }
  v16.m128i_i64[0] = 0;
  v16.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v17 = 0;
  sub_408E00(&v16, &v15);
  v8 = (char *)v6[297];
  if ( v8 )
  {
    v9 = (char *)(v6 + 296);
    do
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)v8 + 2);
        v11 = *((_QWORD *)v8 + 3);
        if ( *((_DWORD *)v8 + 8) < v13 )
          break;
        v9 = v8;
        v8 = *((char **)v8 + 2);
        if ( !v10 )
          goto LABEL_7;
      }
      v8 = *((char **)v8 + 3);
    }
    while ( v11 );
LABEL_7:
    if ( v6 + 296 != (_QWORD *)v9 && v13 >= *((_DWORD *)v9 + 8) )
      goto LABEL_10;
  }
  else
  {
    v9 = (char *)(v6 + 296);
  }
  v14 = &v13;
  v9 = (char *)sub_3B4A90(v6 + 295, (__int64)v9, &v14);
LABEL_10:
  *(__m128i *)(v9 + 36) = _mm_load_si128(&v16);
  *(_QWORD *)(v9 + 52) = v17;
  return v18 - __readfsqword(0x28u);
}

