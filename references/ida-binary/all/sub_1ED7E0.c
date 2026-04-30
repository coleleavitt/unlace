__int64 __fastcall sub_1ED7E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // zf
  __int64 v5; // rbp
  char *v6; // r15
  char v7; // al
  bool v9; // r13
  int v10; // ebx
  char *v11; // rax
  int utf8_char; // eax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 16) == 0;
  v14[1] = __readfsqword(0x28u);
  v5 = -1;
  if ( !v4 )
  {
    v6 = *(char **)(a2 + 8);
    v7 = *v6;
    if ( *v6 )
    {
      v9 = a4 == -1;
      v10 = 0;
      do
      {
        if ( (v9 || a4 >= v10) && v7 == 1 )
        {
          if ( v6[1] == 40 )
          {
            v5 = sub_192240((__int64)v6);
            if ( a4 == -1 )
              return v5;
            v11 = v6 + 2;
            v6 += 18;
            while ( *v11 )
            {
              if ( v6 == ++v11 )
                goto LABEL_5;
            }
            goto LABEL_4;
          }
        }
        else if ( v7 == 2 )
        {
          v5 = -1;
        }
        v11 = (char *)tag_skipcode(v6);
        v14[0] = v11;
        if ( v11 == v6 )
        {
          if ( a4 == v10 )
            return v5;
          utf8_char = get_utf8_char(v14);
          ++v10;
          v11 = (char *)(v14[0] + (utf8_char == -1));
        }
LABEL_4:
        v6 = v11;
LABEL_5:
        v7 = *v6;
      }
      while ( *v6 );
    }
  }
  return v5;
}
