__int64 __fastcall sub_40B780(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  int v9; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  __m128i *v19; // r13
  _BYTE *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // rdi
  _DWORD *v30; // rax
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int8 *v35; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v36; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  __m128i v39; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v40[16]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 v41[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v42[8]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v43; // [rsp+80h] [rbp-88h] BYREF
  __int16 *v44; // [rsp+90h] [rbp-78h]
  char v45; // [rsp+98h] [rbp-70h] BYREF
  char v46[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
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
  if ( (unsigned int)(*(_DWORD *)v8 - 31) > 6 )
    return 0;
  v36 = (unsigned __int8 *)(v8 + 48);
  v37 = (unsigned __int8 *)(v8 + 32);
  v35 = (unsigned __int8 *)(a3 + 64);
  if ( sub_125B60((unsigned __int8 *)(v8 + 32), a3 + 64, 0) )
  {
    v38 = 0;
    goto LABEL_12;
  }
  if ( sub_125B60(v36, (__int64)v35, 0) )
  {
    v38 = 0;
    goto LABEL_33;
  }
  sub_123A40((__int64)v41, v35, v27, v28);
  if ( !(unsigned __int8)sub_12AB50(v41, *(_QWORD *)(a1 + 16), 16, 256) )
    goto LABEL_31;
  *((_QWORD *)&v29 + 1) = v41;
  *(_QWORD *)&v29 = a2;
  *(_QWORD *)v40 = a3;
  v30 = (_DWORD *)sub_129440(v29, (__int64)v40, 1);
  v38 = (__int64)v30;
  if ( !v30 || *v30 != 4 )
    goto LABEL_31;
  v32 = v30[17];
  if ( v32 == 8 )
  {
    if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a2 + 64), (__int64)v35, (unsigned __int8 *)(v38 + 64), 0, 0, v31) )
    {
      sub_123A40((__int64)v42, (unsigned __int8 *)(v38 + 32), v33, v34);
      if ( (unsigned __int8)sub_12CD10(v42, *(unsigned __int64 **)(a1 + 16), 0) )
      {
        if ( sub_125B60((unsigned __int8 *)v42, (__int64)v37, 0) )
        {
          sub_11CDA0((__int64)v42);
          goto LABEL_37;
        }
        if ( sub_125B60((unsigned __int8 *)v42, (__int64)v36, 0) )
        {
          sub_11CDA0((__int64)v42);
          goto LABEL_43;
        }
      }
      sub_11CDA0((__int64)v42);
    }
LABEL_31:
    sub_11CDA0((__int64)v41);
    return 0;
  }
  if ( v32 != 16 || !sub_1255D0((unsigned __int8 *)(v38 + 64), *(_QWORD *)(a1 + 16), (__int64)v35, 1) )
    goto LABEL_31;
  if ( !sub_1255D0((unsigned __int8 *)(v38 + 32), *(_QWORD *)(a1 + 16), (__int64)v37, 1) )
  {
    if ( sub_1255D0((unsigned __int8 *)(v38 + 32), *(_QWORD *)(a1 + 16), (__int64)v36, 1) )
    {
LABEL_43:
      sub_11CDA0((__int64)v41);
LABEL_33:
      if ( (unsigned __int64)(int)(sub_32EA00(v9) - 31) <= 6 )
      {
        v13 = (__int64)v36;
        v36 = v37;
        v37 = (unsigned __int8 *)v13;
        goto LABEL_12;
      }
      return 0;
    }
    goto LABEL_31;
  }
LABEL_37:
  sub_11CDA0((__int64)v41);
LABEL_12:
  v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v41);
  sub_123A40((__int64)v40, v37, v12, v13);
  sub_123A40((__int64)v41, v36, v14, v15);
  sub_123A40((__int64)v42, v35, v16, v17);
  v18 = _mm_load_si128(&v39);
  v44 = v42;
  v19 = &v43;
  v43 = v18;
  do
  {
    v20 = (_BYTE *)v19->m128i_i64[0];
    if ( *(_BYTE *)v19->m128i_i64[0] == 4 && !sub_11CC20(*(_QWORD *)(a1 + 16), **((_DWORD **)v20 + 1), 16)
      || (v4 = sub_12AB50(v20, *(_QWORD *)(a1 + 16), 16, 256), !(_BYTE)v4) )
    {
      v4 = 0;
      goto LABEL_22;
    }
    v19 = (__m128i *)((char *)v19 + 8);
  }
  while ( &v45 != (char *)v19 );
  qsnprintf();
  sub_11D4A0(a3 + 32);
  v22 = *(_QWORD *)(a1 + 8);
  v23 = v22 + 312;
  v24 = v22 + 320;
  if ( v7 != 4 )
    v23 = v24;
  v25 = j__qalloc_or_throw(312, (__int64)v46, v23, v21);
  *(_QWORD *)v25 = -1;
  *(_QWORD *)(v25 + 8) = 2;
  *(_QWORD *)(v25 + 16) = 0x7000000000LL;
  *(_QWORD *)(v25 + 24) = 0;
  *(_QWORD *)(v25 + 48) = 0;
  *(_QWORD *)(v25 + 72) = 0;
  *(_QWORD *)(v25 + 80) = 0;
  *(_QWORD *)(v25 + 88) = 0;
  *(_QWORD *)(v25 + 96) = 0;
  *(_QWORD *)(v25 + 104) = 0;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)(v25 + 136) = 0;
  *(_QWORD *)(v25 + 144) = 0;
  *(_QWORD *)(v25 + 152) = 0;
  *(_QWORD *)(v25 + 176) = 0;
  *(_QWORD *)(v25 + 184) = 0;
  *(_QWORD *)(v25 + 192) = 0;
  *(_QWORD *)(v25 + 216) = 0;
  *(_QWORD *)(v25 + 240) = 0;
  *(_QWORD *)(v25 + 248) = 0;
  *(_QWORD *)(v25 + 256) = 0;
  *(_QWORD *)(v25 + 280) = 21;
  *(_QWORD *)(v25 + 288) = 0;
  *(_OWORD *)(v25 + 32) = 0;
  *(_OWORD *)(v25 + 56) = 0;
  *(_OWORD *)(v25 + 120) = 0;
  *(_OWORD *)(v25 + 160) = 0;
  *(_OWORD *)(v25 + 200) = 0;
  *(_OWORD *)(v25 + 224) = 0;
  *(_OWORD *)(v25 + 264) = 0;
  *(_OWORD *)(v25 + 296) = 0;
  sub_82440((__int64 *)(v25 + 24), 2u);
  sub_125180(*(_QWORD *)(v25 + 24), v40);
  copy_tinfo_t();
  sub_125180(*(_QWORD *)(v25 + 24) + 80LL, v41);
  copy_tinfo_t();
  copy_tinfo_t();
  *(_DWORD *)(v25 + 284) = (v7 != 4) + 39;
  *(_BYTE *)(a3 + 64) = 8;
  *(_QWORD *)(a3 + 72) = v25;
  *(_DWORD *)(a3 + 68) = 16;
  *(_DWORD *)a3 = 56;
  sub_12B6F0(a3, *(_QWORD *)(a1 + 16), 4, -1, 1);
  sub_11CA10((char *)v35, (char *)v42);
  if ( v38 )
    sub_11D5A0(v38);
  v26 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v26 + 3800) )
  {
    *(_BYTE *)(v26 + 3800) = 1;
    sub_139B20(*(_QWORD *)(a2 + 64));
  }
LABEL_22:
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  return v4;
}
