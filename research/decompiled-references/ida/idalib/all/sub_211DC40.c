__int64 __fastcall sub_211DC40(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax
  int v9; // edx
  _QWORD *v10; // rbx
  const __m128i *v11; // rcx
  __int64 (*v12)(void); // rdx
  __int64 v13; // rax
  __int8 *v14; // rcx
  __int64 v15; // rdi
  const char *v16; // [rsp+0h] [rbp-48h] BYREF
  int v17; // [rsp+8h] [rbp-40h]
  _BYTE v18[12]; // [rsp+Ch] [rbp-3Ch]
  __int16 v19; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(a1[1] + 152LL);
  if ( *(_DWORD *)(v5 + 312) != 4 || (v9 = *(_DWORD *)(v5 + 320)) == 0 || v9 == 6 )
  {
    v6 = ".seh_* directives are not supported on this target";
LABEL_3:
    v7 = a1[1];
    v16 = v6;
    v19 = 259;
    return sub_2100A30(v7, a3, (__int64)&v16);
  }
  v10 = (_QWORD *)a1[13];
  if ( !v10 || v10[1] )
  {
    v6 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  v11 = (const __m128i *)v10[14];
  if ( (const __m128i *)v10[13] == v11 )
  {
    v12 = *(__int64 (**)(void))(*a1 + 88LL);
    v13 = 1;
    if ( v12 != sub_2119CA0 )
    {
      v13 = v12();
      v11 = (const __m128i *)v10[14];
    }
    v16 = (const char *)v13;
    v17 = a2;
    *(_QWORD *)v18 = 0xAFFFFFFFFLL;
    if ( (const __m128i *)v10[15] == v11 )
    {
      return sub_211D530((__int64)(v10 + 13), v11, (const __m128i *)&v16);
    }
    else
    {
      v14 = &v11[1].m128i_i8[8];
      *(__m128i *)(v14 - 24) = _mm_load_si128((const __m128i *)&v16);
      result = *(_QWORD *)&v18[4];
      *((_QWORD *)v14 - 1) = *(_QWORD *)&v18[4];
      v10[14] = v14;
    }
  }
  else
  {
    v15 = a1[1];
    v19 = 259;
    v16 = "If present, PushMachFrame must be the first UOP";
    return sub_2100A30(v15, a3, (__int64)&v16);
  }
  return result;
}
