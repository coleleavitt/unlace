void __fastcall sub_1037190(__int64 a1, const __m128i *a2, __int64 a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // rax
  void *v10; // rax
  __int64 v11; // rdi
  _BYTE *v12; // rdi
  __int64 v13; // rax
  __int16 v14; // dx
  char v15; // cl
  char v16; // dl
  char v17; // dl
  void *v18[2]; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v20; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-A8h] BYREF
  int v22; // [rsp+50h] [rbp-98h]
  __m128i v23; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v24[104]; // [rsp+80h] [rbp-68h] BYREF

  sub_10094E0(a1, a2, a3);
  *(_QWORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 508) = 1;
  *(_QWORD *)a1 = &unk_2BDD568;
  *(_WORD *)(a1 + 30) = 16448;
  *(_QWORD *)(a1 + 352) = &unk_2493EE0;
  *(_BYTE *)(a1 + 279) = 1;
  *(_DWORD *)(a1 + 273) = (_DWORD)sub_1010000;
  v5 = *(_BYTE **)(a3 + 32);
  v6 = *(_QWORD *)(a3 + 40);
  v23.m128i_i64[0] = (__int64)v24;
  sub_1014C40(&v23, v5, (__int64)&v5[v6]);
  sub_2296190(&v20, &v23);
  if ( (_BYTE *)v23.m128i_i64[0] != v24 )
    operator delete((void *)v23.m128i_i64[0]);
  if ( (unsigned int)(v22 - 47) > 4 && v22 )
  {
    v7 = *(_BYTE **)(a3 + 32);
    v8 = *(_QWORD *)(a3 + 40);
    v18[0] = v19;
    if ( &v7[v8] && !v7 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v8 > 0xF )
    {
      if ( v8 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v9 = (_QWORD *)operator new(v8 + 1);
      v19[0] = v8;
      v18[0] = v9;
    }
    else
    {
      if ( v8 == 1 )
      {
        LOBYTE(v19[0]) = *v7;
        v9 = v19;
LABEL_13:
        v18[1] = (void *)v8;
        *((_BYTE *)v9 + v8) = 0;
        sub_2296190(&v23, v18);
        if ( v18[0] != v19 )
          operator delete(v18[0]);
        sub_1031DF0((__int64 *)v18, &v23, a3);
        v10 = v18[0];
        v11 = *(_QWORD *)(a1 + 512);
        v18[0] = nullptr;
        *(_QWORD *)(a1 + 512) = v10;
        if ( v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          if ( v18[0] )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v18[0] + 8LL))(v18[0]);
        }
        if ( (_BYTE *)v23.m128i_i64[0] != v24 )
          operator delete((void *)v23.m128i_i64[0]);
        v12 = *(_BYTE **)(a1 + 512);
        *(_BYTE *)(a1 + 10) = v12[10];
        *(_BYTE *)(a1 + 11) = v12[11];
        *(_BYTE *)(a1 + 14) = v12[14];
        *(_BYTE *)(a1 + 15) = v12[15];
        *(_BYTE *)(a1 + 16) = v12[16];
        *(_BYTE *)(a1 + 17) = v12[17];
        *(_BYTE *)(a1 + 20) = v12[20];
        *(_BYTE *)(a1 + 21) = v12[21];
        *(_BYTE *)(a1 + 22) = v12[22];
        *(_BYTE *)(a1 + 23) = v12[23];
        *(_BYTE *)(a1 + 30) = v12[30];
        *(_BYTE *)(a1 + 31) = v12[31];
        *(_BYTE *)(a1 + 32) = v12[32];
        *(_BYTE *)(a1 + 33) = v12[33];
        *(_BYTE *)(a1 + 61) = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)v12 + 160LL))(v12, 0, 1);
        v13 = *(_QWORD *)(a1 + 512);
        v14 = *(_WORD *)(v13 + 64);
        if ( !v14 )
        {
          v14 = *(unsigned __int8 *)(v13 + 33);
          if ( (unsigned __int8)v14 < *(_BYTE *)(v13 + 25) )
            v14 = *(unsigned __int8 *)(v13 + 25);
        }
        *(_WORD *)(a1 + 64) = v14;
        *(_BYTE *)(a1 + 60) = *(_BYTE *)(v13 + 60);
        v15 = *(_BYTE *)(v13 + 184);
        *(_DWORD *)(a1 + 140) = *(_DWORD *)(v13 + 140);
        *(_DWORD *)(a1 + 152) = *(_DWORD *)(v13 + 152);
        *(_DWORD *)(a1 + 156) = *(_DWORD *)(v13 + 156);
        *(_DWORD *)(a1 + 160) = *(_DWORD *)(v13 + 160);
        *(_DWORD *)(a1 + 164) = *(_DWORD *)(v13 + 164);
        *(_DWORD *)(a1 + 168) = *(_DWORD *)(v13 + 168);
        *(_DWORD *)(a1 + 176) = *(_DWORD *)(v13 + 176);
        *(_DWORD *)(a1 + 180) = *(_DWORD *)(v13 + 180);
        v16 = v15 & 2 | *(_BYTE *)(a1 + 184) & 0xFD;
        *(_BYTE *)(a1 + 184) = v16;
        v17 = *(_BYTE *)(v13 + 184) & 4 | v16 & 0xFB;
        *(_BYTE *)(a1 + 184) = v17;
        *(_BYTE *)(a1 + 184) = *(_BYTE *)(v13 + 184) & 0x10 | v17 & 0xEF;
        *(_DWORD *)(a1 + 188) = *(_DWORD *)(v13 + 188);
        *(_BYTE *)(a1 + 287) = *(_BYTE *)(v13 + 287);
        goto LABEL_5;
      }
      v9 = v19;
      if ( !v8 )
        goto LABEL_13;
    }
    memcpy(v9, v7, v8);
    v9 = v18[0];
    goto LABEL_13;
  }
LABEL_5:
  if ( v20 != &v21 )
    operator delete(v20);
}

