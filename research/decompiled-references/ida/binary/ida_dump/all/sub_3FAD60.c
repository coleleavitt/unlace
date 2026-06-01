__int64 __fastcall sub_3FAD60(__int64 a1, int a2, double a3, __m128 a4)
{
  char v4; // al
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  unsigned int v8; // [rsp+Ch] [rbp-1Ch]
  char v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v4 = *(_BYTE *)(a1 + 40LL * a2 + 65);
  if ( (unsigned __int8)(v4 - 2) > 2u && (unsigned __int8)(v4 - 6) > 1u )
    return 0xFFFFFFFFLL;
  v6 = a1;
  v7 = a2;
  v8 = -1;
  v9 = 0;
  sub_3FA580((int *)&v6, 1, 1, a3);
  if ( !v9 && !(unsigned __int8)sub_3FACB0((__int64)&v6, a3, a4) )
    sub_3EB430(a3);
  return v8;
}
