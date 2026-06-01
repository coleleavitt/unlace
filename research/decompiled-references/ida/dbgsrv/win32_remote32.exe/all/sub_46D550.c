/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D550
// Address: 0x0046D550

//----- (0046D550) --------------------------------------------------------
int __usercall sub_46D550@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3, _DWORD *a4, int a5)
{
  unsigned __int8 v5; // al
  char v6; // cl
  bool v7; // zf
  int v8; // edi
  char v9; // al
  int v10; // edx
  _BYTE *v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  char v14; // al
  int v15; // ebx
  char v16; // al
  int v17; // edx
  char v18; // cl
  int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  char v22; // al
  char v23; // al
  char v24; // cl
  char v25; // al
  char v26; // cl
  unsigned int v27; // eax
  unsigned int v28; // eax
  _BYTE *v29; // edx
  unsigned __int8 v30; // cl
  int v31; // ebx
  _DWORD v34[3]; // [esp+Ch] [ebp-24h] BYREF
  int v35; // [esp+18h] [ebp-18h] BYREF
  int v36; // [esp+1Ch] [ebp-14h]
  int v37; // [esp+20h] [ebp-10h]
  int v38; // [esp+24h] [ebp-Ch]
  int v39; // [esp+29h] [ebp-7h] BYREF
  bool v40; // [esp+2Dh] [ebp-3h]
  char v41; // [esp+2Eh] [ebp-2h]
  char v42; // [esp+2Fh] [ebp-1h]

  if ( !sub_471924(a4, a1, a2) )
    return 7;
  v35 = a4[4];
  v36 = a4[5];
  v5 = sub_470F48((int)a4);
  v34[1] = &v39;
  v34[0] = a4;
  v34[2] = &v35;
  while ( 1 )
  {
    LOBYTE(v39) = v5;
    if ( !sub_469034((int)a3, v5, 8, a3) )
      break;
    v5 = sub_470F48((int)a4);
  }
  v6 = v39;
  v7 = (_BYTE)v39 == 45;
  *(_BYTE *)(a5 + 776) = (_BYTE)v39 == 45;
  if ( v7 || v6 == 43 )
  {
    v6 = sub_470F48((int)a4);
    LOBYTE(v39) = v6;
  }
  if ( v6 == 73 || v6 == 105 )
    return sub_46D9AD((char *)&v39, a4, v35, v36);
  if ( v6 != 78 && v6 != 110 )
  {
    v42 = 0;
    if ( v6 == 48 )
    {
      v8 = a4[4];
      v37 = a4[5];
      v9 = sub_470F48((int)a4);
      LOBYTE(v38) = v9;
      if ( v9 == 120 || v9 == 88 )
      {
        v42 = 1;
        v6 = sub_470F48((int)a4);
        v35 = v8;
        LOBYTE(v39) = v6;
        v36 = v37;
      }
      else
      {
        sub_4718A2(a4, v38);
        v6 = v39;
      }
    }
    v10 = a5;
    v38 = 0;
    v41 = 0;
    v11 = (_BYTE *)(a5 + 8);
    if ( v6 == 48 )
    {
      v41 = 1;
      do
      {
        v6 = sub_470F48((int)a4);
        LOBYTE(v39) = v6;
      }
      while ( v6 == 48 );
      v10 = a5;
    }
    v12 = v42 == 0 ? 9 : 15;
    v37 = v12;
    while ( 1 )
    {
      if ( (unsigned __int8)(v6 - 48) > 9u )
      {
        if ( (unsigned __int8)(v6 - 97) > 0x19u )
          v13 = (unsigned __int8)(v6 - 65) > 0x19u ? -1 : v6 - 55;
        else
          v13 = v6 - 87;
      }
      else
      {
        v13 = v6 - 48;
      }
      if ( v13 > v12 )
        break;
      v41 = 1;
      if ( v11 != (_BYTE *)(v10 + 776) )
        *v11++ = v13;
      ++v38;
      v14 = sub_470F48((int)a4);
      v10 = a5;
      v6 = v14;
      LOBYTE(v39) = v14;
    }
    v15 = 0;
    if ( v6 == ***(_BYTE ***)(*a3 + 136) )
    {
      v16 = sub_470F48((int)a4);
      v17 = a5;
      v18 = v16;
      LOBYTE(v39) = v16;
      if ( v11 == (_BYTE *)(a5 + 8) && v16 == 48 )
      {
        v19 = v38;
        v41 = 1;
        do
        {
          --v19;
          v18 = sub_470F48((int)a4);
          LOBYTE(v39) = v18;
        }
        while ( v18 == 48 );
        v17 = a5;
        v38 = v19;
      }
      v20 = v37;
      while ( 1 )
      {
        if ( (unsigned __int8)(v18 - 48) > 9u )
        {
          if ( (unsigned __int8)(v18 - 97) > 0x19u )
            v21 = (unsigned __int8)(v18 - 65) > 0x19u ? -1 : v18 - 55;
          else
            v21 = v18 - 87;
        }
        else
        {
          v21 = v18 - 48;
        }
        if ( v21 > v20 )
          break;
        v41 = 1;
        if ( v11 != (_BYTE *)(v17 + 776) )
          *v11++ = v21;
        v22 = sub_470F48((int)a4);
        v17 = a5;
        v18 = v22;
        LOBYTE(v39) = v22;
      }
      v15 = 0;
    }
    if ( !v41 )
    {
      if ( sub_46E635((int)v34) && v42 )
        return 2;
      return 7;
    }
    sub_4718A2(a4, v39);
    v35 = a4[4];
    v36 = a4[5];
    v23 = sub_470F48((int)a4);
    LOBYTE(v39) = v23;
    v24 = 0;
    if ( v23 != 69 )
    {
      if ( v23 == 80 )
        goto LABEL_60;
      if ( v23 != 101 )
      {
        if ( v23 != 112 )
        {
LABEL_62:
          if ( v24 )
          {
            v25 = sub_470F48((int)a4);
            v26 = v25;
            LOBYTE(v39) = v25;
            v40 = v25 == 45;
            if ( v25 == 43 || v25 == 45 )
            {
              v26 = sub_470F48((int)a4);
              LOBYTE(v39) = v26;
            }
            v41 = 0;
            if ( v26 == 48 )
            {
              v41 = 1;
              do
              {
                v26 = sub_470F48((int)a4);
                LOBYTE(v39) = v26;
              }
              while ( v26 == 48 );
            }
            while ( 1 )
            {
              if ( (unsigned __int8)(v26 - 48) > 9u )
              {
                if ( (unsigned __int8)(v26 - 97) > 0x19u )
                  v27 = (unsigned __int8)(v26 - 65) > 0x19u ? -1 : v26 - 55;
                else
                  v27 = v26 - 87;
              }
              else
              {
                v27 = v26 - 48;
              }
              if ( v27 >= 0xA )
                break;
              v41 = 1;
              v15 = v27 + 10 * v15;
              if ( v15 > 5200 )
              {
                v15 = 5201;
                break;
              }
              v26 = sub_470F48((int)a4);
              LOBYTE(v39) = v26;
            }
            while ( 1 )
            {
              if ( (unsigned __int8)(v26 - 48) > 9u )
              {
                if ( (unsigned __int8)(v26 - 97) > 0x19u )
                  v28 = (unsigned __int8)(v26 - 65) > 0x19u ? -1 : v26 - 55;
                else
                  v28 = v26 - 87;
              }
              else
              {
                v28 = v26 - 48;
              }
              if ( v28 >= 0xA )
                break;
              v26 = sub_470F48((int)a4);
              LOBYTE(v39) = v26;
            }
            if ( v40 )
              v15 = -v15;
            if ( !v41 )
            {
              if ( !sub_46E635((int)v34) )
                return 7;
              LOBYTE(v39) = sub_470F48((int)a4);
            }
          }
          sub_4718A2(a4, v39);
          v29 = (_BYTE *)(a5 + 8);
          if ( v11 == (_BYTE *)(a5 + 8) )
            return 2;
          do
          {
            if ( *(v11 - 1) )
              break;
            --v11;
          }
          while ( v11 != v29 );
          if ( v11 == v29 )
            return 2;
          if ( v15 <= 5200 )
          {
            if ( v15 < -5200 )
              return 8;
            v30 = v42;
            v31 = v38 * (v42 == 0 ? 1 : 4) + v15;
            if ( v31 <= 5200 )
            {
              if ( v31 >= -5200 )
              {
                *(_DWORD *)a5 = v31;
                *(_DWORD *)(a5 + 4) = v11 - v29;
                return v30;
              }
              return 8;
            }
          }
          return 9;
        }
LABEL_60:
        v24 = v42;
        goto LABEL_62;
      }
    }
    v24 = v42 ^ 1;
    goto LABEL_62;
  }
  return sub_46DA6C((char *)&v39, a4, v35, v36);
}
