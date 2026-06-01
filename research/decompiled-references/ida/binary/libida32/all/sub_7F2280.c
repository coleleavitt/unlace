__int64 __fastcall sub_7F2280(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int8 v4; // bp
  int v5; // r12d
  unsigned int v6; // r15d
  int v7; // ebp
  unsigned __int16 v8; // ax
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned __int8 v12; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  result = 0;
  if ( a3 )
  {
    v4 = a3;
    if ( a3 <= 0xF )
    {
      v8 = sub_7F1E40((__int64)a1);
      sub_7F1C00(a2, v8, v4);
    }
    else if ( a3 <= 0x20 )
    {
      v11 = sub_7F1EE0((__int64)a1);
      sub_7F1C00(a2, v11, v4);
    }
    else if ( a3 <= 0x40 )
    {
      v9 = (unsigned int)sub_7F1EE0((__int64)a1);
      v10 = sub_7F1EE0((__int64)a1);
      sub_7F1C00(a2, v10 | (unsigned __int64)(v9 << 32), v4);
    }
    else
    {
      v5 = 0;
      v6 = a3 >> 3;
      do
      {
        if ( qlread(*((_QWORD *)a1 + 2), &v12, 1) != 1 )
          *a1 = 1;
        ++v5;
        sub_7F1C00(a2, v12, 8u);
      }
      while ( v6 != v5 );
      v7 = v4 & 7;
      if ( v7 )
      {
        if ( qlread(*((_QWORD *)a1 + 2), &v12, 1) != 1 )
          *a1 = 1;
        sub_7F1C00(a2, v12, v7);
      }
    }
    return 2 * (unsigned int)*a1;
  }
  return result;
}

