__int64 __fastcall sub_1BC6E60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __m128i **v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned int v10; // ebp
  unsigned int v11; // [rsp+8h] [rbp-58h] BYREF
  char v12; // [rsp+Ch] [rbp-54h]
  __int64 v13; // [rsp+10h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-48h]

  v2 = a1[1];
  v3 = (__m128i **)a1[2];
  v11 = 0;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = *(__int64 **)v2;
  v6 = *(_QWORD *)(v2 + 8);
  v7 = *a1;
  v12 &= ~1u;
  if ( (unsigned __int8)sub_C61F40(*(_QWORD *)(a2 + 40), (__int64)&v11, *(_QWORD *)(v7 + 248), v4, v5, v6, *v3)
    && v11 == 2 )
  {
    v10 = v14;
    if ( v14 <= 0x40 )
      LOBYTE(v10) = v13 == 0;
    else
      LOBYTE(v10) = v10 == (unsigned int)sub_2206780(&v13);
    v8 = v10 ^ 1;
  }
  else
  {
    v8 = 0;
    if ( v11 <= 1 )
      return 0;
  }
  sub_A4F8E0((int *)&v11);
  return v8;
}
