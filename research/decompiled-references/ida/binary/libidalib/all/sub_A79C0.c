__int64 __fastcall sub_A79C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r11d
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (int)v2 >= 0
    && (int)v2 < (int)(16 * ((qword_251F98 == 0) + (unsigned int)((qword_251F98 - qword_251F78) >> 3) - 1)
                     + ((qword_251F70 - qword_251F60) >> 5)
                     + ((qword_251F80 - qword_251F88) >> 5))
    && *(_DWORD *)(sub_A0A20((__int64)xmmword_251F20, v2) + 8) )
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned __int8)sub_A4650(v3, &v9) )
      *(_QWORD *)(a2 + 8) = v10;
    v4 = v9;
    if ( v9 )
    {
      v5 = v10;
      if ( (_QWORD)v10 )
      {
        v6 = 0;
        do
        {
          v7 = v4 + 32 * v6;
          if ( *(_QWORD *)(v7 + 8) )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree();
            v4 = v9;
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  return 0;
}

