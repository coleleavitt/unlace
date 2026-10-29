/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4653C0
// Address: 0x00000000004653C0

//----- (00000000004653C0) ----------------------------------------------------
__int64 __fastcall sub_4653C0(__int64 a1, __int64 a2)
{
  const char *v2; // r9
  int v3; // r8d
  int v4; // ecx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = nullptr;
  v3 = -1;
  v4 = *(_DWORD *)(a1 + 24);
  v8 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  if ( v4 != 25 )
  {
    sub_4652A0(a1 + 28, (__int64)&ptr);
    v3 = *(_DWORD *)(a1 + 32);
    v4 = *(_DWORD *)(a1 + 24);
    v2 = (const char *)ptr;
  }
  sub_4172B0(a2, "%s|%d|%d|%s", *(const char **)a1, v4, v3, v2);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    j__free(ptr);
  }
  return 1;
}
