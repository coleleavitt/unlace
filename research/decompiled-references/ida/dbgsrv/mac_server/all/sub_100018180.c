/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018180
// Address: 0x0000000100018180

//----- (0000000100018180) ----------------------------------------------------
__int64 __fastcall sub_100018180(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // r12d
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  __m128i v11; // xmm0
  _QWORD v13[2]; // [rsp+0h] [rbp-260h] BYREF
  __int64 v14; // [rsp+10h] [rbp-250h] BYREF
  __int128 v15; // [rsp+18h] [rbp-248h]
  int v16; // [rsp+28h] [rbp-238h]
  char v17; // [rsp+2Ch] [rbp-234h]
  __int64 v18; // [rsp+30h] [rbp-230h]
  char v19; // [rsp+38h] [rbp-228h]
  __int128 v20; // [rsp+48h] [rbp-218h]
  __int128 v21; // [rsp+58h] [rbp-208h]
  __int64 v22; // [rsp+68h] [rbp-1F8h]
  char v23; // [rsp+70h] [rbp-1F0h]
  __int64 v24; // [rsp+78h] [rbp-1E8h]
  __int128 v25; // [rsp+80h] [rbp-1E0h]
  __int128 v26; // [rsp+90h] [rbp-1D0h]
  __int16 v27; // [rsp+A0h] [rbp-1C0h]
  int v28; // [rsp+A8h] [rbp-1B8h]
  __int128 v29; // [rsp+C8h] [rbp-198h]
  __int128 v30; // [rsp+D8h] [rbp-188h]
  __int128 v31; // [rsp+E8h] [rbp-178h]
  __int128 v32; // [rsp+F8h] [rbp-168h]
  __int128 v33; // [rsp+108h] [rbp-158h]
  __int128 v34; // [rsp+118h] [rbp-148h]
  __int128 v35; // [rsp+128h] [rbp-138h]
  __int128 v36; // [rsp+138h] [rbp-128h]
  __int128 v37; // [rsp+148h] [rbp-118h]
  __int128 v38; // [rsp+158h] [rbp-108h]
  __int128 v39; // [rsp+168h] [rbp-F8h]
  __int128 v40; // [rsp+178h] [rbp-E8h]
  __int128 v41; // [rsp+188h] [rbp-D8h]
  __int128 v42; // [rsp+198h] [rbp-C8h]
  _BYTE v43[19]; // [rsp+1A8h] [rbp-B8h] BYREF
  int v44; // [rsp+1BCh] [rbp-A4h]
  __int128 v45; // [rsp+1C0h] [rbp-A0h]
  __int128 v46; // [rsp+1D0h] [rbp-90h]
  int v47; // [rsp+1E0h] [rbp-80h]
  __int128 v48; // [rsp+1E8h] [rbp-78h]
  __int128 v49; // [rsp+1F8h] [rbp-68h]
  _QWORD v50[2]; // [rsp+208h] [rbp-58h] BYREF
  char v51; // [rsp+218h] [rbp-48h]
  __m128i v52; // [rsp+220h] [rbp-40h] BYREF

  v13[0] = &off_1000A7F20;
  v13[1] = &v14;
  v14 = 0xFFFFFFFFLL;
  v15 = -1;
  v16 = 8;
  v17 = 1;
  v18 = a2;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = -1;
  v23 = 0;
  v24 = -1;
  v44 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  v45 = -1;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v48 = 0;
  if ( !(unsigned __int8)sub_10000FA10((__int64)v13) )
    goto LABEL_17;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 == 13 )
  {
    v5 = (*(unsigned __int8 *)(a1 + 24) << 24) | 0xC;
  }
  else
  {
    v5 = -1;
    if ( !v4 )
      v5 = (*(unsigned __int8 *)(a1 + 24) << 24) | 7;
  }
  v6 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
    goto LABEL_7;
  v10 = sub_100010140((__int64)v13, 0, 0, 0);
  if ( ((v28 == v5) & v10) == 0 )
  {
    v6 = *((_QWORD *)&v20 + 1);
    if ( *((_QWORD *)&v20 + 1) )
    {
LABEL_7:
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(v20 + v7) == v5 )
        {
          v9 = sub_100010140((__int64)v13, v8, 0, 0);
          if ( ((v28 == v5) & v9) != 0 )
            goto LABEL_13;
          v6 = *((_QWORD *)&v20 + 1);
        }
        ++v8;
        v7 += 20;
        if ( v8 >= v6 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
LABEL_13:
  if ( *(_QWORD *)(a3 + 8) != 16
    || (v50[0] = off_1000A79F8, v50[1] = &v52, v51 = 0, sub_100010C80((__int64)v13, (__int64)v50), v51 != 1) )
  {
LABEL_17:
    LODWORD(a3) = 0;
    goto LABEL_18;
  }
  v11 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)a3), v52);
  LOBYTE(a3) = _mm_testz_si128(v11, v11);
LABEL_18:
  sub_10001CA40((__int64)v13);
  return (unsigned int)a3;
}
// 1000A79F8: using guessed type __int64 (__fastcall *off_1000A79F8[38])();
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
