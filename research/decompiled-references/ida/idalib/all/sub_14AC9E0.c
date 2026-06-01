__int64 __fastcall sub_14AC9E0(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int16 v11; // ax
  __int64 v12; // r8
  __int64 *v13; // rsi
  __int8 v14; // al
  __int16 v15; // ax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+Ch] [rbp-1DCh]
  __int64 v19; // [rsp+28h] [rbp-1C0h] BYREF
  __m128i *v20; // [rsp+30h] [rbp-1B8h] BYREF
  __int8 v21; // [rsp+38h] [rbp-1B0h]
  const __m128i *v22; // [rsp+40h] [rbp-1A8h]
  int v23; // [rsp+48h] [rbp-1A0h]
  __int16 v24; // [rsp+4Ch] [rbp-19Ch]
  __int64 (__fastcall *v25)(__int64); // [rsp+50h] [rbp-198h]
  __int64 v26; // [rsp+58h] [rbp-190h]
  __int64 v27; // [rsp+60h] [rbp-188h]
  __int64 v28; // [rsp+70h] [rbp-178h] BYREF
  void *v29; // [rsp+78h] [rbp-170h]
  __int64 v30; // [rsp+80h] [rbp-168h]
  _BYTE v31[16]; // [rsp+88h] [rbp-160h] BYREF
  __int8 *v32; // [rsp+98h] [rbp-150h] BYREF
  void *v33; // [rsp+A0h] [rbp-148h]
  __int64 v34; // [rsp+A8h] [rbp-140h]
  _BYTE v35[16]; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-128h] BYREF
  void *v37; // [rsp+C8h] [rbp-120h]
  __int64 v38; // [rsp+D0h] [rbp-118h]
  _BYTE v39[16]; // [rsp+D8h] [rbp-110h] BYREF
  __int8 *v40; // [rsp+E8h] [rbp-100h] BYREF
  void *ptr; // [rsp+F0h] [rbp-F8h]
  __int64 v42; // [rsp+F8h] [rbp-F0h]
  _BYTE v43[16]; // [rsp+100h] [rbp-E8h] BYREF
  _QWORD v44[3]; // [rsp+110h] [rbp-D8h] BYREF
  _QWORD v45[5]; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+150h] [rbp-98h] BYREF
  _QWORD v47[3]; // [rsp+160h] [rbp-88h] BYREF
  _QWORD v48[5]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v49; // [rsp+1A0h] [rbp-48h] BYREF

  v5 = 0;
  v6 = sub_14B6F70(a1);
  sub_146B5E0(&v19, (__int64)a1, 8u, 1, 0);
  if ( v6 != 1 )
  {
    v7 = 0;
    v8 = a1[6].m128i_i64[0];
    if ( a1[2].m128i_i16[0] == 24 )
      v7 = a1[1].m128i_u32[0];
    v5 = sub_1849850(v8, *(_QWORD *)(v8 + 608), *(unsigned int *)(a2 + 160), v6 & 0xFFFFFFFFFFFFFFFELL, v7);
  }
  v28 = 0;
  v32 = &a1[31].m128i_i8[8];
  v33 = v35;
  v29 = v31;
  v37 = v39;
  v30 = 0x200000000LL;
  v34 = 0x200000000LL;
  v36 = 0;
  v38 = 0x200000000LL;
  v40 = &a1[31].m128i_i8[8];
  ptr = v43;
  v42 = 0x200000000LL;
  while ( 1 )
  {
    while ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020((__int64)a1, (unsigned int *)&v28, a3, a4);
    v11 = a1[2].m128i_i16[0];
    if ( v11 != 189 )
      break;
    sub_1490230(a1, (__int64)&v36, 0, 0, a3, a4);
  }
  if ( v11 == 24 )
  {
    if ( *(_BYTE *)(a2 + 656) )
    {
      v12 = (unsigned int)v28;
      if ( (_DWORD)v28 )
        goto LABEL_13;
    }
    else
    {
      sub_1818070(*(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 648), 0);
      v12 = (unsigned int)v28;
      *(_BYTE *)(a2 + 656) = 1;
      if ( (_DWORD)v12 )
      {
LABEL_13:
        if ( HIDWORD(v28) )
        {
          sub_1481BE0((__int64)a1, (unsigned int *)&v28, 0);
          LODWORD(v30) = 0;
          sub_15DCED0(v32, &v32);
          LODWORD(v34) = 0;
          v28 = 0;
        }
      }
    }
    v13 = (_QWORD *)(&word_3E + 1);
    v22 = a1;
    v20 = (__m128i *)&a1[122];
    v14 = a1[122].m128i_i8[0];
    v23 = 1638424;
    v21 = v14;
    v25 = sub_1478A90;
    v15 = a1[2].m128i_i16[0];
    a1[122].m128i_i8[0] = 1;
    v24 = 63;
    v26 = 0;
    v27 = 0;
    if ( v15 == 24 )
    {
      if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
        sub_1568800(&v20);
      else
        LODWORD(v27) = sub_1478A90((__int64)a1);
      v15 = a1[2].m128i_i16[0];
    }
    v18 = 0;
    v16 = (__int64)v45;
    while ( 1 )
    {
      if ( v15 == 456 )
        goto LABEL_40;
      if ( (unsigned __int16)v15 > 0x1C8u )
      {
        if ( v15 == 457 )
        {
          ++v18;
LABEL_40:
          v13 = v47;
          v47[0] = 0;
          LODWORD(v44[0]) = 6;
          sub_156FF30(a1, v47, v44);
          goto LABEL_50;
        }
        if ( v15 == 458 )
        {
          v16 = v18;
          if ( !v18 )
            goto LABEL_22;
          --v18;
          goto LABEL_40;
        }
      }
      else if ( v15 == 1 || v15 == 25 && (v9 = v18) == 0 )
      {
LABEL_22:
        sub_14808E0((__int64)&v20, v13, v9, v16, v12, v10);
        if ( v5 )
          v5 = sub_183E310(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v5, HIDWORD(v27));
        v20->m128i_i8[0] = v21;
        goto LABEL_25;
      }
      v44[0] = 0;
      v45[3] = &v46;
      v44[1] = v45;
      v47[1] = v48;
      v44[2] = 0x200000000LL;
      v45[2] = (char *)a1 + 504;
      v45[4] = 0x200000000LL;
      v47[0] = 0;
      v47[2] = 0x200000000LL;
      v48[2] = (char *)a1 + 504;
      v48[3] = &v49;
      v48[4] = 0x200000000LL;
      while ( 1 )
      {
        while ( (unsigned __int16)(v15 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
        {
          sub_14AB020((__int64)a1, (unsigned int *)v44, a3, a4);
          v15 = a1[2].m128i_i16[0];
        }
        if ( a1[2].m128i_i16[0] != 189 )
          break;
        sub_1490230(a1, (__int64)v47, 0, 0, a3, a4);
        v15 = a1[2].m128i_i16[0];
      }
      v13 = v44;
      sub_156E800(a1, v44, v47, 0);
      sub_147A450(v47);
      sub_147A450(v44);
LABEL_50:
      v15 = a1[2].m128i_i16[0];
    }
  }
  *(_BYTE *)a2 |= 0x20u;
  *(_QWORD *)(a2 + 160) = 0;
  sub_156E800(a1, &v28, &v36, a2);
  if ( v5 )
    v5 = sub_183E310(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v5, 0);
LABEL_25:
  sub_15DCED0(v40, &v40);
  if ( ptr != v43 )
    free(ptr);
  if ( v37 != v39 )
    free(v37);
  sub_15DCED0(v32, &v32);
  if ( v33 != v35 )
    free(v33);
  if ( v29 != v31 )
    free(v29);
  if ( v19 )
    sub_1564F70(v19);
  return v5;
}
