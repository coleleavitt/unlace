__int64 __fastcall sub_1E0CD00(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int16 v3; // ax
  unsigned int v4; // r14d
  __int64 v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r13
  void *v23; // rdi
  __int64 vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars10; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars20; // [rsp+20h] [rbp+20h] BYREF
  void *vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  __m128i vars38; // [rsp+38h] [rbp+38h] BYREF
  __int64 vars48; // [rsp+48h] [rbp+48h]
  char vars98; // [rsp+98h] [rbp+98h]
  unsigned int varsA0; // [rsp+A0h] [rbp+A0h]
  char varsA0_4; // [rsp+A4h] [rbp+A4h]

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 264LL) + 32LL);
  vars0[0] = (__int64)&vars10;
  sub_1DFEDF0(vars0, "cannot instantiate %0 yet", (__int64)"");
  HIDWORD(vars20) = 0;
  HIBYTE(v3) = BYTE1(vars20) & 0xFE;
  LOBYTE(v3) = -20;
  LOWORD(vars20) = v3;
  vars28 = &vars38;
  if ( (__m128i *)vars0[0] == &vars10 )
  {
    vars38 = _mm_load_si128(&vars10);
  }
  else
  {
    vars28 = (void *)vars0[0];
    vars38.m128i_i64[0] = vars10.m128i_i64[0];
  }
  vars30 = vars0[1];
  v4 = sub_FD5980(v2, (__int64)&vars20);
  if ( vars28 != &vars38 )
    operator delete(vars28);
  sub_168B9F0((__int64)&vars20, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 24), v4, 0);
  v5 = sub_B88090(a2);
  if ( vars98 )
  {
    v14 = (unsigned __int8 *)vars38.m128i_i64[1];
    if ( !vars38.m128i_i64[1] )
    {
      v17 = vars48;
      v18 = *(_DWORD *)(vars48 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(vars48 + 14976) = v19;
        v14 = *(unsigned __int8 **)(v17 + 8 * v19 + 14848);
        v20 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v21 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v22 = v21 + (v20 << 6);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 64;
            v23 = *(void **)(v22 + 24);
            if ( v23 == (void *)(v22 + 40) )
              break;
            operator delete(v23);
            if ( v21 == v22 )
              goto LABEL_18;
          }
        }
LABEL_18:
        *((_DWORD *)v14 + 134) = 0;
      }
      else
      {
        v14 = (unsigned __int8 *)operator new(0x3A0u);
        *v14 = 0;
        *((_QWORD *)v14 + 12) = v14 + 112;
        *((_QWORD *)v14 + 16) = v14 + 144;
        *((_QWORD *)v14 + 20) = v14 + 176;
        *((_QWORD *)v14 + 24) = v14 + 208;
        *((_QWORD *)v14 + 28) = v14 + 240;
        *((_QWORD *)v14 + 32) = v14 + 272;
        *((_QWORD *)v14 + 36) = v14 + 304;
        *((_QWORD *)v14 + 40) = v14 + 336;
        *((_QWORD *)v14 + 44) = v14 + 368;
        *((_QWORD *)v14 + 48) = v14 + 400;
        *((_QWORD *)v14 + 52) = v14 + 432;
        *((_QWORD *)v14 + 13) = 0;
        v14[112] = 0;
        *((_QWORD *)v14 + 17) = 0;
        v14[144] = 0;
        *((_QWORD *)v14 + 21) = 0;
        v14[176] = 0;
        *((_QWORD *)v14 + 25) = 0;
        v14[208] = 0;
        *((_QWORD *)v14 + 29) = 0;
        v14[240] = 0;
        *((_QWORD *)v14 + 33) = 0;
        v14[272] = 0;
        *((_QWORD *)v14 + 37) = 0;
        v14[304] = 0;
        *((_QWORD *)v14 + 41) = 0;
        v14[336] = 0;
        *((_QWORD *)v14 + 45) = 0;
        v14[368] = 0;
        *((_QWORD *)v14 + 49) = 0;
        v14[400] = 0;
        *((_QWORD *)v14 + 53) = 0x800000000LL;
        *((_QWORD *)v14 + 66) = v14 + 544;
        *((_QWORD *)v14 + 67) = 0x600000000LL;
      }
      vars38.m128i_i64[1] = (__int64)v14;
    }
    v14[*v14 + 1] = 1;
    v15 = vars38.m128i_i64[1];
    v16 = *(unsigned __int8 *)vars38.m128i_i64[1];
    *(_BYTE *)vars38.m128i_i64[1] = v16 + 1;
    *(_QWORD *)(v15 + 8 * v16 + 16) = v5;
  }
  else if ( varsA0_4 )
  {
    v11 = sub_168B9E0(&vars20);
    v12 = vars30;
    if ( vars30 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)vars30 + 32LL))(vars30);
    vars0[0] = v12;
    v13 = sub_1587BC0(v11, vars0, v7, v8, v9, v10);
    sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * varsA0 + 8), v5, 1u);
  }
  sub_15F7200(&vars20);
  return 0;
}
