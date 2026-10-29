unsigned __int64 __fastcall sub_1836F0(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v2 = *(_QWORD *)a1;
  a1[440] |= 8u;
  (*(void (__fastcall **)(_DWORD *, __int64 *))(v2 + 32))(a1, &v8);
  a1[440] &= ~2u;
  sub_1835E0((__int64)(a1 + 302), (__int64)&v8, v3, v4);
  (*(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)a1 + 80LL))(a1, a1 + 302);
  v5 = v8;
  v6 = a1[440] | 2;
  a1[440] = v6;
  if ( v5 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
    v6 = a1[440];
  }
  a1[440] = v6 & 0xFFFFFFF7;
  return v10 - __readfsqword(0x28u);
}

