__int64 *__fastcall sub_2197700(__int64 *a1, __int64 a2, __int64 a3, const char *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r10
  char v7; // al
  __m128i *v8; // rax
  __m128i v9; // xmm1
  __int64 v11; // [rsp+0h] [rbp-F8h]
  _QWORD v12[4]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v13; // [rsp+50h] [rbp-A8h]
  __m128i v14; // [rsp+60h] [rbp-98h] BYREF
  __m128i v15; // [rsp+70h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-78h]
  __m128i v17; // [rsp+90h] [rbp-68h] BYREF
  __m128i v18; // [rsp+A0h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20[4]; // [rsp+C0h] [rbp-38h] BYREF
  __int16 v21; // [rsp+E0h] [rbp-18h]

  if ( (_DWORD)a3 != 16 )
  {
    v7 = 3;
    LODWORD(v11) = (_DWORD)a4;
    if ( !*a6 )
      v7 = 1;
    v12[0] = "load command ";
    a4 = " ";
    v12[2] = v11;
    v13 = 2307;
    v14.m128i_i64[0] = (__int64)v12;
    v15.m128i_i64[0] = (__int64)" ";
    LOWORD(v16) = 770;
    if ( v7 == 1 )
    {
      v9 = _mm_load_si128(&v15);
      a3 = v16;
      v17 = _mm_load_si128(&v14);
      v18 = v9;
      v19 = v16;
    }
    else
    {
      v18.m128i_i64[0] = (__int64)a6;
      LOBYTE(v19) = 2;
      BYTE1(v19) = v7;
      v17.m128i_i64[0] = (__int64)&v14;
      a3 = 2;
    }
    if ( BYTE1(v19) == 1 )
    {
      v6 = v17.m128i_i64[1];
      v8 = (__m128i *)v17.m128i_i64[0];
    }
    else
    {
      v8 = &v17;
      a3 = 2;
    }
    v20[0] = (__int64)v8;
    v20[1] = v6;
    v20[2] = (__int64)" has incorrect cmdsize";
    LOBYTE(v21) = a3;
    HIBYTE(v21) = 3;
    goto LABEL_10;
  }
  if ( *a5 )
  {
    v20[0] = (__int64)"more than one LC_VERSION_MIN_MACOSX, LC_VERSION_MIN_IPHONEOS, LC_VERSION_MIN_TVOS or LC_VERSION_MI"
                      "N_WATCHOS command";
    v21 = 259;
LABEL_10:
    sub_21967F0(a1, v20, a3, (__int64)a4);
    return a1;
  }
  *a5 = a2;
  *a1 = 0;
  return a1;
}
