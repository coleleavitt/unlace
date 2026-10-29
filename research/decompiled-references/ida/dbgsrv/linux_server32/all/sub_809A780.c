/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809A780
// Address: 0x0809A780

//----- (0809A780) --------------------------------------------------------
int __cdecl sub_809A780(int a1, int a2, char a3)
{
  int result; // eax
  int v4; // eax
  const char *v5; // eax
  char **v6; // ebx
  const char *v7; // eax
  char **v8; // ebx
  int v9; // eax
  char *v10; // eax
  char *v11; // ebx
  char v12; // dl
  char *v13; // ecx
  _DWORD *v14; // eax
  int v15; // [esp+8h] [ebp-50h] BYREF
  unsigned __int8 v16; // [esp+Ch] [ebp-4Ch]
  _OWORD s_8[2]; // [esp+18h] [ebp-40h] BYREF
  unsigned int v18; // [esp+38h] [ebp-20h]

  v18 = __readgsdword(0x14u);
  sub_8094F40(a1);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 372) = a2;
    *(_BYTE *)(a1 + 404) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 372);
    *(_BYTE *)(a1 + 404) = 0;
    if ( !v4 )
    {
      v14 = (_DWORD *)operator new(0x1Cu);
      v14[1] = 1;
      *v14 = v14 + 6;
      v14[2] = 0;
      v14[3] = 0;
      v14[4] = 1065353216;
      v14[5] = 0;
      v14[6] = 0;
      *(_DWORD *)(a1 + 372) = v14;
    }
    v5 = "__IDC__";
    v6 = &off_811BE00;
    do
    {
      if ( sub_80953F0(a1, v5, v6[1], 0, 0, nullptr) )
        goto LABEL_11;
      v5 = v6[2];
      v6 += 2;
    }
    while ( v5 );
    if ( (_BYTE)dword_811E84C || (a3 & 1) != 0 )
    {
      v7 = "__LINUX__";
      v8 = &off_811BDE0;
      while ( !sub_80953F0(a1, v7, v8[1], 0, 0, nullptr) )
      {
        v7 = v8[2];
        v8 += 2;
        if ( !v7 )
        {
          if ( (_BYTE)dword_811E84C )
          {
            v9 = dword_811DA34;
            if ( dword_811DA34 == -1 )
            {
              off_811E568(&v15);
              dword_811DA34 = v16;
              off_811E568(v15);
              v9 = dword_811DA34;
            }
            if ( v9 )
            {
              sub_80953F0(a1, "__QT__", "1", 0, 0, nullptr);
              sub_80953F0(a1, "__GUI__", "1", 0, 0, nullptr);
            }
            else
            {
              sub_80953F0(a1, "__TXT__", "1", 0, 0, nullptr);
            }
            sub_80953F0(a1, "__IDA_VERSION__", &xmmword_811E700, 0, 0, nullptr);
            s_8[0] = _mm_load_si128((const __m128i *)&xmmword_811E700);
            s_8[1] = _mm_load_si128((const __m128i *)&xmmword_811E710);
            v10 = strchr((const char *)s_8, 46);
            v11 = v10;
            if ( v10 )
            {
              do
              {
                v12 = v10[1];
                v13 = v10++;
                *(v10 - 1) = v12;
              }
              while ( v12 );
              if ( (unsigned int)(v13 - v11) <= 1 )
              {
                *v13 = 48;
                *v10 = 0;
              }
            }
            sub_80953F0(a1, "__IDAVER__", s_8, 0, 0, nullptr);
          }
          goto LABEL_3;
        }
      }
LABEL_11:
      result = sub_80C7850();
      goto LABEL_4;
    }
  }
LABEL_3:
  result = 0;
LABEL_4:
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811BDE0: using guessed type char *off_811BDE0;
// 811BE00: using guessed type char *off_811BE00;
// 811DA34: using guessed type int dword_811DA34;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811E700: using guessed type __int128 xmmword_811E700;
// 811E710: using guessed type __int128 xmmword_811E710;
// 811E84C: using guessed type int dword_811E84C;
