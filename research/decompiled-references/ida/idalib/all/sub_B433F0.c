void __fastcall sub_B433F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 *a5, _BYTE *a6, __int64 a7)
{
  unsigned __int8 *v7; // r10
  unsigned __int8 v8; // al
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rcx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // rax
  __int64 v15; // rcx
  unsigned __int8 *v16; // r8
  __int64 i; // r11
  unsigned __int8 *v18; // r8
  unsigned __int8 *v19; // rax
  unsigned __int8 v20; // r8
  unsigned __int8 *v21; // rdx
  unsigned __int8 *v22; // rcx
  bool v23; // zf
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  int v26; // eax
  int v27; // edx

  v8 = *(_BYTE *)(a1 + 61);
  if ( v8 > 2u )
  {
    if ( v8 == 3 )
    {
      v22 = *(unsigned __int8 **)(a1 + 40);
      v9 = *(unsigned __int8 **)(a1 + 32);
      goto LABEL_46;
    }
    return;
  }
  if ( v8 )
  {
    v22 = *(unsigned __int8 **)(a1 + 40);
    v21 = v22;
    if ( v22 == *(unsigned __int8 **)(a1 + 48) )
    {
      if ( v8 != 2 )
      {
        v9 = *(unsigned __int8 **)(a1 + 32);
        goto LABEL_44;
      }
      goto LABEL_42;
    }
LABEL_69:
    sub_B41A40(a1, a2);
    return;
  }
  v9 = *(unsigned __int8 **)(a1 + 32);
  while ( 1 )
  {
    v10 = *(unsigned __int8 **)(a1 + 40);
    if ( v10 == v9 )
    {
      *(_QWORD *)a2 = (unsigned int)(*(_DWORD *)(a1 + 56) + (_DWORD)v9 - *(_DWORD *)(a1 + 24));
      *(_DWORD *)(a2 + 12) = 0;
      *(_QWORD *)(a1 + 40) = v9;
      return;
    }
    *(_QWORD *)(a1 + 40) = v10 + 1;
    v11 = v10[1];
    if ( v11 != 42 )
    {
      if ( v11 != 47 )
      {
        sub_B437B0(a1, a2, (_DWORD)v9, (_DWORD)v10, (_DWORD)a5, (_DWORD)a6, a7);
        return;
      }
      v7 = v10 + 2;
      *(_QWORD *)(a1 + 40) = v10 + 2;
      if ( v9 != v10 + 2 )
      {
        v12 = v10[2];
        if ( v12 != 47 && v12 != 33 )
        {
LABEL_10:
          if ( v12 == 60 )
            *(_QWORD *)(a1 + 40) = ++v7;
          v13 = *(_BYTE *)(a1 + 62);
          *(_BYTE *)(a1 + 61) = 1;
          if ( v13 )
          {
            if ( v13 <= 2u )
            {
LABEL_14:
              if ( v9 != v7 )
              {
                v14 = v7;
                a6 = byte_2411740;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v15 = *v14;
                      if ( (byte_2411740[2 * v15] & 2) != 0 )
                        break;
                      if ( v9 == ++v14 )
                        goto LABEL_68;
                    }
                    v16 = v14 - 1;
                    for ( i = *(v14 - 1); (byte_2411740[2 * i] & 5) != 0; i = *v16 )
                      --v16;
                    if ( (_BYTE)i != 92 && (v7 > v16 - 2 || (_BYTE)i != 47 || *(v16 - 1) != 63 || *(v16 - 2) != 63)
                      || v9 == v14 )
                    {
                      goto LABEL_68;
                    }
                    v18 = v14 + 1;
                    if ( (_BYTE)v15 != 10 )
                      break;
                    ++v14;
LABEL_65:
                    if ( v9 == v14 )
                      goto LABEL_66;
                  }
                  if ( v9 == v18 )
                    goto LABEL_67;
                  if ( v14[1] == 10 )
                  {
                    v14 += 2;
                    goto LABEL_65;
                  }
                  ++v14;
                }
              }
LABEL_66:
              v18 = v9;
              goto LABEL_67;
            }
            goto LABEL_57;
          }
          goto LABEL_75;
        }
        v7 = v10 + 3;
        *(_QWORD *)(a1 + 40) = v10 + 3;
        if ( v9 != v10 + 3 )
        {
          v12 = v10[3];
          goto LABEL_10;
        }
      }
