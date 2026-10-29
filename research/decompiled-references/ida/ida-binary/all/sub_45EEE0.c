__int64 __fastcall sub_45EEE0(QT::QSplitter *a1, int a2, int a3, __int64 a4, double a5)
{
  __int64 result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return sub_2EE180(a1);
    }
    else
    {
      return sub_2EDA70((__int64)a1, **(unsigned int **)(a4 + 8), **(unsigned int **)(a4 + 16), a4, a5);
    }
  }
  return result;
}
