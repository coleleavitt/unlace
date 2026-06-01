__int64 __fastcall sub_221E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  const char *v14; // rsi
  int *v15; // r15

  if ( qword_8CB7A0 == qword_8CB7C0 )
  {
    sub_20FD20((__int64)qword_8CBAA0, (__int64)xmmword_8CB760, a3, a4, a5, a6);
    v7 = 1;
    v8 = 16 * ((qword_8CB7D8 == 0) + ((qword_8CB7D8 - qword_8CB7B8) >> 3) - 1)
       + ((qword_8CB7B0 - qword_8CB7A0) >> 5)
       + ((qword_8CB7C0 - qword_8CB7C8) >> 5);
    if ( v8 )
    {
      do
      {
        v9 = sub_20F460((__int64)xmmword_8CB760, (int)v8 - (int)v7);
        v10 = *(_DWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 16);
        v12 = v9;
        if ( v10 - 1 > 2 || !(unsigned __int8)sub_2105C0((__int64)xmmword_8CB900, v11) )
        {
          v13 = v11;
          v14 = (const char *)v10;
          v15 = sub_21EBB0((__m128i *)qword_8CBAA0, v10, *(_DWORD *)(v12 + 12), v13);
          sub_20DAF0((__int64)v15, v14);
          sub_20DD80((__int64)v15, v12);
        }
        ++v7;
      }
      while ( v8 >= v7 );
    }
  }
  else
  {
    sub_20FD20((__int64)qword_8CBAA0, (__int64)xmmword_8CB760, a3, a4, a5, a6);
    sub_20F9A0(xmmword_8CB760);
  }
  mark_builtin_widgets(&stru_10000, 0, 1);
  sub_27EA50(0x8000000, 0);
  return 1;
}
