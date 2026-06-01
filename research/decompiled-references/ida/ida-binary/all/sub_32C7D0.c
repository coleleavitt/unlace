__int64 __fastcall sub_32C7D0(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // r12d
  unsigned int utf8_char; // eax
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+18h] [rbp-60h]
  unsigned int v13; // [rsp+2Ch] [rbp-4Ch] BYREF
  _QWORD v14[9]; // [rsp+30h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = qustrlen(a1);
  v4 = v3;
  if ( v3 >= a2 )
  {
    v5 = (unsigned int)a2;
    v12 = tag_advance(a1, (unsigned int)a2);
    v14[0] = v12;
    utf8_char = get_utf8_char(v14);
    v13 = utf8_char;
    if ( utf8_char != -1
      && (unsigned __int8)is_valid_cp(utf8_char, 2, 0)
      && (v10 = v12, v6 = a2, v14[0] = v12, (int)a2 > 0) )
    {
      while ( a1 < v10 && (unsigned __int8)prev_utf8_char(&v13, v14, a1) && v13 != -1 && (v13 != 46 || (a3 & 2) != 0) )
      {
        if ( !(unsigned __int8)is_valid_cp(v13, 2, 0) )
          break;
        if ( !--v6 )
          break;
        v10 = v14[0];
      }
    }
    else
    {
      v6 = a2;
    }
    v14[0] = v12;
    if ( (int)a2 < v4 )
    {
      do
      {
        v9 = get_utf8_char(v14);
        if ( v9 == -1 || v9 == 46 && (a3 & 2) == 0 )
          break;
        if ( !(unsigned __int8)is_valid_cp(v9, 2, 0) )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (int)v5 < v4 );
    }
    if ( (a3 & 1) == 0 )
    {
      v6 = tag_advance(a1, v6) - a1;
      v5 = (unsigned int)tag_advance(a1, (unsigned int)v5) - (unsigned int)a1;
    }
  }
  else
  {
    v5 = (unsigned int)v3;
    v6 = v3;
  }
  return (v5 << 32) | v6;
}
