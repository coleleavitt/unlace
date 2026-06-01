/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46768C
// Address: 0x0046768C

//----- (0046768C) --------------------------------------------------------
void __cdecl sub_46768C(int a1)
{
  struct _TEB *v1; // ecx
  PVOID v2; // eax

  if ( __guard_check_icall_fptr != nullsub_1 )
  {
    v1 = NtCurrentTeb();
    v2 = *(PVOID *)(a1 + 16);
    if ( v2 < v1->NtTib.StackLimit || v2 > v1->NtTib.StackBase )
      __fastfail(0xDu);
  }
}
// 4015F0: using guessed type int __cdecl nullsub_1(_DWORD);
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
