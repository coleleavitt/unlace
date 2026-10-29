__int64 __fastcall sub_CC39A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned int v16; // r12d
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // rax
  int v22; // esi
  int v23; // edi
  __int64 v24; // r9
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  unsigned int v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+10h] [rbp-68h] BYREF
  int v28; // [rsp+18h] [rbp-60h] BYREF
  __m128i v29[5]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(a1 + 586) )
    return (unsigned int)sub_CC3960(a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
  if ( (*(_BYTE *)(v5 + 1) & 6) != 0 || (v21 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v5 + 8)), !BYTE4(v21)) )
    v8 = 13;
  else
    v8 = v21;
  v9 = *(unsigned int *)(a1 + 544);
  v10 = *(_QWORD *)(a1 + 528);
  if ( (_DWORD)v9 )
  {
    v11 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( a2 == *v12 )
    {
LABEL_7:
      sub_CBAA70((__m128 *)v29, v12, (_QWORD *)(16 * v9 + v10), a1 + 528, 1);
      v14 = v29[0].m128i_i64[0];
      goto LABEL_8;
    }
    v22 = 1;
    if ( v13 != -4096 )
    {
      do
      {
        v23 = v22 + 1;
        v11 = (v9 - 1) & (v22 + v11);
        v12 = (__int64 *)(v10 + 16LL * v11);
        v24 = *v12;
        if ( a2 == *v12 )
          goto LABEL_7;
        v22 = v23;
      }
      while ( v24 != -4096 );
    }
  }
  sub_CBAA70(
    (__m128 *)v29,
    (_QWORD *)(v10 + 16LL * (unsigned int)v9),
    (_QWORD *)(v10 + 16LL * (unsigned int)v9),
    a1 + 528,
    1);
  v14 = v29[0].m128i_i64[0];
LABEL_8:
  v25 = v14;
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 528) + 16LL * *(unsigned int *)(a1 + 544));
  sub_CBAA70((__m128 *)v29, v15, v15, a1 + 528, 1);
  if ( v29[0].m128i_i64[0] == v25 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v5) )
    {
      v29[0].m128i_i64[0] = a2 | 2;
      v26 = sub_CBEFF0(a1, v29[0].m128i_i64, v8, 1u, 0, 1, 0);
      v29[0].m128i_i64[0] = a2 | 4;
      v16 = sub_CA5390(a1, v8, v26, v29[0].m128i_i64);
      if ( (_BYTE)v16 )
      {
        v18 = v26;
        v19 = a2 | 4;
        if ( *(_BYTE *)(a1 + 584)
          || (v29[0].m128i_i64[0] = a2 | 4, v20 = sub_CA48C0(a1, v8, v26, v29[0].m128i_i64), v18 = v26, v20) )
        {
          v27 = a2;
          v28 = v18;
          sub_CBAAE0(v29, a1 + 528, &v27, &v28, v18, v19);
          return v16;
        }
      }
    }
    return 0;
  }
  v29[0].m128i_i64[0] = a2 | 4;
  return (unsigned int)sub_CA48C0(a1, v8, *(_DWORD *)(v25 + 8), v29[0].m128i_i64);
}
