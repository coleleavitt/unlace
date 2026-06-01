void __fastcall sub_E5CEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  void *v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+8h] [rbp-50h]

  v2 = a1 + 1048;
  v3 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
  if ( v3 > 0x40 )
  {
    sub_2205600(&v6, v3, *(_QWORD *)(a2 + 8), ((unsigned __int64)v3 + 63) >> 6);
    v3 = v7;
    v4 = v6;
    if ( (unsigned int)v7 > 0x40 )
    {
      v5 = *v6;
      goto LABEL_5;
    }
  }
  else
  {
    v4 = *(void **)(a2 + 8);
  }
  v5 = 0;
  if ( v3 )
    v5 = (__int64)((_QWORD)v4 << (64 - (unsigned __int8)v3)) >> (64 - (unsigned __int8)v3);
LABEL_5:
  v7 = v5;
  LOWORD(v6) = 3;
  sub_222AB70(v2, "value", 5);
  sub_222CAC0(v2, &v6);
  sub_2229BF0(v2);
  sub_222B2A0(&v6);
  if ( v3 > 0x40 )
  {
    if ( v4 )
      operator delete[](v4);
  }
}
