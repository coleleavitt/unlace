__int64 __fastcall sub_5C230(__int64 *a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  int v9[4]; // [rsp+8h] [rbp-30h]
  void *v10; // [rsp+18h] [rbp-20h]

  v10 = (void *)__readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)v9 = 0;
  sub_5A6F0(a1, (__int64 *)&ptr, a2, 0);
  sub_5C060((__int64)a1, a2);
  sub_569F0((__int64 *)&ptr, a2, v2, v3, v4, v5);
  v6 = sub_5B080(a1, a2, (__int64 *)&ptr, 1u);
  if ( ptr )
  {
    *(_QWORD *)v9 = 0;
    j__free(ptr);
  }
  return v6;
}

