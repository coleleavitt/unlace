void __fastcall sub_1378540(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, unsigned __int8 a5, __int64 *a6)
{
  _QWORD *v6; // r10
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  _QWORD *v16; // rdx
  void *v17; // rax
  __int64 v18; // [rsp-10h] [rbp-138h]
  __int64 v19; // [rsp-8h] [rbp-130h]
  __int64 v22; // [rsp+18h] [rbp-110h]
  void *v23; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-100h]
  void *v25[2]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD *v27; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __int16 v29; // [rsp+70h] [rbp-B8h]
  __int64 v30; // [rsp+80h] [rbp-A8h]
  __int64 v31; // [rsp+88h] [rbp-A0h]
  __int64 v32; // [rsp+90h] [rbp-98h]
  __int64 v33; // [rsp+98h] [rbp-90h]
  __int64 v34; // [rsp+A0h] [rbp-88h]
  void *ptr; // [rsp+B0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-70h]
  __int64 v37; // [rsp+C8h] [rbp-60h] BYREF
  __int16 v38; // [rsp+D0h] [rbp-58h]

  v6 = a3;
  v24 = a2;
  if ( a5 )
  {
    v10 = ~(1LL << ((unsigned __int8)a2 - 1));
    if ( a2 <= 0x40 )
    {
      v11 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)a2);
      if ( !a2 )
        v11 = nullptr;
      v23 = v11;
      goto LABEL_6;
    }
    sub_2205470(&v23, -1, 1);
    v6 = a3;
    if ( v24 <= 0x40 )
    {
LABEL_6:
      v23 = (void *)(v10 & (unsigned __int64)v23);
      goto LABEL_7;
    }
    *((_QWORD *)v23 + ((a2 - 1) >> 6)) &= v10;
  }
  else if ( a2 > 0x40 )
  {
    sub_2205470(&v23, -1, 1);
    v6 = a3;
  }
  else
  {
    v17 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)a2);
    if ( !a2 )
      v17 = nullptr;
    v23 = v17;
  }
LABEL_7:
  v28 = a4;
  LOWORD(v34) = 257;
  v29 = 261;
  v27 = v6;
  ptr = &v37;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  sub_220BA90((unsigned int)&v23, (unsigned int)&ptr, 10, a5, 0, 1, 0);
  v25[0] = v26;
  sub_13777B0(v25, ptr, (__int64)ptr + si128.m128i_i64[0]);
  v13 = v18;
  v14 = v19;
  if ( ptr != &v37 )
    free(ptr);
  v15 = v29;
  if ( (_BYTE)v29 )
  {
    if ( (_BYTE)v29 == 1 )
    {
      ptr = v25;
      v38 = 260;
    }
    else
    {
      if ( HIBYTE(v29) == 1 )
      {
        v16 = v27;
        v22 = v28;
      }
      else
      {
        v16 = &v27;
        v15 = 2;
      }
      v12 = v22;
      ptr = v25;
      si128.m128i_i64[1] = (__int64)v16;
      v37 = v22;
      LOBYTE(v38) = 4;
      HIBYTE(v38) = v15;
    }
  }
  else
  {
    v38 = 256;
  }
  sub_1039E30(a6, a1, (__int64)&ptr, v12, v13, v14, v30, v31, v32, v33, v34);
  if ( v25[0] != v26 )
    operator delete(v25[0]);
  if ( v24 > 0x40 )
  {
    if ( v23 )
      operator delete[](v23);
  }
}
