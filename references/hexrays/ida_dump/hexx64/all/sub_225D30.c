__int64 __fastcall sub_225D30(
        __int64 a1,
        int a2,
        _BYTE *a3,
        _DWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        signed int a7,
        unsigned int a8)
{
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r12d
  _BYTE v18[8]; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+38h] [rbp-90h]
  __int64 v22; // [rsp+40h] [rbp-88h]
  __int128 v23; // [rsp+48h] [rbp-80h]
  __int64 v24; // [rsp+58h] [rbp-70h]
  __int128 v25; // [rsp+60h] [rbp-68h]
  __int64 v26; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+80h] [rbp-48h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v19 = 0;
  v21 = 513;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0xFFFFFFFF00000000LL;
  v28 = 0;
  v23 = 0;
  v25 = 0;
  copy_argloc(&v19, a4);
  sub_1EF680(&v19, *(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL), a7, 0);
  if ( *a3 )
  {
    copy_tinfo_t(&v26, a3);
  }
  else if ( *a4 == 1 && a7 > 16 )
  {
    sub_32C430(v18, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL), (unsigned int)a7, 0);
    copy_tinfo_t(&v26, v18);
    clear_tinfo_t(v18);
  }
  v11 = *(_QWORD *)(a1 + 16);
  si128.m128i_i64[1] = -4;
  HIDWORD(v27) = *(_DWORD *)(v11 + 64) - 1;
  v12 = v21;
  BYTE1(v12) = BYTE1(v21) & 0x7E;
  LODWORD(v21) = v12 | 0x100000;
  v13 = sub_1F6560(v11, (__int64)&v19, 0);
  v14 = v13;
  if ( a2 != -1 )
    sub_225530(a1, a2, v13, a5, a6, a8);
  *(_BYTE *)(a1 + 152) = 1;
  clear_tinfo_t(&v26);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  cleanup_argloc(&v19);
  return v14;
}
