__int64 __fastcall sub_2156E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r11d
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (int)v2 >= 0
    && (int)v2 < (int)(16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
                     + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
                     + ((qword_8CBB00 - qword_8CBB08) >> 5))
    && *(_DWORD *)(sub_20F460((__int64)qword_8CBAA0, v2) + 8) )
  {
    v10 = 0;
    v11 = 0;
    if ( (unsigned __int8)sub_212FD0(v3, &v10) )
      *(_QWORD *)(a2 + 8) = v11;
    v4 = v10;
    if ( v10 )
    {
      v5 = v11;
      if ( (_QWORD)v11 )
      {
        v6 = 0;
        do
        {
          v7 = v4 + 32 * v6;
          v8 = *(_QWORD *)(v7 + 8);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 16) = 0;
            qfree(v8, (const char *)&v10);
            v4 = v10;
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
      *(_QWORD *)&v11 = 0;
      qfree(v4, (const char *)&v10);
    }
  }
  return 0;
}
