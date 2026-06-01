void __fastcall sub_1365A60(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int16 v9; // ax
  int v10; // ebx
  __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r15
  void *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-B0h]
  _QWORD v24[2]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-98h] BYREF
  void *v26; // [rsp+30h] [rbp-88h] BYREF
  void *v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v29[7]; // [rsp+48h] [rbp-70h] BYREF

  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 18 > 0x3F )
    goto LABEL_17;
  sub_B86A00((__int64)&v26, (__int64 *)(a3 + 40));
  v5 = (_QWORD *)a1[6];
  if ( !v5 )
  {
    v7 = (__int64 *)v26;
LABEL_21:
    if ( v7 != &v28 )
      operator delete(v7);
    goto LABEL_17;
  }
  v6 = a1 + 5;
  do
  {
    while ( sub_9C4B50((__int64)(v5 + 4), (__int64)&v26) >= 0 )
    {
      v6 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v5 )
        goto LABEL_7;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( v5 );
LABEL_7:
  v7 = (__int64 *)v26;
  if ( a1 + 5 == v6 || sub_9C4B50((__int64)&v26, (__int64)(v6 + 4)) < 0 )
    goto LABEL_21;
  if ( v7 != &v28 )
    operator delete(v7);
  v8 = *(_QWORD *)(sub_A62AC0(a1[3]) + 32);
  v24[0] = &v25;
  sub_13650C0(v24, "%0 was deserialized", (__int64)"");
  HIDWORD(v26) = 0;
  HIBYTE(v9) = BYTE1(v26) & 0xFE;
  LOBYTE(v9) = -20;
  LOWORD(v26) = v9;
  v27 = v29;
  if ( (__m128i *)v24[0] == &v25 )
  {
    v29[0] = _mm_load_si128(&v25);
  }
  else
  {
    v27 = (void *)v24[0];
    *(_QWORD *)&v29[0] = v25.m128i_i64[0];
  }
  v28 = v24[1];
  v10 = sub_FD5980(v8, (__int64)&v26);
  if ( v27 != v29 )
    operator delete(v27);
  v11 = sub_A62AC0(a1[3]);
  sub_FC70B0((__int64)&v26, v11, *(_DWORD *)(a3 + 24), v10);
  v12 = (unsigned __int8 *)v26;
  if ( !v26 )
  {
    v16 = v27;
    v17 = *((_DWORD *)v27 + 3744);
    if ( v17 )
    {
      v18 = (unsigned int)(v17 - 1);
      *((_DWORD *)v27 + 3744) = v18;
      v12 = (unsigned __int8 *)v16[v18 + 1856];
      v19 = *((unsigned int *)v12 + 134);
      *v12 = 0;
      v20 = *((_QWORD *)v12 + 66);
      *((_DWORD *)v12 + 106) = 0;
      v21 = v20 + (v19 << 6);
      while ( v20 != v21 )
      {
        while ( 1 )
        {
          v21 -= 64;
          v22 = *(void **)(v21 + 24);
          if ( v22 == (void *)(v21 + 40) )
            break;
          v23 = v20;
          operator delete(v22);
          v20 = v23;
          if ( v23 == v21 )
            goto LABEL_28;
        }
      }
LABEL_28:
      *((_DWORD *)v12 + 134) = 0;
    }
    else
    {
      v12 = (unsigned __int8 *)operator new(0x3A0u);
      *v12 = 0;
      *((_QWORD *)v12 + 12) = v12 + 112;
      *((_QWORD *)v12 + 16) = v12 + 144;
      *((_QWORD *)v12 + 20) = v12 + 176;
      *((_QWORD *)v12 + 24) = v12 + 208;
      *((_QWORD *)v12 + 28) = v12 + 240;
      *((_QWORD *)v12 + 32) = v12 + 272;
      *((_QWORD *)v12 + 36) = v12 + 304;
      *((_QWORD *)v12 + 40) = v12 + 336;
      *((_QWORD *)v12 + 44) = v12 + 368;
      *((_QWORD *)v12 + 48) = v12 + 400;
      *((_QWORD *)v12 + 52) = v12 + 432;
      *((_QWORD *)v12 + 13) = 0;
      v12[112] = 0;
      *((_QWORD *)v12 + 17) = 0;
      v12[144] = 0;
      *((_QWORD *)v12 + 21) = 0;
      v12[176] = 0;
      *((_QWORD *)v12 + 25) = 0;
      v12[208] = 0;
      *((_QWORD *)v12 + 29) = 0;
      v12[240] = 0;
      *((_QWORD *)v12 + 33) = 0;
      v12[272] = 0;
      *((_QWORD *)v12 + 37) = 0;
      v12[304] = 0;
      *((_QWORD *)v12 + 41) = 0;
      v12[336] = 0;
      *((_QWORD *)v12 + 45) = 0;
      v12[368] = 0;
      *((_QWORD *)v12 + 49) = 0;
      v12[400] = 0;
      *((_QWORD *)v12 + 53) = 0x800000000LL;
      *((_QWORD *)v12 + 66) = v12 + 544;
      *((_QWORD *)v12 + 67) = 0x600000000LL;
    }
    v26 = v12;
  }
  v12[*v12 + 1] = 10;
  v13 = v26;
  v14 = *(unsigned __int8 *)v26;
  *(_BYTE *)v26 = v14 + 1;
  v13[v14 + 2] = a3;
  sub_AEA040((__int64)&v26);
LABEL_17:
  v15 = a1[1];
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, a2, a3);
}
