__int64 __fastcall sub_139940(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // r12d
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+18h] [rbp-60h]
  int utf8_char; // [rsp+2Ch] [rbp-4Ch]

  v3 = qustrlen();
  v4 = v3;
  if ( v3 >= a2 )
  {
    v5 = (unsigned int)a2;
    v11 = tag_advance();
    utf8_char = get_utf8_char();
    if ( utf8_char != -1 && (unsigned __int8)is_valid_cp() && (v9 = v11, v6 = a2, (int)a2 > 0) )
    {
      while ( a1 < v9 && (unsigned __int8)prev_utf8_char() && (utf8_char != 46 || (a3 & 2) != 0) )
      {
        if ( !(unsigned __int8)is_valid_cp() )
          break;
        if ( !--v6 )
          break;
        v9 = v11;
      }
    }
    else
    {
      v6 = a2;
    }
    if ( (int)a2 < v4 )
    {
      do
      {
        v8 = get_utf8_char();
        if ( v8 == -1 || v8 == 46 && (a3 & 2) == 0 )
          break;
        if ( !(unsigned __int8)is_valid_cp() )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (int)v5 < v4 );
    }
    if ( (a3 & 1) == 0 )
    {
      v6 = tag_advance() - a1;
      v5 = (unsigned int)tag_advance() - (unsigned int)a1;
    }
  }
  else
  {
    v5 = (unsigned int)v3;
    v6 = v3;
  }
  return (v5 << 32) | v6;
}

