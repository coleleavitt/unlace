__int64 __fastcall sub_D1FFE0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rax
  __m128i v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  __m128i *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-B0h]
  char v21; // [rsp+1Fh] [rbp-A9h]
  __m128i v22; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+30h] [rbp-98h] BYREF
  __m128i v24; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v26[11]; // [rsp+70h] [rbp-58h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = (_QWORD *)(a1 + 384);
    v6 = *a3;
    v7 = *(_QWORD *)(a1 + 560);
    v8 = *(_QWORD *)(a1 + 1232);
    v20 = a2;
    *(_QWORD *)(a1 + 1240) = v6;
    v19 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v7, 16));
    sub_DFDA50(v7, 16);
    v9 = *(_QWORD *)(a1 + 560);
    v24 = _mm_load_si128(&v19);
    v19 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v9, 16));
    sub_DFDA50(v9, 16);
    v23 = _mm_load_si128(&v19);
    result = sub_CE4F00((__int64)v4, v8, (__int64)&v23, (__int64)&v24);
    if ( (_BYTE)result )
    {
      v10 = sub_21D4FB0(v23.m128i_u32[2]);
      v11.m128i_i64[0] = sub_D1E4A0(v4, v10);
      v22 = v11;
      v12 = (a2 >> 3) & 7;
      if ( (_BYTE)v12 == 7 )
        LOBYTE(v12) = 1;
      v19.m128i_i8[0] = v12;
      v21 = v12;
      sub_CDADA0((__int64)v25, (__int64)&v23);
      sub_CDADA0((__int64)v26, (__int64)&v24);
      v14 = sub_21D5390(v26, &v24, v13);
      if ( v25[0] == v14 )
        v15 = sub_21DD7B0(v25, v26, v19.m128i_u8[0]);
      else
        v15 = sub_21D9740(v25, v26, v19.m128i_u8[0]);
      v19.m128i_i64[0] = (__int64)&v22;
      sub_CDAFD0((__int64)&v22, v25);
      sub_971860(v26);
      sub_971860(v25);
      v16 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
      v17 = v20;
      v18 = v19.m128i_i64[0];
      *v16 = _mm_load_si128(&v22);
      return sub_DA7060(v4, v8, v18, v15, v17);
    }
  }
  return result;
}

