void __fastcall sub_1514860(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  size_t v7; // rdx
  _BYTE *v8; // r12
  size_t v9; // rbp
  int v10; // eax
  _BYTE *v11; // rax
  signed __int64 v12; // rdx
  int v13; // eax
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rdx
  _BYTE *v17; // rdi
  unsigned int v18; // eax
  _BYTE *v19; // rax
  signed __int64 v20; // rdx
  unsigned int v21; // eax
  _BYTE *v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int *v28; // [rsp+8h] [rbp-140h]
  unsigned int v29; // [rsp+8h] [rbp-140h]
  _BYTE *v30[2]; // [rsp+10h] [rbp-138h] BYREF
  __int64 v31; // [rsp+20h] [rbp-128h] BYREF
  __m128i v32; // [rsp+30h] [rbp-118h] BYREF
  _BYTE *v33; // [rsp+40h] [rbp-108h]
  size_t v34; // [rsp+48h] [rbp-100h]
  __int16 v35; // [rsp+50h] [rbp-F8h]
  __m128i v36[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v37; // [rsp+80h] [rbp-C8h]
  __m128i v38; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int8 *v40[17]; // [rsp+C0h] [rbp-88h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = sub_1504BC0(a1, (unsigned int *)(a1 + 16), 1u);
  if ( !v7 )
  {
    v16 = *(unsigned int *)(a1 + 16);
LABEL_11:
    sub_1564820(v40, a1, v16, 2046);
    sub_1503AF0(v40, 1);
    sub_20F8790(&v38, a3);
    sub_AEC220(v40, v38.m128i_i64[0], v38.m128i_i64[1]);
    v17 = (_BYTE *)v38.m128i_i64[0];
    if ( (__int64 *)v38.m128i_i64[0] == &v39 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v8 = (_BYTE *)v6;
  v9 = v7;
  v10 = sub_20F3FF0(v6, v7, a3);
  *(_DWORD *)(a2 + 8) = v10;
  if ( v10 )
  {
    if ( (unsigned __int8)sub_15141F0(a1, v8, v9, v5, a4, 1u) )
      *(_DWORD *)(a2 + 8) = 0;
  }
  else
  {
    sub_1564820(v40, a1, v5, 2165);
    sub_AEC220(v40, v8, v9);
    v11 = (_BYTE *)sub_20F3F70(a3);
    sub_AEC220(v40, v11, v12);
    sub_AEA040((__int64)v40);
    v13 = sub_20F3DF0(v8, v9);
    v14 = (unsigned int *)&unk_2619190;
    if ( !v13 )
    {
      while ( 1 )
      {
        v28 = v14;
        v15 = sub_20F47A0(*v14, 0, v8, v9);
        if ( v15 )
          break;
        v14 = v28 + 1;
        if ( &unk_26191A4 == (_UNKNOWN *)(v28 + 1) )
        {
          v16 = v5;
          goto LABEL_11;
        }
      }
      v29 = v15;
      sub_1564820(v40, a1, v5, 2045);
      sub_AEC220(v40, v8, v9);
      sub_1503AF0(v40, 2);
      sub_1503AF0(v40, 1);
      sub_AEA040((__int64)v40);
      sub_1564820(v40, a1, v5, 2047);
      v18 = sub_20F3F60(v29);
      v19 = (_BYTE *)sub_20F3F70(v18);
      sub_AEC220(v40, v19, v20);
      v21 = sub_20F4510(v29);
      v22 = (_BYTE *)sub_20F4520(v21);
      sub_AEC220(v40, v22, v23);
      v33 = v8;
      v36[0].m128i_i64[0] = (__int64)")";
      v37 = 259;
      v35 = 1283;
      v34 = v9;
      v32.m128i_i64[0] = (__int64)"(";
      sub_A41580(&v38, &v32, v36, v24, v25, v26);
      sub_2253560(v30, &v38);
      sub_AEC220(v40, v30[0], (signed __int64)v30[1]);
      v17 = v30[0];
      if ( (__int64 *)v30[0] == &v31 )
        goto LABEL_13;
LABEL_12:
      operator delete(v17);
LABEL_13:
      sub_AEA040((__int64)v40);
      return;
    }
    sub_1564820(v40, a1, v5, 2045);
    sub_AEC220(v40, v8, v9);
    sub_15038B0(v40);
    sub_1503AF0(v40, 1);
    sub_AEA040((__int64)v40);
    sub_1564820(v40, a1, v5, 2047);
    sub_AEC220(v40, v8, v9);
    sub_1503D30(v40, (__int64)"<selector-name>");
    sub_1503D30(v40, (__int64)"<property-name>");
    sub_AEA040((__int64)v40);
  }
}
