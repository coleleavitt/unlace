__int64 __fastcall sub_8F5CF0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  int v5[4]; // [rsp+8h] [rbp-30h]
  void *v6; // [rsp+18h] [rbp-20h]

  v6 = (void *)__readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)v5 = 0;
  sub_8F41B0(a1, (__int64 *)&ptr, a2, 0);
  sub_8F5B20((__int64)a1, a2);
  sub_8F0550((__int64 *)&ptr);
  v2 = sub_8F4B40(a1, a2, (__int64 *)&ptr, 1u);
  if ( ptr )
  {
    *(_QWORD *)v5 = 0;
    qfree(ptr);
  }
  return v2;
}
