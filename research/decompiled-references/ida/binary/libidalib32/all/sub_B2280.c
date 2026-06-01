__int64 sub_B2280()
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // r9d
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 v7; // r15

  if ( qword_250BA0 == qword_250BC0 )
  {
    sub_A1190((__int64)xmmword_250E60, (__int64)xmmword_250B60);
    v1 = 1;
    v2 = 16 * ((qword_250BD8 == 0) + ((qword_250BD8 - qword_250BB8) >> 3) - 1)
       + ((qword_250BB0 - qword_250BA0) >> 5)
       + ((qword_250BC0 - qword_250BC8) >> 5);
    if ( v2 )
    {
      do
      {
        v3 = sub_A0850((__int64)xmmword_250B60, (int)v2 - (int)v1);
        v4 = *(_DWORD *)(v3 + 8);
        v5 = *(_DWORD *)(v3 + 16);
        v6 = v3;
        if ( v4 - 1 > 2 || !(unsigned __int8)sub_A1A40((__int64)xmmword_250CE0, v5) )
        {
          v7 = sub_AEF10(xmmword_250E60, v4, *(_DWORD *)(v6 + 12), v5);
          sub_9EE70(v7);
          sub_9F100(v7, v6);
        }
        ++v1;
      }
      while ( v2 >= v1 );
    }
  }
  else
  {
    sub_A1190((__int64)xmmword_250E60, (__int64)xmmword_250B60);
    sub_A0DA0(xmmword_250B60);
  }
  mark_builtin_widgets();
  sub_F5330(0x8000000, 0);
  return 1;
}

