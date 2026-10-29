unsigned __int64 __fastcall sub_3E6800(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  char v5; // al
  __int64 v6; // rbp
  void *v7; // rdi
  char v9; // [rsp+Fh] [rbp-59h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-58h] BYREF
  char v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 2232);
  v12 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 2208) = a2;
  *(_BYTE *)(a1 + 2264) = 0;
  while ( v3 )
  {
    sub_3E1870(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x30u);
  }
  v11 = 0;
  *(_QWORD *)(a1 + 2232) = 0;
  *(_QWORD *)(a1 + 2240) = a1 + 2224;
  *(_QWORD *)(a1 + 2248) = a1 + 2224;
  *(_QWORD *)(a1 + 2256) = 0;
  v10 = -1;
  if ( (unsigned __int8)sub_3E3030((_QWORD *)a1, (__int64)&v10, a2) )
  {
    v5 = v11;
    if ( v11 == 21 )
    {
      *(_BYTE *)(a1 + 2264) |= 1u;
      if ( !(unsigned __int8)sub_3E1CA0((_QWORD *)a1, (__int64)&v10, a2) )
        goto LABEL_8;
      v5 = v11;
    }
    while ( 1 )
    {
      v9 = v5 & 0x3F;
      sub_3E6690((_QWORD *)(a1 + 2216), (_QWORD *)(a1 + 2224), &v10, &v9);
      if ( !(unsigned __int8)sub_3E1E80((_QWORD *)a1, &v10, a2) )
        break;
      v5 = v11;
    }
  }
LABEL_8:
  v6 = *(_QWORD *)(a1 + 2288);
  while ( v6 )
  {
    sub_3E1870(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    operator delete(v7, 0x30u);
  }
  *(_QWORD *)(a1 + 2288) = 0;
  *(_QWORD *)(a1 + 2296) = a1 + 2280;
  *(_QWORD *)(a1 + 2304) = a1 + 2280;
  *(_QWORD *)(a1 + 2312) = 0;
  if ( (unsigned __int8)sub_40F780(a1, &v10) )
  {
    do
    {
      v9 = v11 & 0x3F;
      sub_3E6690((_QWORD *)(a1 + 2272), (_QWORD *)(a1 + 2280), &v10, &v9);
    }
    while ( (unsigned __int8)sub_410770(a1, &v10, a2) );
  }
  return v12 - __readfsqword(0x28u);
}
