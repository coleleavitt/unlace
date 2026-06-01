__int64 __fastcall sub_8BB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp
  _QWORD *v12; // rbx
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // dl
  int v16; // edi
  int *v17; // rax
  int *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __m128i v24; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v25; // [rsp+10h] [rbp-68h]
  int v26; // [rsp+1Ch] [rbp-5Ch]
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __m128i v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v4 = a2;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 416) = a3;
  *(_QWORD *)(a1 + 448) = a3;
  v26 = *(_DWORD *)(a2 + 40);
  if ( v26 == 1 )
  {
    *(_QWORD *)(a1 + 32) = sub_7CEC0((_QWORD *)a2) - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = sub_7CD20((_QWORD *)a2);
    v5 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 48) <= 3u )
      v6 = sub_7CEC0((_QWORD *)a2) + v5;
    else
      v6 = sub_7CF00((_QWORD *)a2) + v5;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = v6 + sub_7CEC0((_QWORD *)a2);
  }
  v7 = a2;
  v8 = sub_7D4F0((_QWORD *)a2);
  v11 = v8;
  if ( v8 < 0 )
    return 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v12 = (_QWORD *)j__qalloc_or_throw(80, a2, v9, v10);
      v12[4] = 0xFFFFFFFF00000000LL;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      v25 = v12 + 4;
      v24.m128i_i64[0] = (__int64)(v12 + 6);
      sub_330970(v12, -1);
      if ( !(unsigned __int8)sub_883D0((__int64)v12, v4) )
        break;
      a2 = (__int64)v12;
      v7 = a1;
      sub_330D40(a1, v12);
      if ( !--v11 )
        goto LABEL_14;
    }
    if ( v12 )
    {
      sub_11CDA0(v12 + 8);
      sub_11CDA0(v24.m128i_i64[0]);
      sub_11CDA0(v25);
      j__qfree((__int64)v12);
    }
    return 0;
  }
LABEL_14:
  if ( *(_DWORD *)(v4 + 40) == 1 )
    return 1;
  v14 = *(unsigned __int8 **)v4;
  if ( *(_QWORD *)v4 >= *(_QWORD *)(v4 + 8) )
    sub_7A4F0(v7);
  v15 = *v14;
  v16 = v26;
  *(_QWORD *)v4 = v14 + 1;
  *(_DWORD *)(a1 + 76) = v15;
  if ( (unsigned __int8)sub_7A640(v16, 1, 0x50u) )
  {
    if ( !(unsigned __int8)sub_7E660((__int64 *)(a1 + 80), (unsigned __int64 *)v4)
      || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 96), v4) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)sub_7A640(v26, 1, 0x78u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 120), (unsigned __int64 *)v4)
    || (unsigned __int8)sub_7A640(v26, 1, 0xA0u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 160), (unsigned __int64 *)v4)
    || (unsigned __int8)sub_7A640(v26, 1, 0xC8u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 200), (unsigned __int64 *)v4)
    || (unsigned __int8)sub_7A640(v26, 1, 0xF0u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 240), (unsigned __int64 *)v4)
    || (unsigned __int8)sub_7A640(v26, 1, 0x118u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 280), (unsigned __int64 *)v4) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_7A640(v26, 1, 0x140u) )
  {
    *(_QWORD *)(a1 + 320) = sub_7D020(v4, 0);
    *(_QWORD *)(a1 + 328) = sub_7D020(v4, 0);
    *(_QWORD *)(a1 + 336) = sub_7D020(v4, 0);
  }
  if ( *(_DWORD *)(v4 + 48) > 6u )
  {
    *(_QWORD *)(a1 + 512) = (int)sub_7CD20((_QWORD *)v4);
    *(_QWORD *)(a1 + 520) = sub_7D020(v4, 0);
  }
  if ( !(unsigned __int8)sub_7D530((_QWORD *)v4, (__int64 *)(a1 + 368)) )
    return 0;
  v17 = *(int **)(a1 + 368);
  v18 = &v17[*(_QWORD *)(a1 + 376)];
  if ( v18 != v17 )
  {
    while ( *v17 > 0 && *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) > *v17 )
    {
      if ( v18 == ++v17 )
        goto LABEL_44;
    }
    return 0;
  }
LABEL_44:
  if ( (unsigned __int8)sub_7A640(v26, 1, 0x188u) )
  {
    sub_7D150((__int64)&v27, (_QWORD *)v4);
    v19 = *(_QWORD *)(a1 + 392);
    v20 = v27;
    v27 = 0;
    v21 = _mm_loadu_si128(&v28);
    v28 = 0;
    if ( v19 )
    {
      *(_QWORD *)(a1 + 400) = 0;
      v24 = v21;
      qfree(v19);
      v22 = _mm_load_si128(&v24);
      v23 = v27;
      *(_QWORD *)(a1 + 392) = v20;
      *(__m128i *)(a1 + 400) = v22;
      if ( v23 )
      {
        v28.m128i_i64[0] = 0;
        qfree(v23);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 392) = v20;
      *(__m128i *)(a1 + 400) = v21;
    }
  }
  if ( (unsigned __int8)sub_7A640(v26, 1, 0x1A0u) && !(unsigned __int8)sub_8B620(a1 + 416, (char **)v4) )
    return 0;
  return sub_8B620(a1 + 448, (char **)v4);
}
