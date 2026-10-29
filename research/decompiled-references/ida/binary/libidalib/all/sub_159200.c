__int64 __fastcall sub_159200(__int64 *a1)
{
  unsigned int v1; // r12d
  unsigned int utf8_char; // eax
  unsigned int v4; // ebx
  const char *v5; // rax
  char v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  const char *v11; // [rsp+8h] [rbp-60h]

  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  v1 = 0;
  if ( (get_flags_ex() & 0x4000) != 0 )
  {
    if ( get_ea_name() <= 0 )
    {
      return 0;
    }
    else
    {
      v11 = s1;
      while ( 1 )
      {
        utf8_char = get_utf8_char();
        v4 = utf8_char;
        if ( !utf8_char )
          break;
        if ( utf8_char == -1 )
        {
          v5 = v11++;
          v4 = *(unsigned __int8 *)v5;
        }
        v6 = 95;
        if ( v4 <= 0x7F )
        {
          v6 = v4;
          if ( !isalnum(v4) )
            v6 = 95;
        }
        v7 = a1[1];
        v8 = 2;
        if ( v7 )
          v8 = v7-- + 1;
        v9 = *a1;
        if ( a1[2] < v8 )
        {
          v10 = qvector_reserve();
          *a1 = v10;
          v9 = v10;
        }
        a1[1] = v8;
        *(_BYTE *)(v9 + v7) = v6;
        *(_BYTE *)(*a1 + v7 + 1) = 0;
      }
      return 1;
    }
  }
  return v1;
}

