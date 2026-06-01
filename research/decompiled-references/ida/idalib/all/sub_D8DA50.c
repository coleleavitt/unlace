__int64 __fastcall sub_D8DA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int8 v6; // r13
  __m128 v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rbp
  _DWORD *v12; // r8
  _DWORD *v13; // r12
  _DWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE *v23; // [rsp+10h] [rbp-D8h]
  __int64 v24; // [rsp+18h] [rbp-D0h] BYREF
  int v25; // [rsp+20h] [rbp-C8h]
  int v26; // [rsp+24h] [rbp-C4h]
  __int64 v27; // [rsp+28h] [rbp-C0h] BYREF
  __m128i v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-A8h]
  __int64 *v30; // [rsp+48h] [rbp-A0h]
  _BYTE v31[24]; // [rsp+50h] [rbp-98h] BYREF
  int v32; // [rsp+68h] [rbp-80h]
  __int64 v33; // [rsp+70h] [rbp-78h]
  unsigned int v34; // [rsp+78h] [rbp-70h]
  _BYTE v35[104]; // [rsp+80h] [rbp-68h] BYREF

  v6 = a5;
  v24 = a1;
  v26 = a5;
  v8 = _mm_loadh_ps((const double *)&v24);
  v27 = a2;
  v22 = (__m128i)v8;
  v9 = sub_CFDF60(a4);
  v10 = _mm_load_si128(&v22);
  v29 = a3;
  v11 = *(_QWORD *)(v9 + 32);
  v30 = &v27;
  v28 = v10;
  v12 = *(_DWORD **)(v11 + 280);
  v13 = &v12[6 * *(unsigned int *)(v11 + 288)];
  if ( v13 != v12 )
  {
    v14 = *(_DWORD **)(v11 + 280);
    v25 = v6;
    v22.m128i_i64[0] = (__int64)&v28;
    v23 = v35;
    do
    {
      if ( *(_BYTE *)(v11 + 648) )
      {
        v15 = (unsigned int)(*(_DWORD *)a3 + v14[2]);
        sub_E23220(v31, *(_QWORD *)(a3 + 32), v15, (unsigned int)v15);
        if ( v32
          || !v33
          || *(_DWORD *)(*(_QWORD *)(v33 + 32) + 24LL) == v34
          || !v34
          || (*(_BYTE *)(v33 + v34 + 28) & 0x10) != 0 )
        {
          if ( !(unsigned __int8)sub_D8D500(v22.m128i_i64[0], v14, 1u) )
          {
            v22.m128i_i8[0] = 0;
            sub_E232A0(v31);
            return v22.m128i_u8[0];
          }
        }
        else
        {
          v16 = (unsigned int)(*(_DWORD *)a4 + v14[2]);
          sub_E23220(v23, *(_QWORD *)(a4 + 32), v16, (unsigned int)v16);
          sub_D8D070((__int64)v23);
          sub_E232A0(v23);
        }
        sub_E232A0(v31);
      }
      else
      {
        result = sub_D8D500(v22.m128i_i64[0], v14, v25);
        if ( !(_BYTE)result )
          return result;
      }
      v14 += 6;
    }
    while ( v13 != v14 );
  }
  v18 = *(_QWORD *)(v11 + 8);
  v19 = v18 + 32LL * *(unsigned int *)(v11 + 16);
  if ( v18 == v19 )
  {
LABEL_20:
    sub_E24D00(a4);
    return 1;
  }
  else
  {
    LODWORD(v23) = (unsigned __int8)v26;
    while ( 1 )
    {
      v20 = (unsigned int)(*(_DWORD *)a4 + *(_DWORD *)(v18 + 8));
      sub_E23220(v31, *(_QWORD *)(a4 + 32), v20, (unsigned int)v20);
      v21 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)(v18 + 8));
      sub_E23220(v35, *(_QWORD *)(a3 + 32), v21, (unsigned int)v21);
      v22.m128i_i8[0] = sub_D8DA50(v24, v27, v35, v31, (unsigned int)v23);
      sub_E232A0(v35);
      if ( !v22.m128i_i8[0] )
        break;
      sub_E232A0(v31);
      v18 += 32;
      if ( v18 == v19 )
        goto LABEL_20;
    }
    sub_E232A0(v31);
    return v22.m128i_u8[0];
  }
}
