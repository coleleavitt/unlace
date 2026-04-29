__int64 __fastcall sub_64FB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rcx
  char v5; // dl
  __m128 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  result = 1;
  v7 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 24);
  if ( (v3 & 0x40000) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 512);
    if ( *(_QWORD *)(a1 + 512) != v4 )
    {
      v6 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1472LL) + 40LL * (int)v4 + 16));
      if ( (v3 & 0x600) != 0x200 )
        sub_A6FD0(a2, 0);
      v5 = sub_318230(a2 + 216, &v6, 0);
      result = 0;
      if ( !v5 )
        return (unsigned int)sub_318230(a2 + 136, &v6, 0) ^ 1;
    }
  }
  return result;
}
