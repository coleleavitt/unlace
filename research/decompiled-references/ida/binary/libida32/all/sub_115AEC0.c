_QWORD *__fastcall sub_115AEC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  void *v11[2]; // [rsp+0h] [rbp-1A8h] BYREF
  _BYTE v12[16]; // [rsp+10h] [rbp-198h] BYREF
  _QWORD v13[4]; // [rsp+20h] [rbp-188h] BYREF
  __int16 v14; // [rsp+40h] [rbp-168h]
  _QWORD v15[4]; // [rsp+50h] [rbp-158h] BYREF
  __int16 v16; // [rsp+70h] [rbp-138h]
  _QWORD v17[4]; // [rsp+80h] [rbp-128h] BYREF
  __int16 v18; // [rsp+A0h] [rbp-108h]
  _QWORD v19[4]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v20; // [rsp+D0h] [rbp-D8h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-C0h]
  _BYTE v23[176]; // [rsp+F8h] [rbp-B0h] BYREF

  if ( *(_QWORD *)(a2 + 4992) )
  {
    *a1 = a1 + 2;
    sub_115A670(a1, *(_BYTE **)(a2 + 4984), *(_QWORD *)(a2 + 4984) + *(_QWORD *)(a2 + 4992));
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v2 + 496) )
    {
      *a1 = a1 + 2;
      sub_115A670(a1, *(_BYTE **)(v2 + 488), *(_QWORD *)(v2 + 488) + *(_QWORD *)(v2 + 496));
    }
    else
    {
      v3 = *(_BYTE *)(a2 + 5016) == 0;
      ptr = v23;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      if ( v3 )
      {
        if ( (unsigned __int8)sub_115A730(v2) )
        {
          v20 = 257;
          v7 = *(_BYTE **)(v2 + 944);
          v8 = *(_QWORD *)(v2 + 952);
          v11[0] = v12;
          sub_115A670(v11, v7, (__int64)&v7[v8]);
          v15[0] = "..";
          v18 = 260;
          v16 = 259;
          v14 = 260;
          v17[0] = v11;
          v13[0] = v2 + 104;
          sub_2266670(&ptr, v13, v15, v17, v19);
          if ( v11[0] != v12 )
            operator delete(v11[0]);
        }
      }
      else
      {
        v4 = *(_QWORD *)(a2 + 2488);
        v17[0] = a2 + 2392;
        v15[0] = "..";
        v5 = *(_QWORD *)(a2 + 2496);
        v13[0] = v4;
        v16 = 259;
        v20 = 257;
        v18 = 260;
        v14 = 261;
        v13[1] = v5;
        sub_2266670(&ptr, v13, v15, v17, v19);
      }
      if ( si128.m128i_i64[0]
        && (v19[1] = si128.m128i_i64[0], v20 = 261, v19[0] = ptr, !(unsigned int)sub_22684A0(v19, 0)) )
      {
        v9 = ptr;
        v10 = si128.m128i_i64[0];
        *a1 = a1 + 2;
        sub_115A880(a1, v9, (__int64)&v9[v10]);
      }
      else
      {
        sub_115AC50(a1, v2, 1);
      }
      if ( ptr != v23 )
        free(ptr);
    }
  }
  return a1;
}

