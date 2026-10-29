bool __fastcall sub_48EBC0(__int64 a1, __int64 a2, unsigned __int32 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  _OWORD v19[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_QWORD *)a2 != *(_QWORD *)a4 || *(_QWORD *)(a2 + 8) != *(_QWORD *)(a4 + 8) )
    return 0;
  v8 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(a4 + 24) )
  {
    v12 = *(const char **)(a4 + 16);
    v13 = haystack;
    if ( !v8 )
      goto LABEL_7;
  }
  else
  {
    v12 = haystack;
    if ( !v8 )
      goto LABEL_8;
  }
  v13 = *(const char **)(a2 + 16);
LABEL_7:
  if ( strcmp(v13, v12) )
    return 0;
LABEL_8:
  v14 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(a4 + 48) )
  {
    v15 = *(const char **)(a4 + 40);
    v16 = haystack;
    if ( !v14 )
      goto LABEL_10;
    goto LABEL_20;
  }
  v15 = haystack;
  if ( v14 )
  {
LABEL_20:
    v16 = *(const char **)(a2 + 40);
LABEL_10:
    if ( !strcmp(v16, v15) )
      goto LABEL_11;
    return 0;
  }
LABEL_11:
  if ( *(_BYTE *)(a2 + 120) != *(_BYTE *)(a4 + 120) || *(_QWORD *)(a2 + 112) != *(_QWORD *)(a4 + 112) )
    return 0;
  if ( *(_QWORD *)(a2 + 72) || *(_QWORD *)(a4 + 72) )
  {
    v17 = *(_QWORD *)(a4 + 104);
    v19[0] = _mm_loadu_si128((const __m128i *)(a4 + 72));
    v18 = _mm_loadu_si128((const __m128i *)(a4 + 88));
    v20 = v17;
    v19[1] = v18;
    sub_48E940(a1, (__int64)v19, a5, a3);
    if ( (unsigned int)sub_567390(v19, a2 + 72) )
      return 0;
  }
  return (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
           a1,
           a2 + 64,
           a3,
           a4 + 64,
           a5) == 0;
}

