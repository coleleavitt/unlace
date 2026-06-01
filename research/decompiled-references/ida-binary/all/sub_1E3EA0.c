QT::QWidget *sub_1E3EA0()
{
  QT::QWidget *result; // rax
  _QWORD *v1; // r12
  __int64 v2; // rbx

  result = (QT::QWidget *)dbg;
  if ( dbg )
  {
    v1 = *(_QWORD **)(dbg + 40LL);
    if ( *v1 )
    {
      v2 = 0;
      while ( 1 )
      {
        result = (QT::QWidget *)*((unsigned int *)result + 12);
        if ( _bittest((const int *)&result, v2) && (result = sub_1E3BF0(v2)) != nullptr )
        {
          ++v2;
          result = (QT::QWidget *)sub_2DE3A0(result, 4194308, 0);
          if ( !v1[v2] )
            return result;
        }
        else if ( !v1[++v2] )
        {
          return result;
        }
        result = (QT::QWidget *)dbg;
      }
    }
  }
  return result;
}
