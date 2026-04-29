__int64 __fastcall sub_1FBFE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = -1;
  v7 = 0;
  if ( (unsigned __int8)sub_1BE390(a2, (__int64)&v6, a4) )
  {
    if ( (_BYTE)v7 == *(_BYTE *)(a1 + 16) )
    {
      if ( HIDWORD(v7) )
      {
        if ( *(_DWORD *)(a1 + 20) )
        {
          v5 = *(_QWORD *)(a1 + 8);
          if ( SHIDWORD(v7) + v6 - 1 >= v5 && *(int *)(a1 + 20) + v5 - 1 >= v6 )
            sub_329D90(a1 + 8, &v6);
        }
      }
    }
  }
  return 0;
}
