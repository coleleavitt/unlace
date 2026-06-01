_BYTE *__fastcall sub_F22ED0(__int64 *a1)
{
  __int64 v1; // rdx
  _BYTE *result; // rax

  v1 = *a1;
  result = nullptr;
  if ( *a1 )
  {
    if ( ((v1 >> 1) & 3) == 1 )
    {
      result = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*result & 7) != 3 )
        return nullptr;
    }
  }
  return result;
}
