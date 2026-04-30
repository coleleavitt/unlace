__int64 __fastcall sub_168D40(__int64 *a1, __int64 a2)
{
  __int64 not_tail; // rbx
  unsigned int v3; // r12d
  const char *v5; // rax
  unsigned int utf8_char; // eax
  unsigned int v7; // ebx
  const char *v8; // rax
  char v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  const char *v14; // [rsp+8h] [rbp-60h] BYREF
  const char *v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  not_tail = a2;
  if ( (get_flags_ex(a2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a2);
  v3 = 0;
  if ( (get_flags_ex(not_tail, 4) & 0x4000) != 0 )
  {
    v16 = 0;
    v15 = nullptr;
    if ( get_ea_name(&v15, not_tail, 1, 0) <= 0 )
    {
      v3 = 0;
    }
    else
    {
      v5 = &s1;
      if ( (_QWORD)v16 )
        v5 = v15;
      v14 = v5;
      while ( 1 )
      {
        utf8_char = get_utf8_char(&v14);
        v7 = utf8_char;
        if ( !utf8_char )
          break;
        if ( utf8_char == -1 )
        {
          v8 = v14++;
          v7 = *(unsigned __int8 *)v8;
        }
        v9 = 95;
        if ( v7 <= 0x7F )
        {
          v9 = v7;
          if ( !isalnum(v7) )
            v9 = 95;
        }
        v10 = a1[1];
        v11 = 2;
        if ( v10 )
          v11 = v10-- + 1;
        v12 = *a1;
        if ( a1[2] < v11 )
        {
          v13 = qvector_reserve(a1, v12, v11, 1);
          *a1 = v13;
          v12 = v13;
        }
        a1[1] = v11;
        *(_BYTE *)(v12 + v10) = v9;
        *(_BYTE *)(*a1 + v10 + 1) = 0;
      }
      v3 = 1;
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  return v3;
}
