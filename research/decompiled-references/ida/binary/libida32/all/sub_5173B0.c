__int64 __fastcall sub_5173B0(__int64 *a1, int *a2, _BYTE *a3, char a4)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rsi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v6 = a4 & 1;
      v7 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), *a2);
      v8 = *a3 == 0;
      v9 = *a1;
      v10 = v7;
      if ( !v8 )
        return sub_79B440(&v10, v9, v6, a3, 0, 83);
      sub_79B4D0(&v10, v9, v6, 83);
    }
    return 1;
  }
  return result;
}

