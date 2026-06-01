/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476614
// Address: 0x00476614

//----- (00476614) --------------------------------------------------------
BOOL __cdecl sub_476614(int a1)
{
  int (__cdecl *v1)(int); // eax

  v1 = (int (__cdecl *)(int))sub_476641();
  return v1 && v1(a1);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
