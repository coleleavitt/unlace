unsigned __int8 *__fastcall sub_845DE0(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int8 *v7; // rdi
  unsigned __int8 v8; // r8
  __int64 v9; // r9
  char v10; // r10
  unsigned __int8 v11; // al
  bool v12; // cc
  int v13; // r14d
  unsigned __int8 v14; // al
  unsigned __int8 v16; // al
  unsigned __int8 *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax

  v5 = a2;
  do
    v5 += (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 1), 8);
  while ( *v5 == 121 );
  v6 = (unsigned __int64)(v5 + 3);
  v7 = (unsigned __int8 *)sub_845640(a2);
  if ( (unsigned __int8)(v10 + 0x80) <= 3u )
  {
    a3 = nullptr;
  }
  else
  {
    if ( (unsigned __int8)(v10 + 124) <= 2u )
    {
      v11 = *v7;
      v12 = *v7 <= 0x93u;
      if ( *v7 == 0x93 )
        goto LABEL_37;
      goto LABEL_6;
    }
    if ( v10 == -115 || v10 == -110 )
    {
      v13 = 0;
      goto LABEL_11;
    }
  }
  v13 = 0;
  if ( *(_BYTE *)(v9 + (unsigned __int16)__ROL2__(*(_WORD *)(v9 + 1), 8)) == 121 )
  {
    v11 = *v7;
    v12 = *v7 <= 0x93u;
    if ( *v7 == 0x93 )
      goto LABEL_37;
LABEL_6:
    if ( !v12 )
    {
      if ( v11 != 0x94 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( v11 != 126 )
    {
      if ( v11 != 127 )
      {
LABEL_10:
        v13 = 1;
        a3 = &v7[a1[7] - a1[2]];
        goto LABEL_11;
      }
LABEL_9:
      v7 += 5;
      goto LABEL_10;
    }
LABEL_37:
    v7 += 3;
    goto LABEL_10;
  }
LABEL_11:
  if ( (unsigned __int64)v7 < v6 )
  {
    while ( 1 )
    {
      v14 = *v7;
      if ( (unsigned __int8)(*v7 + 0x80) <= 0x12u )
      {
        v7 = (unsigned __int8 *)sub_845DE0(a1, v7, a3);
      }
      else
      {
        if ( v14 == 121 )
        {
          if ( v13 )
          {
            v16 = v7[3];
            if ( v16 == 126 )
            {
              v7 += 6;
            }
            else
            {
              v17 = v7 + 3;
              v7 += 8;
              if ( v16 != 127 )
                v7 = v17;
            }
            a3 = &v7[a1[7] - a1[2]];
            goto LABEL_18;
          }
        }
        else if ( (unsigned __int8)(v14 + 95) <= 1u && a3 )
        {
          *a3 = 1;
        }
        v7 = (unsigned __int8 *)sub_845640(v7);
      }
LABEL_18:
      if ( (unsigned __int64)v7 >= v6 )
      {
        v8 = *v5;
        break;
      }
    }
  }
  if ( v8 == 122 && (v18 = a1[2], v19 = a1[3], *(_DWORD *)(v19 + 4LL * (_QWORD)&v5[-v18])) )
    return (unsigned __int8 *)(*(int *)(v19 + 4LL * (_QWORD)&v5[-v18 + 1]) + v6);
  else
    return v5 + 3;
}

