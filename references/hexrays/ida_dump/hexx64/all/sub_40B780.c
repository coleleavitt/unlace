__int64 __fastcall sub_40B780(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  int v9; // r13d
  unsigned int v10; // r15d
  __m128i v13; // xmm1
  __m128i *v14; // r13
  _BYTE *v15; // r15
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int128 v22; // rdi
  _DWORD *v23; // rax
  int v24; // r9d
  int v25; // eax
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v27; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v28; // [rsp+18h] [rbp-F0h]
  __int64 v29; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+30h] [rbp-D8h]
  signed int v32; // [rsp+3Ch] [rbp-CCh]
  __m128i v33; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v34[16]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 v35[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v36[8]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v37; // [rsp+80h] [rbp-88h] BYREF
  __int16 *v38; // [rsp+90h] [rbp-78h]
  char v39; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v40[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 5 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  v6 = *(_QWORD *)(a3 + 40);
  if ( *(_DWORD *)v6 != 9 )
    return 0;
  v7 = *(_DWORD *)(a3 + 36);
  if ( ((v7 - 4) & 0xFFFFFFFB) != 0 )
    return 0;
  if ( *(_BYTE *)(v6 + 32) != 4 )
    return 0;
  v8 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v8 + 4) & 0x10) == 0 )
    return 0;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)v8 - 31;
  if ( v10 > 6 )
    return 0;
  v28 = (unsigned __int8 *)(v8 + 48);
  v30 = (unsigned __int8 *)(v8 + 32);
  v27 = (unsigned __int8 *)(a3 + 64);
  if ( sub_125B60((unsigned __int8 *)(v8 + 32), a3 + 64, 0) )
  {
    v32 = v10;
    v31 = 0;
    goto LABEL_12;
  }
  if ( sub_125B60(v28, (__int64)v27, 0) )
  {
    v31 = 0;
    goto LABEL_35;
  }
  sub_123A40((__int64)v35, v27);
  if ( !(unsigned __int8)sub_12AB50((unsigned __int64)v35, *(_QWORD *)(a1 + 16), 16, 256) )
    goto LABEL_33;
  *((_QWORD *)&v22 + 1) = v35;
  *(_QWORD *)&v22 = a2;
  *(_QWORD *)v34 = a3;
  v23 = (_DWORD *)sub_129440(v22, (__int64)v34, 1);
  v31 = (__int64)v23;
  if ( !v23 || *v23 != 4 )
    goto LABEL_33;
  v25 = v23[17];
  if ( v25 == 8 )
  {
    if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a2 + 64), (__int64)v27, v31 + 64, 0, 0, v24) )
    {
      sub_123A40((__int64)v36, (unsigned __int8 *)(v31 + 32));
      if ( (unsigned __int8)sub_12CD10(v36, *(_QWORD *)(a1 + 16), 0) )
      {
        if ( sub_125B60((unsigned __int8 *)v36, (__int64)v30, 0) )
        {
          sub_11CDA0((__int64)v36);
          goto LABEL_39;
        }
        if ( sub_125B60((unsigned __int8 *)v36, (__int64)v28, 0) )
        {
          sub_11CDA0((__int64)v36);
          goto LABEL_45;
        }
      }
      sub_11CDA0((__int64)v36);
    }
LABEL_33:
    sub_11CDA0((__int64)v35);
    return 0;
  }
  if ( v25 != 16 || !sub_1255D0((unsigned __int8 *)(v31 + 64), *(_QWORD *)(a1 + 16), (__int64)v27, 1u) )
    goto LABEL_33;
  if ( !sub_1255D0((unsigned __int8 *)(v31 + 32), *(_QWORD *)(a1 + 16), (__int64)v30, 1u) )
  {
    if ( sub_1255D0((unsigned __int8 *)(v31 + 32), *(_QWORD *)(a1 + 16), (__int64)v28, 1u) )
    {
LABEL_45:
      sub_11CDA0((__int64)v35);
LABEL_35:
      v32 = sub_32EA00(v9) - 31;
      if ( (unsigned __int64)v32 <= 6 )
      {
        v26 = v28;
        v28 = v30;
        v30 = v26;
        goto LABEL_12;
      }
      return 0;
    }
    goto LABEL_33;
  }
LABEL_39:
  sub_11CDA0((__int64)v35);
  v32 = v10;
