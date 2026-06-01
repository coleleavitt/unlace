__int64 __fastcall sub_A7670(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // r11d
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v13 = 0;
  if ( (int)v3 < 0
    || (int)v3 >= (int)(16 * ((qword_251F98 == 0) + (unsigned int)((qword_251F98 - qword_251F78) >> 3) - 1)
                      + ((qword_251F70 - qword_251F60) >> 5)
                      + ((qword_251F80 - qword_251F88) >> 5))
    || !*(_DWORD *)(sub_A0A20((__int64)xmmword_251F20, v3) + 8) )
  {
    return 3;
  }
  v5 = sub_A4650(v4, &v12);
  v6 = v12;
  if ( v5 && (int)v2 >= 0 && (int)v2 < (unsigned __int64)v13 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v12 + 32LL * (int)v2);
    if ( !v6 )
      return 0;
    v7 = v13;
    v8 = 0;
    goto LABEL_9;
  }
  if ( !v12 )
    return 3;
  v7 = v13;
  v8 = 3;
  if ( (_QWORD)v13 )
  {
LABEL_9:
    v9 = 0;
    do
    {
      v10 = v6 + 32 * v9;
      if ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 16) = 0;
        qfree();
        v6 = v12;
      }
      ++v9;
    }
    while ( v9 != v7 );
  }
  *(_QWORD *)&v13 = 0;
  qfree();
  return v8;
}

