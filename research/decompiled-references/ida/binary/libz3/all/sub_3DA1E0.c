__int64 __fastcall sub_3DA1E0(__int64 a1)
{
  unsigned int *v1; // rbx
  _BYTE v3[24]; // [rsp+8h] [rbp-50h] BYREF
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  void *ptr; // [rsp+30h] [rbp-28h]

  v1 = *(unsigned int **)a1;
  sub_16669D0(v3, *(_QWORD *)(a1 + 8));
  v5 = 0;
  ptr = nullptr;
  sub_3D9CD0((__int64)&v4, v1);
  if ( ptr )
    sub_186B220(ptr);
  return 0;
}

