__int64 __fastcall sub_112430(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  const __m128i *v7; // rax
  __m128i v10; // xmm1
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  const char *v17; // rax
  _QWORD v18[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v19; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-B8h]
  __int64 v21; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-A0h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  __int64 v25; // [rsp+60h] [rbp-88h]
  __int64 v26; // [rsp+68h] [rbp-80h]
  __int128 v27; // [rsp+70h] [rbp-78h]
  __int128 v28; // [rsp+80h] [rbp-68h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp-48h]
  __int16 v32; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a1 != 0;
  v6 = a3;
  LOBYTE(v6) = a2 != 0 && a1 != 0;
  if ( !(_BYTE)v6 )
    return v6;
  if ( *(_DWORD *)a2 == 62 )
    return 0;
  v7 = *(const __m128i **)(a1 + 480);
  v20 = a2;
  v21 = 0;
  v10 = _mm_loadl_epi64(v7 + 7);
  v22 = 0xFFFFFFFF00000000LL;
  LODWORD(v7) = *(_DWORD *)a4;
  v24 = 0;
  v25 = -1;
  v19 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)a1);
  v23 = 0;
  v27 = 0;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v28 = 0;
  switch ( (int)v7 )
  {
    case 11:
      LODWORD(v30) = 8 * (*(_DWORD *)(a4 + 36) - *(_DWORD *)(a4 + 68));
      if ( !(unsigned __int8)sub_110160(&v19, a2, (int *)a4, 1) )
        goto LABEL_10;
      v12 = sub_1100E0((__int64)&v19, 0);
      goto LABEL_9;
    case 12:
    case 13:
    case 32:
    case 33:
      v12 = sub_111CF0((__int64)&v19, a4);
      goto LABEL_9;
    case 14:
      v12 = sub_111200((__int64)&v19, a4);
LABEL_9:
      if ( !v12 )
        goto LABEL_10;
      goto LABEL_25;
    case 23:
    case 24:
      if ( !(unsigned __int8)sub_110EB0(&v19, v5, (_DWORD *)a4) )
        goto LABEL_10;
      if ( *(_BYTE *)(a4 + 32) != 4
        || (v14 = *(_QWORD *)(a2 + 16)) == 0
        || !(unsigned __int8)sub_11F4D0(v14, v10.m128i_i64[0], *(_QWORD *)(a4 + 40), 0)
        || (v15 = *(_QWORD *)(a2 + 16), *(_DWORD *)(v15 + 68) != *(_DWORD *)(a4 + 36)) )
      {
LABEL_25:
        v16 = a4;
        if ( (unsigned __int8)sub_1106C0(&v19, (int *)a4) )
          goto LABEL_21;
LABEL_10:
        v13 = v26;
        v6 = 0;
        goto LABEL_11;
      }
      v16 = a4;
      if ( !(unsigned __int8)sub_1106C0(&v19, (int *)a4) )
        goto LABEL_10;
      if ( v15 )
      {
        v18[1] = 0;
        v18[0] = 0xFFFFFFFF00000000LL;
        sub_11FC20(v18, a4);
        sub_116350(v15 + 32, v18);
        v16 = v10.m128i_i64[0];
        sub_11A350(v15 + 48, v10.m128i_i64[0], v31, 1, *(_QWORD *)(v15 + 24), 0);
        *(_DWORD *)v15 = 22;
        sub_1166E0(v18);
      }
LABEL_21:
      v17 = (const char *)sub_1AF340(a4, v16);
      sub_9BE60(a1, (__int64)"div found: %s", v17);
      v13 = v26;
LABEL_11:
      if ( v13 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v13);
      }
LABEL_5:
      sub_1166E0(&v22);
      return v6;
    default:
      v6 = 0;
      goto LABEL_5;
  }
}
