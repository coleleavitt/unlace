/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F8B0
// Address: 0x000000010006F8B0

//----- (000000010006F8B0) ----------------------------------------------------
__int64 __fastcall sub_10006F8B0(__int64 a1)
{
  int v1; // eax
  int v2; // r14d
  const char *v3; // rax
  bool v4; // zf

  v1 = (*(__int64 (__fastcall **)(_QWORD))(xmmword_1000AE410 + 280))(*(_QWORD *)(a1 + 88));
  v2 = v1;
  if ( v1 < 0 )
  {
    v4 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(xmmword_1000AE410 + 232))(
           *(_QWORD *)(a1 + 88),
           (unsigned int)v1) == 5;
    v3 = "openssl";
    if ( v4 )
      v3 = "irs";
    goto LABEL_6;
  }
  if ( !v1 )
  {
    v3 = "connection_closed_by_peer";
LABEL_6:
    *(_QWORD *)(a1 + 64) = v3;
  }
  return v2;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
