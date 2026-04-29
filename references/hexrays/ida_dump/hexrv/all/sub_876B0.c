__int64 __fastcall sub_876B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ebp
  _QWORD *v10; // rbx
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // dl
  int v14; // edi
  int *v15; // rax
  int *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-68h]
  int v24; // [rsp+1Ch] [rbp-5Ch]
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 416) = a3;
  *(_QWORD *)(a1 + 448) = a3;
  v24 = *(_DWORD *)(a2 + 40);
  if ( v24 == 1 )
  {
    *(_QWORD *)(a1 + 32) = sub_78B40((_QWORD *)a2) - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = sub_789A0((_QWORD *)a2);
    v5 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 48) <= 3u )
      v6 = sub_78B40((_QWORD *)a2) + v5;
    else
      v6 = sub_78B80((_QWORD *)a2) + v5;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = v6 + sub_78B40((_QWORD *)a2);
  }
  v7 = a2;
  v8 = sub_79170((_QWORD *)a2);
  v9 = v8;
  if ( v8 < 0 )
    return 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (_QWORD *)j__qalloc_or_throw(80);
      v10[4] = 0xFFFFFFFF00000000LL;
      v10[5] = 0;
      v10[6] = 0xFFFFFFFF00000000LL;
      v10[7] = 0;
      v10[8] = 0xFFFFFFFF00000000LL;
      v10[9] = 0;
      v23 = v10 + 4;
      v22.m128i_i64[0] = (__int64)(v10 + 6);
      sub_32B5A0(v10, -1);
      if ( !(unsigned __int8)sub_83F10((__int64)v10, a2) )
        break;
      v7 = a1;
      sub_32B970(a1, v10);
      if ( !--v9 )
        goto LABEL_14;
    }
    if ( v10 )
    {
      sub_1188E0(v10 + 8);
      sub_1188E0(v22.m128i_i64[0]);
      sub_1188E0(v23);
      j__qfree(v10);
    }
    return 0;
  }
LABEL_14:
  if ( *(_DWORD *)(a2 + 40) == 1 )
    return 1;
  v12 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_76170(v7);
  v13 = *v12;
  v14 = v24;
  *(_QWORD *)a2 = v12 + 1;
  *(_DWORD *)(a1 + 76) = v13;
  if ( (unsigned __int8)sub_762C0(v14, 1, 0x50u) )
  {
    if ( !(unsigned __int8)sub_7A2E0((__int64 *)(a1 + 80), (unsigned __int64 *)a2)
      || !(unsigned __int8)sub_79D00((__int64 *)(a1 + 96), (__int64 *)a2) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)sub_762C0(v24, 1, 0x78u) && !(unsigned __int8)sub_7A520((__int64 *)(a1 + 120), (__int64 *)a2)
    || (unsigned __int8)sub_762C0(v24, 1, 0xA0u) && !(unsigned __int8)sub_7A520((__int64 *)(a1 + 160), (__int64 *)a2)
    || (unsigned __int8)sub_762C0(v24, 1, 0xC8u) && !(unsigned __int8)sub_7A520((__int64 *)(a1 + 200), (__int64 *)a2)
    || (unsigned __int8)sub_762C0(v24, 1, 0xF0u) && !(unsigned __int8)sub_7A520((__int64 *)(a1 + 240), (__int64 *)a2)
    || (unsigned __int8)sub_762C0(v24, 1, 0x118u) && !(unsigned __int8)sub_7A520((__int64 *)(a1 + 280), (__int64 *)a2) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_762C0(v24, 1, 0x140u) )
  {
    *(_QWORD *)(a1 + 320) = sub_78CA0(a2, 0);
    *(_QWORD *)(a1 + 328) = sub_78CA0(a2, 0);
    *(_QWORD *)(a1 + 336) = sub_78CA0(a2, 0);
  }
  if ( *(_DWORD *)(a2 + 48) > 6u )
  {
    *(_QWORD *)(a1 + 512) = (int)sub_789A0((_QWORD *)a2);
    *(_QWORD *)(a1 + 520) = sub_78CA0(a2, 0);
  }
  if ( !(unsigned __int8)sub_791B0((_QWORD *)a2, (__int64 *)(a1 + 368)) )
    return 0;
  v15 = *(int **)(a1 + 368);
  v16 = &v15[*(_QWORD *)(a1 + 376)];
  if ( v16 != v15 )
  {
    while ( *v15 > 0 && *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) > *v15 )
    {
      if ( v16 == ++v15 )
        goto LABEL_44;
    }
    return 0;
  }
LABEL_44:
  if ( (unsigned __int8)sub_762C0(v24, 1, 0x188u) )
  {
    sub_78DD0((__int64)&v25, (_QWORD *)a2);
    v17 = *(_QWORD *)(a1 + 392);
    v18 = v25;
    v25 = 0;
    v19 = _mm_loadu_si128(&v26);
    v26 = 0;
    if ( v17 )
    {
      *(_QWORD *)(a1 + 400) = 0;
      v22 = v19;
      qfree(v17);
      v20 = _mm_load_si128(&v22);
      v21 = v25;
      *(_QWORD *)(a1 + 392) = v18;
      *(__m128i *)(a1 + 400) = v20;
      if ( v21 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 392) = v18;
      *(__m128i *)(a1 + 400) = v19;
    }
  }
  if ( (unsigned __int8)sub_762C0(v24, 1, 0x1A0u) && !(unsigned __int8)sub_87160(a1 + 416, (char **)a2) )
    return 0;
  return sub_87160(a1 + 448, (char **)a2);
}
