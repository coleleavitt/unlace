unsigned __int64 __fastcall sub_484A0(__int64 a1, int a2)
{
  const char *v2; // r13
  __int64 v5; // rbp
  const char *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rax
  unsigned int utf8_char; // eax
  int v10; // r12d
  char *v11; // r8
  const char *v12; // rdi
  const char *v13; // [rsp+0h] [rbp-70h] BYREF
  const char *v14; // [rsp+8h] [rbp-68h] BYREF
  __int128 v15; // [rsp+10h] [rbp-60h]
  const char *v16; // [rsp+28h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h]
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = *(const char **)(a1 + 16);
  v15 = 0;
  v14 = nullptr;
  if ( (*(_BYTE *)(a1 + 721) & 0x40) != 0 )
  {
    v5 = a2;
    v6 = v2;
    if ( get_ea_name(&v14, v2, 0, 0) > 0 )
    {
      v8 = s1;
      if ( (_QWORD)v15 )
        v8 = v14;
      v13 = v8;
      if ( *v8 )
      {
        while ( 1 )
        {
          utf8_char = get_utf8_char(&v13);
          if ( utf8_char == -1 )
            break;
          v6 = (_BYTE *)(&dword_0 + 2);
          if ( !(unsigned __int8)is_valid_cp(utf8_char, 2, 0) )
            break;
          if ( !*v13 )
            goto LABEL_10;
        }
        v10 = *(_DWORD *)(a1 + 144);
        v17 = 0;
        v16 = nullptr;
        *(_DWORD *)(a1 + 144) = v10 & 0xFFFFE7EF;
        get_ea_name(&v16, v2, 3, 0);
        if ( (unsigned int)v5 <= 0x10 && (v11 = off_92A20[v5], *v11) )
        {
          v6 = (_BYTE *)(&stru_FFF0 + 15);
          sub_48290(a1, 0xFFFF, (__int64)&unk_68985, v16, v11, v14);
        }
        else
        {
          v6 = ".rename %s, \"%s\"";
          sub_48340(a1, (__int64)".rename %s, \"%s\"", v16, v14);
        }
        v12 = v16;
        *(_DWORD *)(a1 + 144) |= v10 & 0x1810;
        if ( v12 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v12, v6, v7, 0.0);
        }
      }
    }
LABEL_10:
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, v6, v7, 0.0);
    }
  }
  return v18 - __readfsqword(0x28u);
}
