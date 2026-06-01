__int64 __fastcall sub_12C6300(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // r13d
  unsigned int v6; // r12d
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __m128i v10; // [rsp+0h] [rbp-108h] BYREF
  __int64 v11; // [rsp+10h] [rbp-F8h] BYREF
  void *v12[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v15; // [rsp+60h] [rbp-A8h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  _BYTE v18[24]; // [rsp+88h] [rbp-80h] BYREF
  void **v19; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v20; // [rsp+C0h] [rbp-48h]

  v4 = sub_1132360(a1, a3);
  if ( v4 )
  {
    v5 = 0;
    if ( v4 == 1 )
      v5 = sub_1213FB0(a1 + 2912, 12, 1, 0, nullptr, 0);
  }
  else
  {
    v5 = sub_112C5E0(a1) ^ 1;
  }
  sub_12679B0(&v10, a1, a3);
  v14[0] = a2 + 520;
  v15 = 1028;
  v14[2] = &v10;
  sub_2253560(v12, v14);
  v20 = 260;
  ptr = v18;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v19 = v12;
  if ( (unsigned int)sub_228E700(&v19, &ptr, 0) )
    goto LABEL_5;
  v8 = sub_228AA60(ptr, si128.m128i_i64[0], 0);
  if ( v9 <= 6 )
  {
    if ( v9 <= 4 )
    {
LABEL_5:
      if ( ptr != v18 )
        free(ptr);
      v6 = 0;
      goto LABEL_8;
    }
  }
  else if ( *(_DWORD *)v8 == 875979884 && *(_WORD *)(v8 + 4) == 29486 && *(_BYTE *)(v8 + 6) == 111 )
  {
    goto LABEL_19;
  }
  if ( *(_DWORD *)v8 != 841835628 )
    goto LABEL_5;
  if ( *(_BYTE *)(v8 + 4) != 46 )
    goto LABEL_5;
  LODWORD(v8) = *(char *)(v8 + 6) + 2 * (5 * *(char *)(v8 + 5) - 240) - 48;
  if ( (unsigned int)v8 <= 0x1F )
    goto LABEL_5;
LABEL_19:
  if ( ptr != v18 )
    free(ptr);
  LOBYTE(v8) = *(_DWORD *)(a2 + 16) == 1;
  v6 = v5 & v8 ^ 1;
LABEL_8:
  if ( v12[0] != &v13 )
    operator delete(v12[0]);
  if ( (__int64 *)v10.m128i_i64[0] != &v11 )
    operator delete((void *)v10.m128i_i64[0]);
  return v6;
}
