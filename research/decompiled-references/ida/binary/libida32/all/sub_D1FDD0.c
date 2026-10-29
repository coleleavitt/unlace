__int64 __fastcall sub_D1FDD0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v6; // r14
  _QWORD *v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+0h] [rbp-D8h]
  __int64 v17; // [rsp+8h] [rbp-D0h]
  __m128i v18; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-B0h]
  _QWORD v21[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[104]; // [rsp+70h] [rbp-68h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 560);
    v6 = *(_QWORD *)(a1 + 1232);
    v7 = (_QWORD *)(a1 + 384);
    *(_QWORD *)(a1 + 1240) = *a3;
    sub_DFDA20(v4, 48);
    sub_DFF520(v23);
    sub_DFDA50(v4, 48);
    if ( (unsigned __int8)sub_DA8420(a1 + 384, v6, v23, 4) )
    {
      v8 = (a2 >> 3) & 7;
      v18 = _mm_loadu_si128((const __m128i *)sub_CEA540((__int64)v23));
      v9 = sub_21D4FB0(v18.m128i_u32[2]);
      v19 = sub_D1E4A0(v7, v9);
      v20 = v10;
      if ( (_BYTE)v8 == 7 )
        v8 = 1;
      v11 = sub_21D4FB0(v18.m128i_u32[2]);
      v13 = sub_21D5390(v18.m128i_u32[2], v9, v12);
      v17 = v13;
      if ( v11 == v13 )
        sub_21DBF70(v21, v13, 1);
      else
        sub_21D7200(v21, v11, 1);
      sub_CDADA0((__int64)v22, (__int64)&v18);
      if ( v22[0] == v17 )
        v14 = sub_21DCC30(v22, v21, v8);
      else
        v14 = sub_21D9B10(v22, v21, v8);
      sub_CDAFD0((__int64)&v19, v22);
      sub_971860(v22);
      sub_971860(v21);
      v15 = sub_CEA540((__int64)v23);
      *(_QWORD *)v15 = v19;
      *(_DWORD *)(v15 + 8) = v20;
      v16 = sub_DA7060(v7, v6, &v19, v14, a2);
      sub_DFF560(v23);
      return v16;
    }
    else
    {
      sub_DFF560(v23);
      return 0;
    }
  }
  return result;
}

