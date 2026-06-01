/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400104C0
// Address: 0x00000001400104C0

//----- (00000001400104C0) ----------------------------------------------------
__int64 __fastcall sub_1400104C0(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && !sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  sub_14000E2B0(a1);
  v4 = sub_1400019C0();
  if ( a2 )
    *a2 = *v4;
  sub_14001A1F0((_QWORD *)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 584LL))(a1);
  if ( *(_DWORD *)(a1 + 612) == -1 || *(_DWORD *)(a1 + 616) == -1 )
    goto LABEL_12;
  v5 = *(_QWORD *)(a1 + 512);
  if ( !v5 )
    LODWORD(v5) = *(_DWORD *)(a1 + 608);
  if ( (int)v5 <= 0 )
  {
LABEL_12:
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30016);
  }
  return 1;
}
// 140001790: using guessed type __int64 __fastcall guard_check_icall_nop();
// 1400CB61C: using guessed type char byte_1400CB61C;
