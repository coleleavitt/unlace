__int64 __fastcall sub_E561E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  char v7; // al
  unsigned __int8 v8; // al
  __m128 v9; // xmm0
  unsigned __int64 v10; // rax
  __m128 v12; // xmm0
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-198h]
  __int64 v16; // [rsp+18h] [rbp-190h]
  _QWORD v17[3]; // [rsp+20h] [rbp-188h] BYREF
  int v18; // [rsp+38h] [rbp-170h]
  __int64 v19; // [rsp+40h] [rbp-168h]
  const char *v20; // [rsp+48h] [rbp-160h]
  __m128 v21; // [rsp+50h] [rbp-158h] BYREF
  __int16 v22; // [rsp+60h] [rbp-148h]
  char v23; // [rsp+62h] [rbp-146h]
  unsigned __int64 v24; // [rsp+68h] [rbp-140h]
  __int128 v25; // [rsp+70h] [rbp-138h]
  _BYTE **v26; // [rsp+80h] [rbp-128h] BYREF
  _BYTE *v27; // [rsp+88h] [rbp-120h] BYREF
  __int64 v28; // [rsp+90h] [rbp-118h]
  _BYTE v29[64]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE *v30; // [rsp+D8h] [rbp-D0h]
  __int64 v31; // [rsp+E0h] [rbp-C8h]
  _BYTE v32[64]; // [rsp+E8h] [rbp-C0h] BYREF
  _QWORD *v33; // [rsp+128h] [rbp-80h]
  __int64 v34; // [rsp+130h] [rbp-78h]
  __int64 v35; // [rsp+138h] [rbp-70h]
  __int64 v36; // [rsp+140h] [rbp-68h]
  int v37; // [rsp+148h] [rbp-60h]
  __int64 v38; // [rsp+150h] [rbp-58h]
  __int64 v39; // [rsp+158h] [rbp-50h]
  int v40; // [rsp+160h] [rbp-48h]

  v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = *(_QWORD *)(a1 + 8);
  v14 = a4;
  v6 = *(_QWORD *)(v5 + 2312);
  v15 = a3;
  sub_2233820(v17);
  v17[2] = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v18 = 0;
  v19 = v6;
  v20 = "Mangling declaration";
  v7 = *(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28);
  v17[0] = &off_2B4B368;
  v8 = v7 & 0x7F;
  if ( v8 == 38 || v8 == 36 )
  {
    v15 = a1;
    v22 = 0;
    v23 = 0;
    v9 = _mm_loadh_ps((const double *)&v14);
    v21 = v9;
    v10 = sub_B77AF0(a2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10 )
      v4 = *(_QWORD *)(v10 + 48);
    v24 = v4;
    v25 = a2 & 7;
    v27 = v29;
    v28 = 0x400000000LL;
    v31 = 0x400000000LL;
    v33 = &v26;
    v30 = v32;
    v34 = 0;
    v26 = &v27;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_E52200((__int64)&v21, a2, 0, v9);
    sub_E3B410((__int64)&v21);
  }
  else
  {
    v16 = a1;
    v22 = 0;
    v12 = _mm_loadh_ps((const double *)&v14);
    v23 = 0;
    v21 = v12;
    if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (unsigned int)v8 - 34 <= 5 )
    {
      v13 = sub_B77AF0(a2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13 )
        v4 = *(_QWORD *)(v13 + 48);
    }
    v27 = v29;
    v28 = 0x400000000LL;
    v30 = v32;
    v31 = 0x400000000LL;
    v33 = &v26;
    v24 = v4;
    v25 = 0;
    v34 = 0;
    v26 = &v27;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_E52200((__int64)&v21, a2, v15, (__m128)0LL);
    sub_E3B410((__int64)&v21);
  }
  v17[0] = &off_2B4B368;
  return sub_22338A0(v17);
}
