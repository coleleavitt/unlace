__int16 __fastcall sub_CAE9C0(_WORD *a1)
{
  __int16 result; // ax
  unsigned int v2; // ebx
  bool v3; // bl
  void *v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-20h]

  if ( !a1 || (*a1 & 0x1FF) != 0x3D || ((*(_QWORD *)a1 >> 16) & 0x1E0) == 0 || ((a1[1] >> 5) & 0xF) != 2 )
    return 0;
  sub_BF7A50((__int64)&v4, (__int64)a1);
  v2 = v5;
  if ( v5 <= 0x40 )
  {
    v3 = v4 != nullptr;
  }
  else
  {
    v3 = v2 != (unsigned int)sub_2206780(&v4);
    if ( v4 )
      operator delete[](v4);
  }
  LOBYTE(result) = v3;
  HIBYTE(result) = 1;
  return result;
}
