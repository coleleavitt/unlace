__int64 __fastcall sub_19A47C0(__int64 a1, int a2, int a3, const __m128i *a4)
{
  unsigned int v4; // ebp
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-E8h] BYREF
  char v12; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-80h]
  __int64 v15; // [rsp+80h] [rbp-78h]
  __m128i v16; // [rsp+88h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-60h]
  __int64 v18; // [rsp+A0h] [rbp-58h]
  __int64 v19; // [rsp+A8h] [rbp-50h]
  __int64 v20; // [rsp+B0h] [rbp-48h]

  v4 = 1;
  v10 = a4->m128i_i64[0];
  if ( v10 )
  {
    v4 = 2;
    if ( !sub_B856E0(&v10) )
    {
      v7 = _mm_loadu_si128(a4);
      v11[1] = &v12;
      v11[2] = 0x800000000LL;
      v8 = a4[1].m128i_i64[0];
      v11[0] = 0;
      v17 = v8;
      v13 = 0;
      v14 = 0;
      v15 = a1;
      v16 = v7;
      v18 = 0;
      v19 = 15;
      v20 = 0x101010000LL;
      sub_1A395A0(v11);
      sub_1A5D3E0(a1, (unsigned int)v11, a2, a3, 0, 0, 0);
      *(_WORD *)((char *)&v20 + 3) = 0;
      v4 = dword_26467C0[LODWORD(v11[0])];
      sub_169D230((__int64)v11);
    }
  }
  return v4;
}
