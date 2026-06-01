__int64 __fastcall sub_10B100(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  void *v7; // rax
  __int64 result; // rax

  v7 = &loc_20000;
  if ( *(_DWORD *)(a1 + 30176) )
    LODWORD(v7) = *(_DWORD *)(a1 + 29944);
  if ( a5 || (unsigned int)v7 + a4 + 64 >= a3 )
  {
    if ( a4 > 0x10000 )
    {
      *(_DWORD *)(a1 + 30368) = 2;
      if ( a7 )
      {
        *(_QWORD *)(a1 + 30352) = a2 - a4 + a6 + 65504;
        result = a2 + a6 - 32;
        *(_QWORD *)(a1 + 30360) = result;
      }
      else
      {
        result = a2 + a6 - a4;
        *(_QWORD *)(a1 + 30352) = result;
        *(_QWORD *)(a1 + 30360) = a6 + a2;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 30368) = 0;
      *(_QWORD *)(a1 + 30352) = a1 + 30372;
      *(_QWORD *)(a1 + 30360) = a1 + 30372 + a4;
      return a1 + 30372;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 30368) = 1;
    result = a2 + (unsigned int)v7 + 32;
    *(_QWORD *)(a1 + 30352) = result;
    *(_QWORD *)(a1 + 30360) = result + a4;
  }
  return result;
}

