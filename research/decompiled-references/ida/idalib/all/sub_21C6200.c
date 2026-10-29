_QWORD *__fastcall sub_21C6200(_QWORD *a1, __int64 a2, int a3)
{
  size_t v4; // rax
  void *v6[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+10h] [rbp-38h] BYREF

  v6[0] = v7;
  v4 = j__strlen(&byte_22F0C30);
  sub_21C5A90(v6, &byte_22F0C30, (__int64)(&byte_22F0C30 + v4));
  sub_21C5E70(a1, a3, v6);
  if ( v6[0] != v7 )
    operator delete(v6[0]);
  return a1;
}
