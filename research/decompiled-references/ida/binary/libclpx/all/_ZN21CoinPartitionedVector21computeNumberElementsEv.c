void __fastcall CoinPartitionedVector::computeNumberElements(CoinPartitionedVector *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)this + 25);
  if ( v1 )
  {
    if ( v1 <= 0 )
    {
      v2 = 0;
    }
    else
    {
      v2 = *((_DWORD *)this + 17);
      if ( v1 != 1 )
      {
        v2 += *((_DWORD *)this + 18);
        if ( v1 != 2 )
        {
          v2 += *((_DWORD *)this + 19);
          if ( v1 != 3 )
          {
            v2 += *((_DWORD *)this + 20);
            if ( v1 != 4 )
            {
              v2 += *((_DWORD *)this + 21);
              if ( v1 != 5 )
              {
                v2 += *((_DWORD *)this + 22);
                if ( v1 != 6 )
                {
                  v2 += *((_DWORD *)this + 23);
                  if ( v1 != 7 )
                    v2 += *((_DWORD *)this + 24);
                }
              }
            }
          }
        }
      }
    }
    *((_DWORD *)this + 4) = v2;
  }
}

