/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91650
// Address: 0x0000000000091650

//----- (0000000000091650) ----------------------------------------------------
char __fastcall sub_91650(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // r8d
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v6 = 0;
  v2 = *(_DWORD *)(a1 + 24);
  sub_913E0(a1 + 28, (__int64)ptr, v2 == 25);
  v3 = -1;
  if ( v2 != 25 )
    v3 = *(_DWORD *)(a1 + 32);
  sub_3BBA0(a2, "%s|%d|%d|%s", *(const char **)a1, *(_DWORD *)(a1 + 24), v3, (const char *)ptr[0]);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v6 = 0;
  }
  return 1;
}
