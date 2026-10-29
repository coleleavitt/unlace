__int64 __fastcall sub_A437A0(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  __int64 result; // rax
  __int64 v11; // rbp
  size_t v12; // r13
  __int64 v13; // rax
  const void *v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+7h] [rbp-51h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *a1;
  v16 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(a1);
  if ( v9 )
    v9 = *(_BYTE *)(a3 + 16) ^ 1;
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a3 + 16) )
      goto LABEL_5;
  }
  else if ( !*(_BYTE *)(a3 + 16) )
  {
    *(_QWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_BYTE *)(a3 + 16) = 1;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
             a1,
             a2,
             a5,
             v9,
             &v16,
             &v17);
  if ( !(_BYTE)result )
  {
LABEL_5:
    if ( v16 )
    {
      *(__m128i *)a3 = _mm_loadu_si128(a4);
      result = a4[1].m128i_i64[0];
      *(_QWORD *)(a3 + 16) = result;
    }
    return result;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1)
    && (v11 = sub_2278BC0(a1), *(_DWORD *)(v11 + 32) == 1)
    && (v12 = j__strlen("<none>"),
        v13 = *(_QWORD *)(v11 + 80),
        v18[0] = *(_QWORD *)(v11 + 72),
        v18[1] = v13,
        v14 = (const void *)sub_A41530((__int64)v18, 32),
        v12 == v15)
    && (!v12 || !memcmp(v14, "<none>", v12)) )
  {
    *(__m128i *)a3 = _mm_loadu_si128(a4);
    *(_QWORD *)(a3 + 16) = a4[1].m128i_i64[0];
  }
  else
  {
    sub_A42090(a1, a3);
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v17);
}
