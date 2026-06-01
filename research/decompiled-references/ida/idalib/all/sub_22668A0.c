__int64 __fastcall sub_22668A0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rdi
  __int64 *v14; // [rsp+8h] [rbp-3A0h]
  __int64 v15[2]; // [rsp+10h] [rbp-398h] BYREF
  __int128 v16; // [rsp+20h] [rbp-388h]
  __int64 v17; // [rsp+30h] [rbp-378h]
  __int64 v18; // [rsp+38h] [rbp-370h]
  __int64 v19[6]; // [rsp+40h] [rbp-368h] BYREF
  void *ptr; // [rsp+70h] [rbp-338h] BYREF
  __m128i si128; // [rsp+78h] [rbp-330h]
  _BYTE v22[136]; // [rsp+88h] [rbp-320h] BYREF
  void *v23[2]; // [rsp+110h] [rbp-298h] BYREF
  _BYTE v24[256]; // [rsp+120h] [rbp-288h] BYREF
  char *v25; // [rsp+220h] [rbp-188h] BYREF
  __int64 v26; // [rsp+228h] [rbp-180h]
  __int64 v27; // [rsp+330h] [rbp-78h]
  __m128i v28[2]; // [rsp+338h] [rbp-70h] BYREF
  char v29; // [rsp+360h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v22;
  sub_A1FE50(&ptr, a3, &a3[a4]);
  v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 112LL))(a2, &ptr);
  if ( v5 || (v5 = sub_2266790((__int64 *)&ptr)) != 0 )
  {
    *(_BYTE *)(a1 + 320) |= 1u;
    *(_DWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a2 + 116) && *(_DWORD *)(a2 + 120) == 2 )
    *(_BYTE *)(a2 + 115) = 1;
  sub_22892D0(v15, ptr, si128.m128i_i64[0], 0);
  sub_2289320(v19, ptr, si128.m128i_i64[0]);
  v10 = *(__int64 **)(a2 + 16);
  v23[0] = v24;
  v23[1] = (void *)0x2000000000LL;
  v14 = *(__int64 **)(a2 + 24);
  if ( v10 == v14 )
  {
    v11 = std::_V2::generic_category((std::_V2 *)v19);
    v13 = v24;
LABEL_30:
    *(_BYTE *)(a1 + 320) |= 1u;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v11;
    goto LABEL_18;
  }
  while ( 1 )
  {
    sub_2266290(
      (std::_V2 *)&v25,
      a2,
      *v10,
      (__int64)v23,
      v8,
      v9,
      v15[0],
      v15[1],
      v16,
      v17,
      v18,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5]);
    if ( *(_BYTE *)(a2 + 116) )
      break;
    if ( (v29 & 1) == 0 )
      goto LABEL_15;
LABEL_13:
    v11 = std::_V2::generic_category((std::_V2 *)&v25);
    if ( (_DWORD)v25 != 2 || v26 != v11 )
      goto LABEL_15;
    if ( v14 == ++v10 )
    {
      v13 = v23[0];
      goto LABEL_30;
    }
  }
  if ( (v29 & 1) != 0 )
    goto LABEL_13;
  if ( *(_DWORD *)(v27 + 8) )
    *(_BYTE *)(a2 + 115) = 1;
LABEL_15:
  sub_2260740((__int64)&v25, (char **)v23);
  if ( (v29 & 1) != 0 )
  {
    v12 = (int)v25;
    *(_BYTE *)(a1 + 320) |= 1u;
    *(_DWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v26;
  }
  else
  {
    *(_BYTE *)(a1 + 320) &= ~1u;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x2000000000LL;
    if ( (_DWORD)v26 )
      sub_2260740(a1, &v25);
    *(_QWORD *)(a1 + 272) = v27;
    sub_A20E90((__m128i *)(a1 + 280), v28);
    if ( (v29 & 1) == 0 )
      sub_225BE70((__int64)&v25);
  }
  v13 = v23[0];
LABEL_18:
  if ( v13 != v24 )
    free(v13);
LABEL_3:
  if ( ptr != v22 )
    free(ptr);
  return a1;
}
