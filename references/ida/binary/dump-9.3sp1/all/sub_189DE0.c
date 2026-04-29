__int64 __fastcall sub_189DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int8 *v9; // r14
  char *v10; // rdi
  __int128 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int8 *v16; // r15
  unsigned int v17; // r14d
  int v19; // eax
  signed int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-C0h]
  _BYTE *v24; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int8 *v25; // [rsp+50h] [rbp-90h] BYREF
  __int64 v26; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-80h] BYREF
  __int64 v28; // [rsp+68h] [rbp-78h]
  _QWORD v29[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-60h] BYREF
  unsigned __int8 v31[24]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+A8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v7 = sub_11C8E0(a4, &v24, 14);
  if ( !v7 )
    return 0;
  v8 = v7;
  v9 = (unsigned __int8 *)sub_183840(v24);
  if ( !v9 )
    return 0;
  v10 = (char *)sub_11C8A0(v8, &v25);
  if ( !v10 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v10, v31, 0) )
    return 0;
  if ( *(_QWORD *)v31 != 4 )
    return 0;
  *((_QWORD *)&v11 + 1) = v25;
  *(_QWORD *)&v11 = a2;
  v26 = a3;
  v22 = sub_129440(v11, (__int64)&v26, 0);
  if ( !v22 )
    return 0;
  v28 = 0;
  v27 = 0xFFFFFFFF00000000LL;
  v29[0] = 0xFFFFFFFF00000000LL;
  v30[0] = 0xFFFFFFFF00000000LL;
  v29[1] = 0;
  v30[1] = 0;
  if ( *(_DWORD *)v22 == 23 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(v22 + 48), v31, 0)
      || *(_QWORD *)v31 != 2
      || *(_DWORD *)(v22 + 36) < *((_DWORD *)v25 + 1) )
    {
      goto LABEL_12;
    }
    v16 = (unsigned __int8 *)(v22 + 32);
  }
  else
  {
    HIDWORD(v27) = *((_DWORD *)v25 + 1);
    v14 = j__qalloc_or_throw(80, *((__int64 *)&v11 + 1), v12, v13);
    v15 = *(_QWORD *)(v22 + 24);
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    sub_330970(v14, v15);
    *(_DWORD *)v14 = 14;
    sub_120A10(v14 + 32, a1, 4, SHIDWORD(v27), *(_QWORD *)(v22 + 24), 0);
    sub_125180(v14 + 48, v25);
    LOBYTE(v27) = 4;
    v28 = v14;
    v16 = (unsigned __int8 *)&v27;
  }
  sub_125180((__int64)v29, v16);
  sub_12B320((__int64)v29, a1, *(_QWORD *)(a4 + 24), 1);
  sub_125180((__int64)v30, v9);
  sub_12B320((__int64)v30, a1, *(_QWORD *)(a4 + 24), 1);
  v17 = sub_12EA80(a1, (const __m128i *)a2, a3, (__int64)v30, v26, (__int64)v29, 1);
  if ( (_BYTE)v17 )
  {
    if ( v26 == a3 )
    {
      sub_125180((__int64)v30, v16);
LABEL_22:
      sub_11CA10((char *)(a4 + 32), (char *)v30);
      sub_11CDA0(a4 + 48);
      v19 = 4;
      if ( *(_DWORD *)(a4 + 68) != *(_DWORD *)(a4 + 36) )
        v19 = 10;
      *(_DWORD *)a4 = v19;
      goto LABEL_13;
    }
    if ( *(_DWORD *)v22 == 23 )
    {
      v20 = *(_DWORD *)(v22 + 36);
      v21 = sub_138140(*(_QWORD **)(a2 + 64), v20, 1);
      if ( v21 != -1 )
      {
        *(_DWORD *)v31 = 1;
        *(_QWORD *)&v31[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v21)).m128i_u64[0];
        sub_125180((__int64)v30, v31);
        sub_11CDA0((__int64)v31);
        sub_A3240(a2, *(_QWORD *)(v26 + 16), 4, v22 + 32, 0, (__int64)v30);
        goto LABEL_22;
      }
    }
  }
LABEL_12:
  v17 = 0;
LABEL_13:
  sub_11CDA0((__int64)v30);
  sub_11CDA0((__int64)v29);
  sub_11CDA0((__int64)&v27);
  return v17;
}
