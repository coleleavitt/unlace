__int64 __fastcall sub_185220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int8 *v9; // r14
  char *v10; // rdi
  __int128 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int8 *v14; // r15
  unsigned int v15; // r14d
  int v17; // eax
  signed int v18; // r12d
  unsigned int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-C0h]
  _BYTE *v22; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int8 *v23; // [rsp+50h] [rbp-90h] BYREF
  __int64 v24; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-80h] BYREF
  __int64 v26; // [rsp+68h] [rbp-78h]
  _QWORD v27[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-60h] BYREF
  unsigned __int8 v29[24]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  v7 = sub_117D20(a4, &v22, 14);
  if ( !v7 )
    return 0;
  v8 = v7;
  v9 = (unsigned __int8 *)sub_17EC80(v22);
  if ( !v9 )
    return 0;
  v10 = (char *)sub_117CE0(v8, &v23);
  if ( !v10 )
    return 0;
  if ( !(unsigned __int8)sub_11B1C0(v10, v29, 0) )
    return 0;
  if ( *(_QWORD *)v29 != 4 )
    return 0;
  *((_QWORD *)&v11 + 1) = v23;
  *(_QWORD *)&v11 = a2;
  v24 = a3;
  v20 = sub_124880(v11, (__int64)&v24, 0);
  if ( !v20 )
    return 0;
  v26 = 0;
  v25 = 0xFFFFFFFF00000000LL;
  v27[0] = 0xFFFFFFFF00000000LL;
  v28[0] = 0xFFFFFFFF00000000LL;
  v27[1] = 0;
  v28[1] = 0;
  if ( *(_DWORD *)v20 == 23 )
  {
    if ( !(unsigned __int8)sub_11B1C0((char *)(v20 + 48), v29, 0)
      || *(_QWORD *)v29 != 2
      || *(_DWORD *)(v20 + 36) < *((_DWORD *)v23 + 1) )
    {
      goto LABEL_12;
    }
    v14 = (unsigned __int8 *)(v20 + 32);
  }
  else
  {
    HIDWORD(v25) = *((_DWORD *)v23 + 1);
    v12 = j__qalloc_or_throw(80);
    v13 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 56) = 0;
    *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 72) = 0;
    sub_32ADE0(v12, v13);
    *(_DWORD *)v12 = 14;
    sub_11BE50(v12 + 32, a1, 4, SHIDWORD(v25), *(_QWORD *)(v20 + 24), 0);
    sub_1205C0(v12 + 48, v23);
    LOBYTE(v25) = 4;
    v26 = v12;
    v14 = (unsigned __int8 *)&v25;
  }
  sub_1205C0((__int64)v27, v14);
  sub_126760((unsigned __int64)v27, a1, *(_QWORD *)(a4 + 24), 1);
  sub_1205C0((__int64)v28, v9);
  sub_126760((unsigned __int64)v28, a1, *(_QWORD *)(a4 + 24), 1);
  v15 = sub_129EC0(a1, (const __m128i *)a2, a3, (__int64)v28, v24, (__int64)v27, 1);
  if ( (_BYTE)v15 )
  {
    if ( v24 == a3 )
    {
      sub_1205C0((__int64)v28, v14);
LABEL_22:
      sub_117E50((char *)(a4 + 32), (char *)v28);
      sub_1181E0(a4 + 48);
      v17 = 4;
      if ( *(_DWORD *)(a4 + 68) != *(_DWORD *)(a4 + 36) )
        v17 = 10;
      *(_DWORD *)a4 = v17;
      goto LABEL_13;
    }
    if ( *(_DWORD *)v20 == 23 )
    {
      v18 = *(_DWORD *)(v20 + 36);
      v19 = sub_133580(*(_QWORD **)(a2 + 64), v18, 1);
      if ( v19 != -1 )
      {
        *(_DWORD *)v29 = 1;
        *(_QWORD *)&v29[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v19)).m128i_u64[0];
        sub_1205C0((__int64)v28, v29);
        sub_1181E0((__int64)v29);
        sub_9E680(a2, *(_QWORD *)(v24 + 16), 4, v20 + 32, 0, (__int64)v28);
        goto LABEL_22;
      }
    }
  }
LABEL_12:
  v15 = 0;
LABEL_13:
  sub_1181E0((__int64)v28);
  sub_1181E0((__int64)v27);
  sub_1181E0((__int64)&v25);
  return v15;
}
