__int64 __fastcall sub_11D48E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  bool v4; // zf
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  void *v16[2]; // [rsp+0h] [rbp-1B8h] BYREF
  _BYTE v17[16]; // [rsp+10h] [rbp-1A8h] BYREF
  _QWORD v18[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v19; // [rsp+40h] [rbp-178h]
  _QWORD v20[4]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v21; // [rsp+70h] [rbp-148h]
  _QWORD v22[4]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v23; // [rsp+A0h] [rbp-118h]
  _QWORD v24[4]; // [rsp+B0h] [rbp-108h] BYREF
  __int16 v25; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _BYTE v28[192]; // [rsp+F8h] [rbp-C0h] BYREF

  v2 = a1 + 16;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v3 + 496) )
  {
    *(_QWORD *)a1 = v2;
    sub_11D4760((_QWORD *)a1, *(_BYTE **)(v3 + 488), *(_QWORD *)(v3 + 488) + *(_QWORD *)(v3 + 496));
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 2384) == 0;
    ptr = v28;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v4 )
    {
      v25 = 257;
      v11 = *(_BYTE **)(v3 + 944);
      v12 = *(_QWORD *)(v3 + 952);
      v16[0] = v17;
      sub_11D4760(v16, v11, (__int64)&v11[v12]);
      v20[0] = "..";
      v13 = *(_QWORD *)(a2 + 8);
      v23 = 260;
      v21 = 259;
      v19 = 260;
      v22[0] = v16;
      v18[0] = v13 + 104;
      sub_228A3B0(&ptr, v18, v20, v22, v24);
      if ( v16[0] != v17 )
        operator delete(v16[0]);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 2400);
      v7 = *(_QWORD *)(a2 + 2488);
      v8 = *(_QWORD *)(a2 + 2496);
      v9 = *(_QWORD *)(a2 + 2392);
      v25 = 257;
      v18[0] = v7;
      v22[1] = v6;
      v22[0] = v9;
      v20[0] = "..";
      v23 = 261;
      v21 = 259;
      v19 = 261;
      v18[1] = v8;
      sub_228A3B0(&ptr, v18, v20, v22, v24);
    }
    v25 = 261;
    v24[0] = ptr;
    v24[1] = si128.m128i_i64[0];
    if ( (unsigned int)sub_228C1E0(v24, 0) )
    {
      *(_QWORD *)a1 = v2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
    }
    else
    {
      v14 = ptr;
      v15 = si128.m128i_i64[0];
      *(_QWORD *)a1 = v2;
      sub_11D4820((_QWORD *)a1, v14, (__int64)&v14[v15]);
    }
    if ( ptr != v28 )
      free(ptr);
  }
  return a1;
}
