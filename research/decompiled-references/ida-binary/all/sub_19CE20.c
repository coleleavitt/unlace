__int64 __fastcall sub_19CE20(
        __int64 a1,
        const char *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // r8d
  bool v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rcx
  unsigned int v22; // ebx
  const char *v24; // rdx
  const char *v25; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v11 = *(_DWORD *)(a1 + 72);
  v27 = __readfsqword(0x28u);
  v25 = nullptr;
  v26 = 0;
  v13 = (v11 & 0x10) != 0;
  v14 = sub_19CBB0((_BYTE *)a1, (__int64)a2, (__int64 *)&v25, (v11 >> 4) & 1, v11 >> 28, 0.0);
  if ( !v14 )
  {
    v21 = &s1;
    if ( (_QWORD)v26 )
      v21 = v25;
    sub_169630(
      (int)"AUTOHIDE NONE\n%a: bad %s condition:\n%s",
      (__int64)a2,
      a3,
      (__int64)v21,
      v17,
      v18,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v19,
      v20,
      a10,
      a11,
      (char)v25);
    goto LABEL_5;
  }
  if ( v14 != 2 && v13 )
  {
    v24 = &s1;
    if ( (_QWORD)v26 )
    {
      v24 = v25;
      a2 = &s1;
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_13;
    }
    else
    {
      a2 = &s1;
      if ( !*(_QWORD *)(a1 + 16) )
      {
LABEL_13:
        sub_169630(
          (int)"\"%s\" cannot be used as low-level condition (%s)",
          (__int64)&s1,
          (__int64)v24,
          v16,
          v17,
          v18,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v19,
          v20,
          a10,
          a11,
          (char)v25);
LABEL_5:
        v22 = 0;
        goto LABEL_6;
      }
    }
    a2 = *(const char **)(a1 + 8);
    sub_169630(
      (int)"\"%s\" cannot be used as low-level condition (%s)",
      (__int64)a2,
      (__int64)v24,
      v16,
      v17,
      v18,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v19,
      v20,
      a10,
      a11,
      (char)v25);
    goto LABEL_5;
  }
  v22 = 1;
LABEL_6:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, a2, v15, v16, v17);
  }
  return v22;
}
