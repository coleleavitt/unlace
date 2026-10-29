__int64 __fastcall sub_108EFB0(__int64 a1, const __m128i *a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 v5; // r13
  __int32 v6; // eax
  int v7; // eax
  char *v8; // rcx
  __int32 v9; // edx
  void *v10; // rax
  _BYTE *v11; // r13
  signed __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // rax
  bool v15; // zf
  __m128i si128; // xmm0
  _BYTE *v17; // rdi
  __m128i v18; // xmm0
  int v19; // eax
  int v20; // eax
  void *v21[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v22[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = (_QWORD *)(a1 + 512);
  v5 = a1 + 568;
  sub_102D220(a1, a2, a3);
  *(_BYTE *)(a1 + 528) = 0;
  *(_QWORD *)a1 = &off_2C2F168;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 568) = a1 + 584;
  *(_BYTE *)(a1 + 584) = 0;
  v6 = a2[2].m128i_i32[0];
  *(_QWORD *)(a1 + 520) = 0;
  *(_WORD *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 544) = 0;
  *(_BYTE *)(a1 + 550) = 0;
  *(_WORD *)(a1 + 560) = 0;
  *(_BYTE *)(a1 + 562) = 0;
  *(_DWORD *)(a1 + 564) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 340) = 6;
  if ( (unsigned int)(v6 - 16) > 1 )
  {
    if ( (a2[3].m128i_i32[0] & 0xFFFFFFEF) == 3 )
      qmemcpy(v22, "n32", 3);
    else
      qmemcpy(v22, "n64", 3);
    v21[0] = v22;
  }
  else
  {
    qmemcpy(v22, "o32", 3);
    v21[0] = v22;
  }
  v22[3] = 0;
  v21[1] = &dword_0 + 3;
  if ( sub_9B4AA0((__int64)v21, "o32") )
  {
    if ( sub_9B4AA0((__int64)v21, "n32") )
    {
      if ( sub_9B4AA0((__int64)v21, "n64") )
        goto LABEL_6;
      *(_WORD *)(a1 + 24) = -32640;
      *(_QWORD *)(a1 + 112) = sub_21F90C0();
      v19 = *(_DWORD *)(a1 + 260);
      if ( v19 == 3 )
      {
        *(_WORD *)(a1 + 24) = 16448;
        *(_QWORD *)(a1 + 112) = sub_21F90B0(16448, "n64");
        v20 = 7;
        *(_WORD *)(a1 + 286) = 16448;
        *(_WORD *)(a1 + 62) = 128;
      }
      else
      {
        *(_WORD *)(a1 + 286) = 16448;
        *(_WORD *)(a1 + 62) = 128;
        v20 = 2 * (v19 == 12) + 7;
      }
      *(_DWORD *)(a1 + 168) = v20;
      *(_DWORD *)(a1 + 140) = v20;
      *(_WORD *)(a1 + 30) = 16448;
      *(_WORD *)(a1 + 8) = 16448;
      *(_QWORD *)(a1 + 144) = 0x700000007LL;
      *(_DWORD *)(a1 + 136) = 8;
      sub_9EE8A0(v5, (__int64)v21);
      v17 = v21[0];
    }
    else
    {
      *(_WORD *)(a1 + 24) = -32640;
      v14 = sub_21F90C0();
      v15 = *(_DWORD *)(a1 + 260) == 3;
      *(_QWORD *)(a1 + 112) = v14;
      if ( v15 )
      {
        *(_WORD *)(a1 + 24) = 16448;
        *(_QWORD *)(a1 + 112) = sub_21F90B0(v21, "n32");
      }
      *(_WORD *)(a1 + 62) = 128;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9580);
      *(_WORD *)(a1 + 30) = 8224;
      *(_WORD *)(a1 + 286) = 16448;
      *(_DWORD *)(a1 + 168) = 9;
      *(_WORD *)(a1 + 8) = 8224;
      *(__m128i *)(a1 + 136) = si128;
      sub_9EE8A0(v5, (__int64)v21);
      v17 = v21[0];
    }
  }
  else
  {
    *(_DWORD *)(a1 + 168) = 9;
    *(_QWORD *)(a1 + 112) = sub_21F90B0(v21, "o32");
    v18 = _mm_load_si128((const __m128i *)&xmmword_23A9580);
    *(_WORD *)(a1 + 8) = 8224;
    *(_WORD *)(a1 + 62) = 64;
    *(_WORD *)(a1 + 24) = 16448;
    *(_WORD *)(a1 + 30) = 8224;
    *(_WORD *)(a1 + 286) = 8224;
    *(__m128i *)(a1 + 136) = v18;
    sub_9EE8A0(v5, (__int64)v21);
    v17 = v21[0];
  }
  if ( v17 != v22 )
    operator delete(v17);
LABEL_6:
  v7 = sub_9B4AA0(v5, "o32");
  v8 = "mips32r2";
  if ( v7 )
    v8 = "mips64r2";
  sub_99BDC0(v4, 0, *(_QWORD *)(a1 + 520), v8, 8u);
  v9 = a2[2].m128i_i32[3];
  *(_BYTE *)(a1 + 344) = 1;
  *(_BYTE *)(a1 + 550) = v9 == 12 || v9 == 3;
  *(_QWORD *)(a1 + 152) = 0x400000004LL;
  *(_QWORD *)a1 = &off_2C2F550;
  v10 = (void *)(a1 + 616);
  *(_QWORD *)(a1 + 600) = a1 + 616;
  v11 = (_BYTE *)a2->m128i_i64[0];
  v12 = a2->m128i_i64[1];
  if ( v12 + a2->m128i_i64[0] && !v11 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v10 = (void *)operator new(v12 + 1);
    *(_QWORD *)(a1 + 616) = v12;
    *(_QWORD *)(a1 + 600) = v10;
    goto LABEL_27;
  }
  if ( v12 != 1 )
  {
    if ( !v12 )
      goto LABEL_13;
LABEL_27:
    memcpy(v10, v11, v12);
    v10 = *(void **)(a1 + 600);
    goto LABEL_13;
  }
  *(_BYTE *)(a1 + 616) = *v11;
LABEL_13:
  *(_QWORD *)(a1 + 608) = v12;
  *((_BYTE *)v10 + v12) = 0;
  *(__m128i *)(a1 + 632) = _mm_loadu_si128(a2 + 2);
  *(_DWORD *)(a1 + 648) = a2[3].m128i_i32[0];
  result = a2[3].m128i_u32[1];
  *(_DWORD *)(a1 + 652) = result;
  return result;
}
