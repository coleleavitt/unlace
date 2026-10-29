/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D350
// Address: 0x000000010002D350

//----- (000000010002D350) ----------------------------------------------------
__int64 __fastcall sub_10002D350(__int64 a1)
{
  const char *v1; // rsi
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  __int64 v4; // rdx
  const char *v6; // rsi
  int v7; // [rsp+Ch] [rbp-14h] BYREF

  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(const char **)(a1 + 40);
  else
    v1 = _s1;
  v2 = sub_10002A980((__int64 *)a1, v1, &v7);
  if ( (unsigned int)(v7 - 1) >= 3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v6 = *(const char **)(a1 + 40);
    else
      v6 = _s1;
    set_error_string(0, v6);
    return set_qerrno();
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
