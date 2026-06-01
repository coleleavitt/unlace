__int64 __fastcall sub_B06320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // esi
  __int64 result; // rax
  _BYTE *v10; // r12
  _BYTE *v11; // rbp
  _BYTE *v12; // r13
  size_t v13; // rax
  char *v14; // rsi
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  __m128i v17; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v15.m128i_i64[0] = a3;
  if ( v4 )
  {
    sub_995540(a2, "(");
    v5 = j__strlen("\n");
    sub_F07C00(v4, a2, 0, v15.m128i_i32[0], 0, 0, (__int64)"\n", v5);
    sub_995540(a2, ")");
  }
  v16 = a2;
  v15 = (__m128i)_mm_loadh_ps((const double *)v15.m128i_i64);
  v6 = sub_995540(a2, " match(");
  v7 = sub_EBD870(v6, *(_QWORD *)(a1 + 48));
  sub_995540(v7, ")");
  v8 = *(_DWORD *)(a1 + 56);
  v17 = _mm_load_si128(&v15);
  if ( v8 )
  {
    sub_995540(a2, " adjust_args(nothing:");
    sub_AFAF10(
      &v17,
      &v17.m128i_i64[1],
      *(char **)(a1 + 64),
      (char *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 56)));
    sub_995540(a2, ")");
    if ( !*(_DWORD *)(a1 + 72) )
    {
LABEL_5:
      if ( !*(_DWORD *)(a1 + 88) )
        goto LABEL_6;
LABEL_10:
      sub_995540(a2, " adjust_args(need_device_addr:");
      sub_AFAF10(
        &v17,
        &v17.m128i_i64[1],
        *(char **)(a1 + 96),
        (char *)(*(_QWORD *)(a1 + 96) + 8LL * *(unsigned int *)(a1 + 88)));
      sub_995540(a2, ")");
      result = *(unsigned int *)(a1 + 104);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_11;
    }
  }
  else if ( !*(_DWORD *)(a1 + 72) )
  {
    goto LABEL_5;
  }
  sub_995540(a2, " adjust_args(need_device_ptr:");
  sub_AFAF10(
    &v17,
    &v17.m128i_i64[1],
    *(char **)(a1 + 80),
    (char *)(*(_QWORD *)(a1 + 80) + 8LL * *(unsigned int *)(a1 + 72)));
  sub_995540(a2, ")");
  if ( *(_DWORD *)(a1 + 88) )
    goto LABEL_10;
LABEL_6:
  result = *(unsigned int *)(a1 + 104);
  if ( !(_DWORD)result )
    return result;
LABEL_11:
  sub_995540(a2, " append_args(");
  v10 = *(_BYTE **)(a1 + 112);
  v11 = v10;
  v12 = &v10[56 * *(unsigned int *)(a1 + 104)];
  if ( v10 != v12 )
  {
    while ( 1 )
    {
      sub_995540(a2, "interop(");
      if ( *v11 )
      {
        if ( v11[1] )
        {
          v13 = j__strlen("target,targetsync");
          v14 = "target,targetsync";
        }
        else
        {
          v13 = j__strlen("target");
          v14 = "target";
        }
      }
      else
      {
        v13 = j__strlen("targetsync");
        v14 = (char *)"targetsync";
      }
      v11 += 56;
      sub_9954E0(a2, v14, v13);
      sub_995540(a2, ")");
      if ( v12 == v11 )
        break;
      if ( v10 != v11 )
        sub_995540(a2, ", ");
    }
  }
  return sub_995540(a2, ")");
}
