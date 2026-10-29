/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033520
// Address: 0x0000000100033520

//----- (0000000100033520) ----------------------------------------------------
__int64 __fastcall sub_100033520(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  char **v4; // rdi
  unsigned __int64 v6; // [rsp+0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 120);
  v4 = (char **)(a1 + 112);
  if ( v3 && *(_DWORD *)&(*v4)[8 * v3 - 8] == a2 )
  {
    *(_DWORD *)&(*v4)[8 * v3 - 4] = a3;
  }
  else
  {
    v6 = __PAIR64__(a3, a2);
    sub_100033580(v4, &v6);
  }
  return __stack_chk_guard;
}
