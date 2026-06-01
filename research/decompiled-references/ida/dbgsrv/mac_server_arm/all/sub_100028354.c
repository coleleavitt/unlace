/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028354
// Address: 0x0000000100028354

//----- (0000000100028354) ----------------------------------------------------
__int64 __fastcall sub_100028354(__int64 a1)
{
  char *v2; // x1
  unsigned __int16 v3; // w0
  __int64 v5; // x9
  int v6; // [xsp+4h] [xbp-1Ch] BYREF

  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(char **)(a1 + 40);
  else
    v2 = &byte_100075A30;
  v3 = sub_1000258B8((__int64 *)a1, v2, &v6);
  if ( (unsigned int)(v6 - 1) >= 3 )
  {
    set_error_string(0);
    return set_qerrno();
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376);
    *(_DWORD *)(v5 - 4) = v3;
    *(_DWORD *)(v5 - 8) = v6;
    *(_DWORD *)(v5 - 12) = *(_DWORD *)(a1 + 208);
    return 0;
  }
}
// 100075A30: using guessed type char byte_100075A30;
