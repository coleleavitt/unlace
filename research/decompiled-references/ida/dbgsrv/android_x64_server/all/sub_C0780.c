/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0780
// Address: 0x00000000000C0780

//----- (00000000000C0780) ----------------------------------------------------
char __fastcall sub_C0780(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  _BYTE *v5; // rax
  _BYTE *v6; // rcx
  char result; // al

  v4 = a2;
  qustrncpy(a1 + 4128, a2, 4096);
  v5 = (_BYTE *)__strrchr_chk(a1 + 4128, 47, 4096);
  if ( v5 )
  {
    v6 = v5 + 1;
    *v5 = 0;
  }
  else
  {
    qustrncpy(a1 + 4128, (__int64)".", 4096);
    v6 = nullptr;
  }
  *(_QWORD *)(a1 + 4112) = 0;
  *(_DWORD *)(a1 + 4120) = 0;
  if ( v6 )
    v4 = (__int64)v6;
  result = qustrncpy(a1 + 8224, v4, 4096);
  *(_DWORD *)(a1 + 12320) = a3;
  return result;
}
// 33F20: using guessed type __int64 __fastcall __strrchr_chk(_QWORD, _QWORD, _QWORD);
