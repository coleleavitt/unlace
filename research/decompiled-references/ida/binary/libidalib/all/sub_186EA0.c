__int64 __fastcall sub_186EA0(TGroup *this, _DWORD *a2, __int64 a3, const char *a4, __int64 a5, __int16 a6)
{
  const char *v6; // r12
  __int64 v7; // rbx
  int v8; // r13d
  char *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  int utf8_char; // eax
  const char *v14; // rdx
  const char *v16; // [rsp+10h] [rbp-58h]

  v6 = a4;
  v7 = a5;
  v8 = a5 + 3;
  v9 = strrchr(a4, 35);
  if ( v9 )
    v6 = v9 + 1;
  if ( !v7 )
  {
    v16 = v6;
    if ( *v6 )
    {
      do
      {
        utf8_char = get_utf8_char();
        v14 = v16;
        if ( utf8_char == -1 )
        {
          ++v16;
          utf8_char = *(unsigned __int8 *)v14++;
        }
        LODWORD(v7) = (utf8_char != 126) + (_DWORD)v7;
      }
      while ( *v14 );
      v8 = v7 + 4;
    }
    else
    {
      v8 = 4;
    }
  }
  *a2 += v8;
  v10 = operator new(0x60u);
  v11 = *((_QWORD *)this + 26) - 1LL;
  if ( word_2513B8 == -1 )
    word_2513B8 = sub_19A9B0(96);
  TButton::TButton();
  *(_QWORD *)(v10 + 88) = v11;
  *(_QWORD *)v10 = &off_23CE60;
  *(_WORD *)(v10 + 50) = a6;
  TGroup::insert(this, (TView *)v10);
  return v10;
}

