__int64 __fastcall sub_A74B0(__int64 a1, __int64 a2)
{
  signed int v2; // r11d
  unsigned int v3; // r11d
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 >= 0
    && v2 < (int)(16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
                + ((qword_250EB0 - qword_250EA0) >> 5)
                + ((qword_250EC0 - qword_250EC8) >> 5))
    && *(_DWORD *)(sub_A0850((__int64)xmmword_250E60, v2) + 8) )
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned __int8)sub_A4240(v3, &v9) )
      *(_DWORD *)(a2 + 8) = v10;
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

