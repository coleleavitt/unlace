/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E640
// Address: 0x000000014001E640

//----- (000000014001E640) ----------------------------------------------------
char __fastcall sub_14001E640(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1);
  v3 = 8;
  if ( v2 )
    v3 = v2;
  v4 = a1 + 8;
  if ( *(_BYTE *)(a1 + 36) )
  {
    if ( v3 != 8 )
      v4 = a1;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 8);
    v5 = 4;
    if ( v3 == 8 )
      v5 = 8;
    *(_DWORD *)(a1 + 32) = v5;
  }
  *(_DWORD *)(a1 + 236) = v3;
  *(_BYTE *)(a1 + 848) = v3 == 8;
  sub_14001A1F0((_QWORD *)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 584LL))(a1);
  if ( *(_DWORD *)(a1 + 612) == -1 || *(_DWORD *)(a1 + 616) == -1 )
    goto LABEL_15;
  v6 = *(_QWORD *)(a1 + 512);
  if ( !v6 )
    LODWORD(v6) = *(_DWORD *)(a1 + 608);
  if ( (int)v6 <= 0 )
  {
LABEL_15:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30016);
  }
  return 1;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
// 1400CB61C: using guessed type char byte_1400CB61C;
