/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7620
// Address: 0x00000000000D7620

//----- (00000000000D7620) ----------------------------------------------------
char __fastcall sub_D7620(char **a1)
{
  char *v1; // rdx
  char *v2; // rcx
  char result; // al
  char *v4; // rsi
  __int64 v5; // r8
  char *v6; // rsi
  __int64 v7; // r8
  char *v8; // rsi
  char *v9; // rdx
  unsigned int v10; // ebx
  char *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  char *v14; // rbx
  char *v15; // rsi
  char *v16; // rbx
  unsigned int v17; // ebp
  char *v18; // r11
  __int64 v19; // r11
  __int64 v20; // r10
  char *v21; // r10
  char *v22; // rsi
  char *v23; // rbx

  v1 = *a1;
  v2 = a1[1];
  result = 1;
  if ( *a1 != v2 )
  {
    if ( *v1 == 104 )
    {
      v4 = v1 + 1;
      *a1 = v1 + 1;
      if ( v1 + 1 == v2 || *v4 != 110 )
      {
        v5 = 1;
        if ( v4 == v2 )
          return result;
      }
      else
      {
        *a1 = v1 + 2;
        v5 = 2;
        if ( v1 + 2 == v2 )
          return result;
      }
      if ( (unsigned int)(v1[v5] - 48) <= 9 )
      {
        v8 = &v1[v5 + 1];
        do
        {
          v9 = v8;
          *a1 = v8;
          if ( v2 == v8 )
            break;
          v10 = *v8++ - 48;
        }
        while ( v10 < 0xA );
        if ( v2 != v9 && *v9 == 95 )
        {
          *a1 = v9 + 1;
          return 0;
        }
      }
    }
    else
    {
      if ( *v1 != 118 )
        return result;
      v6 = v1 + 1;
      *a1 = v1 + 1;
      if ( v1 + 1 == v2 || *v6 != 110 )
      {
        v7 = 1;
        if ( v6 == v2 )
          return result;
      }
      else
      {
        *a1 = v1 + 2;
        v7 = 2;
        if ( v1 + 2 == v2 )
          return result;
      }
      if ( (unsigned int)(v1[v7] - 48) <= 9 )
      {
        v11 = &v1[v7];
        v12 = -v7 - (_QWORD)v1;
        v13 = (__int64)&v2[v12 - 1];
        v14 = nullptr;
        do
        {
          v15 = v14;
          v16 = &v14[(_QWORD)v11 + 1];
          *a1 = v16;
          if ( (char *)v13 == v15 )
            break;
          v17 = *v16 - 48;
          v14 = v15 + 1;
        }
        while ( v17 < 0xA );
        if ( (char *)v13 != v15 && v15[(_QWORD)v11 + 1] == 95 )
        {
          v18 = &v11[(_QWORD)v15 + 2];
          *a1 = v18;
          if ( &v2[v12 - 2] == v15 || *v18 != 110 )
          {
            v20 = 1;
            if ( v18 == v2 )
              return result;
          }
          else
          {
            v19 = (__int64)&v11[(_QWORD)v15 + 3];
            *a1 = (char *)v19;
            v20 = 2;
            if ( (char *)v19 == v2 )
              return result;
          }
          if ( (unsigned int)(v11[v20 + 1 + (_QWORD)v15] - 48) <= 9 )
          {
            v21 = &v15[v20];
            do
            {
              v22 = v21;
              v23 = &v21[(_QWORD)v11 + 2];
              *a1 = v23;
              if ( &v2[-2 - v7 - (_QWORD)v1] == v21 )
                break;
              ++v21;
            }
            while ( (unsigned int)(*v23 - 48) < 0xA );
            if ( &v2[-2 - v7 - (_QWORD)v1] != v22 && v22[(_QWORD)v11 + 2] == 95 )
            {
              *a1 = &v11[(_QWORD)v22 + 3];
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