LABEL_55:
      v13 = *(_BYTE *)(a1 + 62);
      *(_BYTE *)(a1 + 61) = 1;
      if ( v13 )
      {
        if ( v13 <= 2u )
        {
          v18 = v7;
LABEL_67:
          v14 = v18;
LABEL_68:
          v22 = *(unsigned __int8 **)(a1 + 40);
          *(_QWORD *)(a1 + 48) = v14;
          if ( v22 != v14 )
            goto LABEL_69;
          goto LABEL_44;
        }
LABEL_57:
        if ( v13 == 4 )
        {
          if ( v9 != v7 )
          {
            a6 = byte_2411740;
            if ( (byte_2411740[2 * *v7] & 5) != 0 )
            {
              do
                ++v7;
              while ( v9 != v7 && (byte_2411740[2 * *v7] & 5) != 0 );
            }
          }
          *(_QWORD *)(a1 + 40) = v7;
          goto LABEL_14;
        }
      }
LABEL_75:
      *(_BYTE *)(a1 + 62) = 0;
      goto LABEL_14;
    }
    v19 = v10 + 2;
    *(_QWORD *)(a1 + 40) = v10 + 2;
    v20 = v10[2];
    if ( v20 == 42 )
    {
      if ( v10[3] == 47 )
      {
LABEL_34:
        if ( v9 == v19 )
          goto LABEL_54;
        goto LABEL_35;
      }
    }
    else if ( v20 != 33 )
    {
      goto LABEL_34;
    }
    v19 = v10 + 3;
    *(_QWORD *)(a1 + 40) = v10 + 3;
    if ( v9 == v10 + 3 )
    {
LABEL_54:
      *(_WORD *)(a1 + 61) = 2;
      goto LABEL_55;
    }
LABEL_35:
    if ( *v19 == 60 )
      *(_QWORD *)(a1 + 40) = ++v19;
    *(_WORD *)(a1 + 61) = 2;
    while ( *v19 != 42 || v19[1] != 47 )
      ++v19;
    v21 = *(unsigned __int8 **)(a1 + 40);
    *(_QWORD *)(a1 + 48) = v19;
    if ( v21 != v19 )
      goto LABEL_69;
LABEL_42:
    v22 = v21 + 2;
    v23 = *(_BYTE *)(a1 + 62) == 4;
    *(_QWORD *)(a1 + 40) = v21 + 2;
    if ( !v23 )
    {
      v24 = v21 + 2;
LABEL_82:
      v27 = *(_DWORD *)(a1 + 56) + (_DWORD)v24 - *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)a2 = v27;
      *(_DWORD *)(a2 + 12) = 0;
      *(_QWORD *)(a1 + 40) = v24;
      *(_BYTE *)(a1 + 61) = 3;
      return;
    }
    v9 = *(unsigned __int8 **)(a1 + 32);
    v24 = v9;
    if ( v22 == v9 )
      goto LABEL_82;
LABEL_44:
    *(_BYTE *)(a1 + 61) = 3;
LABEL_46:
    a5 = v9;
    if ( v22 == v9 )
      goto LABEL_51;
    v25 = v22;
    if ( *v22 != 47 )
      break;
LABEL_70:
    if ( *(_BYTE *)(a1 + 62) != 4 || v9 == v25 )
    {
      a5 = v25;
      goto LABEL_51;
    }
    *(_BYTE *)(a1 + 61) = 0;
    *(_QWORD *)(a1 + 40) = v25;
  }
  while ( ++v25 != v9 )
  {
    if ( *v25 == 47 )
      goto LABEL_70;
  }
LABEL_51:
  v26 = *(_DWORD *)(a1 + 56) + (_DWORD)v22 - *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 4) = 1;
  *(_DWORD *)a2 = v26;
  *(_DWORD *)(a2 + 12) = (_DWORD)a5 - (_DWORD)v22;
  *(_QWORD *)(a1 + 40) = a5;
  *(_BYTE *)(a1 + 61) = 0;
}
