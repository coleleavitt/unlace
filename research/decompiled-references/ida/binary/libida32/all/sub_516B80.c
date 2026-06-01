__int64 __fastcall sub_516B80(__int64 *a1, int a2, _BYTE *a3, char a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rsi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a3 )
  {
    v5 = a4 & 1;
    v6 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
    v7 = *a3 == 0;
    v8 = *a1;
    v10 = v6;
    if ( !v7 )
      return sub_79B440(&v10, v8, v5, a3, 0, 83);
    sub_79B4D0(&v10, v8, v5, 83);
  }
  return 1;
}

