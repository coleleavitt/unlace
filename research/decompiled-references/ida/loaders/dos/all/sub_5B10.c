__int64 __fastcall sub_5B10(__int64 a1, unsigned __int16 *a2)
{
  int v2; // r13d
  int v3; // edx
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  int v7; // ebp
  unsigned int v8; // ebp
  int i; // ebx
  int v10; // ebp
  bool v11; // dl
  __int64 result; // rax
  unsigned int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // r13d
  unsigned int v16; // edx
  _WORD v17[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+4h] [rbp-64h]
  unsigned int v19; // [rsp+8h] [rbp-60h]
  int v20; // [rsp+Ch] [rbp-5Ch]
  __int16 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v22; // [rsp+12h] [rbp-56h]
  unsigned __int16 v23; // [rsp+14h] [rbp-54h]
  unsigned __int16 v24; // [rsp+16h] [rbp-52h]
  unsigned __int16 v25; // [rsp+18h] [rbp-50h]
  unsigned __int16 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v2 = qlsize(a1);
  v3 = a2[4];
  v4 = 32 * a2[2] - v3;
  v5 = a2[1];
  v6 = 16 * v3;
  v7 = 16 * v4;
  if ( (_WORD)v5 )
    v7 = v7 + v5 - 512;
  dword_B490 = 0;
  v8 = v6 + v7;
  for ( i = (v8 + 15) & 0xFFFFFFF0; !sub_4EE0(a1, i, (__int64)v17, 16) && v17[0] == 16966; i += 16 )
  {
    if ( v17[1] == 22095 )
    {
      dword_B490 = i;
      result = 1;
      if ( v8 >= v19 && v2 - i >= v18 && v20 > 0 )
        return 2;
      return result;
    }
  }
  v10 = (v8 + 511) & 0xFFFFFE00;
  v11 = sub_4EE0(a1, v10, (__int64)&v21, 28);
  result = 0;
  if ( !v11 && v21 == 23117 )
  {
    v13 = v2 - v10;
    v14 = 16 * v25;
    if ( v13 >= v14 )
    {
      v15 = v13 - v14;
      if ( v15 >= v26 + 4 * (unsigned int)v24 )
      {
        v16 = 16 * (32 * v23 - v25);
        if ( v22 )
          v16 = v16 + v22 - 512;
        result = 0;
        if ( v15 >= v16 )
        {
          dword_B490 = v10;
          return 3;
        }
      }
    }
  }
  return result;
}

