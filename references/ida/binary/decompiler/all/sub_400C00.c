__int64 __fastcall sub_400C00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rax
  int v7; // r14d
  int *v8; // rax
  unsigned int v9; // r13d
  __m128i v12; // xmm1
  __m128i *v13; // r13
  _BYTE *v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  __int128 v17; // rdi
  _DWORD *v18; // rax
  int v19; // r9d
  int v20; // eax
  unsigned __int8 *v21; // rcx
  unsigned __int8 *v22; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v23; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __m128i v26; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v27[16]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 v28[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v29[8]; // [rsp+70h] [rbp-98h] BYREF
  __m128i v30; // [rsp+80h] [rbp-88h] BYREF
  __int16 *v31; // [rsp+90h] [rbp-78h]
  char v32; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+C8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
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
  v8 = *(int **)(v6 + 40);
  if ( (v8[1] & 0x10) == 0 )
    return 0;
  v9 = *v8;
  if ( (unsigned int)(*v8 - 31) > 6 )
    return 0;
  v23 = (unsigned __int8 *)(v8 + 12);
  v24 = (unsigned __int8 *)(v8 + 8);
  v22 = (unsigned __int8 *)(a3 + 64);
  if ( sub_123660((unsigned __int8 *)v8 + 32, a3 + 64, 0) )
  {
    v25 = 0;
    goto LABEL_12;
  }
  if ( sub_123660(v23, (__int64)v22, 0) )
  {
    v25 = 0;
    goto LABEL_31;
  }
  sub_121540((__int64)v28, v22);
  if ( !(unsigned __int8)sub_128630((unsigned __int64)v28, *(_QWORD *)(a1 + 16), 16, 256) )
    goto LABEL_29;
  *((_QWORD *)&v17 + 1) = v28;
  *(_QWORD *)&v17 = a2;
  *(_QWORD *)v27 = a3;
  v18 = (_DWORD *)sub_126F20(v17, (__int64)v27, 1);
  v25 = (__int64)v18;
  if ( !v18 || *v18 != 4 )
    goto LABEL_29;
  v20 = v18[17];
  if ( v20 == 8 )
  {
    if ( (unsigned __int8)sub_12AA10(*(_QWORD *)(a2 + 64), (__int64)v22, v25 + 64, 0, 0, v19) )
    {
      sub_121540((__int64)v29, (unsigned __int8 *)(v25 + 32));
      if ( (unsigned __int8)sub_12A7F0(v29, *(_QWORD *)(a1 + 16), 0) )
      {
        if ( sub_123660((unsigned __int8 *)v29, (__int64)v24, 0) )
        {
          sub_11A960((__int64)v29);
          goto LABEL_35;
        }
        if ( sub_123660((unsigned __int8 *)v29, (__int64)v23, 0) )
        {
          sub_11A960((__int64)v29);
          goto LABEL_41;
        }
      }
      sub_11A960((__int64)v29);
    }
LABEL_29:
    sub_11A960((__int64)v28);
    return 0;
  }
  if ( v20 != 16 || !sub_1230D0((unsigned __int8 *)(v25 + 64), *(_QWORD *)(a1 + 16), (__int64)v22, 1u) )
    goto LABEL_29;
  if ( !sub_1230D0((unsigned __int8 *)(v25 + 32), *(_QWORD *)(a1 + 16), (__int64)v24, 1u) )
  {
    if ( sub_1230D0((unsigned __int8 *)(v25 + 32), *(_QWORD *)(a1 + 16), (__int64)v23, 1u) )
    {
LABEL_41:
      sub_11A960((__int64)v28);
LABEL_31:
      if ( (unsigned __int64)(int)(sub_32B5A0(v9) - 31) <= 6 )
      {
        v21 = v23;
        v23 = v24;
        v24 = v21;
        goto LABEL_12;
      }
      return 0;
    }
    goto LABEL_29;
  }
LABEL_35:
  sub_11A960((__int64)v28);
LABEL_12:
  v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v28);
  sub_121540((__int64)v27, v24);
  sub_121540((__int64)v28, v23);
  sub_121540((__int64)v29, v22);
  v12 = _mm_load_si128(&v26);
  v31 = v29;
  v13 = &v30;
  v30 = v12;
  do
  {
    v14 = (_BYTE *)v13->m128i_i64[0];
    if ( *(_BYTE *)v13->m128i_i64[0] == 4 && !sub_11A7E0(*(_QWORD *)(a1 + 16), **((_DWORD **)v14 + 1), 16)
      || (v4 = sub_128630((unsigned __int64)v14, *(_QWORD *)(a1 + 16), 16, 256), !(_BYTE)v4) )
    {
      v4 = 0;
      goto LABEL_20;
    }
    v13 = (__m128i *)((char *)v13 + 8);
  }
  while ( &v32 != (char *)v13 );
  qsnprintf();
  sub_11B060(a3 + 32);
  v15 = j__qalloc_or_throw();
  *(_QWORD *)v15 = -1;
  *(_QWORD *)(v15 + 8) = 2;
  *(_QWORD *)(v15 + 16) = 0x7000000000LL;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_QWORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 80) = 0;
  *(_QWORD *)(v15 + 88) = 0;
  *(_QWORD *)(v15 + 96) = 0;
  *(_QWORD *)(v15 + 104) = 0;
  *(_QWORD *)(v15 + 112) = 0;
  *(_QWORD *)(v15 + 136) = 0;
  *(_QWORD *)(v15 + 144) = 0;
  *(_QWORD *)(v15 + 152) = 0;
  *(_QWORD *)(v15 + 176) = 0;
  *(_QWORD *)(v15 + 184) = 0;
  *(_QWORD *)(v15 + 192) = 0;
  *(_QWORD *)(v15 + 216) = 0;
  *(_QWORD *)(v15 + 240) = 0;
  *(_QWORD *)(v15 + 248) = 0;
  *(_QWORD *)(v15 + 256) = 0;
  *(_QWORD *)(v15 + 280) = 21;
  *(_QWORD *)(v15 + 288) = 0;
  *(_OWORD *)(v15 + 32) = 0;
  *(_OWORD *)(v15 + 56) = 0;
  *(_OWORD *)(v15 + 120) = 0;
  *(_OWORD *)(v15 + 160) = 0;
  *(_OWORD *)(v15 + 200) = 0;
  *(_OWORD *)(v15 + 224) = 0;
  *(_OWORD *)(v15 + 264) = 0;
  *(_OWORD *)(v15 + 296) = 0;
  sub_816C0((__int64 *)(v15 + 24), 2u);
  sub_122C80(*(_QWORD *)(v15 + 24), v27);
  copy_tinfo_t();
  sub_122C80(*(_QWORD *)(v15 + 24) + 80LL, v28);
  copy_tinfo_t();
  copy_tinfo_t();
  *(_DWORD *)(v15 + 284) = (v7 != 4) + 39;
  *(_BYTE *)(a3 + 64) = 8;
  *(_QWORD *)(a3 + 72) = v15;
  *(_DWORD *)(a3 + 68) = 16;
  *(_DWORD *)a3 = 56;
  sub_1291D0(a3, *(_QWORD *)(a1 + 16), 4, -1, 1);
  sub_11A5D0((char *)v22, (char *)v29);
  if ( v25 )
    sub_11B160(v25);
  v16 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v16 + 3800) )
  {
    *(_BYTE *)(v16 + 3800) = 1;
    sub_137640(*(_QWORD *)(a2 + 64));
  }
LABEL_20:
  sub_11A960((__int64)v29);
  sub_11A960((__int64)v28);
  sub_11A960((__int64)v27);
  return v4;
}
