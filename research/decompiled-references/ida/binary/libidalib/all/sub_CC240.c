__int64 sub_CC240()
{
  __int64 result; // rax

  result = TheTopView;
  if ( TheTopView )
  {
    if ( (*(_BYTE *)(TheTopView + 29LL) & 2) == 0 )
      return 0;
  }
  return result;
}

