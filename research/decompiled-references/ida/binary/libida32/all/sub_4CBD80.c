__int64 __fastcall sub_4CBD80(__int64 *a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  int v9; // edi
  __int64 custom_refinfo; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+20h] [rbp-48h]
  _BYTE v17[20]; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-2Ch]
  char v19; // [rsp+40h] [rbp-28h]
  unsigned __int64 v20; // [rsp+48h] [rbp-20h]

  v7 = *a1;
  v20 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a5 + 12);
  v13 = -1;
  v12 = v7;
  v14 = a5;
  v15 = (unsigned int)a4;
  LODWORD(v16) = a6;
  BYTE4(v16) = 0;
  *(_DWORD *)v17 = 0;
  v18 = 0;
  v19 = 0;
  *(__m128i *)&v17[4] = _mm_load_si128((const __m128i *)&xmmword_2383940);
  if ( (v9 & 0x40) == 0 )
  {
    if ( (unsigned __int8)sub_4CBB50(&v12, 0)
      && *(_DWORD *)&v17[4] != -1
      && *(_DWORD *)&v17[8] != -1
      && (unsigned __int8)sub_4CA2E0((__int64)&v12, (__int64)"calc_reference_data") )
    {
      goto LABEL_4;
    }
    return 0;
  }
  custom_refinfo = get_custom_refinfo(v9 & 0x4F, a2, a3, a4, a5, a6, v12, v13, v14, v15, v16, *(_QWORD *)v17);
  if ( !custom_refinfo )
  {
    if ( (debug & 2) != 0 )
      sub_383DA0();
    return 0;
  }
  if ( !(unsigned __int8)sub_4CBB50(&v12, custom_refinfo) )
    return 0;
LABEL_4:
  if ( (debug & 2) != 0 )
    sub_383DA0();
  result = sub_4CA4A0((unsigned int *)&v12);
  if ( !(_BYTE)result )
    return 0;
  if ( a2 )
    *a2 = *(_DWORD *)&v17[4];
  if ( a3 )
    *a3 = *(_DWORD *)&v17[8];
  return result;
}

