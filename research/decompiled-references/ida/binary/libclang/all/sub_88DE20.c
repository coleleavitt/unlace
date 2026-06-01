__int64 __fastcall sub_88DE20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int8 **v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  const __m128i *v19; // r14
  __int64 v20; // rax
  __int16 v21; // dx
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // [rsp+Fh] [rbp-149h]
  unsigned int v27; // [rsp+10h] [rbp-148h] BYREF
  char v28; // [rsp+14h] [rbp-144h]
  unsigned int v29; // [rsp+50h] [rbp-108h] BYREF
  char v30; // [rsp+54h] [rbp-104h]
  __int64 v31[7]; // [rsp+58h] [rbp-100h] BYREF
  __m128i v32; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-B8h]
  __int32 v34; // [rsp+A8h] [rbp-B0h]
  __int64 v35; // [rsp+B0h] [rbp-A8h]
  __int64 v36; // [rsp+B8h] [rbp-A0h]
  void *ptr[2]; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v38[64]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v39; // [rsp+110h] [rbp-48h]

  v4 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  if ( *(char *)(v4 + 28) < 0 )
    return 0;
  v5 = v4;
  if ( *(_BYTE *)(v4 + 73) >> 5 != 2 )
  {
    if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 57 > 2 )
      return sub_88D400(*a1, a2, v5, (const __m128i *)a1[1], a1[2]);
    v6 = *(_QWORD *)(v4 + 104);
    v7 = *(_QWORD *)(v6 + 96);
    v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v7 & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_14;
    }
    else
    {
      if ( v8 <= 3 || (v7 & 2) == 0 )
        goto LABEL_14;
      v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = v9[2275];
      if ( !v10 )
      {
        *(_QWORD *)(v6 + 96) = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_14;
      }
      v11 = v9[274];
      v9[284] += 24LL;
      v8 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v9[275] >= v8 + 24 && v11 )
        v9[274] = v8 + 24;
      else
        v8 = sub_820510((__int64)(v9 + 274), 24, 3);
      *(_QWORD *)v8 = v10;
      *(_DWORD *)(v8 + 8) = 0;
      v7 = v8 | 5;
      *(_QWORD *)(v8 + 16) = v6;
      *(_QWORD *)(v6 + 96) = v8 | 5;
      LOBYTE(v8) = v8 & 0xFA | 4;
    }
    if ( (v8 & 4) != 0 )
    {
      v14 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v14 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
        if ( v14[2] != v16 )
        {
          v14[2] = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 144LL))(v15, v6);
        }
      }
    }
LABEL_14:
    if ( *(_DWORD *)(*(_QWORD *)(v5 + 128) + 20LL) )
    {
      v13 = (unsigned __int8 **)sub_A2E130(*a1, a2, 2302, 0);
      if ( v13 )
        sub_8356A0(v13, v5, 0xAu);
      return 0;
    }
    return sub_88D400(*a1, a2, v5, (const __m128i *)a1[1], a1[2]);
  }
  v17 = sub_7868A0(v4);
  if ( !v17 )
    goto LABEL_43;
LABEL_25:
  if ( (*(_BYTE *)(v17 + 68) & 1) != 0 )
  {
    v18 = *(_QWORD *)(v17 + 40);
    if ( v18 <= 7 && !(_DWORD)v18 )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)(v17 + 8);
        v17 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v25 <= 7 )
          break;
        if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_25;
      }
LABEL_43:
      v30 &= ~1u;
      v32.m128i_i8[4] &= ~1u;
      v29 = 0;
      sub_69F6D0(&v32.m128i_i64[1]);
      v32.m128i_i32[0] = 11;
      sub_6A6470((__int64)&v32, 0, (__int64)&v29);
      sub_6A01B0(a1[2], (__int64)&v32);
      if ( v32.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v32);
      if ( v29 > 1 )
        sub_69F740((__int64)&v29);
      return 1;
    }
  }
  v19 = (const __m128i *)a1[1];
  v33 = v19[1].m128i_i64[0];
  v32 = _mm_loadu_si128(v19);
  v34 = v19[1].m128i_i32[2];
  v35 = v19[2].m128i_i64[0];
  v20 = v19[2].m128i_i64[1];
  ptr[0] = v38;
  v36 = v20;
  ptr[1] = (void *)0x800000000LL;
  if ( v19[3].m128i_i32[2] )
    sub_820650((__int64)ptr, (__int64)v19[3].m128i_i64);
  v21 = v19[8].m128i_i16[0];
  v22 = *a1;
  LOBYTE(v21) = v21 & 3;
  v39 = v21 | v39 & 0xFC;
  result = sub_825C70(v22, a2, (__int64)&v32, v17);
  if ( (_BYTE)result )
  {
    v28 &= ~1u;
    v30 &= ~1u;
    v27 = 0;
    sub_69F6D0(v31);
    v29 = 11;
    sub_6A6470((__int64)&v29, v17, (__int64)&v27);
    sub_6A01B0(a1[2], (__int64)&v29);
    if ( v29 > 1 )
      sub_69F740((__int64)&v29);
    if ( v27 > 1 )
      sub_69F740((__int64)&v27);
    v23 = *(_QWORD *)(v17 + 48);
    LOWORD(v29) = v29 & 0xFE00 | 0x37;
    if ( byte_4AD234C )
      sub_AC4570(55);
    *(_WORD *)((char *)&v29 + 1) &= 0xF801u;
    v31[0] = v23;
    v24 = sub_76B710((__int64)&v29);
    BYTE1(v29) = (v24 << 6) | BYTE1(v29) & 0x3F;
    BYTE2(v29) = BYTE2(v29) & 0xF8 | (v24 >> 2) & 7;
    result = sub_88A010(*(_QWORD *)(a1[2] + 16), *a1, &v32, (unsigned __int64)&v29, 0);
  }
  if ( ptr[0] != v38 )
  {
    v26 = result;
    free(ptr[0]);
    return v26;
  }
  return result;
}

