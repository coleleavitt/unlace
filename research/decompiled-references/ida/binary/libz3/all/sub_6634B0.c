void __fastcall sub_6634B0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  _OWORD *v5; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+10h] [rbp-28h]

  sub_65EA60(a1);
  *(_BYTE *)(a1 + 256) = 1;
  v5 = (_OWORD *)sub_186B270(0x40u);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  ptr[1] = &byte_8;
  v7 = 0;
  ptr[0] = v5;
  sub_6632B0(a1, (int)ptr, a2, 0.0, a4, a5);
  if ( ptr[0] )
    sub_186B220(ptr[0]);
}

