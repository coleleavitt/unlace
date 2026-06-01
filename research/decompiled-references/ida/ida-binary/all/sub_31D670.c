__int64 __fastcall sub_31D670(
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
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rbx
  __int64 v17; // rbp
  unsigned __int8 (__fastcall *v18)(const char *, __int64 *); // rax
  const char *v19; // rdi
  const char *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  unsigned int v26; // ebp
  __int64 v28; // [rsp+0h] [rbp-38h] BYREF
  __int128 v29; // [rsp+8h] [rbp-30h]
  unsigned __int64 v30; // [rsp+18h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  if ( !*a1 )
    return 0;
  sub_31D450(a1, 1);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v28 = 0;
  v16 = *(_QWORD *)(v9 + 24);
  v17 = v9;
  v29 = 0;
  if ( !v16 )
  {
    v18 = (unsigned __int8 (__fastcall *)(const char *, __int64 *))dword_40;
LABEL_4:
    v19 = &s1;
    if ( *(_QWORD *)(v17 + 40) )
      v19 = *(const char **)(v17 + 32);
    v20 = (const char *)&v28;
    if ( !v18(v19, &v28) && (unsigned __int64)v29 > 1 )
    {
      v20 = &s1;
      if ( *(_QWORD *)(v17 + 40) )
        v20 = *(const char **)(v17 + 32);
      sub_169700(
        (int)"Script %s error: %s\n",
        (__int64)v20,
        v28,
        v21,
        v22,
        v23,
        (__m128)0LL,
        a3,
        a4,
        a5,
        v24,
        v25,
        a8,
        a9,
        v28);
    }
    v26 = 1;
    if ( !v16 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v18 = *(unsigned __int8 (__fastcall **)(const char *, __int64 *))(v16 + 72);
  ++*(_DWORD *)(v16 + 12);
  if ( v18 )
    goto LABEL_4;
  v20 = *(const char **)(v16 + 16);
  sub_169630(
    (int)"The '%s' extlang cannot execute snippets because it does not implement the 'eval_snippet' callback",
    (__int64)v20,
    v10,
    v11,
    v12,
    v13,
    (__m128)0LL,
    a3,
    a4,
    a5,
    v14,
    v15,
    a8,
    a9,
    v28);
  v26 = 0;
LABEL_12:
  --*(_DWORD *)(v16 + 12);
LABEL_13:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, v20);
  }
  return v26;
}
