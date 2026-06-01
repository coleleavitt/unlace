__int64 sub_B2830()
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // r9d
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  int *v7; // r15

  if ( qword_251C20 == qword_251C40 )
  {
    sub_A1370((__int64)xmmword_251F20, (__int64)xmmword_251BE0);
    v1 = 1;
    v2 = 16 * ((qword_251C58 == 0) + ((qword_251C58 - qword_251C38) >> 3) - 1)
       + ((qword_251C30 - qword_251C20) >> 5)
       + ((qword_251C40 - qword_251C48) >> 5);
    if ( v2 )
    {
      do
      {
        v3 = sub_A0A20((__int64)xmmword_251BE0, (int)v2 - (int)v1);
        v4 = *(_DWORD *)(v3 + 8);
        v5 = *(_QWORD *)(v3 + 16);
        v6 = v3;
        if ( v4 - 1 > 2 || !(unsigned __int8)sub_A1C00((__int64)xmmword_251D80, v5) )
        {
          v7 = sub_AF5F0(xmmword_251F20, v4, *(_DWORD *)(v6 + 12), v5);
          sub_9EFB0((__int64)v7);
          sub_9F240((__int64)v7, v6);
        }
        ++v1;
      }
      while ( v2 >= v1 );
    }
  }
  else
  {
    sub_A1370((__int64)xmmword_251F20, (__int64)xmmword_251BE0);
    sub_A0F60(xmmword_251BE0);
  }
  mark_builtin_widgets();
  sub_F61B0(0x8000000, 0);
  return 1;
}

