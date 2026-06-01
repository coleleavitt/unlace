__int64 __fastcall sub_6E9BB0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  int v5; // edx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  result = a1[195];
  if ( !result )
  {
    v2 = a1[176];
    if ( !v2 )
    {
      v6 = sub_6DE400(a1, a1[2372], nullptr, nullptr, nullptr, 0, 0);
      v7 = sub_6C94F0((__int64)a1, v6);
      v2 = sub_6BAD90(a1, v7, "id", 2u);
      a1[176] = v2;
    }
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
    {
      v4 = v3 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v5 = *(_BYTE *)(v2 + 28) & 0x7F;
      if ( (unsigned int)(v5 - 62) > 2 )
      {
        if ( (unsigned int)(v5 - 56) > 3 )
        {
          if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x3C )
            v4 = sub_6E8C30((__int64)a1, v2);
          else
            v4 = sub_6C7D80((__int64)a1, v2);
        }
        else
        {
          v4 = sub_6E8B00((__int64)a1, v2);
        }
      }
      else
      {
        v4 = sub_6DE140((__int64)a1, v2, 0);
      }
    }
    result = sub_6BAD90(a1, v4, "instancetype", 0xCu);
    a1[195] = result;
  }
  return result;
}

