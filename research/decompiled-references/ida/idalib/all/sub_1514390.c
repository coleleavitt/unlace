void __fastcall sub_1514390(const __m128i *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __m128i a6)
{
  unsigned int v7; // eax
  unsigned __int64 v9; // rax
  size_t v10; // rdx
  _BYTE *v11; // r13
  size_t v12; // r12
  int v13; // eax
  _BYTE *v14; // rax
  signed __int64 v15; // rdx
  _BYTE *v16; // rax
  signed __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int *v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdx
  _BYTE *v22; // rdi
  size_t v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  _BYTE *v26; // rsi
  signed __int64 v27; // rdx
  unsigned int v28; // eax
  _BYTE *v29; // rax
  signed __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // eax
  _BYTE *v36; // rax
  signed __int64 v37; // rdx
  const char *v38; // rsi
  unsigned int v39; // [rsp+4h] [rbp-144h]
  unsigned int *v41; // [rsp+8h] [rbp-140h]
  unsigned int v42; // [rsp+8h] [rbp-140h]
  unsigned int v43; // [rsp+8h] [rbp-140h]
  _BYTE *v44[2]; // [rsp+10h] [rbp-138h] BYREF
  __int64 v45; // [rsp+20h] [rbp-128h] BYREF
  __m128i v46; // [rsp+30h] [rbp-118h] BYREF
  _BYTE *v47; // [rsp+40h] [rbp-108h]
  size_t v48; // [rsp+48h] [rbp-100h]
  __int16 v49; // [rsp+50h] [rbp-F8h]
  __m128i v50[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int16 v51; // [rsp+80h] [rbp-C8h]
  __m128i v52; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int8 *v54[17]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a1[1].m128i_u32[0];
  *(_DWORD *)a2 = 0;
  v39 = v7;
  if ( a4 == 9 )
  {
    v23 = j__strlen("number");
    *(_DWORD *)a2 = sub_20F47A0(a3, 9, "number", v23);
    v24 = sub_14BFC10(a1, 0, a6);
    if ( v24 > 1 )
      sub_1B13AB0(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v24 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v9 = sub_1504BC0((__int64)a1, (unsigned int *)&a1[1], 2u);
    v11 = (_BYTE *)v9;
    v12 = v10;
    if ( !v10 )
    {
      v21 = a1[1].m128i_u32[0];
LABEL_10:
      sub_1564820(v54, a1, v21, 2046);
      sub_1503AF0(v54, 2);
      sub_20F93A0(&v52, a3, a4);
      sub_AEC220(v54, v52.m128i_i64[0], v52.m128i_i64[1]);
      v22 = (_BYTE *)v52.m128i_i64[0];
      if ( (__int64 *)v52.m128i_i64[0] == &v53 )
        goto LABEL_12;
      goto LABEL_11;
    }
    *(_QWORD *)(a2 + 16) = v10;
    *(_QWORD *)(a2 + 8) = v9;
    v13 = sub_20F47A0(a3, a4, v9, v10);
    *(_DWORD *)a2 = v13;
    if ( v13 )
    {
      if ( (unsigned __int8)sub_15141F0((__int64)a1, v11, v12, v39, a5, 2u) )
        *(_DWORD *)a2 = 0;
    }
    else
    {
      sub_1564820(v54, a1, v39, 2164);
      sub_AEC220(v54, v11, v12);
      v14 = (_BYTE *)sub_20F4520(a4);
      sub_AEC220(v54, v14, v15);
      v16 = (_BYTE *)sub_20F3F70(a3);
      sub_AEC220(v54, v16, v17);
      sub_AEA040((__int64)v54);
      if ( (unsigned int)sub_20F3DF0(v11, v12) )
      {
        sub_1564820(v54, a1, v39, 2045);
        sub_AEC220(v54, v11, v12);
        sub_15038B0(v54);
        sub_1503AF0(v54, 2);
        sub_AEA040((__int64)v54);
        sub_1564820(v54, a1, v39, 2047);
        sub_AEC220(v54, v11, v12);
        sub_1503D30(v54, (__int64)"<selector-name>");
        sub_1503D30(v54, (__int64)"(<property-name>)");
        sub_AEA040((__int64)v54);
        return;
      }
      v18 = sub_20F3FF0(v11, v12, 0);
      v19 = (unsigned int *)&unk_26191B0;
      if ( !v18 )
      {
        while ( 1 )
        {
          v41 = v19;
          v20 = sub_20F47A0(*v19, a4, v11, v12);
          if ( v20 )
            break;
          v19 = v41 + 1;
          if ( v41 + 1 == (unsigned int *)jpt_1521F8D )
          {
            v21 = v39;
            goto LABEL_10;
          }
        }
        v42 = v20;
        sub_1564820(v54, a1, v39, 2047);
        v25 = sub_20F3F60(v42);
        v26 = (_BYTE *)sub_20F3F70(v25);
        sub_AEC220(v54, v26, v27);
        v28 = sub_20F4510(v42);
        v29 = (_BYTE *)sub_20F4520(v28);
        sub_AEC220(v54, v29, v30);
        v48 = v12;
        v50[0].m128i_i64[0] = (__int64)")";
        v51 = 259;
        v49 = 1283;
        v46.m128i_i64[0] = (__int64)"(";
        v47 = v11;
        sub_A41580(&v52, &v46, v50, v31, v32, v33);
        sub_2253560(v44, &v52);
        sub_AEC220(v54, v44[0], (signed __int64)v44[1]);
        v22 = v44[0];
        if ( (__int64 *)v44[0] == &v45 )
          goto LABEL_12;
LABEL_11:
        operator delete(v22);
LABEL_12:
        sub_AEA040((__int64)v54);
        return;
      }
      v43 = v18;
      sub_1564820(v54, a1, v39, 2045);
      sub_AEC220(v54, v11, v12);
      sub_1503AF0(v54, 1);
      sub_1503AF0(v54, 2);
      sub_AEA040((__int64)v54);
      v50[0].m128i_i8[0] = 0;
      v52.m128i_i8[0] = 0;
      v34 = sub_20F3F50(v43);
      sub_20F8580(v43, v34, v50, &v52);
      sub_1564820(v54, a1, v39, 2047);
      v35 = sub_20F3F50(v43);
      v36 = (_BYTE *)sub_20F3F70(v35);
      sub_AEC220(v54, v36, v37);
      sub_AEC220(v54, v11, v12);
      v38 = "(<property-name>)";
      if ( !v52.m128i_i8[0] )
        v38 = &byte_22F0C30;
      sub_1503D30(v54, (__int64)v38);
      sub_AEA040((__int64)v54);
    }
  }
}
