bool __fastcall sub_742F00(unsigned __int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rdx
  unsigned __int8 v4; // bp
  int v6; // eax
  int v7; // ebx
  int i; // r13d
  unsigned __int8 *v9; // [rsp+0h] [rbp-658h] BYREF
  unsigned __int8 *v10; // [rsp+8h] [rbp-650h]
  unsigned __int16 v11[780]; // [rsp+10h] [rbp-648h] BYREF
  unsigned __int64 v12; // [rsp+628h] [rbp-30h]

  v3 = &a2[a3];
  v12 = __readfsqword(0x28u);
  v10 = v3;
  if ( a2 >= v3 )
    return a2 >= v3;
  v4 = *a2;
  v9 = a2 + 1;
  if ( v4 == 3 )
  {
    sub_746A90(v11, &v9);
    if ( (unsigned __int8)sub_73A6B0(a1, v11, 0) )
      goto LABEL_8;
  }
  else if ( v4 > 3u )
  {
    if ( v4 == 4 )
    {
      sub_7469F0(v11, &v9);
      v6 = sub_73ED50(a1, v11, 0);
      v7 = 0;
      a2 = v9;
      for ( i = v6; v9 < v10; a2 = v9 )
      {
        ++v7;
        sub_746B10(v11, &v9);
      }
      if ( i == v7 )
      {
        v3 = v10;
        return a2 >= v3;
      }
    }
  }
  else
  {
    if ( !v4 )
      return ++a2 >= v3;
    sub_746A90(v11, &v9);
    if ( v4 == 2 )
      sub_746A40((char *)&v11[1] + v11[0], &v9);
    if ( (unsigned __int8)sub_73D2C0(a1, v11, 0xFFFF, nullptr, 0) )
    {
LABEL_8:
      a2 = v9;
      v3 = v10;
      return a2 >= v3;
    }
  }
  return 0;
}
