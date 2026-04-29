__int64 __fastcall sub_3AFBD0(__int64 a1, __m128 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  char v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a4 + 1) & 1) != 0 )
  {
    v10 = 0;
    v8 = 0;
    v9 = 0;
    copy_tinfo_t(&v9, a4);
    v6 = *(_DWORD *)(a1 + 72);
    v7 = *(__int64 **)(a1 + 16);
    v10 = 1;
    sub_3AEFA0(v7, 0, (__int64)&v8, 3, (__int64 *)(*(_QWORD *)(a1 + 24) + 12LL * (v6 + 1)), a2);
    clear_tinfo_t(&v9);
  }
  return 0;
}
