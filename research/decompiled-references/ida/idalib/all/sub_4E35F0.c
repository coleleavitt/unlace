__int64 __fastcall sub_4E35F0(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 custom_refinfo; // rsi
  __int64 result; // rax
  __int64 v13[4]; // [rsp+0h] [rbp-98h] BYREF
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  char v16; // [rsp+30h] [rbp-68h]
  int v17; // [rsp+34h] [rbp-64h]
  __int128 v18; // [rsp+38h] [rbp-60h]
  __m128i si128; // [rsp+48h] [rbp-50h]
  int v20; // [rsp+58h] [rbp-40h]
  char v21; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v8 = *a1;
  v9 = *(_DWORD *)(a5 + 24);
  v22 = __readfsqword(0x28u);
  v18 = -1;
  v13[0] = v8;
  v13[1] = -1;
  v13[2] = a5;
  v13[3] = a4;
  v14 = 0;
  v15 = a6;
  v16 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  if ( (v9 & 0x40) == 0 )
  {
    if ( (unsigned __int8)sub_4E3350(v13, 0)
      && (_QWORD)v18 != -1
      && *((_QWORD *)&v18 + 1) != -1
      && (unsigned __int8)sub_4E1870((__int64)v13, (__int64)"calc_reference_data") )
    {
      goto LABEL_4;
    }
    return 0;
  }
  custom_refinfo = get_custom_refinfo(v9 & 0x4F);
  if ( !custom_refinfo )
  {
    if ( (debug & 2) != 0 )
      sub_3879F0();
    return 0;
  }
  if ( !(unsigned __int8)sub_4E3350(v13, custom_refinfo) )
    return 0;
LABEL_4:
  if ( (debug & 2) != 0 )
    sub_3879F0();
  result = sub_4E1AC0(v13);
  if ( !(_BYTE)result )
    return 0;
  if ( a2 )
    *a2 = v18 & *(_QWORD *)(a1[3] + 16);
  if ( a3 )
    *a3 = *((_QWORD *)&v18 + 1);
  return result;
}
