void __fastcall CoinIndexedVector::expand(CoinIndexedVector *this)
{
  unsigned __int64 v2; // rdi
  void *v3; // rax
  int v4; // r9d
  _QWORD *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // xmm0_8
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  int *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi

  if ( *((_DWORD *)this + 4) && *((_BYTE *)this + 28) )
  {
    v2 = *((int *)this + 5);
    if ( v2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v3 = (void *)operator new[](8 * v2);
    v4 = *((_DWORD *)this + 4);
    if ( v4 <= 0 )
    {
      if ( !v4 )
      {
LABEL_23:
        operator delete[](v3);
        goto LABEL_24;
      }
      v5 = *((_QWORD **)this + 1);
    }
    else
    {
      v5 = *((_QWORD **)this + 1);
      v6 = *(_QWORD *)this;
      v7 = 0;
      do
      {
        v8 = *(int *)(v6 + 4 * v7);
        v9 = v5[v7++];
        *((_QWORD *)v3 + v8) = v9;
      }
      while ( (unsigned int)(v4 - 1) + 1LL != v7 );
    }
    if ( v4 / 8 <= 0 )
    {
      v11 = v5;
    }
    else
    {
      v10 = v5;
      do
      {
        *v10 = 0;
        v10[1] = 0;
        v10 += 8;
        *(v10 - 6) = 0;
        *(v10 - 5) = 0;
        *(v10 - 4) = 0;
        *(v10 - 3) = 0;
        *(v10 - 2) = 0;
        *(v10 - 1) = 0;
      }
      while ( v10 != &v5[8 * (unsigned int)(v4 / 8 - 1) + 8] );
      v11 = &v5[8 * (v4 / 8 - 1) + 8];
    }
    switch ( v4 % 8 )
    {
      case 1:
        goto LABEL_18;
      case 2:
        goto LABEL_17;
      case 3:
        goto LABEL_16;
      case 4:
        goto LABEL_15;
      case 5:
        goto LABEL_14;
      case 6:
        goto LABEL_13;
      case 7:
        v11[6] = 0;
LABEL_13:
        v11[5] = 0;
LABEL_14:
        v11[4] = 0;
LABEL_15:
        v11[3] = 0;
LABEL_16:
        v11[2] = 0;
LABEL_17:
        v11[1] = 0;
LABEL_18:
        *v11 = 0;
        break;
      default:
        break;
    }
    if ( v4 > 0 )
    {
      v12 = *(int **)this;
      v13 = *(_QWORD *)this + 4LL;
      v14 = v13 + 4LL * (unsigned int)(v4 - 1);
      while ( 1 )
      {
        v5[*v12] = *((_QWORD *)v3 + *v12);
        v12 = (int *)v13;
        if ( v14 == v13 )
          break;
        v13 += 4;
      }
    }
    goto LABEL_23;
  }
LABEL_24:
  *((_BYTE *)this + 28) = 0;
}

