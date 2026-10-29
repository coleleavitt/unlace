unsigned __int64 __fastcall sub_400960(_QWORD *a1, unsigned int a2, char a3, int a4, int a5, char a6)
{
  int v8; // ebp
  __int64 v10; // rax
  int v12; // [rsp+0h] [rbp-48h] BYREF
  int v13; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v8 = a5 << 24;
  v14 = __readfsqword(0x28u);
  v12 = sub_3B90A0(a1, a2);
  v13 = v8 + sub_3B90A0(a1, a4) + 1;
  v10 = -32770;
  if ( _bittest64(&v10, a3 & 0xF) || (sub_79B440(&v12, *a1, 11, &v13, 4, 65), (a3 & 0xF) != 0) )
  {
    sub_79B440(&v12, *a1, 12, &v13, 4, 65);
    if ( !a6 )
      return v14 - __readfsqword(0x28u);
  }
  else if ( !a6 )
  {
    return v14 - __readfsqword(0x28u);
  }
  if ( sub_3B8910((__int64)a1, a2) )
    sub_3A1A90(a1, a2, a2 + 1, 0x28u);
  return v14 - __readfsqword(0x28u);
}

