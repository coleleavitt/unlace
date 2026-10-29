unsigned __int64 __fastcall sub_3FEAD0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  bool v5; // zf
  unsigned int v7; // r13d
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v14; // [rsp+0h] [rbp-38h] BYREF
  char v15; // [rsp+4h] [rbp-34h]
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 2233) == 0;
  v16 = __readfsqword(0x28u);
  if ( !v5 )
    sub_3FE970(a1, a2, a3, a4);
  v7 = sub_3B90A0((_QWORD *)a1, a2);
  v8 = sub_3B90A0((_QWORD *)a1, a3);
  v14 = v7;
  v9 = *(_QWORD *)a1;
  v10 = v8;
  if ( a4 )
  {
    sub_79B4D0(&v14, v9, v8, 4196);
    v11 = 4164;
  }
  else
  {
    sub_79B4D0(&v14, v9, v8, 4216);
    v11 = 4184;
  }
  v12 = *(_QWORD *)a1;
  v14 = v10;
  sub_79B4D0(&v14, v12, v7, v11);
  v14 = -1;
  v15 = 0;
  if ( !(unsigned __int8)sub_3DC4D0((_QWORD *)a1, (__int64)&v14, a3)
    && !(unsigned __int8)sub_3FD660((_QWORD *)a1, (__int64)&v14, a3) )
  {
    sub_3CA860(a1, a3);
  }
  return v16 - __readfsqword(0x28u);
}

