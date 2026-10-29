__int64 __fastcall sub_16E0DC0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int8 *a6,
        __m128 a7,
        unsigned int a8)
{
  _BYTE *v9; // r13
  signed __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r9
  unsigned __int8 *v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rax
  const char *v21; // rdx
  unsigned __int8 v22; // [rsp+2Fh] [rbp-F9h]
  const char *v26; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int8 *v27; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-D0h]
  int v29; // [rsp+60h] [rbp-C8h]
  __int64 v30; // [rsp+64h] [rbp-C4h] BYREF
  int v31; // [rsp+6Ch] [rbp-BCh]
  __m128 v32; // [rsp+70h] [rbp-B8h] BYREF
  int v33; // [rsp+80h] [rbp-A8h]
  void *v34; // [rsp+90h] [rbp-98h] BYREF
  signed __int64 v35; // [rsp+98h] [rbp-90h]
  _BYTE v36[16]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 *v37; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp-70h]
  __int128 v39; // [rsp+C0h] [rbp-68h]
  __int64 v40; // [rsp+D0h] [rbp-58h]
  char v41; // [rsp+D8h] [rbp-50h]
  int v42; // [rsp+DCh] [rbp-4Ch]
  void **v43; // [rsp+E0h] [rbp-48h]

  v27 = a6;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 40) > a2 )
  {
    sub_16C5130((unsigned __int64 *)(a1 + 88), a2);
    v22 = 1;
  }
  v9 = v27;
  v35 = 0;
  v36[0] = 0;
  v10 = a8;
  v34 = v36;
  if ( !(unsigned __int8)sub_222E910((unsigned int)(char)*v27) )
  {
    v18 = v27;
    v37 = &v30;
    if ( v27 != &v27[a8] )
    {
      v19 = sub_2218990(*v27);
      v18 = v27;
      if ( v19 <= (__int64)a8 )
      {
        if ( !(unsigned int)sub_2218E30(&v27, &v27[v19], &v37, (char *)v37 + 4, 0) )
          goto LABEL_16;
        v18 = v27;
      }
    }
    LODWORD(v30) = *v18;
LABEL_16:
    LODWORD(v38) = 0;
    v41 = 0;
    v37 = (__int64 *)&off_2BEBE68;
    v42 = 1;
    v40 = 0;
    v39 = 0;
    v43 = &v34;
    sub_227B8B0(&v37, 0, 0, 0);
    if ( (unsigned int)v30 <= 0xFF )
    {
      v20 = sub_995540((__int64)&v37, "\\x");
      v21 = "%02x";
    }
    else if ( (unsigned int)v30 <= 0xFFFF )
    {
      v20 = sub_995540((__int64)&v37, "\\u");
      v21 = "%04x";
    }
    else
    {
      v20 = sub_995540((__int64)&v37, "\\U");
      v21 = "%08x";
    }
    v26 = v21;
    v33 = v30;
    a7 = _mm_loadh_ps((const double *)&v26);
    v32 = a7;
    sub_227C560(v20, &v32);
    v9 = v34;
    v10 = v35;
    v37 = (__int64 *)&off_2BEBE68;
    sub_227B7A0(&v37);
  }
  v28 = sub_16B5B90(a1, a4, a5);
  v11 = *(_QWORD *)(a1 + 8);
  v29 = v12;
  sub_168B9B0((__int64)&v32, v11 + 8, 6921);
  sub_AEC220((unsigned __int8 **)&v32, v9, v10);
  sub_1582CA0((__int64)&v37, &v32);
  v13 = *(unsigned int *)(a1 + 80);
  v14 = *(_QWORD *)(a1 + 64);
  v30 = v28;
  v15 = *(_QWORD *)(a1 + 8);
  v31 = v29;
  sub_16DE8D0(
    v15,
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(v14 + 8 * v13),
    (__int64)&v37,
    a3,
    *(double *)a7.m128_u64,
    v16,
    v28,
    v29,
    nullptr,
    0);
  if ( v37 && v38 )
    sub_1580C40(v38, (unsigned __int64)v37);
  if ( v32.m128_u64[0] && v32.m128_u64[1] )
    sub_1580C40(v32.m128_u64[1], v32.m128_u64[0]);
  if ( v34 != v36 )
    operator delete(v34);
  return v22;
}
