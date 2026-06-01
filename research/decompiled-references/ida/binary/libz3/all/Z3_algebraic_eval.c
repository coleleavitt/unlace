__int64 __fastcall Z3_algebraic_eval(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r13d
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rsi
  int v22[2]; // [rsp+18h] [rbp-100h] BYREF
  __int64 v23; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v24[8]; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-E0h]
  _BYTE v27[16]; // [rsp+40h] [rbp-D8h] BYREF
  int v28[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-C0h]
  __m128 v30; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+70h] [rbp-A8h]
  _QWORD v32[3]; // [rsp+78h] [rbp-A0h] BYREF
  int *v33; // [rsp+90h] [rbp-88h] BYREF
  int v34; // [rsp+98h] [rbp-80h]
  __int128 v35; // [rsp+A0h] [rbp-78h]
  __int128 v36; // [rsp+B0h] [rbp-68h]
  __int64 v37; // [rsp+C0h] [rbp-58h]
  __int16 v38; // [rsp+C8h] [rbp-50h]
  __int64 v39; // [rsp+D0h] [rbp-48h]

  v4 = a3;
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29F1D0(a1, a2, a3, a4);
  v25 = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v26 = a1 + 2264;
  v7 = sub_177C960(a1 + 2264);
  v8 = *(_QWORD *)(a1 + 232);
  v31 = v7;
  v32[0] = 0;
  v32[1] = 0;
  sub_1632D10(v27, v8, a1 + 2264, 0, 1);
  if ( (unsigned __int8)sub_1633040(v27, a2, &v25) && (unsigned int)sub_177C8F0(v25) < v4 )
  {
    if ( !*(_QWORD *)(a1 + 304) )
      sub_16669E0(a1 + 296);
    v29 = sub_1666310();
    v11 = v29;
    *(_QWORD *)v28 = 0;
    *(_QWORD *)v22 = v28;
    if ( (unsigned __int8)sub_27A130(a1, v4, a4, v28) )
    {
      v12 = *(_QWORD *)(a1 + 232);
      v38 = 0;
      v39 = v12;
      v34 = 0;
      v33 = &off_1C4C9C8;
      v37 = 0;
      v35 = 0;
      v36 = 0;
      sub_24FD10(&v23, a1, (__int64)&v33);
      sub_15B10B0(a1 + 96);
      sub_18561B0((unsigned int)v24, *(_DWORD *)(a1 + 100), (unsigned int)&v33, (unsigned int)v24, v13, v14);
      v30 = _mm_loadh_ps((const double *)v22);
      v15 = sub_17B6810(v11, &v25, &v30);
      v9 = -(v15 != 0);
      if ( v15 > 0 )
        v9 = 1;
      sub_1856400(v24);
      sub_24E910(&v23);
      v33 = &off_1C4C9C8;
      if ( (_BYTE)v38 )
        sub_18296D0(v39);
      if ( HIBYTE(v38) )
        sub_1829760(v39);
    }
    else
    {
      sub_24EA30(a1, 3u, nullptr);
      v9 = 0;
    }
    v16 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 )
    {
      v17 = *(unsigned int *)(*(_QWORD *)v28 - 4LL);
      if ( !(_DWORD)v17 )
        goto LABEL_24;
      v18 = 8 * v17;
      v19 = 0;
      do
      {
        v20 = v19 + v16;
        v19 += 8;
        sub_17B1E70(v29, v20);
        v16 = *(_QWORD *)v28;
      }
      while ( v18 != v19 );
      if ( *(_QWORD *)v28 )
      {
LABEL_24:
        *(_DWORD *)(v16 - 4) = 0;
        sub_186B220((void *)(v16 - 8));
      }
    }
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    v9 = 0;
  }
  sub_16329F0(v27);
  sub_182EF00(v31, v32);
  if ( v25 )
    sub_177F260(v26);
  if ( v6 )
    byte_1C7EBA0 = 1;
  return v9;
}

