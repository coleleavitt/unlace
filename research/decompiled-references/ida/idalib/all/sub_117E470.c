__int64 __fastcall sub_117E470(__int64 a1)
{
  _BYTE *v1; // rsi
  __int64 v2; // rdx
  _QWORD *v3; // rbp
  void *v5[2]; // [rsp+0h] [rbp-1A8h] BYREF
  _BYTE v6[16]; // [rsp+10h] [rbp-198h] BYREF
  _QWORD v7[4]; // [rsp+20h] [rbp-188h] BYREF
  __int16 v8; // [rsp+40h] [rbp-168h]
  char *v9; // [rsp+50h] [rbp-158h] BYREF
  __int16 v10; // [rsp+70h] [rbp-138h]
  void **v11; // [rsp+80h] [rbp-128h] BYREF
  __int16 v12; // [rsp+A0h] [rbp-108h]
  _QWORD v13[4]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v14; // [rsp+D0h] [rbp-D8h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-C0h]
  _BYTE v17[176]; // [rsp+F8h] [rbp-B0h] BYREF

  v1 = *(_BYTE **)(a1 + 944);
  v14 = 259;
  v2 = *(_QWORD *)(a1 + 952);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v17;
  v13[0] = "lib/crt0.o";
  v5[0] = v6;
  sub_117E3B0(v5, v1, (__int64)&v1[v2]);
  v7[0] = a1 + 104;
  v3 = v13;
  v12 = 260;
  v10 = 259;
  v8 = 260;
  v11 = v5;
  v9 = "..";
  sub_228A3B0(&ptr, v7, &v9, &v11, v13);
  if ( v5[0] != v6 )
    operator delete(v5[0]);
  v14 = 261;
  v13[0] = ptr;
  v13[1] = si128.m128i_i64[0];
  LOBYTE(v3) = (unsigned int)sub_228C1E0(v13, 0) == 0;
  if ( ptr != v17 )
    free(ptr);
  return (unsigned int)v3;
}
