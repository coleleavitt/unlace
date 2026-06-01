void __fastcall sub_1819650(__int64 a1, __int64 a2, const __m128i *a3, _QWORD *a4, char a5, __m128 a6)
{
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  __m128i *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  unsigned __int32 v22; // eax
  __int64 v23; // rdi
  __int32 v24; // r15d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int32 v30; // eax
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+8h] [rbp-130h]
  __m128i *v35; // [rsp+8h] [rbp-130h]
  __int64 v36; // [rsp+18h] [rbp-120h] BYREF
  __int64 v37[2]; // [rsp+20h] [rbp-118h] BYREF
  __m128i v38[2]; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int8 v39; // [rsp+52h] [rbp-E6h]
  _BYTE v40[200]; // [rsp+70h] [rbp-C8h] BYREF

  sub_B08AB0(v38, *(_QWORD *)(a1 + 248), a3, 0, (__int64)a4);
  v34 = a3[1].m128i_u32[2];
  if ( (v39 & 0xF0) != 0xF0 )
  {
    LOBYTE(v12) = v39 >> 4;
    if ( v39 >> 4 == 4 )
      goto LABEL_11;
    goto LABEL_3;
  }
  if ( (unsigned int)sub_FA77D0(v38) == 4 )
  {
LABEL_11:
    if ( (unsigned __int8)sub_1819300(a1, (_BYTE *)a2, (__int64)v38, v34) )
      return;
    goto LABEL_5;
  }
  if ( (v39 & 0xF0) != 0xF0 )
  {
    LOBYTE(v12) = v39 >> 4;
LABEL_3:
    v12 = (unsigned __int8)v12;
    goto LABEL_4;
  }
  v12 = sub_FA77D0(v38);
LABEL_4:
  if ( v12 == 5 )
    goto LABEL_11;
LABEL_5:
  v13 = *(_BYTE *)(a2 + 28) & 0x7F;
  v14 = *(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v14 + 17) & 4) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 248);
    if ( (unsigned int)(v13 - 40) > 6 )
    {
      v30 = sub_B065C0((__int64)v38, v21, v14, v11);
      v23 = *(_QWORD *)(a1 + 248);
      v24 = v30;
    }
    else
    {
      v22 = sub_B065C0((__int64)v38, v21, v14, v11);
      v23 = *(_QWORD *)(a1 + 248);
      v24 = v22;
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 17448) + 260LL) == 20
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 57 <= 1 )
      {
        if ( (__int64)sub_A97FF0(v23, v22) <= 15 )
        {
          sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x195Bu, 0);
          v37[0] = *(_QWORD *)(a2 + 48);
          v33 = sub_162B6D0((__int64)v40, v37);
          LODWORD(v36) = 16;
          sub_1587D10(v33, (int *)&v36);
          sub_15F7200(v40);
          return;
        }
        v23 = *(_QWORD *)(a1 + 248);
      }
    }
    v35 = (__m128i *)sub_1806F50((__int64 *)(v23 + 2352), 56, 3u);
    sub_B08AB0(v35, *(_QWORD *)(a1 + 248), a3, 0, (__int64)a4);
    v25 = v35[2].m128i_u8[6];
    v35[3].m128i_i32[0] = v24;
    v35[3].m128i_i8[4] = 1;
    v26 = v25 & 0xFFFFFFFD;
    v35[2].m128i_i8[6] = v26 | (2 * (a5 & 1));
    sub_B8CC60(a2, (__int64)v35, v26, v27, v28, v29);
    return;
  }
  if ( (unsigned int)(v13 - 64) > 2 )
  {
LABEL_9:
    v16 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B08AB0(v16, *(_QWORD *)(a1 + 248), a3, 0, (__int64)a4);
    v16[2].m128i_i8[6] = (2 * (a5 & 1)) | v16[2].m128i_i8[6] & 0xFD;
    sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
    return;
  }
  v15 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v15[1] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_9;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    goto LABEL_9;
  }
  v31 = (__int64)(a4 + 1);
  sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v34, 0xBA3u, 0);
  v32 = *(_QWORD *)(v31 - 8);
  v37[1] = v31;
  v37[0] = v32;
  HIDWORD(v36) = sub_F6CE20(v37);
  LODWORD(v36) = sub_F6CCB0(v37, a6);
  sub_1587DB0((__int64)v40, &v36);
  sub_15F7200(v40);
}