LABEL_12:
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v35);
  sub_123A40((__int64)v34, v30);
  sub_123A40((__int64)v35, v28);
  sub_123A40((__int64)v36, v27);
  v13 = _mm_load_si128(&v33);
  v38 = v36;
  v14 = &v37;
  v37 = v13;
  do
  {
    v15 = (_BYTE *)v14->m128i_i64[0];
    if ( *(_BYTE *)v14->m128i_i64[0] == 4 && !sub_11CC20(*(_QWORD *)(a1 + 16), **((_DWORD **)v15 + 1), 16)
      || (v4 = sub_12AB50((unsigned __int64)v15, *(_QWORD *)(a1 + 16), 16, 256), !(_BYTE)v4) )
    {
      v4 = 0;
      goto LABEL_24;
    }
    v14 = (__m128i *)((char *)v14 + 8);
  }
  while ( &v39 != (char *)v14 );
  v16 = 100;
  if ( v7 == 4 )
    v16 = 115;
  qsnprintf(v40, 32, "_mm_cmp%s_s%c", off_4EA0A0[v32], v16);
  sub_11D4A0(a3 + 32, (__int64)v40);
  v17 = *(_QWORD *)(a1 + 8);
  v18 = v17 + 312;
  v19 = v17 + 320;
  if ( v7 != 4 )
    v18 = v19;
  v29 = v18;
  v20 = j__qalloc_or_throw(312);
  *(_QWORD *)v20 = -1;
  *(_QWORD *)(v20 + 8) = 2;
  *(_QWORD *)(v20 + 16) = 0x7000000000LL;
  *(_QWORD *)(v20 + 24) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_QWORD *)(v20 + 72) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_QWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 96) = 0;
  *(_QWORD *)(v20 + 104) = 0;
  *(_QWORD *)(v20 + 112) = 0;
  *(_QWORD *)(v20 + 136) = 0;
  *(_QWORD *)(v20 + 144) = 0;
  *(_QWORD *)(v20 + 152) = 0;
  *(_QWORD *)(v20 + 176) = 0;
  *(_QWORD *)(v20 + 184) = 0;
  *(_QWORD *)(v20 + 192) = 0;
  *(_QWORD *)(v20 + 216) = 0;
  *(_QWORD *)(v20 + 240) = 0;
  *(_QWORD *)(v20 + 248) = 0;
  *(_QWORD *)(v20 + 256) = 0;
  *(_QWORD *)(v20 + 280) = 21;
  *(_QWORD *)(v20 + 288) = 0;
  *(_OWORD *)(v20 + 32) = 0;
  *(_OWORD *)(v20 + 56) = 0;
  *(_OWORD *)(v20 + 120) = 0;
  *(_OWORD *)(v20 + 160) = 0;
  *(_OWORD *)(v20 + 200) = 0;
  *(_OWORD *)(v20 + 224) = 0;
  *(_OWORD *)(v20 + 264) = 0;
  *(_OWORD *)(v20 + 296) = 0;
  sub_82440((_QWORD *)(v20 + 24), 2u);
  sub_125180(*(_QWORD *)(v20 + 24), v34);
  copy_tinfo_t(*(_QWORD *)(v20 + 24) + 24LL, v29);
  sub_125180(*(_QWORD *)(v20 + 24) + 80LL, v35);
  copy_tinfo_t(*(_QWORD *)(v20 + 24) + 104LL, v29);
  copy_tinfo_t(v20 + 72, v29);
  *(_DWORD *)(v20 + 284) = (v7 != 4) + 39;
  *(_BYTE *)(a3 + 64) = 8;
  *(_QWORD *)(a3 + 72) = v20;
  *(_DWORD *)(a3 + 68) = 16;
  *(_DWORD *)a3 = 56;
  sub_12B6F0(a3, *(_QWORD *)(a1 + 16), 4, -1, 1);
  sub_11CA10((char *)v27, (char *)v36);
  if ( v31 )
    sub_11D5A0(v31);
  v21 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v21 + 3800) )
  {
    *(_BYTE *)(v21 + 3800) = 1;
    sub_139B20(*(_QWORD *)(a2 + 64));
  }
LABEL_24:
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)v35);
  sub_11CDA0((__int64)v34);
  return v4;
}
