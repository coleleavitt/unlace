__int64 __fastcall sub_268C70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r13
  const char *v6; // rsi
  unsigned __int8 v7; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2
    || *(_DWORD *)(v2 + 8) != 61
    || a2 != sub_250E30(*(__int64 **)(v2 + 24), (_QWORD *)(v2 + 48))
    || !(unsigned __int8)is_stroff(
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 40LL),
                           (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 12LL)) )
  {
    return 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  v8[0] = 0;
  if ( (unsigned __int8)sub_260EA0(v5, nullptr, v8, &v7) )
  {
    v3 = v7;
    clear_tinfo_t(v8);
    if ( !(_BYTE)v3 )
      return 0;
    v6 = s1;
    if ( *(_QWORD *)(v5 + 24) )
      v6 = *(const char **)(v5 + 16);
    sub_325A00(v8, v6);
    if ( !(unsigned __int8)compare_tinfo(*(_QWORD *)(a1 + 136), v8[0], 2) )
    {
      *(_BYTE *)(a1 + 452) = 1;
      clear_tinfo_t(v8);
      return v3;
    }
  }
  clear_tinfo_t(v8);
  return 0;
}
