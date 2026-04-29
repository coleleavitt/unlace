__int64 __fastcall sub_104150(__int64 a1, int a2, unsigned __int64 a3)
{
  __m128i *v4; // rdx
  unsigned int v5; // ebp
  __int64 v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[3] = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 52) = 0;
  v4 = *(__m128i **)(a1 + 8);
  v7[0] = 0;
  v7[1] = 0;
  v5 = sub_103A00(a1, a2, v4, a3, 1u, v7);
  if ( !(unsigned __int8)sub_5E300(v7) )
    *(_BYTE *)(a1 + 58) = 1;
  qfree(v7[0]);
  return v5;
}
