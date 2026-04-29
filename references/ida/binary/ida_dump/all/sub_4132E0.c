__int64 __fastcall sub_4132E0(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  unsigned __int16 v12; // ax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+8h] [rbp-30h]
  unsigned int v15; // [rsp+Ch] [rbp-2Ch]
  char v16; // [rsp+10h] [rbp-28h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v10 = *(_DWORD *)(a1 + 892) == -1;
  v17 = __readfsqword(0x28u);
  if ( v10 )
  {
    v12 = *(_WORD *)(a1 + 48);
    if ( v12 != 515 )
    {
      if ( v12 > 0x203u )
      {
        if ( v12 != 604 )
          goto LABEL_2;
      }
      else if ( v12 > 0x100u )
      {
        if ( (unsigned __int16)(v12 - 258) > 0x53u )
          goto LABEL_2;
      }
      else if ( v12 <= 0xF4u )
      {
        goto LABEL_2;
      }
    }
    *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1, a3, a4, a5, a6, a7, a8, a9, a10);
  }
LABEL_2:
  v13 = a1;
  v14 = a2;
  v15 = -1;
  v16 = 0;
  sub_3FA580((int *)&v13, 1, 0, *(double *)a3.m128_u64);
  if ( !v16 && !(unsigned __int8)sub_3FACB0((__int64)&v13, *(double *)a3.m128_u64, a4) )
    sub_3EB430(*(double *)a3.m128_u64);
  return v15;
}
