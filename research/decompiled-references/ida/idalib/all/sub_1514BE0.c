void __fastcall sub_1514BE0(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rax
  size_t v6; // rdx
  _BYTE *v7; // r13
  size_t v8; // r12
  int v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // r8
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // rdx
  _BYTE *v15; // rdi
  unsigned int v16; // eax
  _BYTE *v17; // rax
  signed __int64 v18; // rdx
  unsigned int v19; // eax
  _BYTE *v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // eax
  _BYTE *v27; // rax
  signed __int64 v28; // rdx
  const char *v29; // rsi
  unsigned int *v30; // [rsp+8h] [rbp-140h]
  _BYTE *v31[2]; // [rsp+10h] [rbp-138h] BYREF
  __int64 v32; // [rsp+20h] [rbp-128h] BYREF
  __m128i v33; // [rsp+30h] [rbp-118h] BYREF
  _BYTE *v34; // [rsp+40h] [rbp-108h]
  size_t v35; // [rsp+48h] [rbp-100h]
  __int16 v36; // [rsp+50h] [rbp-F8h]
  __m128i v37[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v38; // [rsp+80h] [rbp-C8h]
  __m128i v39; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int8 *v41[17]; // [rsp+C0h] [rbp-88h] BYREF

  *a2 = 0;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = sub_1504BC0(a1, (unsigned int *)(a1 + 16), 0);
  if ( !v6 )
  {
    v14 = *(unsigned int *)(a1 + 16);
LABEL_11:
    sub_1564820(v41, a1, v14, 2046);
    sub_15038B0(v41);
    sub_20FCA30(&v39);
    sub_AEC220(v41, v39.m128i_i64[0], v39.m128i_i64[1]);
    v15 = (_BYTE *)v39.m128i_i64[0];
    if ( (__int64 *)v39.m128i_i64[0] == &v40 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v7 = (_BYTE *)v5;
  v8 = v6;
  v9 = sub_20F3DF0(v5, v6);
  *a2 = v9;
  if ( v9 )
  {
    if ( (unsigned __int8)sub_15141F0(a1, v7, v8, v4, a3, 0) )
      *a2 = 0;
  }
  else
  {
    sub_1564820(v41, a1, v4, 2166);
    sub_AEC220(v41, v7, v8);
    sub_AEA040((__int64)v41);
    v10 = sub_20F3FF0(v7, v8, (unsigned int)*a2);
    v11 = (unsigned int *)&unk_2619170;
    v12 = v10;
    if ( !v10 )
    {
      while ( 1 )
      {
        v30 = v11;
        v13 = sub_20F47A0(*v11, 0, v7, v8);
        if ( v13 )
          break;
        v11 = v30 + 1;
        if ( &unk_2619184 == (_UNKNOWN *)(v30 + 1) )
        {
          v14 = v4;
          goto LABEL_11;
        }
      }
      sub_1564820(v41, a1, v4, 2045);
      sub_AEC220(v41, v7, v8);
      sub_1503AF0(v41, 2);
      sub_15038B0(v41);
      sub_AEA040((__int64)v41);
      sub_1564820(v41, a1, v4, 2047);
      v16 = sub_20F3F60(v13);
      v17 = (_BYTE *)sub_20F3F70(v16);
      sub_AEC220(v41, v17, v18);
      v19 = sub_20F4510(v13);
      v20 = (_BYTE *)sub_20F4520(v19);
      sub_AEC220(v41, v20, v21);
      v35 = v8;
      v37[0].m128i_i64[0] = (__int64)")";
      v38 = 259;
      v36 = 1283;
      v33.m128i_i64[0] = (__int64)"(";
      v34 = v7;
      sub_A41580(&v39, &v33, v37, v22, v23, v24);
      sub_2253560(v31, &v39);
      sub_AEC220(v41, v31[0], (signed __int64)v31[1]);
      v15 = v31[0];
      if ( (__int64 *)v31[0] == &v32 )
        goto LABEL_13;
LABEL_12:
      operator delete(v15);
LABEL_13:
      sub_AEA040((__int64)v41);
      return;
    }
    sub_1564820(v41, a1, v4, 2045);
    sub_AEC220(v41, v7, v8);
    sub_1503AF0(v41, 1);
    sub_15038B0(v41);
    sub_AEA040((__int64)v41);
    v37[0].m128i_i8[0] = 0;
    v39.m128i_i8[0] = 0;
    v25 = sub_20F3F50(v12);
    sub_20F8580(v12, v25, v37, &v39);
    sub_1564820(v41, a1, v4, 2047);
    v26 = sub_20F3F50(v12);
    v27 = (_BYTE *)sub_20F3F70(v26);
    sub_AEC220(v41, v27, v28);
    sub_AEC220(v41, v7, v8);
    v29 = "(<property-name>)";
    if ( !v39.m128i_i8[0] )
      v29 = &byte_22F0C30;
    sub_1503D30(v41, (__int64)v29);
    sub_AEA040((__int64)v41);
  }
}
