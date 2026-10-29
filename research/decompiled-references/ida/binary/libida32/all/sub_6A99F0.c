__int64 __fastcall sub_6A99F0(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 *v9; // rax
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rsi
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *a1;
  v13[1] = __readfsqword(0x28u);
  v9 = *(__int64 **)(v7 + 1480);
  v13[0] = 0;
  sub_6141A0(*v9, 26, v13, 8u, a5);
  result = -1;
  if ( a3 >= LODWORD(v13[0]) && a3 < HIDWORD(v13[0]) )
  {
    v11 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a3);
    v12 = *a1;
    LODWORD(v13[0]) = v11;
    return sub_79B6F0(v13, v12, a2, a4, 83);
  }
  return result;
}

