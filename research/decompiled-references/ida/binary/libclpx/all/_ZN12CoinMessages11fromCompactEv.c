void __fastcall CoinMessages::fromCompact(CoinMessages *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // r14
  char *v4; // rdi
  __int64 v5; // rbx
  int v6; // r12d
  CoinOneMessage *v7; // r13

  v2 = *(int *)this;
  if ( (_DWORD)v2 && *((int *)this + 5) >= 0 )
  {
    if ( v2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v3 = operator new[](8 * v2);
    if ( *(int *)this <= 0 )
    {
      v4 = *((char **)this + 3);
    }
    else
    {
      v4 = *((char **)this + 3);
      v5 = 0;
      v6 = 0;
      do
      {
        while ( *(_QWORD *)&v4[v5] )
        {
          v7 = (CoinOneMessage *)operator new(0x198u);
          CoinOneMessage::CoinOneMessage(v7, *(const CoinOneMessage **)(*((_QWORD *)this + 3) + v5));
          *(_QWORD *)(v3 + v5) = v7;
          ++v6;
          v5 += 8;
          v4 = *((char **)this + 3);
          if ( *(_DWORD *)this <= v6 )
            goto LABEL_9;
        }
        *(_QWORD *)(v3 + v5) = 0;
        ++v6;
        v5 += 8;
      }
      while ( *(_DWORD *)this > v6 );
    }
LABEL_9:
    if ( v4 )
      operator delete[](v4);
    *((_QWORD *)this + 3) = v3;
  }
  *((_DWORD *)this + 5) = -1;
}

