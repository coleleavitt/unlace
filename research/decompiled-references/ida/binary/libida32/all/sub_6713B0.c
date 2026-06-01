unsigned __int64 __fastcall sub_6713B0(__int64 a1, __int64 a2)
{
  int v4; // eax
  void *v5; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 32) == -1 )
  {
    sub_79BC40(a1 + 32, a2, 0, 0);
    v4 = *(_DWORD *)a1;
    ptr = nullptr;
    v7 = 0;
    sub_3FA160((__int64 *)&ptr, v4 + 1);
    sub_3FA160((__int64 *)&ptr, *(_DWORD *)(a1 + 4) + 1);
    sub_79B440(a1 + 32, a2, 0, ptr, v7, 83);
    *(_QWORD *)&v7 = 0;
    sub_6711D0(a1, a2, (__int64 *)&ptr);
    sub_79BB40(a1 + 32, a2, ptr, v7, 0, 115);
    v5 = ptr;
    *(_BYTE *)(a1 + 36) = 1;
    if ( v5 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v5);
    }
  }
  return v8 - __readfsqword(0x28u);
}

