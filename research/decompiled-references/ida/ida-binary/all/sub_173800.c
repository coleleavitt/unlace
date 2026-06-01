__int64 __fastcall sub_173800(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_BYTE *)(a2 + 16) == 40;
  v9[1] = __readfsqword(0x28u);
  result = -1;
  if ( v2 )
  {
    v4 = *(int *)(a2 + 8);
    if ( (int)v4 > 1 && *(int *)(a2 + 4) >= 0 )
    {
      v5 = *(int *)(a2 + 12);
      if ( (int)v4 <= (int)v5 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 >= v4 && v7 >= v5 )
          {
            v8 = *(_QWORD *)(a1 + 8);
            v9[0] = -1;
            addr_from_tag(v9, v8 + v4 - 18);
            return v9[0];
          }
        }
      }
    }
  }
  return result;
}
