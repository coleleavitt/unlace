/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B0B9
// Address: 0x0047B0B9

//----- (0047B0B9) --------------------------------------------------------
int *sub_47B0B9()
{
  __m128i **v0; // edi
  __m128i **v1; // ebx
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  UINT v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int *result; // eax
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  v0 = (__m128i **)sub_47A9E7();
  v1 = (__m128i **)sub_47A9ED();
  v12 = 0;
  v11 = 0;
  v10 = 0;
  if ( sub_47AA4B((int)v1, (int)v0, &v12) || sub_47A9F3((int)v1, (int)v0, &v11) || sub_47AA1F((int)v1, (int)v0, &v10) )
  {
    sub_467F04((int)v1, (int)v0);
    __debugbreak();
  }
  sub_479216(dword_4B7EB8);
  dword_4B7EB8 = nullptr;
  if ( GetTimeZoneInformation(&TimeZoneInformation) != -1 )
  {
    v2 = 1;
    dword_4B7EC0 = 1;
    v12 = 60 * TimeZoneInformation.Bias;
    if ( TimeZoneInformation.StandardDate.wMonth )
      v12 = 60 * TimeZoneInformation.Bias + 60 * TimeZoneInformation.StandardBias;
    if ( TimeZoneInformation.DaylightDate.wMonth && TimeZoneInformation.DaylightBias )
    {
      v3 = 60 * (TimeZoneInformation.DaylightBias - TimeZoneInformation.StandardBias);
    }
    else
    {
      v3 = 0;
      v2 = 0;
    }
    v11 = v2;
    v10 = v3;
    sub_464890(*v1, 0, 0x80u);
    sub_464890(v1[1], 0, 0x80u);
    sub_464890(*v0, 0, 0x40u);
    sub_464890(v0[1], 0, 0x40u);
    v5 = sub_47E2DF(v4, (int)v1);
    sub_47B2F8((int)v1, (int)v0, TimeZoneInformation.StandardName, *v1, (*v0)->m128i_i8, v5);
    sub_47B2F8((int)v1, (int)v0, TimeZoneInformation.DaylightName, v1[1], v0[1]->m128i_i8, v5);
  }
  v6 = v12;
  *sub_47A9E1() = v6;
  v7 = v11;
  *sub_47A9D5() = v7;
  v8 = v10;
  result = sub_47A9DB();
  *result = v8;
  return result;
}
// 47B1B8: variable 'v4' is possibly undefined
// 4B7EC0: using guessed type int dword_4B7EC0;
