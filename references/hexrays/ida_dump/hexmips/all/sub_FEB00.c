_DWORD *__fastcall sub_FEB00(_QWORD *a1)
{
  _QWORD *v1; // r11
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _DWORD *result; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r10
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8

  v1 = (_QWORD *)a1[4];
  v2 = 0;
  *a1 = off_4BDC20;
  v3 = 0;
  v4 = v1[1];
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)(v2 + *v1);
      v6 = (_QWORD *)*v5;
      if ( *v5 )
      {
        if ( v5[1] )
        {
          v7 = (_QWORD *)v6[1];
          if ( v6 != v7 )
            break;
        }
      }
LABEL_11:
      ++v3;
      v2 += 24;
      if ( v4 == v3 )
        goto LABEL_12;
    }
    while ( 1 )
    {
LABEL_5:
      if ( *((_DWORD *)v7 + 17) != -1 )
      {
        *((_DWORD *)v7 + 17) = -1;
        *((_BYTE *)v7 + 72) &= ~2u;
      }
      if ( (*v7 & 2) != 0 )
        goto LABEL_10;
      v8 = (_QWORD *)v7[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
      {
        v18 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v19 = *v18;
        if ( (*v18 & 2) == 0 )
        {
          while ( (_QWORD *)v18[2] == v7 )
          {
            v7 = v18;
            v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v19 & 2) != 0 )
            {
              v7 = (_QWORD *)v20;
              if ( *v5 != v20 )
                goto LABEL_5;
              goto LABEL_11;
            }
            v18 = (_QWORD *)v20;
          }
        }
        v7 = v18;
        if ( (_QWORD *)*v5 == v18 )
          goto LABEL_11;
      }
      else
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)v8[1];
        }
        while ( (*(_BYTE *)v8 & 2) == 0 );
LABEL_10:
        if ( (_QWORD *)*v5 == v7 )
          goto LABEL_11;
      }
    }
  }
LABEL_12:
  v9 = (_QWORD *)a1[5];
  v10 = v9[1];
  if ( v10 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = (_QWORD *)(v11 + *v9);
      v14 = (_QWORD *)*v13;
      if ( *v13 )
      {
        if ( v13[1] )
        {
          v15 = (_QWORD *)v14[1];
          if ( v14 != v15 )
            break;
        }
      }
LABEL_23:
      ++v12;
      v11 += 24;
      if ( v10 == v12 )
        goto LABEL_24;
    }
    while ( 1 )
    {
LABEL_17:
      if ( *((_DWORD *)v15 + 17) != -1 )
      {
        *((_DWORD *)v15 + 17) = -1;
        *((_BYTE *)v15 + 72) &= ~2u;
      }
      if ( (*v15 & 2) != 0 )
        goto LABEL_22;
      v16 = (_QWORD *)v15[2];
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
        v21 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
        v22 = *v21;
        if ( (*v21 & 2) == 0 )
        {
          while ( (_QWORD *)v21[2] == v15 )
          {
            v15 = v21;
            v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
            v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v22 & 2) != 0 )
            {
              v15 = (_QWORD *)v23;
              if ( *v13 != v23 )
                goto LABEL_17;
              goto LABEL_23;
            }
            v21 = (_QWORD *)v23;
          }
        }
        v15 = v21;
        if ( (_QWORD *)*v13 == v21 )
          goto LABEL_23;
      }
      else
      {
        do
        {
          v15 = v16;
          v16 = (_QWORD *)v16[1];
        }
        while ( (*(_BYTE *)v16 & 2) == 0 );
LABEL_22:
        if ( (_QWORD *)*v13 == v15 )
          goto LABEL_23;
      }
    }
  }
LABEL_24:
  result = (_DWORD *)a1[2];
  *result |= 0x200000u;
  return result;
}
