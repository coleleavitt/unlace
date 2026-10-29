_QWORD *__fastcall sub_21CCDD0(_QWORD *a1, __int64 a2)
{
  size_t v3; // rax
  _BYTE *v4; // rdi
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[56]; // [rsp+10h] [rbp+10h] BYREF

  vars0[0] = vars10;
  v3 = j__strlen(&byte_22F0C30);
  sub_21CAAA0(vars0, &byte_22F0C30, (__int64)(&byte_22F0C30 + v3));
  *(_DWORD *)(a2 + 8) = 0;
  sub_9EE8A0(a2 + 16, (__int64)vars0);
  v4 = vars0[0];
  *a1 = 0;
  if ( v4 != vars10 )
    operator delete(v4);
  return a1;
}
