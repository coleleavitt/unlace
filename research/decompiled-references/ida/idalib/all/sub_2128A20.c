void *__fastcall sub_2128A20(__int64 a1, __int64 a2, void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  void *v6; // r12
  _BYTE *v7; // r14
  __int64 v8; // r13
  char v9; // al
  char v10; // al
  _QWORD *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rbp
  __int32 v14; // eax
  __m128i v15; // xmm0
  bool v16; // cc
  void *v18; // [rsp+8h] [rbp-B0h]
  char v19; // [rsp+14h] [rbp-A4h]
  char v20; // [rsp+15h] [rbp-A3h]
  char v21; // [rsp+16h] [rbp-A2h]
  char v22; // [rsp+17h] [rbp-A1h]
  __int64 v23; // [rsp+18h] [rbp-A0h]
  __int64 v24; // [rsp+20h] [rbp-98h]
  __int64 v25; // [rsp+28h] [rbp-90h]
  void *v26[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128 v28; // [rsp+50h] [rbp-68h] BYREF
  void *v29; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-48h]

  v6 = a3;
  v7 = *(_BYTE **)(a1 + 88);
  v8 = *(_QWORD *)(a1 + 96);
  v18 = a3;
  v24 = *(_QWORD *)(a1 + 136);
  v23 = *(_QWORD *)(a1 + 56);
  v22 = *(_BYTE *)(a1 + 128);
  v21 = *(_BYTE *)(a1 + 147);
  v9 = *(_BYTE *)(a1 + 144);
  *(_BYTE *)(a1 + 144) = a4;
  v20 = v9;
  v10 = *(_BYTE *)(a1 + 130);
  *(_BYTE *)(a1 + 130) = 1;
  v19 = v10;
  v26[0] = v27;
  if ( &v7[v8] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (_QWORD *)operator new(v8 + 1);
    v27[0] = v8;
    v26[0] = v11;
    goto LABEL_26;
  }
  if ( v8 != 1 )
  {
    v11 = v27;
    if ( !v8 )
      goto LABEL_6;
LABEL_26:
    memcpy(v11, v7, v8);
    v11 = v26[0];
    goto LABEL_6;
  }
  LOBYTE(v27[0]) = *v7;
  v11 = v27;
LABEL_6:
  v26[1] = (void *)v8;
  *((_BYTE *)v11 + v8) = 0;
  v25 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
    goto LABEL_19;
  v12 = a2 + 24;
  v13 = 0;
  while ( 1 )
  {
    sub_2127580(&v28, a1, (__int64)a3, (unsigned __int8)a4, a5, a6);
    v14 = v28.m128_i32[0];
    v15 = _mm_loadu_si128((const __m128i *)&v28.m128_u16[4]);
    v16 = *(_DWORD *)(v12 + 8) <= 0x40u;
    *(_DWORD *)(v12 - 24) = v28.m128_i32[0];
    *(__m128i *)(v12 - 16) = v15;
    if ( v16 )
    {
      a4 = v30;
      if ( v30 <= 0x40 )
        break;
    }
    sub_22056A0(v12, &v29);
    a4 = v30;
    if ( !v28.m128_i32[0] )
      goto LABEL_16;
LABEL_9:
    if ( a4 > 0x40 && v29 )
      operator delete[](v29);
    ++v13;
    v12 += 40;
    if ( v6 == (void *)v13 )
      goto LABEL_19;
  }
  a3 = v29;
  *(_DWORD *)(v12 + 8) = v30;
  *(_QWORD *)v12 = a3;
  if ( v14 )
    goto LABEL_9;
LABEL_16:
  v18 = (void *)(v13 + 1);
  if ( a4 > 0x40 && v29 )
    operator delete[](v29);
LABEL_19:
  *(_QWORD *)(a1 + 80) = v25;
  sub_9EE8A0(a1 + 88, (__int64)v26);
  if ( v26[0] != v27 )
    operator delete(v26[0]);
  *(_BYTE *)(a1 + 130) = v19;
  *(_BYTE *)(a1 + 144) = v20;
  *(_BYTE *)(a1 + 147) = v21;
  *(_BYTE *)(a1 + 128) = v22;
  *(_QWORD *)(a1 + 56) = v23;
  *(_QWORD *)(a1 + 136) = v24;
  return v18;
}
