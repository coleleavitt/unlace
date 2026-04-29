char __fastcall sub_BC260(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 *v4; // r15
  char result; // al

  v4 = (unsigned __int8 *)(a3 + 32);
  if ( !sub_BBD90(a1, (unsigned __int8 *)(a2 + 32), (unsigned __int8 *)(a3 + 32))
    || (result = sub_BBD90(a1, (unsigned __int8 *)(a2 + 48), (unsigned __int8 *)(a3 + 48))) == 0 )
  {
    if ( a4 && sub_BBD90(a1, (unsigned __int8 *)(a2 + 32), (unsigned __int8 *)(a3 + 48)) )
      return sub_BBD90(a1, (unsigned __int8 *)(a2 + 48), v4);
    else
      return 0;
  }
  return result;
}
