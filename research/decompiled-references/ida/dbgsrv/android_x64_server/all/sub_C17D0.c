/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C17D0
// Address: 0x00000000000C17D0

//----- (00000000000C17D0) ----------------------------------------------------
bool __fastcall sub_C17D0(char *a1, char *a2)
{
  char v2; // bp
  char *v3; // r14
  char *v4; // rbx
  char v5; // al
  char v6; // r8
  char *v7; // r9
  char v8; // cl
  int v9; // r10d
  char *v10; // rdi
  char v11; // al
  char v12; // r11
  char v13; // dl
  char *v14; // rsi
  char *v15; // rdi
  int v16; // ebx
  bool result; // al
  char v18; // al

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1;
    v4 = a2;
LABEL_3:
    if ( v2 == 47 )
    {
      a2 = v4;
      v2 = 47;
    }
    else
    {
      ++v3;
      ++v4;
      while ( 1 )
      {
        a2 = v4 - 1;
        v5 = *(v4 - 1);
        if ( !v5 || v5 == 47 )
          break;
        if ( v5 == 91 )
        {
          v6 = *v4;
          v7 = v4 + 1;
          if ( *v4 != 33 )
            v7 = v4;
          v4 = v7 + 1;
          v8 = *v7;
          v9 = 0;
          v10 = v7;
          while ( v8 )
          {
            v11 = *v4;
            if ( *v4 == 45 )
            {
              v12 = v10[2];
              v11 = 45;
              v13 = v8;
              v14 = v4;
              if ( v12 != 93 )
              {
                if ( !v12 )
                  return 0;
                v15 = v10 + 3;
                v11 = *v15;
                v13 = v12;
                v14 = v15;
              }
            }
            else
            {
              v13 = v8;
              v14 = v4;
            }
            v16 = v9;
            if ( v13 >= v2 )
              LOBYTE(v16) = 1;
            if ( v8 <= v2 )
              v9 = v16;
            v4 = v14 + 1;
            v8 = v11;
            v10 = v14;
            if ( v11 == 93 )
            {
              v8 = 93;
              v10 = v14;
              if ( v14 != v7 )
              {
                result = 0;
                if ( v14 == (char *)-1LL || ((v9 & 1) == 0) != (v6 == 33) )
                  return result;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
        if ( v2 == v5 || v5 == 63 )
        {
LABEL_30:
          v2 = *v3;
          if ( *v3 )
            goto LABEL_3;
          v2 = 0;
          a2 = v4;
          goto LABEL_36;
        }
        if ( v5 != 42 )
          return 0;
        if ( (unsigned __int8)sub_C17D0(v3, a2) )
          return 1;
        ++v4;
      }
    }
  }
  else
  {
    v2 = 0;
  }
  do
LABEL_36:
    v18 = *a2++;
  while ( v18 == 42 );
  return v2 == v18;
}
// C184D: conditional instruction was optimized away because bp.1!=2F
