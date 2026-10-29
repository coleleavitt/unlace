__int64 __fastcall eval_expr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 current_extlang; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  __int64 result; // rax
  char *v11; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rax

  current_extlang = get_current_extlang(a1);
  if ( current_extlang )
  {
    v8 = current_extlang;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(current_extlang + 64);
    if ( v9 )
    {
      result = v9(a1, a2, a3, a4);
    }
    else
    {
      if ( a4 )
        sub_35A790((char **)a4);
      result = 0;
    }
    --*(_DWORD *)(v8 + 12);
  }
  else
  {
    v11 = *(char **)a4;
    if ( *(_QWORD *)(a4 + 16) <= 0x15u )
    {
      v13 = qvector_reserve(a4, v11, 22, 1);
      *(_QWORD *)a4 = v13;
      v11 = (char *)v13;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8380);
    *(_QWORD *)(a4 + 8) = 22;
    *(__m128i *)v11 = si128;
    *(_QWORD *)(v11 + 13) = 0x6465726574736967LL;
    *(_BYTE *)(*(_QWORD *)a4 + 21LL) = 0;
    return eval_idc_expr(a1, a2, a3, a4);
  }
  return result;
}
