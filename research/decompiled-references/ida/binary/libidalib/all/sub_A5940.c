__int64 __fastcall sub_A5940(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int64 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __m128i *p_si128; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  unsigned __int64 v15; // [rsp+68h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v8 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3000);
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  v12 = a1;
  p_si128 = &si128;
  v14 = a3;
  v10 = 0;
  sub_A5780(a1, &v9);
  v3 = 1;
  if ( (unsigned int)zip_deflate() )
  {
    sub_92200((__int64)"Error compressing the trace file with zip_deflate!", sub_A83B0);
    v3 = 0;
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v3;
}

