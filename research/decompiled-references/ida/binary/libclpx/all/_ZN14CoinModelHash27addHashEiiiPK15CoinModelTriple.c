__int64 __fastcall CoinModelHash2::addHash(CoinModelHash2 *this, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r15d
  int v11; // edx
  __int64 v12; // rsi
  __int64 result; // rax
  int v14; // edi
  int *v15; // rcx
  __int64 v16; // rdx
  int *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // r8d
  int *v22; // rsi

  v5 = a2 + 1;
  v11 = *((_DWORD *)this + 3);
  if ( *((_DWORD *)this + 2) >= v11 || v11 <= v5 )
    CoinModelHash2::resize(this);
  LODWORD(result) = CoinModelHash2::hashValue(this, a3, a4);
  v12 = *(_QWORD *)this;
  result = (int)result;
  v14 = v5;
  if ( *((_DWORD *)this + 2) >= v5 )
    v14 = *((_DWORD *)this + 2);
  v15 = (int *)(v12 + 8LL * (int)result);
  v16 = *v15;
  *((_DWORD *)this + 2) = v14;
  if ( (int)v16 < 0 )
  {
    *v15 = a2;
  }
  else
  {
LABEL_6:
    v17 = (int *)(v12 + 8 * result);
    if ( a2 != (_DWORD)v16 )
    {
      while ( 1 )
      {
        if ( (int)v16 < 0 )
        {
          *v17 = a2;
          v16 = a2;
          goto LABEL_6;
        }
        v18 = (_DWORD *)(a5 + 16 * v16);
        if ( (*v18 & 0x7FFFFFFF) == a3 && v18[1] == a4 )
        {
          printf("** duplicate entry %d %d\n", a3, a4);
          abort();
        }
        result = v17[1];
        if ( (_DWORD)result == -1 )
          break;
        v16 = *(int *)(v12 + 8 * result);
        v17 = (int *)(v12 + 8 * result);
        if ( a2 == (_DWORD)v16 )
          return result;
      }
      v19 = *((int *)this + 4);
      LODWORD(result) = v19 + 1;
      v20 = v12 + 8 * v19 + 8;
      result = (int)result;
      do
      {
        v21 = result;
        if ( v14 < (int)result )
        {
          *((_DWORD *)this + 4) = result;
          puts("** too many entrys");
          abort();
        }
        v22 = (int *)v20;
        ++result;
        v20 += 8;
      }
      while ( *v22 >= 0 );
      *((_DWORD *)this + 4) = v21;
      v17[1] = v21;
      *v22 = a2;
      v22[1] = -1;
    }
  }
  return result;
}

