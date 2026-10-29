unsigned __int64 __fastcall sub_4173F0(__int64 *a1, __int64 a2, char **a3)
{
  __int64 v4; // rdi
  unsigned int v5; // r12d
  char v7; // al
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v4 = *a1;
  v5 = *(_DWORD *)(a2 + 12);
  v11 = __readfsqword(0x28u);
  v7 = sub_614FB0(v4, 48);
  v10 = 0;
  ptr = nullptr;
  sub_4BBA40(a1, &ptr, v5, (v7 & 2) == 0 ? 2 : 10);
  sub_3573A0(a3);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return v11 - __readfsqword(0x28u);
}

