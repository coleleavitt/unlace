_QWORD *__fastcall sub_2202AA0(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rdx
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]

  v2 = a2[3];
  v6 = v2;
  if ( v2 > 0x40 )
  {
    sub_2205470(&v5, -1, 1);
  }
  else
  {
    v3 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)v2);
    if ( !v2 )
      v3 = nullptr;
    v5 = v3;
  }
  if ( a2 == (_DWORD *)&unk_26F7B20 )
    sub_21FFDA0(a1, (__int64)a2, &v5);
  else
    sub_21FF2C0((__int64)a1, a2, (__int64)&v5);
  if ( v6 > 0x40 && v5 )
    operator delete[](v5);
  return a1;
}
