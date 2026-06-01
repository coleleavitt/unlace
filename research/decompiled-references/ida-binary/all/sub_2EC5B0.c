void __fastcall sub_2EC5B0(int a1, _QWORD *a2, __int64 a3, _QWORD *a4, bool *a5)
{
  bool v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128i v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  switch ( a1 )
  {
    case 1:
      v7 = a2[3];
      v8 = a2[2];
      v9 = a3;
      v11[0] = v8;
      v11[1] = v7;
      v10 = a4;
      v13 = &v10;
      v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v9, (__m128i)(unsigned __int64)v11);
      sub_2EC400((__int64)&v12);
      break;
    case 2:
      v6 = 0;
      if ( *a4 == a2[2] )
        v6 = *a4 == 0 || a2[3] == a4[1];
      *a5 = v6;
      break;
    case 0:
      if ( a2 )
        operator delete(a2, 0x20u);
      break;
  }
}
