__int64 __fastcall sub_2E2060(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v15; // r12
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rbx
  const char *v19; // rsi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rsi
  char v26; // [rsp+0h] [rbp-88h]
  unsigned int v27; // [rsp+Ch] [rbp-7Ch]
  unsigned int v28; // [rsp+Ch] [rbp-7Ch]
  const char *v29; // [rsp+18h] [rbp-70h] BYREF
  char *v30; // [rsp+20h] [rbp-68h] BYREF
  __int128 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-48h] BYREF
  __int128 v33; // [rsp+48h] [rbp-40h]
  unsigned __int64 v34; // [rsp+58h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v9 = *a1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 720LL))(*a1, 0);
  v29 = (const char *)v10;
  if ( v10 == -1 || (~((unsigned __int16)get_flags_ex(v10, 4) >> 8) & 6) != 0 )
    return 0;
  v12 = sub_1E8D00(v9 + 576);
  if ( v12 && (*(_BYTE *)(v12 + 72) & 2) != 0 )
  {
    v15 = &s1;
    if ( *(_QWORD *)(v12 + 40) )
      v15 = *(const char **)(v12 + 32);
    v30 = nullptr;
    v31 = 0;
    if ( v15 )
    {
      v16 = strlen(v15);
      v17 = v16 + 1;
      v18 = v16;
      v30 = (char *)qvector_reserve(&v30, 0, v16 + 1, 1);
      *(_QWORD *)&v31 = v17;
      memmove(v30, v15, v18);
      v30[v18] = 0;
    }
  }
  else
  {
    v30 = nullptr;
    v31 = 0;
  }
  v19 = v29;
  v33 = 0;
  v32 = 0;
  v20 = sub_2E16C0(&v32, (__int64)v29, (const char **)&v30, (__m128)0LL, a3, a4, a5, v13, v14, a8, a9);
  if ( v20 == 1 )
  {
    v19 = (const char *)&v29;
    sub_1697D0(
      (int)"BUTTON CANCEL NONE\n"
           "Find a register value\n"
           "Address :%$\n"
           "Register:%q\n"
           "The value of the register before executing the instruction:\n"
           "%q",
      (__int64)&v29,
      (__int64)&v30,
      (__int64)&v32,
      v21,
      v22,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v23,
      v24,
      a8,
      a9,
      v26);
    result = 1;
  }
  else if ( v20 == 2 )
  {
    result = 0;
  }
  else
  {
    v25 = v32;
    if ( *((_QWORD *)&v33 + 1) <= 3u )
    {
      v32 = qvector_reserve(&v32, v32, 4, 1);
      v25 = v32;
    }
    *(_QWORD *)&v33 = 4;
    *(_WORD *)v25 = 11822;
    *(_BYTE *)(v25 + 2) = 46;
    v19 = (const char *)sub_2E22D0;
    *(_BYTE *)(v32 + 3) = 0;
    result = (unsigned int)sub_1697D0(
                             (int)"BUTTON YES Search\n"
                                  "Find a register value\n"
                                  "%/%*Address :%$\n"
                                  "<#The register to look for#~R~egister:q1::50::>\n"
                                  "The value of the register before executing the instruction:\n"
                                  "%2q",
                             (__int64)sub_2E22D0,
                             (__int64)&v29,
                             (__int64)&v29,
                             (__int64)&v30,
                             (__int64)&v32,
                             (__m128)0LL,
                             a3,
                             a4,
                             a5,
                             v23,
                             v24,
                             a8,
                             a9,
                             v26) != 1;
  }
  if ( v32 )
  {
    v27 = result;
    *(_QWORD *)&v33 = 0;
    qfree(v32, v19);
    result = v27;
  }
  if ( v30 )
  {
    v28 = result;
    *(_QWORD *)&v31 = 0;
    qfree(v30, v19);
    return v28;
  }
  return result;
}
