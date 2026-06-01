__int64 __fastcall sub_22D9A0(
        char *s2,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  size_t v10; // rax
  size_t v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // r15
  const char *v15; // rbx
  char v16; // al
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  char v24; // [rsp+0h] [rbp-68h]
  __int64 debugger_plugins; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v27[1] = __readfsqword(0x28u);
  debugger_plugins = get_debugger_plugins(v27);
  v10 = strlen(s2);
  if ( debugger_plugins )
  {
    v26 = 0;
    v11 = v10;
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = 16 * v12;
        v14 = *(_QWORD *)(v27[0] + 16 * v12);
        v15 = (const char *)qbasename(*(_QWORD *)(v14 + 8));
        if ( !strncasecmp(v15, s2, v11) )
        {
          v16 = v15[v11];
          if ( (v16 == 95 || !v16) && a2 == (*(_BYTE *)(*(_QWORD *)(v13 + v27[0] + 8) + 32LL) & 1) )
            break;
        }
        if ( debugger_plugins == ++v12 )
          return v26;
      }
      if ( v26 )
        break;
      v26 = v13 + v27[0];
      if ( debugger_plugins == ++v12 )
        return v26;
    }
    v18 = qbasename(*(_QWORD *)(v14 + 8));
    v19 = qbasename(*(_QWORD *)(*(_QWORD *)v26 + 8LL));
    sub_169630(
      (int)"Ambiguous debugger name '%s' (found %s and %s)",
      (__int64)s2,
      v19,
      v18,
      v20,
      v21,
      a3,
      a4,
      a5,
      a6,
      v22,
      v23,
      a9,
      a10,
      v24);
  }
  return 0;
}
