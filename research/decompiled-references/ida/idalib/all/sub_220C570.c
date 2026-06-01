unsigned __int64 __fastcall sub_220C570(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  unsigned __int64 v5; // rax
  int v6; // edx
  int v7; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v8; // [rsp+4h] [rbp-84h]
  __int128 v9; // [rsp+Ch] [rbp-7Ch]
  __int128 v10; // [rsp+1Ch] [rbp-6Ch]
  __int128 v11; // [rsp+2Ch] [rbp-5Ch]
  int v12; // [rsp+3Ch] [rbp-4Ch]
  __int128 v13; // [rsp+40h] [rbp-48h]
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+60h] [rbp-28h]
  __m128i si128; // [rsp+70h] [rbp-18h]

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( (unsigned int)v2 > 0x40 )
  {
    v5 = sub_220C3E0(v3, (__int64)&v3[(unsigned __int64)(v2 + 63) >> 6]);
    v6 = *(_DWORD *)(a1 + 8);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v7 = v6;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v8 = (_QWORD *)v5;
  }
  else
  {
    v8 = v3;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v7 = v2;
  }
  return sub_2012F20(&v7, 0xCu, 0xFF51AFD7ED558CCDLL);
}
