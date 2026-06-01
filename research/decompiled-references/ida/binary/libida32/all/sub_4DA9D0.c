unsigned __int64 __fastcall sub_4DA9D0(_QWORD *a1, unsigned __int8 a2, unsigned int a3, __int64 a4)
{
  int v6; // r12d
  unsigned int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // r13d
  int v12; // [rsp+1Ch] [rbp-44Ch] BYREF
  _BYTE v13[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v14; // [rsp+428h] [rbp-40h]

  v6 = a2;
  v14 = __readfsqword(0x28u);
  v8 = sub_3B90A0(a1, a3);
  v9 = *a1;
  v10 = v8;
  v12 = 1;
  sub_79B440((char *)a1 + 4 * a2 + 2488, v9, v8, &v12, 4, 65);
  if ( a4 )
    sub_79B440((char *)a1 + 4 * a2 + 2488, *a1, v10, a4, 0, 83);
  if ( !*((_BYTE *)&off_2B03500 + 24 * v6 + 16) )
  {
    sub_4F5210(a1, v13, 1024, a3);
    if ( a2 != 8 )
      sub_365330();
    if ( (debug & 0x2000) != 0 )
      sub_383DA0();
  }
  return v14 - __readfsqword(0x28u);
}

