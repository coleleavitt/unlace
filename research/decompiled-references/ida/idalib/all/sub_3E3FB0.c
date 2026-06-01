__int64 __fastcall sub_3E3FB0(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v5; // al
  char v6; // al
  __m128 v7; // xmm0
  unsigned __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  char v10; // [rsp+8h] [rbp-50h]
  __int128 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v9 = -1;
  v10 = 0;
  if ( (a4 & 2) != 0
    || ((a4 & 1) != 0 ? (v5 = sub_3E1CA0(a1, (__int64)&v9, a3)) : (v5 = sub_3E3030(a1, (__int64)&v9, a3)), !v5) )
  {
    if ( (a4 & 4) != 0 || !(unsigned __int8)sub_40F780(a1, &v9) )
    {
      *(_QWORD *)a2 = -1;
      return 0;
    }
    v5 = 0;
  }
  *(_BYTE *)(a2 + 16) = v5;
  v6 = v10;
  v7 = _mm_loadh_ps((const double *)&v9);
  *(_BYTE *)(a2 + 19) = a4;
  *(__m128 *)a2 = v7;
  *(_BYTE *)(a2 + 17) = v6 & 0x1F;
  *(_BYTE *)(a2 + 18) = (v6 & 0x20) != 0;
  if ( (a4 & 0x18) == 0 )
    return 1;
  v11 = 0;
  getinf_buf(26, &v11, 16);
  if ( (v9 >= (unsigned __int64)v11 && v9 < *((_QWORD *)&v11 + 1)) == ((a4 & 0x10) != 0) )
    return 1;
  else
    return sub_3E3E80(a1, a2);
}
