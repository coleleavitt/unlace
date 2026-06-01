// Alternative name is '_ZN12CoinMessagesD1Ev'
void __fastcall CoinMessages::~CoinMessages(CoinMessages *this)
{
  _QWORD *v1; // rax
  int v2; // edx
  __int64 v3; // rbx
  void *v4; // rbp

  v1 = *((_QWORD **)this + 3);
  if ( *((int *)this + 5) < 0 )
  {
    v2 = *(_DWORD *)this;
    if ( *(int *)this > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = (void *)v1[v3];
          if ( !v4 )
            break;
          CoinOneMessage::~CoinOneMessage((CoinOneMessage *)v1[v3]);
          operator delete(v4);
          v2 = *(_DWORD *)this;
          ++v3;
          v1 = *((_QWORD **)this + 3);
          if ( *(_DWORD *)this <= (int)v3 )
          {
            if ( !v1 )
              return;
            goto LABEL_9;
          }
        }
        if ( (int)++v3 >= v2 )
        {
          if ( !v1 )
            return;
LABEL_9:
          operator delete[](v1);
          return;
        }
      }
    }
  }
  if ( v1 )
    operator delete[](*((void **)this + 3));
}

