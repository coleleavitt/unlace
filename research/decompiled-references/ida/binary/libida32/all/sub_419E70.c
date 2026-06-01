__int64 __fastcall sub_419E70(__int64 a1, unsigned int a2, __int64 a3, int *a4, int a5)
{
  unsigned int v5; // r15d
  _QWORD *v8; // r13
  unsigned __int8 v9; // r14
  unsigned int v10; // eax
  char v11; // dl
  unsigned int v13; // eax
  unsigned __int8 v14; // [rsp+Bh] [rbp-4Dh]
  unsigned __int8 v16; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v17 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a1 + 1480);
  v14 = 0;
  if ( (a3 & 0x600) == 0x400 && (a3 & 0xF0000000) == 0x60000000 )
  {
    v13 = sub_3C3F20(v8, a2);
    if ( v13 >= *a4 && v13 < a4[1] )
    {
      sub_3C4F30(a1, a2, v13 + a5, 0);
      return 1;
    }
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v9 = is_enum(a3, v5);
        if ( v9 )
        {
          v10 = sub_400BA0(v8, &v16, a2, v5, a4);
          if ( v10 >= *a4 && v10 < a4[1] )
            break;
        }
        if ( ++v5 == 8 )
          return v14;
      }
      v11 = v5++;
      sub_400960(v8, a2, v11, a5 + v10, v16, 0);
      v14 = v9;
    }
    while ( v5 != 8 );
  }
  return v14;
}

