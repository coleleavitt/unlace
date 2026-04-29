__int64 __fastcall sub_8ADF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  int v7; // eax
  int v8; // ebp
  _QWORD *v9; // rbx
  int v11; // edi
  int *v12; // rax
  int *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __m128i v19; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-68h]
  int v21; // [rsp+1Ch] [rbp-5Ch]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __m128i v23; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 416) = a3;
  *(_QWORD *)(a1 + 448) = a3;
  v21 = *(_DWORD *)(a2 + 40);
  if ( v21 == 1 )
  {
    *(_QWORD *)(a1 + 32) = sub_7C160((_QWORD *)a2) - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = sub_7BFC0((_QWORD *)a2);
    v5 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 48) <= 3u )
      v6 = sub_7C160((_QWORD *)a2) + v5;
    else
      v6 = sub_7C1A0((_QWORD *)a2) + v5;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = v6 + sub_7C160((_QWORD *)a2);
  }
  v7 = sub_7C790((_QWORD *)a2);
  v8 = v7;
  if ( v7 < 0 )
    return 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)j__qalloc_or_throw();
      v9[4] = 0xFFFFFFFF00000000LL;
      v9[5] = 0;
      v9[6] = 0xFFFFFFFF00000000LL;
      v9[7] = 0;
      v9[8] = 0xFFFFFFFF00000000LL;
      v9[9] = 0;
      v20 = v9 + 4;
      v19.m128i_i64[0] = (__int64)(v9 + 6);
      sub_32D4D0(v9, -1);
      if ( !(unsigned __int8)sub_87650((__int64)v9, a2) )
        break;
      sub_32D8A0(a1, v9);
      if ( !--v8 )
        goto LABEL_14;
    }
    if ( v9 )
    {
      sub_11A960(v9 + 8);
      sub_11A960(v19.m128i_i64[0]);
      sub_11A960(v20);
      j__qfree();
    }
    return 0;
  }
LABEL_14:
  if ( *(_DWORD *)(a2 + 40) == 1 )
    return 1;
  v11 = v21;
  *(_DWORD *)(a1 + 76) = (unsigned __int8)sub_7BFA0((unsigned __int8 **)a2);
  if ( (unsigned __int8)sub_79A40(v11, 1, 0x50u) )
  {
    if ( !(unsigned __int8)sub_7D9C0((__int64 *)(a1 + 80), (unsigned __int64 *)a2)
      || !(unsigned __int8)sub_7D420((__int64 *)(a1 + 96), a2) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)sub_79A40(v21, 1, 0x78u)
    && !(unsigned __int8)sub_7DC00((__int64 *)(a1 + 120), (unsigned __int64 *)a2)
    || (unsigned __int8)sub_79A40(v21, 1, 0xA0u)
    && !(unsigned __int8)sub_7DC00((__int64 *)(a1 + 160), (unsigned __int64 *)a2)
    || (unsigned __int8)sub_79A40(v21, 1, 0xC8u)
    && !(unsigned __int8)sub_7DC00((__int64 *)(a1 + 200), (unsigned __int64 *)a2)
    || (unsigned __int8)sub_79A40(v21, 1, 0xF0u)
    && !(unsigned __int8)sub_7DC00((__int64 *)(a1 + 240), (unsigned __int64 *)a2)
    || (unsigned __int8)sub_79A40(v21, 1, 0x118u)
    && !(unsigned __int8)sub_7DC00((__int64 *)(a1 + 280), (unsigned __int64 *)a2) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_79A40(v21, 1, 0x140u) )
  {
    *(_QWORD *)(a1 + 320) = sub_7C2C0(a2, 0);
    *(_QWORD *)(a1 + 328) = sub_7C2C0(a2, 0);
    *(_QWORD *)(a1 + 336) = sub_7C2C0(a2, 0);
  }
  if ( *(_DWORD *)(a2 + 48) > 6u )
  {
    *(_QWORD *)(a1 + 512) = (int)sub_7BFC0((_QWORD *)a2);
    *(_QWORD *)(a1 + 520) = sub_7C2C0(a2, 0);
  }
  if ( !(unsigned __int8)sub_7C8D0((_QWORD *)a2, (__int64 *)(a1 + 368)) )
    return 0;
  v12 = *(int **)(a1 + 368);
  v13 = &v12[*(_QWORD *)(a1 + 376)];
  if ( v13 != v12 )
  {
    while ( *v12 > 0 && *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) > *v12 )
    {
      if ( v13 == ++v12 )
        goto LABEL_43;
    }
    return 0;
  }
LABEL_43:
  if ( (unsigned __int8)sub_79A40(v21, 1, 0x188u) )
  {
    sub_7C3F0((__int64)&v22, (_QWORD *)a2);
    v14 = *(_QWORD *)(a1 + 392);
    v15 = v22;
    v22 = 0;
    v16 = _mm_loadu_si128(&v23);
    v23 = 0;
    if ( v14 )
    {
      *(_QWORD *)(a1 + 400) = 0;
      v19 = v16;
      qfree();
      v17 = _mm_load_si128(&v19);
      v18 = v22;
      *(_QWORD *)(a1 + 392) = v15;
      *(__m128i *)(a1 + 400) = v17;
      if ( v18 )
      {
        v23.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(a1 + 392) = v15;
      *(__m128i *)(a1 + 400) = v16;
    }
  }
  if ( (unsigned __int8)sub_79A40(v21, 1, 0x1A0u) && !(unsigned __int8)sub_8A8A0(a1 + 416, (char **)a2) )
    return 0;
  return sub_8A8A0(a1 + 448, (char **)a2);
}
