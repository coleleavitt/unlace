unsigned __int16 *__fastcall sub_1C7CFE0(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int16 v9; // dx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // r10
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rsi
  __int64 v32; // rdx
  int v33; // esi
  int v34; // r11d
  __int64 v35; // r10
  __m128 v36; // [rsp+0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+28h] [rbp-20h]
  __int64 v39; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return nullptr;
  v9 = (*(_WORD *)a2 + 509) & 0x1FF;
  v39 = v8;
  v38 = v7;
  switch ( v9 )
  {
    case 0u:
      return (unsigned __int16 *)sub_1C8CEE0();
    case 1u:
      return (unsigned __int16 *)sub_1C9A7C0();
    case 2u:
      return (unsigned __int16 *)sub_1C93790();
    case 3u:
      return (unsigned __int16 *)sub_1C98F60();
    case 4u:
      return (unsigned __int16 *)sub_1C73440(a2);
    case 5u:
      return (unsigned __int16 *)sub_1C73450(a2);
    case 6u:
      return (unsigned __int16 *)sub_1C73460(a2);
    case 7u:
      return (unsigned __int16 *)sub_1CA15C0();
    case 8u:
      return (unsigned __int16 *)sub_1C730E0(a1, a2);
    case 9u:
      return (unsigned __int16 *)sub_1C906F0();
    case 0xAu:
      return (unsigned __int16 *)sub_1C7DF20();
    case 0xBu:
      return (unsigned __int16 *)sub_1C8CDA0();
    case 0xCu:
      return (unsigned __int16 *)sub_1C9A120();
    case 0xDu:
      return (unsigned __int16 *)sub_1C856D0();
    case 0xEu:
      return (unsigned __int16 *)sub_1C857F0();
    case 0xFu:
      return (unsigned __int16 *)sub_1C73110(a1, a2);
    case 0x10u:
      return (unsigned __int16 *)sub_1C7E5A0();
    case 0x11u:
      return (unsigned __int16 *)sub_1C85860();
    case 0x12u:
      return (unsigned __int16 *)sub_1C858B0();
    case 0x13u:
      return (unsigned __int16 *)sub_1C85AC0();
    case 0x14u:
      return (unsigned __int16 *)sub_1C94440();
    case 0x15u:
      return (unsigned __int16 *)sub_1C93ED0();
    case 0x16u:
      return (unsigned __int16 *)sub_1C73140((__int64)a1, a2);
    case 0x17u:
      return (unsigned __int16 *)sub_1C73470(a2);
    case 0x18u:
      return (unsigned __int16 *)sub_1C8CF40();
    case 0x19u:
      return (unsigned __int16 *)sub_1C85B10();
    case 0x1Au:
      return sub_1C732E0(*a1, (unsigned __int16 *)a2, v9, a6, a7, a3, a4);
    case 0x1Bu:
      return (unsigned __int16 *)sub_1C73480(a2);
    case 0x1Cu:
      return (unsigned __int16 *)sub_1C73490(a2);
    case 0x1Du:
      return (unsigned __int16 *)sub_1C85B80();
    case 0x1Eu:
      return (unsigned __int16 *)sub_1C8D160();
    case 0x1Fu:
      return (unsigned __int16 *)sub_1C85D30();
    case 0x20u:
      return (unsigned __int16 *)sub_1C85E30();
    case 0x21u:
      return (unsigned __int16 *)sub_1C86110();
    case 0x22u:
      return (unsigned __int16 *)sub_1C8CE10();
    case 0x23u:
      return (unsigned __int16 *)sub_1C86120();
    case 0x24u:
      return (unsigned __int16 *)sub_1C86520();
    case 0x25u:
      return (unsigned __int16 *)sub_1C734A0(a2);
    case 0x26u:
      return (unsigned __int16 *)sub_1C734B0(a2);
    case 0x27u:
      return (unsigned __int16 *)sub_1C7E640();
    case 0x28u:
      return (unsigned __int16 *)sub_1C8D580();
    case 0x29u:
      return (unsigned __int16 *)sub_1C86570();
    case 0x2Au:
      sub_2EA9FE((__int64)a1, a2, v9, a6);
    case 0x2Bu:
      return (unsigned __int16 *)sub_1C94950();
    case 0x2Cu:
      return (unsigned __int16 *)sub_1C86700();
    case 0x2Du:
      return (unsigned __int16 *)sub_1C86790();
    case 0x2Eu:
      return (unsigned __int16 *)sub_1C867B0();
    case 0x2Fu:
      return (unsigned __int16 *)sub_1C95120();
    case 0x30u:
      return sub_1C7BA00(a1, a2, *(double *)a3.m128_u64, a4);
    case 0x31u:
      return (unsigned __int16 *)sub_1C734C0(a2);
    case 0x32u:
      return (unsigned __int16 *)sub_1C7E6E0();
    case 0x33u:
      return (unsigned __int16 *)sub_1C8B050();
    case 0x34u:
      return (unsigned __int16 *)sub_1C734D0(a2);
    case 0x35u:
      return (unsigned __int16 *)sub_1C86830();
    case 0x36u:
      return (unsigned __int16 *)sub_1C8DA70();
    case 0x37u:
      return (unsigned __int16 *)sub_1C734E0(a2);
    case 0x38u:
      return (unsigned __int16 *)sub_1C734F0(a2);
    case 0x39u:
      return (unsigned __int16 *)sub_1C86840();
    case 0x3Au:
      return (unsigned __int16 *)sub_1C86850();
    case 0x3Bu:
      return (unsigned __int16 *)sub_1C73500(a2);
    case 0x3Cu:
      return (unsigned __int16 *)sub_1C73510(a2);
    case 0x3Du:
      return (unsigned __int16 *)sub_1C86860();
    case 0x3Eu:
      return (unsigned __int16 *)sub_1C86970();
    case 0x3Fu:
      return (unsigned __int16 *)sub_1C73520(a2);
    case 0x40u:
      sub_2EA9FE((__int64)a1, a2, v9, a6);
    case 0x41u:
      return (unsigned __int16 *)sub_1C86A00();
    case 0x42u:
      return (unsigned __int16 *)sub_1C93780();
    case 0x43u:
      return (unsigned __int16 *)sub_1C93EE0();
    case 0x44u:
      v13 = *(_QWORD *)(a2 + 16);
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x2B )
        return (unsigned __int16 *)a2;
      v14 = a1[5];
      v15 = *(unsigned int *)(v14 + 16);
      v16 = *(_QWORD *)v14;
      if ( !(_DWORD)v15 )
        goto LABEL_142;
      v17 = (v15 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v18 = (__int64 *)(v16 + 16LL * v17);
      v19 = *v18;
      if ( v13 == *v18 )
        goto LABEL_61;
      v33 = 1;
      if ( v19 == -4096 )
        goto LABEL_142;
      break;
    case 0x45u:
      return (unsigned __int16 *)sub_1C7DE30();
    case 0x46u:
      return (unsigned __int16 *)sub_1C7DE80();
    case 0x47u:
      return (unsigned __int16 *)sub_1C8DDA0();
    case 0x48u:
      return (unsigned __int16 *)sub_1C91AB0();
    case 0x49u:
      return (unsigned __int16 *)sub_1C8DE00();
    case 0x4Au:
      return (unsigned __int16 *)sub_1C87150();
    case 0x4Bu:
      return (unsigned __int16 *)sub_1C73530(a2);
    case 0x4Cu:
      return (unsigned __int16 *)sub_1C871E0();
    case 0x4Du:
      return (unsigned __int16 *)sub_1C8DE80();
    case 0x4Eu:
      return (unsigned __int16 *)sub_1C8E020();
    case 0x4Fu:
      return (unsigned __int16 *)sub_1C8E030();
    case 0x50u:
      return (unsigned __int16 *)sub_1C8E040();
    case 0x51u:
      return (unsigned __int16 *)sub_1C8E050();
    case 0x52u:
      return (unsigned __int16 *)sub_1C8E060();
    case 0x53u:
      return (unsigned __int16 *)sub_1C92BE0();
    case 0x54u:
      return (unsigned __int16 *)sub_1C8E070();
    case 0x55u:
      return (unsigned __int16 *)sub_1C8E0D0();
    case 0x56u:
      return (unsigned __int16 *)sub_1C87200();
    case 0x57u:
      return (unsigned __int16 *)sub_1C87380();
    case 0x58u:
      return (unsigned __int16 *)sub_1C93F40();
    case 0x59u:
      return (unsigned __int16 *)sub_1C87390();
    case 0x5Au:
      return (unsigned __int16 *)sub_1C873A0();
    case 0x5Bu:
      return (unsigned __int16 *)sub_1C8E130();
    case 0x5Cu:
      return (unsigned __int16 *)sub_1C92CD0();
    case 0x5Du:
      return (unsigned __int16 *)sub_1C8E1F0();
    case 0x5Eu:
      return (unsigned __int16 *)sub_1C874B0();
    case 0x5Fu:
      return (unsigned __int16 *)sub_1C8B110();
    case 0x60u:
      return (unsigned __int16 *)sub_1C87510();
    case 0x61u:
      return (unsigned __int16 *)sub_1C8CE60();
    case 0x62u:
      return (unsigned __int16 *)sub_1C87520();
    case 0x63u:
      return (unsigned __int16 *)sub_1C97170();
    case 0x64u:
      return (unsigned __int16 *)sub_1C8B1C0();
    case 0x65u:
      return (unsigned __int16 *)sub_1C73540(a2);
    case 0x66u:
      return (unsigned __int16 *)sub_1C87750();
    case 0x67u:
      return (unsigned __int16 *)sub_1C927D0();
    case 0x68u:
      return (unsigned __int16 *)sub_1C8B280();
    case 0x69u:
      return (unsigned __int16 *)sub_1C877D0();
    case 0x6Au:
      return (unsigned __int16 *)sub_1C95280();
    case 0x6Bu:
      return (unsigned __int16 *)sub_1C879D0();
    case 0x6Cu:
      return (unsigned __int16 *)sub_1C7B660((__int64)a1, a2);
    case 0x6Du:
      return (unsigned __int16 *)sub_1C87A40();
    case 0x6Eu:
      return (unsigned __int16 *)sub_1C8B370();
    case 0x6Fu:
      return (unsigned __int16 *)sub_1C92E40();
    case 0x70u:
      return (unsigned __int16 *)sub_1C73550(a2);
    case 0x71u:
      return (unsigned __int16 *)sub_1C87AC0();
    case 0x72u:
      return (unsigned __int16 *)sub_1CA1BF0();
    case 0x73u:
      return (unsigned __int16 *)sub_1C87B20();
    case 0x74u:
      return (unsigned __int16 *)sub_1C87CB0();
    case 0x75u:
      return (unsigned __int16 *)sub_1C7E7D0();
    case 0x76u:
      return (unsigned __int16 *)sub_1C8B690();
    case 0x77u:
      return (unsigned __int16 *)sub_1C8E440();
    case 0x78u:
      return (unsigned __int16 *)sub_1C87D70();
    case 0x79u:
      return (unsigned __int16 *)sub_1C87E10();
    case 0x7Au:
      sub_2EA9FE((__int64)a1, a2, v9, a6);
    case 0x7Bu:
      sub_2EA9FE((__int64)a1, a2, v9, a6);
    case 0x7Cu:
      return (unsigned __int16 *)sub_1C7B8D0((__int64)a1, a2);
    case 0x7Du:
      return (unsigned __int16 *)sub_1C87FD0();
    case 0x7Eu:
      return (unsigned __int16 *)sub_1C88060();
    default:
      return (unsigned __int16 *)a2;
  }
  do
  {
    v34 = v33 + 1;
    v17 = (v15 - 1) & (v33 + v17);
    v18 = (__int64 *)(v16 + 16LL * v17);
    v35 = *v18;
    if ( v13 == *v18 )
    {
LABEL_61:
      sub_1C74440(&v36, v18, (_QWORD *)(v16 + 16 * v15), v14, 1);
      v20 = v36.m128_u64[0];
      goto LABEL_62;
    }
    v33 = v34;
  }
  while ( v35 != -4096 );
LABEL_142:
  sub_1C74440(&v36, (_QWORD *)(v16 + 16LL * (unsigned int)v15), (_QWORD *)(v16 + 16LL * (unsigned int)v15), v14, 1);
  v20 = v36.m128_u64[0];
LABEL_62:
  v21 = a1[5];
  v22 = (_QWORD *)(*(_QWORD *)v21 + 16LL * *(unsigned int *)(v21 + 16));
  sub_1C74440(&v36, v22, v22, v21, 1);
  if ( v36.m128_u64[0] == v20 )
    return (unsigned __int16 *)a2;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
  *(_BYTE *)(v24 + 29) |= 4u;
  v25 = *(_QWORD *)(a2 + 8);
  v26 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  v27 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  v28 = *(_QWORD *)(a2 + 24);
  v36.m128_i32[2] = *(_DWORD *)(a2 + 4);
  v29 = *(_QWORD *)a2;
  v37 = v28;
  v36.m128_u64[0] = v27;
  v30 = 0;
  if ( (v29 & 0x100000) != 0 )
    v30 = *(_DWORD *)(a2 + 16LL * ((v29 & 0x80000) != 0) + 8LL * ((v29 & 0x200000) != 0) + 40);
  if ( (v29 & 0x80000) != 0 )
  {
    v31 = *(_QWORD *)(a2 + 32);
    v32 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    v32 = 0;
    v31 = 0;
  }
  return (unsigned __int16 *)sub_C0C310(
                               *(_QWORD **)(a1[4] + 248),
                               v31,
                               v32,
                               v30,
                               v23,
                               0,
                               (__int64)&v36,
                               v25,
                               v26,
                               0,
                               0,
                               0);
}
