char *__fastcall sub_54DA40(char *a1, char *a2, char **a3)
{
  char *v3; // r15
  char v4; // r14
  char *v5; // r13
  char v6; // al
  char *v8; // rax
  unsigned __int8 v9; // bl
  int v10; // ebx
  int v11; // ebx
  char *v12; // rdx
  char v13; // al
  bool v14; // cf
  int v16; // ebx
  char *v17; // rdx
  char v18; // al
  char *v19; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = nullptr;
  v4 = 0;
  v5 = a1;
  v19 = a1;
  v6 = *a1 & 0xF0;
  v20[1] = __readfsqword(0x28u);
  if ( v6 != -96 )
  {
LABEL_7:
    if ( a2 )
      *a2 = v4;
    if ( a3 )
      *a3 = v3;
    return v5;
  }
  while ( 1 )
  {
    v8 = v5 + 1;
    v19 = v5 + 1;
    v9 = *v5 & 0xF;
    if ( v9 != 15 )
      break;
    if ( v4 )
      return nullptr;
    v19 = v5 + 2;
    v4 = v5[1];
    if ( !v4 )
      return nullptr;
    v5 += 2;
    if ( v4 < 0 )
    {
      if ( !(unsigned __int8)sub_693030(&v19, 0) )
        return nullptr;
      v5 = v19;
      if ( (v4 & 1) != 0 )
      {
        v10 = sub_692FE0(&v19);
        v8 = v19;
        v11 = v10 - 1;
        if ( v11 < 0 )
          goto LABEL_26;
        v20[0] = v19;
        if ( !v19 || !*v19 )
          return nullptr;
        while ( 1 )
        {
          v12 = v8 + 1;
          v20[0] = v8 + 1;
          v13 = *v8;
          if ( v13 < 0 )
          {
            if ( v13 == -1 )
            {
              sub_692FE0(v20);
              v12 = (char *)v20[0];
            }
            if ( !*v12 )
              return nullptr;
            ++v12;
          }
          v19 = v12;
          v14 = v11-- == 0;
          if ( v14 )
            break;
          v8 = v12;
          v20[0] = v12;
          if ( !*v12 )
            return nullptr;
        }
        v3 = v5;
        v5 = v12;
      }
    }
LABEL_6:
    if ( (*v5 & 0xF0) != 0xA0 )
      goto LABEL_7;
  }
  if ( v3 )
    return nullptr;
  v14 = v9 == 0;
  v16 = v9 - 1;
  if ( v14 )
  {
LABEL_26:
    v3 = v5;
    v5 = v8;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v20[0] = v8;
    if ( !*v8 )
      return nullptr;
    v17 = v8 + 1;
    v20[0] = v8 + 1;
    v18 = *v8;
    if ( v18 < 0 )
    {
      if ( v18 == -1 )
      {
        sub_692FE0(v20);
        v17 = (char *)v20[0];
      }
      if ( !*v17 )
        return nullptr;
      ++v17;
    }
    v19 = v17;
    v8 = v17;
    v14 = v16-- == 0;
    if ( v14 )
      goto LABEL_26;
  }
}

