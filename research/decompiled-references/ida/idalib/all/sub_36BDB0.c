__int64 __fastcall sub_36BDB0(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  _OWORD v4[2]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v5; // [rsp+20h] [rbp-88h]
  __int16 v6; // [rsp+28h] [rbp-80h]
  __int128 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int64 v9; // [rsp+48h] [rbp-60h]
  int v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+58h] [rbp-50h]
  int v12; // [rsp+60h] [rbp-48h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  int v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  int v16; // [rsp+80h] [rbp-28h]
  __int64 v17; // [rsp+88h] [rbp-20h]
  unsigned __int64 v18; // [rsp+98h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  v6 = 0;
  v2 = _mm_loadh_ps((const double *)(a1 + 40));
  v5 = 0;
  v4[0] = v2;
  v8 = 0xFFFFFFFFLL;
  v4[1] = _mm_load_si128((const __m128i *)&xmmword_23A76D0);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v7 = 0;
  *(_QWORD *)(a2 + 8) = (unsigned __int8)add_func_ex((int)v4);
  return 0;
}
