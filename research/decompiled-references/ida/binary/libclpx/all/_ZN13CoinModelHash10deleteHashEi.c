void __fastcall CoinModelHash::deleteHash(CoinModelHash *this, int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)this + 4) > a2 && *(_QWORD *)(*(_QWORD *)this + 8LL * a2) )
  {
    v2 = CoinModelHash::hashValue(this, *(const char **)(*(_QWORD *)this + 8LL * a2));
    if ( v2 >= 0 )
    {
      v3 = *((_QWORD *)this + 1);
      v4 = (_DWORD *)(v3 + 8LL * v2);
      if ( a2 == *v4 )
      {
LABEL_11:
        *v4 = -1;
      }
      else
      {
        while ( 1 )
        {
          v5 = (int)v4[1];
          if ( (int)v5 < 0 )
            break;
          v4 = (_DWORD *)(v3 + 8 * v5);
          if ( a2 == *v4 )
            goto LABEL_11;
        }
      }
    }
    free(*(void **)(*(_QWORD *)this + 8LL * a2));
    *(_QWORD *)(*(_QWORD *)this + 8LL * a2) = 0;
  }
}

