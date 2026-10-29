__int64 __fastcall CoinPackedVectorBase::findIndex(CoinPackedVectorBase *this, int a2)
{
  _DWORD *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rbx
  _DWORD *v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rdx

  v3 = (_DWORD *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
  v4 = 4LL * (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this);
  if ( v4 >> 4 <= 0 )
  {
    v8 = v3;
    v7 = v3;
LABEL_14:
    v9 = &v3[(unsigned __int64)v4 / 4] - v8;
    if ( v9 != 2 )
    {
      if ( v9 != 3 )
      {
        if ( v9 != 1 )
        {
          v5 = v4 >> 2;
          goto LABEL_18;
        }
        goto LABEL_29;
      }
      if ( a2 == *v7 )
      {
        v5 = v8 - v3;
        goto LABEL_18;
      }
      ++v7;
    }
    if ( a2 == *v7 )
    {
LABEL_30:
      v5 = v7 - v3;
      goto LABEL_18;
    }
    ++v7;
LABEL_29:
    v5 = v4 >> 2;
    if ( a2 != *v7 )
      goto LABEL_18;
    goto LABEL_30;
  }
  if ( a2 == *v3 )
  {
    LODWORD(v5) = 0;
  }
  else if ( a2 == v3[1] )
  {
    LODWORD(v5) = 1;
  }
  else
  {
    LODWORD(v5) = 2;
    if ( a2 != v3[2] )
    {
      v6 = v3;
      v7 = &v3[4 * (v4 >> 4)];
      if ( a2 == v3[3] )
      {
        LODWORD(v5) = 3;
      }
      else
      {
        while ( 1 )
        {
          if ( v7 == v6 + 4 )
          {
            v8 = &v3[4 * (v4 >> 4)];
            goto LABEL_14;
          }
          if ( a2 == v6[4] )
          {
            v5 = v6 + 4 - v3;
            goto LABEL_18;
          }
          if ( a2 == v6[5] )
          {
            v5 = v6 + 5 - v3;
            goto LABEL_18;
          }
          if ( a2 == v6[6] )
          {
            v5 = v6 + 6 - v3;
            goto LABEL_18;
          }
          if ( a2 == v6[7] )
            break;
          v6 += 4;
        }
        v5 = v6 + 7 - v3;
      }
    }
  }
LABEL_18:
  if ( (**(unsigned int (__fastcall ***)(CoinPackedVectorBase *))this)(this) == (_DWORD)v5 )
    LODWORD(v5) = -1;
  return (unsigned int)v5;
}

