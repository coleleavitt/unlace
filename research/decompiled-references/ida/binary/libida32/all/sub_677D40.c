__int64 __fastcall sub_677D40(__int64 a1)
{
  __int64 result; // rax
  int v2; // esi
  __int64 v3; // rdx

  sub_677A40(*(_QWORD *)(*(_QWORD *)a1 + 1480LL));
  result = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(a1 + 8) = 2;
    if ( (_QWORD)xmmword_2CA24E8 )
    {
      v2 = 0;
      v3 = 0;
      while ( *((_OWORD *)dest + v3) - *(_OWORD *)(a1 + 12) != 0 )
      {
        v3 = ++v2;
        if ( v2 >= (unsigned __int64)xmmword_2CA24E8 )
          return 2;
      }
      *(_DWORD *)(a1 + 8) = 1;
      return 1;
    }
    else
    {
      return 2;
    }
  }
  return result;
}

