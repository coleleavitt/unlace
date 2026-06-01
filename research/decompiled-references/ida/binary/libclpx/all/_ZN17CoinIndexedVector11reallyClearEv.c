void __fastcall CoinIndexedVector::reallyClear(CoinIndexedVector *this)
{
  int v1; // edx
  int v2; // eax
  _QWORD *v3; // rsi
  int v4; // eax
  __int64 v5; // r8
  _QWORD *v6; // rax
  int v7; // ecx
  _QWORD *v8; // r8

  v1 = *((_DWORD *)this + 5);
  if ( v1 )
  {
    v2 = v1 + 7;
    v3 = *((_QWORD **)this + 1);
    if ( v1 >= 0 )
      v2 = *((_DWORD *)this + 5);
    v4 = v2 >> 3;
    if ( v4 > 0 )
    {
      v5 = (unsigned int)(v4 - 1);
      v6 = *((_QWORD **)this + 1);
      v7 = v5;
      v8 = &v3[8 * v5 + 8];
      do
      {
        *v6 = 0;
        v6[1] = 0;
        v6 += 8;
        *(v6 - 6) = 0;
        *(v6 - 5) = 0;
        *(v6 - 4) = 0;
        *(v6 - 3) = 0;
        *(v6 - 2) = 0;
        *(v6 - 1) = 0;
      }
      while ( v6 != v8 );
      v3 += 8 * v7 + 8;
    }
    switch ( v1 % 8 )
    {
      case 1:
        goto LABEL_16;
      case 2:
        goto LABEL_15;
      case 3:
        goto LABEL_14;
      case 4:
        goto LABEL_13;
      case 5:
        goto LABEL_12;
      case 6:
        goto LABEL_11;
      case 7:
        v3[6] = 0;
LABEL_11:
        v3[5] = 0;
LABEL_12:
        v3[4] = 0;
LABEL_13:
        v3[3] = 0;
LABEL_14:
        v3[2] = 0;
LABEL_15:
        v3[1] = 0;
LABEL_16:
        *v3 = 0;
        *((_DWORD *)this + 4) = 0;
        *((_BYTE *)this + 28) = 0;
        break;
      default:
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 28) = 0;
  }
}

