void __fastcall CoinArrayWithLength::getArray(CoinArrayWithLength *this, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rdx

  if ( a2 <= 0 )
  {
    *(_QWORD *)this = 0;
  }
  else
  {
    v2 = *((_DWORD *)this + 4);
    if ( v2 > 2 )
    {
      v4 = 1 << v2;
      v3 = a2 + (1 << v2);
    }
    else
    {
      v3 = a2;
      v4 = 0;
    }
    *((_DWORD *)this + 3) = v4;
    v5 = operator new[](v3);
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
    {
      LODWORD(v7) = v5 & (v6 - 1);
      if ( (_DWORD)v7 )
      {
        v7 = v6 - (int)v7;
        v5 += v7;
      }
      *((_DWORD *)this + 3) = v7;
      *(_QWORD *)this = v5;
    }
    else
    {
      *(_QWORD *)this = v5;
    }
    if ( *((_DWORD *)this + 2) != -1 )
      *((_DWORD *)this + 2) = a2;
  }
}

