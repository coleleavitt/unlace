__int64 __fastcall CoinIndexedVector::cleanAndPackSafe(CoinIndexedVector *this, double a2)
{
  int v2; // ebp
  _QWORD *v4; // rax
  __int64 v5; // r10
  int v6; // esi
  char v7; // r11
  _QWORD *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  double *v11; // rcx
  double v12; // xmm1_8
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rdx
  _QWORD *v17; // rdi

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    *((_DWORD *)this + 4) = 0;
    if ( 3 * v2 < *((_DWORD *)this + 5) - 10000002 )
    {
      v5 = *(_QWORD *)this;
      v4 = (_QWORD *)(*(_QWORD *)this + 4LL * v2);
      if ( ((*(_BYTE *)this + 4 * (_BYTE)v2) & 7) != 0 )
        v4 = (_QWORD *)((char *)v4 - ((*(_BYTE *)this + 4 * (_BYTE)v2) & 7) + 8);
      if ( v2 <= 0 )
      {
        v2 = 0;
        goto LABEL_24;
      }
      v6 = 0;
      v7 = 0;
    }
    else
    {
      if ( (unsigned __int64)v2 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v4 = (_QWORD *)operator new[](8LL * v2);
      if ( v2 <= 0 )
      {
        v8 = *((_QWORD **)this + 1);
        v6 = *((_DWORD *)this + 4);
        if ( v4 != v8 )
        {
          v7 = 1;
          if ( v6 )
            goto LABEL_12;
        }
LABEL_31:
        operator delete[](v4);
        v2 = *((_DWORD *)this + 4);
LABEL_24:
        *((_BYTE *)this + 28) = 1;
        return (unsigned int)v2;
      }
      v5 = *(_QWORD *)this;
      v6 = *((_DWORD *)this + 4);
      v7 = 1;
    }
    v8 = *((_QWORD **)this + 1);
    v9 = 0;
    do
    {
      v10 = *(int *)(v5 + 4 * v9);
      v11 = (double *)&v8[v10];
      v12 = *v11;
      *v11 = 0.0;
      if ( fabs(v12) >= a2 )
      {
        *(double *)&v4[v6] = v12;
        *((_DWORD *)this + 4) = v6 + 1;
        *(_DWORD *)(v5 + 4LL * v6) = v10;
        v6 = *((_DWORD *)this + 4);
      }
      ++v9;
    }
    while ( v2 > (int)v9 );
    if ( v6 && v8 != v4 )
    {
LABEL_12:
      if ( v6 >> 3 <= 0 )
      {
        v17 = v4;
      }
      else
      {
        v13 = v4;
        v14 = v8;
        do
        {
          v15 = *v13;
          v14 += 8;
          v13 += 8;
          *(v14 - 8) = v15;
          *(v14 - 7) = *(v13 - 7);
          *(v14 - 6) = *(v13 - 6);
          *(v14 - 5) = *(v13 - 5);
          *(v14 - 4) = *(v13 - 4);
          *(v14 - 3) = *(v13 - 3);
          *(v14 - 2) = *(v13 - 2);
          *(v14 - 1) = *(v13 - 1);
        }
        while ( v14 != &v8[8 * (unsigned int)((v6 >> 3) - 1) + 8] );
        v16 = ((v6 >> 3) - 1 + 1LL) << 6;
        v17 = (_QWORD *)((char *)v4 + v16);
        v8 = (_QWORD *)((char *)v8 + v16);
      }
      switch ( v6 % 8 )
      {
        case 1:
          goto LABEL_23;
        case 2:
          goto LABEL_22;
        case 3:
          goto LABEL_21;
        case 4:
          goto LABEL_20;
        case 5:
          goto LABEL_19;
        case 6:
          goto LABEL_18;
        case 7:
          v8[6] = v17[6];
LABEL_18:
          v8[5] = v17[5];
LABEL_19:
          v8[4] = v17[4];
LABEL_20:
          v8[3] = v17[3];
LABEL_21:
          v8[2] = v17[2];
LABEL_22:
          v8[1] = v17[1];
LABEL_23:
          v2 = v6;
          *v8 = *v17;
          if ( !v7 )
            goto LABEL_24;
          goto LABEL_31;
        default:
          break;
      }
    }
    v2 = v6;
    if ( !v7 )
      goto LABEL_24;
    goto LABEL_31;
  }
  return (unsigned int)v2;
}

