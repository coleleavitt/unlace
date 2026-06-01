/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67920
// Address: 0x0000000000067920

//----- (0000000000067920) ----------------------------------------------------
__int64 __fastcall sub_67920(__int64 a1)
{
  const char *v1; // rsi
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  __int64 v4; // rdx
  const char *v6; // rsi
  int v7; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(const char **)(a1 + 40);
  else
    v1 = s1;
  v2 = sub_64D00((_QWORD *)a1, v1, &v7);
  if ( (unsigned int)(v7 - 1) >= 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v6 = *(const char **)(a1 + 40);
    else
      v6 = s1;
    set_error_string(0, v6);
    return set_qerrno(0x37u);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 368);
    v4 = 16LL * *(_QWORD *)(a1 + 376);
    *(_DWORD *)(v3 + v4 - 4) = v2;
    *(_DWORD *)(v3 + v4 - 8) = v7;
    *(_DWORD *)(v3 + v4 - 12) = *(_DWORD *)(a1 + 208);
    return 0;
  }
}
