void __fastcall sub_100E60(_QWORD *a1)
{
  __int64 v1; // r11
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r10

  v1 = a1[1];
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(v2 + *a1);
      v5 = (_QWORD *)*v4;
      if ( *v4 )
      {
        if ( v4[1] )
        {
          v6 = (_QWORD *)v5[1];
          if ( v5 != v6 )
            break;
        }
      }
LABEL_11:
      ++v3;
      v2 += 24;
      if ( v1 == v3 )
        return;
    }
    while ( 1 )
    {
LABEL_5:
      if ( *((_DWORD *)v6 + 17) != -1 )
      {
        *((_DWORD *)v6 + 17) = -1;
        *((_BYTE *)v6 + 72) &= ~2u;
      }
      if ( (*v6 & 2) != 0 )
        goto LABEL_10;
      v7 = (_QWORD *)v6[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
        v8 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v9 = *v8;
        if ( (*v8 & 2) == 0 )
        {
          while ( v6 == (_QWORD *)v8[2] )
          {
            v6 = v8;
            v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
            v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v9 & 2) != 0 )
            {
              v6 = (_QWORD *)v10;
              if ( *v4 != v10 )
                goto LABEL_5;
              goto LABEL_11;
            }
            v8 = (_QWORD *)v10;
          }
        }
        v6 = v8;
        if ( (_QWORD *)*v4 == v8 )
          goto LABEL_11;
      }
      else
      {
        do
        {
          v6 = v7;
          v7 = (_QWORD *)v7[1];
        }
        while ( (*(_BYTE *)v7 & 2) == 0 );
LABEL_10:
        if ( (_QWORD *)*v4 == v6 )
          goto LABEL_11;
      }
    }
  }
}
