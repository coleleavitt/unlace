__int64 __chkstk_darwin()
{
  if ( ___chkstk_darwin )
    return ___chkstk_darwin();
  else
    return __chkstk_darwin_probe();
}
