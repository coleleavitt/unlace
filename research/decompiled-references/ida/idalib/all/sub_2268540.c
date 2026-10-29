__m128 *__fastcall sub_2268540(__m128 *a1, __int64 a2, _QWORD **a3, __int64 a4)
{
  _QWORD *v6; // rax
  __int64 **v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // r13
  void *v10; // rax
  __m128i si128; // xmm0
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  std::_V2 *v19; // [rsp+0h] [rbp-108h] BYREF
  __int64 **v20; // [rsp+8h] [rbp-100h]
  _QWORD *v21; // [rsp+10h] [rbp-F8h]
  __int64 v22; // [rsp+18h] [rbp-F0h]
  void ***v23; // [rsp+20h] [rbp-E8h]
  __m128i *v24; // [rsp+28h] [rbp-E0h]
  __int32 v25; // [rsp+34h] [rbp-D4h]
  _QWORD *v26; // [rsp+38h] [rbp-D0h]
  __m128i v27; // [rsp+40h] [rbp-C8h] BYREF
  char v28; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v29; // [rsp+58h] [rbp-B0h]
  void *v30; // [rsp+60h] [rbp-A8h] BYREF
  void *v31; // [rsp+68h] [rbp-A0h]
  __m128i v32; // [rsp+70h] [rbp-98h] BYREF
  void *v33[2]; // [rsp+80h] [rbp-88h] BYREF
  __m128i v34; // [rsp+90h] [rbp-78h] BYREF
  void **v35; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v36; // [rsp+C0h] [rbp-48h]

  sub_2253560(&v30, a3);
  v6 = (_QWORD *)operator new((unsigned __int64)&off_F8);
  v7 = *(__int64 ***)(a2 + 16);
  v8 = *(unsigned int *)(a2 + 24);
  v9 = v6;
  v6[1] = 0x100000001LL;
  *v6 = off_2BEBB58;
  v21 = v6 + 2;
  v33[0] = &v34;
  if ( v30 == &v32 )
  {
    v34 = _mm_load_si128(&v32);
  }
  else
  {
    v33[0] = v30;
    v34.m128i_i64[0] = v32.m128i_i64[0];
  }
  v10 = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  v31 = nullptr;
  v32.m128i_i8[0] = 0;
  v33[1] = v10;
  v30 = &v32;
  v9[3] = v9 + 5;
  v9[2] = &off_2BEB860;
  v9[8] = v9 + 10;
  v9[9] = 0x800000000LL;
  v9[4] = 0;
  *((_BYTE *)v9 + 40) = 0;
  *((_DWORD *)v9 + 14) = 9;
  v9[26] = 0;
  v9[27] = 0;
  v9[28] = 0;
  *(__m128i *)(v9 + 29) = si128;
  v20 = &v7[v8];
  if ( v7 == v20 )
  {
LABEL_9:
    *(_DWORD *)a4 = sub_22680F0((__int64)v21, 1);
    *(_QWORD *)(a4 + 8) = v14;
    goto LABEL_10;
  }
  v22 = std::_V2::system_category((std::_V2 *)&off_F8);
  v19 = (std::_V2 *)&v28;
  v24 = &v27;
  v23 = &v35;
  v26 = v9 + 8;
  while ( 1 )
  {
    v12 = *v7;
    v27.m128i_i32[0] = 0;
    v27.m128i_i64[1] = v22;
    v13 = *v12;
    v36 = 260;
    v35 = v33;
    (*(void (__fastcall **)(std::_V2 *, __int64 *, void ***, __m128i *))(v13 + 64))(v19, v12, v23, v24);
    v25 = v27.m128i_i32[0];
    if ( v27.m128i_i32[0] )
      break;
    sub_2268020((__int64)v26, (char *)v19);
LABEL_7:
    if ( v29 )
    {
      sub_4343A0(v29);
      if ( v20 == ++v7 )
        goto LABEL_9;
    }
    else if ( v20 == ++v7 )
    {
      goto LABEL_9;
    }
  }
  v16 = std::_V2::generic_category(v19);
  if ( v27.m128i_i64[1] == v16 && v25 == 2 )
    goto LABEL_7;
  v17 = v29;
  *(__m128i *)a4 = _mm_load_si128(&v27);
  if ( v17 )
    sub_4343A0(v17);
LABEL_10:
  if ( v33[0] != &v34 )
    operator delete(v33[0]);
  if ( !v9[4] )
  {
    v18 = (volatile signed __int32 *)v9;
    v9 = nullptr;
    sub_4343A0(v18);
    v21 = nullptr;
  }
  if ( v30 != &v32 )
    operator delete(v30);
  if ( *(_DWORD *)a4 )
  {
    *a1 = 0;
    if ( v9 )
      sub_4343A0((volatile signed __int32 *)v9);
  }
  else
  {
    v19 = (std::_V2 *)v9;
    *a1 = _mm_loadh_ps((const double *)&v19);
  }
  return a1;
}
