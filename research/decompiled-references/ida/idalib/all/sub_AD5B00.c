void __fastcall sub_AD5B00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // r8

  v2 = *(__int64 **)(a2 + 24);
  v3 = &v2[*(_QWORD *)(a2 + 32)];
  while ( v3 != v2 )
  {
    v4 = *v2++;
    sub_AD5640(a1 + 8, &byte_22F0C30, 0, a1, v4);
  }
}
