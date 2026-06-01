void __fastcall CoinIndexedVector::clear(CoinIndexedVector *this)
{
  int v1; // edx
  int v2; // ecx
  __int64 v3; // rcx
  int *v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // ecx
  _QWORD *v14; // r8
  int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  _QWORD *v18; // rax
  int v19; // edx
  _QWORD *v20; // r8

  v1 = *((_DWORD *)this + 4);
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 5);
    if ( 3 * v1 >= v2 )
    {
      if ( v2 )
      {
        v15 = v2 + 7;
        v9 = *((_QWORD **)this + 1);
        if ( v2 >= 0 )
          v15 = *((_DWORD *)this + 5);
        v16 = v15 >> 3;
        if ( v16 > 0 )
        {
          v17 = (unsigned int)(v16 - 1);
          v18 = *((_QWORD **)this + 1);
          v19 = v17;
          v20 = &v9[8 * v17 + 8];
          do
          {
            *v18 = 0;
            v18[1] = 0;
            v18 += 8;
            *(v18 - 6) = 0;
            *(v18 - 5) = 0;
            *(v18 - 4) = 0;
            *(v18 - 3) = 0;
            *(v18 - 2) = 0;
            *(v18 - 1) = 0;
          }
          while ( v18 != v20 );
          v9 += 8 * v19 + 8;
        }
        switch ( v2 % 8 )
        {
          case 1:
            goto LABEL_31;
          case 2:
            goto LABEL_30;
          case 3:
            goto LABEL_29;
          case 4:
            goto LABEL_28;
          case 5:
            goto LABEL_27;
          case 6:
            goto LABEL_26;
          case 7:
            goto LABEL_25;
          default:
            goto LABEL_8;
        }
      }
    }
    else
    {
      if ( (v1 & 1) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * **(int **)this) = 0;
      if ( (v1 & 1) < v1 )
      {
        v3 = *((_QWORD *)this + 1);
        v4 = (int *)(*(_QWORD *)this + 4LL * (v1 & 1));
        v5 = *(_QWORD *)this + 4 * ((v1 & 1) + (unsigned __int64)((v1 - 1 - (v1 & 1)) & 0xFFFFFFFE)) + 8;
        do
        {
          v6 = v4[1];
          v7 = *v4;
          v4 += 2;
          *(_QWORD *)(v3 + 8 * v7) = 0;
          *(_QWORD *)(v3 + 8 * v6) = 0;
        }
        while ( (int *)v5 != v4 );
      }
    }
    goto LABEL_8;
  }
  if ( !v1 )
  {
LABEL_8:
    *((_DWORD *)this + 4) = 0;
    *((_BYTE *)this + 28) = 0;
    return;
  }
  v8 = v1 + 7;
  v9 = *((_QWORD **)this + 1);
  if ( v1 >= 0 )
    v8 = *((_DWORD *)this + 4);
  v10 = v8 >> 3;
  if ( v10 > 0 )
  {
    v11 = (unsigned int)(v10 - 1);
    v12 = *((_QWORD **)this + 1);
    v13 = v11;
    v14 = &v9[8 * v11 + 8];
    do
    {
      *v12 = 0;
      v12[1] = 0;
      v12 += 8;
      *(v12 - 6) = 0;
      *(v12 - 5) = 0;
      *(v12 - 4) = 0;
      *(v12 - 3) = 0;
      *(v12 - 2) = 0;
      *(v12 - 1) = 0;
    }
    while ( v14 != v12 );
    v9 += 8 * v13 + 8;
  }
  switch ( v1 % 8 )
  {
    case 1:
      goto LABEL_31;
    case 2:
      goto LABEL_30;
    case 3:
      goto LABEL_29;
    case 4:
      goto LABEL_28;
    case 5:
      goto LABEL_27;
    case 6:
      goto LABEL_26;
    case 7:
LABEL_25:
      v9[6] = 0;
LABEL_26:
      v9[5] = 0;
LABEL_27:
      v9[4] = 0;
LABEL_28:
      v9[3] = 0;
LABEL_29:
      v9[2] = 0;
LABEL_30:
      v9[1] = 0;
LABEL_31:
      *v9 = 0;
      *((_DWORD *)this + 4) = 0;
      *((_BYTE *)this + 28) = 0;
      break;
    default:
      goto LABEL_8;
  }
}

