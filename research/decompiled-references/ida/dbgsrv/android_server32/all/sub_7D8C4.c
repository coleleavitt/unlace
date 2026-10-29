/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D8C4
// Address: 0x0007D8C4

//----- (0007D8C4) --------------------------------------------------------
bool __fastcall sub_7D8C4(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 v4; // r7
  unsigned int v5; // r6
  int v6; // r1
  _BOOL4 result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r1
  unsigned __int8 *v12; // r3
  int v13; // r7
  unsigned __int8 v14; // r7
  unsigned __int8 *v15; // r2
  int v16; // r0
  int v17; // [sp+4h] [bp-20h]
  int v18; // [sp+14h] [bp-10h]
  unsigned __int8 *v19; // [sp+18h] [bp-Ch]
  int v20; // [sp+1Ch] [bp-8h]

  v3 = a1;
  v4 = *a1;
  if ( *a1 )
  {
LABEL_3:
    v5 = v4;
    ++v3;
    if ( v4 == 47 )
    {
      v4 = 47;
    }
    else
    {
      while ( 1 )
      {
        v6 = *a2;
        if ( !*a2 )
          break;
        if ( v6 == 91 )
        {
          v9 = a2[1];
          v10 = 2;
          if ( v9 != 33 )
            v10 = 1;
          v11 = a2[v10];
          v12 = a2 + 2;
          v17 = a2[1];
          if ( v9 != 33 )
            v12 = a2 + 1;
          a2 = v12 + 1;
          result = 0;
          v19 = v12;
          v13 = 0;
          while ( v11 << 24 )
          {
            v18 = v13;
            if ( *a2 == 45 )
            {
              v20 = 45;
              v14 = v11;
              v15 = a2;
              if ( v19[2] != 93 )
              {
                v15 = v19 + 3;
                v14 = v19[2];
                if ( !v14 )
                  return result;
                v20 = *v15;
              }
            }
            else
            {
              v20 = *a2;
              v14 = v11;
              v15 = a2;
            }
            v13 = v18 | ((unsigned __int8)v11 <= v5 && v14 >= v5);
            a2 = v15 + 1;
            v11 = v20;
            v19 = v15;
            if ( v20 == 93 )
            {
              v11 = 93;
              v19 = v15;
              if ( v15 != v12 )
              {
                result = 0;
                if ( v15 != (unsigned __int8 *)-1 && ((v17 == 33) ^ v13) << 31 )
                  goto LABEL_15;
                return result;
              }
            }
          }
          return result;
        }
        if ( v6 == 47 )
          goto LABEL_33;
        if ( v4 == v6 || v6 == 63 )
        {
          ++a2;
LABEL_15:
          v4 = *v3;
          if ( !*v3 )
          {
            v4 = 0;
            goto LABEL_33;
          }
          goto LABEL_3;
        }
        result = 0;
        if ( v6 != 42 )
          return result;
        v8 = sub_7D8C4(v3, a2);
        result = 1;
        if ( v8 )
          return result;
        ++a2;
        if ( v4 == 47 )
        {
          v4 = 47;
          goto LABEL_33;
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  do
LABEL_33:
    v16 = *a2++;
  while ( v16 == 42 );
  return v4 == v16;
}
