__int64 __fastcall sub_CDC0D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  bool v9; // bp
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a3;
  v10 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = *(_QWORD *)(a1 + 560);
  v11 = _mm_load_si128(&v10);
  sub_CDADA0((__int64)v12, (__int64)&v11);
  v7 = sub_21D5390(v12, &v11, v6);
  v8 = v12;
  if ( v12[0] == v7 )
    v8 = (_QWORD *)v12[1];
  v9 = (*((_BYTE *)v8 + 20) & 7) != 3;
  sub_971860(v12);
  *(_BYTE *)sub_DFD980(v5, 8) = v9;
  return 1;
}

