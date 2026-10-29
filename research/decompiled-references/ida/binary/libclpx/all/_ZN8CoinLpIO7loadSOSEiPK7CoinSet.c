void __fastcall CoinLpIO::loadSOS(CoinLpIO *this, int a2, const CoinSet *a3)
{
  int v5; // eax
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbp
  CoinSet *v10; // r13

  v5 = *((_DWORD *)this + 50);
  if ( v5 )
  {
    v6 = *((_QWORD **)this + 24);
    if ( v5 <= 0 )
    {
LABEL_6:
      if ( !v6 )
      {
LABEL_8:
        *((_QWORD *)this + 24) = 0;
        *((_DWORD *)this + 50) = 0;
        goto LABEL_9;
      }
    }
    else
    {
      v7 = 0;
      do
      {
        while ( 1 )
        {
          v8 = v6[v7];
          if ( !v8 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
          v5 = *((_DWORD *)this + 50);
          ++v7;
          v6 = *((_QWORD **)this + 24);
          if ( (int)v7 >= v5 )
            goto LABEL_6;
        }
        ++v7;
      }
      while ( (int)v7 < v5 );
      if ( !v6 )
        goto LABEL_8;
    }
    operator delete[](v6);
    goto LABEL_8;
  }
LABEL_9:
  if ( a2 )
  {
    *((_DWORD *)this + 50) = a2;
    if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v9 = 0;
    for ( *((_QWORD *)this + 24) = operator new[](8LL * a2); *((_DWORD *)this + 50) > (int)v9; ++v9 )
    {
      v10 = (CoinSet *)operator new(0x20u);
      CoinSet::CoinSet(v10, a3);
      a3 = (const CoinSet *)((char *)a3 + 32);
      *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v9) = v10;
    }
  }
}

