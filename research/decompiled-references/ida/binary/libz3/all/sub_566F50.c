_QWORD *__fastcall sub_566F50(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  int v12; // eax
  void *v14; // [rsp+8h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), a2[5]);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), a2[6]);
  v4 = (_QWORD *)sub_186B270(0x38u);
  v5 = a2[1];
  v6 = v4;
  *v4 = qword_1C67518;
  v7 = *(_QWORD *)(v3 + 16);
  v6[1] = v5;
  v6[2] = 0;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 8));
    v14 = (void *)v8.m128i_i64[0];
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = *(_QWORD **)(v3 + 16);
    v6[2] = v9 + 1;
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_DWORD *)(v3 + 24);
  v6[5] = v2;
  v6[6] = v3;
  *((_DWORD *)v6 + 6) = v12;
  *((_DWORD *)v6 + 8) = *(_DWORD *)(v5 + 8);
  *v6 = &off_1C67810;
  sub_565150(v6);
  return v6;
}

