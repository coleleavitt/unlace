/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AEE60
// Address: 0x000AEE60

//----- (000AEE60) --------------------------------------------------------
bool __usercall sub_AEE60@<al>(unsigned __int8 *a1@<edx>, _BYTE *a2@<ecx>, int a3@<ebx>)
{
  unsigned __int8 *v3; // edi
  char v4; // al
  char *v5; // esi
  char v6; // al
  char *v7; // edx
  char v8; // ah
  signed __int8 v9; // bh
  signed __int8 v10; // bl
  char *v11; // ecx
  char *v12; // edx
  bool v13; // cc
  int v14; // edx
  bool result; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // [esp+Bh] [ebp-21h]
  int v18; // [esp+Ch] [ebp-20h]
  _BYTE *v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-18h]

  v19 = a2;
  LOBYTE(a3) = *a2;
  if ( *a2 )
  {
    v3 = a1;
LABEL_3:
    if ( (_BYTE)a3 == 47 )
    {
      a1 = v3;
      LOBYTE(a3) = 47;
    }
    else
    {
      ++v19;
      ++v3;
      while ( 1 )
      {
        a1 = v3 - 1;
        v4 = *(v3 - 1);
        if ( !v4 || v4 == 47 )
          break;
        if ( v4 == 91 )
        {
          v5 = (char *)(v3 + 1);
          v17 = *v3;
          if ( *v3 != 33 )
            v5 = (char *)v3;
          v3 = (unsigned __int8 *)(v5 + 1);
          v6 = *v5;
          v18 = 0;
          v7 = v5;
          v20 = a3;
          while ( v6 )
          {
            v8 = *v3;
            if ( *v3 == 45 )
            {
              v9 = v7[2];
              v8 = 45;
              v10 = v6;
              v11 = (char *)v3;
              if ( v9 != 93 )
              {
                if ( !v9 )
                  return 0;
                v12 = v7 + 3;
                v8 = *v12;
                v10 = v9;
                v11 = v12;
              }
            }
            else
            {
              v10 = v6;
              v11 = (char *)v3;
            }
            v13 = v10 < (signed __int8)v20;
            a3 = v20;
            v14 = v18;
            if ( !v13 )
              LOBYTE(v14) = 1;
            if ( v6 <= (char)v20 )
              v18 = v14;
            v3 = (unsigned __int8 *)(v11 + 1);
            v6 = v8;
            v7 = v11;
            if ( v8 == 93 )
            {
              v6 = 93;
              v7 = v11;
              if ( v11 != v5 )
              {
                result = 0;
                if ( v11 == (char *)-1 || ((v18 & 1) == 0) != (v17 == 33) )
                  return result;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
        if ( (_BYTE)a3 == v4 || v4 == 63 )
        {
LABEL_30:
          LOBYTE(a3) = *v19;
          if ( *v19 )
            goto LABEL_3;
          LOBYTE(a3) = 0;
          a1 = v3;
          goto LABEL_36;
        }
        if ( v4 != 42 )
          return 0;
        if ( (unsigned __int8)sub_AEE60(v19, a1) )
          return 1;
        ++v3;
      }
    }
  }
  else
  {
    LOBYTE(a3) = 0;
  }
  do
LABEL_36:
    v16 = *a1++;
  while ( v16 == 42 );
  return (_BYTE)a3 == v16;
}
// AEEF0: conditional instruction was optimized away because bl.1!=2F
