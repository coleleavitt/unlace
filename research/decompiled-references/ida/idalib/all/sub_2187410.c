__int64 __fastcall sub_2187410(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, unsigned int *, __int64, __int64, __int64); // rax
  void *v7; // r12
  unsigned int v8; // ebx
  size_t v9; // r13
  _QWORD *v11; // [rsp+8h] [rbp-50h] BYREF
  void *s1; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  char v14; // [rsp+20h] [rbp-38h]

  v6 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, __int64, __int64))(*a1 + 144);
  if ( v6 == sub_21800F0 )
  {
    v11 = sub_2181330;
    sub_2176CE0(
      (__int64)&s1,
      a1 + 7,
      a2,
      (void (__fastcall *)(__int64 *, __int64, __m128i *))sub_2162B70,
      (__int64)&v11,
      a6);
  }
  else
  {
    ((void (__fastcall *)(void **, __int64 *, unsigned int *))v6)(&s1, a1, a2);
  }
  v7 = s1;
  v8 = v14 & 1;
  if ( (v14 & 1) != 0 )
  {
    v11 = s1;
    s1 = nullptr;
    sub_A0E8E0(&v11);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
    v8 = 0;
    goto LABEL_16;
  }
  v9 = n;
  if ( n > 5 )
  {
    if ( *(_DWORD *)s1 != 1650811950 || *((_WORD *)s1 + 2) != 26485 )
    {
      if ( n <= 6 )
        goto LABEL_5;
      if ( *(_DWORD *)s1 != 1701083694 || *((_WORD *)s1 + 2) != 30050 || *((_BYTE *)s1 + 6) != 103 )
      {
        if ( v9 != j__strlen(".gdb_index") )
          goto LABEL_16;
        goto LABEL_7;
      }
    }
    v8 = 1;
    goto LABEL_16;
  }
LABEL_5:
  if ( j__strlen(".gdb_index") == v9 )
  {
    v8 = 1;
    if ( v9 )
LABEL_7:
      LOBYTE(v8) = memcmp(v7, ".gdb_index", v9) == 0;
  }
LABEL_16:
  sub_111DFC0((__int64 *)&s1);
  return v8;
}
