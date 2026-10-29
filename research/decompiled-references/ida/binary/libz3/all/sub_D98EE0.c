__m128i *__fastcall sub_D98EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v3)(__int64); // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __m128i *v6; // rax
  __m128i v7; // xmm0
  __m128i *v8; // r13
  int v9; // eax
  __m128i *result; // rax
  __m128i v11; // xmm0
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rbp
  __int64 (__fastcall **v14)(__int64); // rbx
  __int64 (__fastcall **v15)(__int64); // rbp
  __int64 (__fastcall *v16)(__int64); // rsi
  __int64 (__fastcall **v17)(__int64); // rdi
  __int64 (__fastcall *v18)(__int64); // rsi
  bool v19; // zf
  __int64 (__fastcall **v20)(__int64); // rax
  __int64 (__fastcall **v21)(__int64); // rbx
  __int64 (__fastcall **v22)(__int64); // rdi
  __int64 (__fastcall **v23)(__int64); // rdi

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  v3 = (__int64 (__fastcall ***)(__int64))v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 128);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v4 = sub_1377690(*(_QWORD *)(a1 + 48), a2);
    v5 = (_DWORD *)v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 16);
    v6 = (__m128i *)sub_186B270(0x40u);
    v7 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
    v6[1].m128i_i8[8] = 1;
    v8 = v6;
    v6->m128i_i32[2] = 0;
    v6[1].m128i_i64[0] = 0;
    v6->m128i_i64[0] = (__int64)&off_1C750F0;
    v6[2] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v3);
    if ( !v3 )
    {
      v6[3].m128i_i64[0] = (__int64)v5;
      v6[3].m128i_i8[8] = 1;
      if ( v5 && !v5[4] )
      {
        (**(void (__fastcall ***)(_DWORD *))v5)(v5);
        sub_186B220(v5);
      }
      return v8;
    }
    v9 = *((_DWORD *)v3 + 32);
    v8[3].m128i_i64[0] = (__int64)v5;
    *((_DWORD *)v3 + 32) = v9 + 1;
    v8[3].m128i_i8[8] = 1;
    if ( v5 && !v5[4] )
    {
      (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      sub_186B220(v5);
      v9 = *((_DWORD *)v3 + 32) - 1;
    }
  }
  else
  {
    result = (__m128i *)sub_186B270(0x40u);
    v11 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
    result[1].m128i_i8[8] = 1;
    v8 = result;
    result->m128i_i32[2] = 0;
    result[1].m128i_i64[0] = 0;
    result->m128i_i64[0] = (__int64)&off_1C750F0;
    result[2] = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v3);
    if ( !v3 )
    {
      result[3].m128i_i64[0] = 0;
      result[3].m128i_i8[8] = 0;
      return result;
    }
    result[3].m128i_i64[0] = 0;
    v9 = *((_DWORD *)v3 + 32);
    v8[3].m128i_i8[8] = 0;
  }
  *((_DWORD *)v3 + 32) = v9;
  if ( v9 )
    return v8;
  v12 = **v3;
  if ( v12 == sub_38D2C0 )
  {
    v13 = *((unsigned int *)v3 + 6);
    v14 = v3[2];
    *v3 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
    v15 = &v14[2 * v13];
    if ( v14 != v15 )
    {
      while ( (unsigned __int64)*v14 <= 1 )
      {
        v14 += 2;
        if ( v15 == v14 )
          goto LABEL_36;
      }
      if ( v14 != v15 )
      {
        v16 = *v14;
        v17 = v3[1];
        if ( *v14 )
          goto LABEL_34;
        while ( 1 )
        {
          v18 = v14[1];
          if ( v18 )
          {
            v19 = (*((_DWORD *)v18 + 2))-- == 1;
            if ( v19 )
              sub_15D7BC0(v17, v18);
          }
          v20 = v14 + 2;
          if ( v15 == v14 + 2 )
            break;
          while ( 1 )
          {
            v16 = *v20;
            v14 = v20;
            if ( (unsigned __int64)*v20 > 1 )
              break;
            v20 += 2;
            if ( v15 == v20 )
              goto LABEL_36;
          }
          if ( v20 == v15 )
            break;
          v17 = v3[1];
LABEL_34:
          v19 = (*((_DWORD *)v16 + 2))-- == 1;
          if ( v19 )
          {
            sub_15D7BC0(v17, v16);
            v17 = v3[1];
          }
        }
      }
    }
LABEL_36:
    sub_1695230(v3 + 9);
    v21 = v3[8];
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v21)(v3[8]);
      sub_186B220(v21);
    }
    v22 = v3[5];
    if ( v22 )
      sub_186B220(v22);
    v23 = v3[2];
    if ( v23 )
      sub_186B220(v23);
  }
  else
  {
    v12((__int64)v3);
  }
  sub_186B220(v3);
  return v8;
}

