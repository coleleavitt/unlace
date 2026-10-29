__int64 __fastcall sub_12E9580(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  unsigned int v3; // r13d
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *(_QWORD *)(a1 + 336);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL);
  v3 = *(_DWORD *)(result + 8);
  v4 = *(_DWORD *)(result + 12);
  if ( v3 )
  {
    v5 = sub_227B910(*(_QWORD *)(a1 + 336), v3);
    v6 = sub_995540(v5, " warning");
    v7 = "s";
    if ( v3 == 1 )
      v7 = &byte_22F0C30;
    sub_995540(v6, v7);
    if ( !v4 )
      goto LABEL_11;
    sub_995540(v1, " and ");
  }
  else if ( !v4 )
  {
    return result;
  }
  v8 = sub_227B910(v1, v4);
  v9 = sub_995540(v8, " error");
  v10 = "s";
  if ( v4 == 1 )
    v10 = &byte_22F0C30;
  sub_995540(v9, v10);
LABEL_11:
  sub_995540(v1, " generated");
  v11 = **(_QWORD **)(a1 + 16);
  if ( (*(_BYTE *)(v11 + 60) & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(v11 + 89) & 4) != 0 )
    {
      v12 = sub_995540(v1, " when compiling for ");
      sub_227BF10(
        v12,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 64LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 72LL));
    }
    else
    {
      sub_995540(v1, " when compiling for host");
    }
  }
  return sub_995540(v1, ".\n");
}
