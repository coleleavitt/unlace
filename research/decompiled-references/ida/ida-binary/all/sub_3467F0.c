unsigned __int64 sub_3467F0()
{
  char **v0; // rbx
  char **v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  bool v7; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !byte_8CEE38 )
  {
    v0 = (char **)&unk_866AA0;
    do
    {
      v1 = v0;
      v0 += 8;
      sub_538360(v1);
    }
    while ( v0 != off_866E20 );
    v7 = 1;
    v2 = sub_534430("navigator:ToggleDisplay");
    if ( v2 )
      sub_537630(v2, 6, &v7);
    v7 = 1;
    v3 = sub_534430("navigator:ToggleDisplay");
    if ( v3 )
      sub_537630(v3, 7, &v7);
    v7 = 1;
    v4 = sub_534430("navigator:ToggleLegend");
    if ( v4 )
      sub_537630(v4, 6, &v7);
    v7 = (unsigned int)reg_int_op("BandLegend", 0, 1, 0) != 0;
    v5 = sub_534430("navigator:ToggleLegend");
    if ( v5 )
      sub_537630(v5, 7, &v7);
    byte_8CEE38 = 1;
  }
  return v8 - __readfsqword(0x28u);
}
