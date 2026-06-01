__int64 __fastcall sub_4FCA10(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  bool v16; // zf
  int v18; // r15d
  const char *v19; // r13
  __int64 (__fastcall *v20)(__int64, __int64 *, __int64 *, const char *); // rax
  const char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // rax
  unsigned int v29; // ebx
  char v31; // [rsp-4h] [rbp-68h]
  int v32; // [rsp+0h] [rbp-64h] BYREF
  __int64 v33; // [rsp+4h] [rbp-60h] BYREF
  const char *v34; // [rsp+Ch] [rbp-58h] BYREF
  __int128 v35; // [rsp+14h] [rbp-50h]
  unsigned __int64 v36; // [rsp+24h] [rbp-40h]

  v16 = *(_QWORD *)(a3 + 8) == 0;
  v36 = __readfsqword(0x28u);
  v35 = 0;
  v34 = nullptr;
  if ( v16 )
  {
    v19 = &s1;
    v18 = 0;
    goto LABEL_3;
  }
  v18 = 0;
  v19 = *(const char **)a3;
  if ( *(_DWORD *)(a6 + 48) != 1 )
    goto LABEL_3;
  if ( *v19 == 43 )
  {
    v18 = 1;
  }
  else
  {
    if ( *v19 != 45 )
      goto LABEL_3;
    v18 = -1;
  }
  v19 = (const char *)skip_spaces(v19 + 1);
LABEL_3:
  v20 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, const char *))(*(_QWORD *)a1 + 472LL);
  if ( v20 != sub_4FC490 )
  {
    v21 = (const char *)&v33;
    if ( (unsigned __int8)v20(a1, &v33, (__int64 *)&v34, v19) )
      goto LABEL_6;
LABEL_16:
    if ( !a4 )
    {
      v21 = &s1;
      if ( (_QWORD)v35 )
      {
        v21 = v34;
        sub_169630((int)"%s", (__int64)v34, v22, v23, v24, v25, (__m128)0LL, a8, a9, a10, v26, v27, a13, a14, v31);
      }
      else
      {
        sub_169630((int)"%s", (__int64)&s1, v22, v23, v24, v25, (__m128)0LL, a8, a9, a10, v26, v27, a13, a14, v31);
      }
    }
    goto LABEL_19;
  }
  v21 = "%d";
  if ( (unsigned int)qsscanf(v19, "%d", &v32) != 1 )
  {
    v21 = "Failed to parse value representation '%s'";
    sub_169A50((__int64 *)&v34, (__int64)"Failed to parse value representation '%s'", v19);
    goto LABEL_16;
  }
  v33 = v32;
LABEL_6:
  if ( a5 && v33 < 0 )
  {
    if ( !a4 )
      sub_169630(
        (int)"Expected a positive value",
        (__int64)v21,
        v22,
        v23,
        v24,
        v25,
        (__m128)0LL,
        a8,
        a9,
        a10,
        v26,
        v27,
        a13,
        a14,
        v31);
LABEL_19:
    v29 = 0;
    goto LABEL_20;
  }
  if ( a2 )
  {
    v28 = v33;
    if ( v18 == -1 )
    {
      v33 = *a2 - v33;
      v28 = v33;
    }
    else if ( v18 == 1 )
    {
      v28 = *a2 + v33;
      v33 = v28;
    }
    *a2 = v28;
  }
  v29 = 1;
LABEL_20:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34, v21);
  }
  return v29;
}
