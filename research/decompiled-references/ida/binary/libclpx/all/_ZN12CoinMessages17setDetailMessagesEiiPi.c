char __fastcall CoinMessages::setDetailMessages(CoinMessages *this, char a2, int a3, int *a4)
{
  __int64 v4; // rax
  int *v5; // r10
  int v6; // r8d
  _DWORD *v7; // rdx
  __int64 v8; // r9
  int v9; // r14d
  int *v12; // rbx
  __int64 v13; // rsi
  int *v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  _DWORD v18[10010]; // [rsp+0h] [rbp-9C68h] BYREF

  LOBYTE(v4) = a4 != nullptr;
  if ( a3 <= 2 && a4 )
  {
    if ( a3 > 0 )
    {
      v4 = (unsigned int)(a3 - 1);
      v5 = &a4[v4 + 1];
      do
      {
        while ( 1 )
        {
          v6 = *a4;
          if ( *(int *)this > 0 )
            break;
LABEL_10:
          if ( v5 == ++a4 )
            return v4;
        }
        v4 = *((_QWORD *)this + 3);
        v7 = *(_DWORD **)v4;
        if ( v6 != **(_DWORD **)v4 )
        {
          v4 += 8;
          v8 = v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1);
          while ( v4 != v8 )
          {
            v7 = *(_DWORD **)v4;
            v4 += 8;
            if ( v6 == *v7 )
              goto LABEL_28;
          }
          goto LABEL_10;
        }
LABEL_28:
        ++a4;
        *((_BYTE *)v7 + 4) = a2;
      }
      while ( v5 != a4 );
    }
  }
  else
  {
    v9 = *(_DWORD *)this;
    if ( a3 <= 9999 && a4 )
    {
      v12 = a4;
      LOBYTE(v4) = (unsigned __int8)memset(v18, 255, 0x9C40u);
      if ( v9 > 0 )
      {
        v13 = *((_QWORD *)this + 3);
        v4 = 0;
        do
        {
          v18[**(int **)(v13 + 8 * v4)] = v4;
          ++v4;
        }
        while ( (unsigned int)(v9 - 1) + 1LL != v4 );
      }
      if ( a3 > 0 )
      {
        v14 = v12;
        do
        {
          v4 = (int)v18[*v14];
          if ( (int)v4 >= 0 )
          {
            v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4);
            *(_BYTE *)(v4 + 4) = a2;
          }
          ++v14;
        }
        while ( &v12[a3 - 1 + 1] != v14 );
      }
    }
    else if ( v9 > 1 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        ++v16;
        v4 = *(_QWORD *)(*((_QWORD *)this + 3) + v15);
        v15 += 8;
        *(_BYTE *)(v4 + 4) = a2;
        LODWORD(v4) = *(_DWORD *)this - 1;
      }
      while ( (int)v4 > v16 );
    }
  }
  return v4;
}

